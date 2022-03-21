#include <stdio.h>

int main()
	// 배열에 들어있는 각 데이터를 모두 2배로 만들어 놓고 출력하기 // 
{
	int numArr [10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for (int index = 0; index < sizeof(numArr) / sizeof(int); index++){   			// 배열의 요소 개수만큼 반복 // 
		numArr[index] *= 2;
	}
	
	for (int index = 0; index < sizeof(numArr) / sizeof(int); index++) {			// 배열의 요소 개수만큼 반복 
		printf("%d\n", numArr[index]);
	}
	
	return 0; 
}
