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
//	//배열로 받아옴
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//
//	//합병 정렬
//	merge_sort(bae, 0, index - 1);
//
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
//
//
//void merge(int list[], int left, int mid, int right) {
//	int i, j, k, l;
//	i = left;
//	j = mid + 1;
//	k = left;
//
//	/* 분할 정렬된 list의 합병 */
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//
//	// 남아 있는 값들을 일괄 복사
//	if (i>mid) {
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	}
//	// 남아 있는 값들을 일괄 복사
//	else {
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//	}
//
//	// 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
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
//		mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
//			merge_sort(list, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
//		merge_sort(list, mid + 1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
//		merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
//	}
//}
