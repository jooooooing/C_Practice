#include <stdio.h>

int main()
	// �迭�� ����ִ� �� �����͸� ��� 2��� ����� ���� ����ϱ� // 
{
	int numArr [10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
	
	for (int index = 0; index < sizeof(numArr) / sizeof(int); index++){   			// �迭�� ��� ������ŭ �ݺ� // 
		numArr[index] *= 2;
	}
	
	for (int index = 0; index < sizeof(numArr) / sizeof(int); index++) {			// �迭�� ��� ������ŭ �ݺ� 
		printf("%d\n", numArr[index]);
	}
	
	return 0; 
}
