#include <stdio.h>

int main()
{
	
	int A[2][2] = {
	{3,4},
	{5,6}
	};
	
	int B[2][2] = {
	{1,5},
	{3,2}
	};
	
	int AB[2][2] = {0,};
	
	AB[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	AB[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	AB[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	AB[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
	
	printf("AB = \n");
	for (int index = 0; index <= 1; index++) {
		for (int index2 = 0; index2 <=1; index2++) {
			printf("%d ", AB[index][index2]);
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}
