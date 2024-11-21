#include <iostream>
#include <array>		// C++ std::Array 사용
#include <vector>		// C++ std::vector 사용

using namespace std;

// 동적 메모리 할당 예제
int main()
{
	// 동적 메모리 할당
	int* ptr = new int[3] {};
	ptr[0] = 10;
	ptr[1] = 20;
	//ptr[2] = 30;

	for (int i = 0; i < 3; i++)
	{
		cout << ptr[i] << endl;
	}

	// 동적 메모리 해제
	delete[] ptr;
	ptr = nullptr;
}

//// C++ 언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	// C#은 제네릭이라고 하지만 C++은 템플릿이라고 함
//	// 배열 선언
//	// STL 컨테이너 vector 사용 배열 선언
//	vector<int> scores = { 50, 60, 70, 80, 90 };
//	int length = scores.size();
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	// 평균
//	float avg = sum / length;
//
//	// 출력
//	cout << "Average: " << avg << endl;
//}

//int main()
// {
	//// C#은 제네릭이라고 하지만 C++은 템플릿이라고 함
	//// STL 컨테이너 Array 사용 배열 선언 
	//array<int, 5> scores = { 50, 60, 70, 80, 90 };


	//// 합계 구하기
	//int sum = 0;
	//for (int i = 0; i < scores.size(); i++)
	//{
	//	sum += scores[i];
	//}

	//// 평균
	//float avg = sum / scores.size();

	//// 출력
	//cout << "Average: " << avg << endl;
//}

//// C 언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	// 배열 선언
//	//int scores[5] = { 50, 60, 70, 80, 90 };
//	//int length = sizeof(scores) / sizeof(scores[0]);
//
//	//기본 std 사용하여 배열 선언
//	//int scores[5] = { 50, 60, 70, 80, 90 };
//	//int length = size(scores);
//
//	
//	// 합계 구하기
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	// 평균
//	float avg = (float)sum / length;
//
//	//출력
//	cout << "Average Score: " << avg << endl;
//}

//int main()
//{
//    std::cout << "Hello Array!\n";
//}
