#include <stdio.h>

int main ()
{
	int sum = 0;
	int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for (int i= 0; i < sizeof(numArr) / sizeof(int); i++)  // �迭�� ��� ������ŭ �ݺ� 
	{
		sum += numArr[i];  // �迭�� ����ִ� ��� �������� �հ� ���ϱ� 
				
	}
		
	printf ("�� �� : %d\n", sum);	
	
	return 0; 
}
