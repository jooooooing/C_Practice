#include <stdio.h>

int main ()
{
	int sum = 0;
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for (int i= 0; i < sizeof(numArr) / sizeof(int); i++)  // 배열의 요소 개수만큼 반복 
	{
		sum += numArr[i];  // 배열에 들어있는 모든 데이터의 합계 구하기 
				
	}
		
	printf ("총 합 : %d\n", sum);	
	
	return 0; 
}
