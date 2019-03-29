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
//	//배열로 받아옴
//	while (fscanf(fp, "%d", &data) != EOF) {
//		bae[index] = data;
//		index++;
//	}
//	//삽입 정렬
//	quick_sort(bae, 0, index-1);
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
//void quick_sort(int list[], int left, int right) {
//
//	/* 정렬할 범위가 2개 이상의 데이터이면(리스트의 크기가 0이나 1이 아니면) */
//	if (left < right) {
//		// partition 함수를 호출하여 피벗을 기준으로 리스트를 비균등 분할 -분할(Divide)
//		int q = partition(list, left, right); // q: 피벗의 위치
//
//		// 피벗은 제외한 2개의 부분 리스트를 대상으로 순환 호출
//		quick_sort(list, left, q - 1); // (left ~ 피벗 바로 앞) 앞쪽 부분 리스트 정렬 -정복(Conquer)
//		quick_sort(list, q + 1, right); // (피벗 바로 뒤 ~ right) 뒤쪽 부분 리스트 정렬 -정복(Conquer)
//	}
//}
//
//int partition(int list[], int left, int right) {
//	int pivot, temp;
//	int low, high;
//
//	low = left;
//	high = right + 1;
//	pivot = list[low]; // 정렬할 리스트의 가장 왼쪽 데이터를 피벗으로 선택(임의의 값을 피벗으로 선택)
//
//						/* low와 high가 교차할 때까지 반복(low<high) */
//	do {
//		/* list[low]가 피벗보다 작으면 계속 low를 증가 */
//		do {
//			low++; // low는 left+1 에서 시작
//		} while (low <= right && list[low]<pivot);
//
//		/* list[high]가 피벗보다 크면 계속 high를 감소 */
//		do {
//			high--; //high는 right 에서 시작
//		} while (high >= left && list[high]>pivot);
//
//		// 만약 low와 high가 교차하지 않았으면 list[low]를 list[high] 교환
//		if (low<high) {
//			SWAP(list[low], list[high], temp);
//		}
//	} while (low<high);
//
//	// low와 high가 교차했으면 반복문을 빠져나와 list[left]와 list[high]를 교환
//	SWAP(list[left], list[high], temp);
//
//	// 피벗의 위치인 high를 반환
//	return high;
//}