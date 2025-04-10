using System;
using System.Globalization;
using System.IO;
using System.Net.Http;
using System.Threading.Tasks;
using CsvHelper;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static async Task Main()
    {
        string url = "https://raw.githubusercontent.com/20200890-JoHoYeon/readingRoom/master/C%23/source/sample.csv";
        string fileName = Path.GetFileNameWithoutExtension(url);

        using HttpClient client = new HttpClient();

        try
        {
            var csvData = await client.GetStringAsync(url);
            using var reader = new StringReader(csvData);
            using var csv = new CsvReader(reader, CultureInfo.InvariantCulture);

            var records = csv.GetRecords<dynamic>()
                 .Select(r => (IDictionary<string, object>)r)
                 .ToList();


            if (records.Count == 0)
            {
                Console.WriteLine("CSV 파일에 데이터가 없습니다.");
                return;
            }

            var headers = ((IDictionary<string, object>)records[0]).Keys.ToList();

            Dictionary<string, int> columnWidths = new Dictionary<string, int>();
            foreach (var header in headers)
            {
                int maxWidth = header.Length;
                foreach (IDictionary<string, object> record in records)
                {
                    record.TryGetValue(header, out object? value);
                    int length = value?.ToString()?.Length ?? 0;
                    if (length > maxWidth) maxWidth = length;
                }
                columnWidths[header] = maxWidth;
            }

            void PrintTable(IEnumerable<IDictionary<string, object>> rows)
            {
                Console.WriteLine($"\nTitle: {fileName}\n");

                // Header
                foreach (var header in headers)
                {
                    Console.Write($"| {header.PadRight(columnWidths[header])} ");
                }
                Console.WriteLine("|");

                // Separator
                foreach (var header in headers)
                {
                    Console.Write($"| {new string('-', columnWidths[header])} ");
                }
                Console.WriteLine("|");

                // Rows
                foreach (var row in rows)
                {
                    foreach (var header in headers)
                    {
                        row.TryGetValue(header, out object? value);
                        string strVal = value?.ToString() ?? "";
                        Console.Write($"| {strVal.PadRight(columnWidths[header])} ");
                    }
                    Console.WriteLine("|");
                }
            }

            PrintTable(records);

            while (true)
            {
                Console.WriteLine("\n메뉴를 선택하세요:");
                Console.WriteLine("1. 이름으로 검색");
                Console.WriteLine("2. 다시 보기");
                Console.WriteLine("3. 종료");
                Console.Write("선택 > ");
                string? input = Console.ReadLine();

                if (input == "1")
                {
                    Console.Write("검색할 이름 입력 > ");
                    string? name = Console.ReadLine();

                    if (string.IsNullOrWhiteSpace(name))
                    {
                        Console.WriteLine("입력이 올바르지 않습니다.");
                        continue;
                    }

                    var matched = records
                        .Where(r =>
                            r.TryGetValue("Name", out object? value) &&
                            value?.ToString()?.Equals(name, StringComparison.OrdinalIgnoreCase) == true)
                        .ToList();

                    if (matched.Count == 0)
                    {
                        Console.WriteLine($"'{name}'이라는 이름을 찾을 수 없습니다.");
                    }
                    else
                    {
                        PrintTable(matched);
                    }
                }
                else if (input == "2")
                {
                    PrintTable(records);
                }
                else if (input == "3")
                {
                    Console.WriteLine("프로그램을 종료합니다.");
                    break;
                }
                else
                {
                    Console.WriteLine("올바른 메뉴 번호를 입력해주세요.");
                }
            }
        }
        catch (Exception ex)
        {
            Console.WriteLine($"오류 발생: {ex.Message}");
        }
    }
}
