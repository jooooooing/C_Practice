#include <stdio.h>

int main()
{
	int A[l][m] = {
	{3,4,5},
	{5,6,7},
	{8,9,10}
	};
	int B[m][n] = {
	{3,4,5},
	{5,6,7},
	{8,9,10}		
	};
	
	int C[l][n];  // C = A * B
	int i, j, k;
	
	for (int i=1; i <=5, i++){
		for (int j=1; j <=5; j++){
			for (int k=1; k<=5; k ++){
			C[i][j] += A[i][k] * B[k][j]
			}
		}
	}
	
	for (i =0; i<3; i++){
		for(j=0; j <n; j++)
		printf("%d\n", C[i][j]);
		printf("\n")
	}

return 0;

}
