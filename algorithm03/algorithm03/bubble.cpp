//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *fp;
//	int index=0;
//	int bae[1000] = { 0, };
//	int data;
//	int temp=0;
//
//	fp = fopen("rand1.txt", "r");
//
//	//�迭�� �޾ƿ�
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//
//	//�������� �տ������� �ΰ��� ���� ����
//	for (int i = 0; i < index-1; i++) {
//		for (int j = 0; j < index-1; j++) {
//			if (bae[j] > bae[j+1]) {
//				temp = bae[j];
//				bae[j] = bae[j + 1];
//				bae[j + 1] = temp;
//			}
//		}
//	}
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
