//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 1000
//int sorted[MAX] = { 0, };
//
//void merge(int list[], int left, int mid, int right);
//void merge_sort(int list[], int left, int right);
//int main()
//{
//	FILE *fp;
//	int index=0;
//	int bae[MAX] = { 0, };
//	int data;
//
//	fp = fopen("rand1.txt", "r");
//
//	//�迭�� �޾ƿ�
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//
//	//�պ� ����
//	merge_sort(bae, 0, index - 1);
//
//
//	//��ü ���
//	for (int i = 0; i < index; i++) {
//		printf("%d \n", bae[i]);
//	}
//
//	fclose(fp);
//	getchar();
//	getchar();
//	return 0;
//}
//
//
//void merge(int list[], int left, int mid, int right) {
//	int i, j, k, l;
//	i = left;
//	j = mid + 1;
//	k = left;
//
//	/* ���� ���ĵ� list�� �պ� */
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//
//	// ���� �ִ� ������ �ϰ� ����
//	if (i>mid) {
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	}
//	// ���� �ִ� ������ �ϰ� ����
//	else {
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//	}
//
//	// �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
//	for (l = left; l <= right; l++) {
//		list[l] = sorted[l];
//	}
//}
//
//
//void merge_sort(int list[], int left, int right) {
//	int mid;
//
//	if (left<right) {
//		mid = (left + right) / 2; // �߰� ��ġ�� ����Ͽ� ����Ʈ�� �յ� ���� -����(Divide)
//			merge_sort(list, left, mid); // ���� �κ� ����Ʈ ���� -����(Conquer)
//		merge_sort(list, mid + 1, right); // ���� �κ� ����Ʈ ���� -����(Conquer)
//		merge(list, left, mid, right); // ���ĵ� 2���� �κ� �迭�� �պ��ϴ� ���� -����(Combine)
//	}
//}
