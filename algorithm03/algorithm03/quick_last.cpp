//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )
//
//int partition(int list[], int left, int right);
//void quick_sort(int list[], int left, int right);
//int main()
//{
//	FILE *fp;
//	int index=0;
//	int bae[1000] = { 0, };
//	int data;
//	int key=0;
//	int j = 0;
//
//	fp = fopen("rand1.txt", "r");
//
//	//�迭�� �޾ƿ�
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//	//���� ����
//	quick_sort(bae, 0, index-1);
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
//void quick_sort(int list[], int left, int right) {
//
//	/* ������ ������ 2�� �̻��� �������̸�(����Ʈ�� ũ�Ⱑ 0�̳� 1�� �ƴϸ�) */
//	if (left < right) {
//		// partition �Լ��� ȣ���Ͽ� �ǹ��� �������� ����Ʈ�� ��յ� ���� -����(Divide)
//		int q = partition(list, left, right); // q: �ǹ��� ��ġ
//
//		// �ǹ��� ������ 2���� �κ� ����Ʈ�� ������� ��ȯ ȣ��
//		quick_sort(list, left, q - 1); // (left ~ �ǹ� �ٷ� ��) ���� �κ� ����Ʈ ���� -����(Conquer)
//		quick_sort(list, q + 1, right); // (�ǹ� �ٷ� �� ~ right) ���� �κ� ����Ʈ ���� -����(Conquer)
//	}
//}
//
//int partition(int list[], int left, int right) {
//	int pivot, temp;
//	int low, high;
//
//	low = left;
//	high = right + 1;
//	pivot = list[low]; // ������ ����Ʈ�� ���� ���� �����͸� �ǹ����� ����(������ ���� �ǹ����� ����)
//
//						/* low�� high�� ������ ������ �ݺ�(low<high) */
//	do {
//		/* list[low]�� �ǹ����� ������ ��� low�� ���� */
//		do {
//			low++; // low�� left+1 ���� ����
//		} while (low <= right && list[low]<pivot);
//
//		/* list[high]�� �ǹ����� ũ�� ��� high�� ���� */
//		do {
//			high--; //high�� right ���� ����
//		} while (high >= left && list[high]>pivot);
//
//		// ���� low�� high�� �������� �ʾ����� list[low]�� list[high] ��ȯ
//		if (low<high) {
//			SWAP(list[low], list[high], temp);
//		}
//	} while (low<high);
//
//	// low�� high�� ���������� �ݺ����� �������� list[left]�� list[high]�� ��ȯ
//	SWAP(list[left], list[high], temp);
//
//	// �ǹ��� ��ġ�� high�� ��ȯ
//	return high;
//}