//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
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
//	//배열로 받아옴
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//
//	//삽입 정렬
//	for (int i = 1; i < index; i++) {
//		key = bae[i];
//		for (j = i - 1; j >= 0 && bae[j] > key; j--) {
//			bae[j + 1] = bae[j];
//		}
//		bae[j+1] = key;
//	}
//
//	//전체 출력
//	for (int i = 0; i < index; i++) {
//		//printf("%d \n", bae[i]);
//	}
//
//	fclose(fp);
//	getchar();
//	getchar();
//	return 0;
//}
