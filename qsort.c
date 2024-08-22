#include<stdio.h>
#include<stdlib.h> //qsort라이브러리를 부를 수 있는 헤더파일
int compare(const int* a, const int* b) { //비교 요소의 형식을 갖춘 매개변수
	return(*a - *b);//오름차순
}
int main() {
	int N[10] = { 21, 10, 41, 33, 25, 17, 68, 27, 14, 29 };
	qsort(N, 10, sizeof(int), compare); //배열 위치 주소, 요소의 개수, 요소의 크기, 기준 함수
	for (int i = 0; i < 10; i++) {
		printf("[%d]", N[i]);
	}
	return 0;
}
[출처] (C언어) qsort 함수로 숫자, 문자열 정렬하기|작성자 써밋