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
//	int indexmin = 0;
//
//	//��������-���� ��������ã�Ƽ� ������� �ִ°�
//	for (int i = 0; i < index - 1; i++) {
//		indexmin = i;
//		for (int j = i + 1; j < index; j++) {
//			if (bae[j] < bae[indexmin])
//			{
//				indexmin = j;
//			}
//		}
//		temp = bae[indexmin];
//		bae[indexmin] = bae[i];
//		bae[i] = temp;
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
