#pragma warning(diable:4996)
#include<stdio.h>
#include<string.h>
int partition (int A[],int  p,int r);
void swap(int A[], int i, int j);
//void quickSort(int A[], int p, int r);
int main()
{
	int A[10] = { 8,7,5,3,6,2,10,4,5 };
	int start = 0;
	int last = 7;
	partition(A, start, last);

	for (int i = 0; i < 9; i++) {
		printf("%d\n", A[i]);
	}

	getchar(); getchar();
	return 0;
}

int partition(int A[],int p,int r)
{
	int x = A[r];
	int i, j = 0;
	i = p - 1;
	j = p;
	for (; j < r - 1; j++) {
		if (A[j] <= x) {
			i++;
			swap(A,i,j);
		}
		swap(A, i + 1, r);
	}
	return i + 1;
}

void swap(int A[], int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

//void quickSort(int A[], int p, int r) {
//	int q = 0;
//	if (p < r) {
//		q = partition(A, p, r);
//		quickSort(A, p, q - 1);
//		quickSort(A, q + 1, r);
//	}
//}