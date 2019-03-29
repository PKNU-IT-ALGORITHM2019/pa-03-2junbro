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
//	//배열로 받아옴
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//
//	//버블정렬 앞에서부터 두개씩 비교해 스왑
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
//	//전체 출력
//	for (int i = 0; i < index; i++) {
//		printf("%d \n", bae[i]);
//	}
//
//	fclose(fp);
//	getchar();
//	getchar();
//	return 0;
//}
