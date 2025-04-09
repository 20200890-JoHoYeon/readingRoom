// List<T> – 순서 있는 가변 길이 리스트
// 배열처럼 인덱스로 접근 가능
// 동적 추가/삭제 쉬움
// 중복 허용됨
List<string> names = new List<string>();
names.Add("Alice");
names.Add("Bob");
names.Add("Alice"); // 중복 OK
Console.WriteLine(names[1]); // Bob

// 추천 사용 상황: 일반적인 리스트 저장 시



// Dictionary<TKey, TValue> – 키/값 쌍
// Key는 유일해야 함
// 값은 중복 가능
// 순서 없음 (버전에 따라 순서 유지되기도 함)
Dictionary<string, int> ages = new Dictionary<string, int>();
ages["Alice"] = 25;
ages["Bob"] = 30;

Console.WriteLine(ages["Bob"]); // 30

// 추천 사용 상황: 특정 키로 빠르게 값을 찾고 싶을 때 (ex: 아이디 → 유저 정보)



// HashSet<T> – 중복 없는 집합
// 순서 없음
// 중복된 값 추가하면 무시됨
HashSet<string> tags = new HashSet<string>();
tags.Add("C#");
tags.Add("Java");
tags.Add("C#"); // 무시됨

Console.WriteLine(string.Join(", ", tags)); // "C#, Java" (순서는 구현에 따라 다를 수 있음)

// 추천 사용 상황: 중복 방지용 필터 (ex: 이미 본 항목 저장)



// Queue<T> – 선입선출 (FIFO)
// 먼저 들어온 게 먼저 나감
Queue<string> queue = new Queue<string>();
queue.Enqueue("첫 번째");
queue.Enqueue("두 번째");

Console.WriteLine(queue.Dequeue()); // "첫 번째"

// 추천 사용 상황: 순서대로 처리하는 작업 (ex: 인쇄 대기열, 메시지 큐)



// Stack<T> – 후입선출 (LIFO)
// 나중에 넣은 게 먼저 나감
Stack<string> stack = new Stack<string>();
stack.Push("첫 번째");
stack.Push("두 번째");

Console.WriteLine(stack.Pop()); // "두 번째"

// 추천 사용 상황: 되돌리기 기능, 괄호 짝 검사 등
