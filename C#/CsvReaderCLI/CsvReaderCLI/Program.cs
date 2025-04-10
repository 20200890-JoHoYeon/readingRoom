using System;
using System.Formats.Asn1;
using System.Globalization;
using System.IO;
using System.Net.Http;
using System.Threading.Tasks;
using CsvHelper;


class Program
{
    static async Task Main()
    {
        string url = "https://raw.githubusercontent.com/20200890-JoHoYeon/readingRoom/master/C%23/source/sample.csv";

        using HttpClient client = new HttpClient();

        try
        {
            var csvData = await client.GetStringAsync(url);
            using var reader = new StringReader(csvData);
            using var csv = new CsvReader(reader, CultureInfo.InvariantCulture);

            var records = csv.GetRecords<dynamic>();

            foreach (var record in records)
            {
                foreach (var kv in record)
                {
                    Console.Write($"{kv.Key}: {kv.Value}  ");
                }
                Console.WriteLine();
            }
        }
        catch (Exception ex)
        {
            Console.WriteLine($"오류 발생: {ex.Message}");
        }
    }
}
