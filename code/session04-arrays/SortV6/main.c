#include <stdio.h>
#include <stdlib.h>

// sắp xếp mảng các số nguyên, giảm dần
//IPO:
//I: mảng
//P: thuật toán nước lên thuyền lên
// phần hoán đổi thân xác, 2 biến đổi value cho nhau
//O:mảng đã sx

// tách hàm
// hàm hoán đổi 2 biến

//void swap(int a, int b); 


void swap(int* a, int* b);
// muốn xài thì đưa vào 2 địa chỉ &x &ỳ đưa cho tao
// trong hàm *a *n chính là x y ở xa xa kia

// hàm này nhận vào một size nào đó
// sau đó nó sắp xếp giảm dần, và in ra kết quả!!!!!!

void sortArray(int a[], int size);
//void sortArray(int* a, int size);

int main(int argc, char *argv[]) {
	
	int n[] = {5, 10, 15, 23, -43, 12};
	sortArray(n, 6);
	// x y
	
//	int x = 10, y = 102;
//	printf("Before swapping, x = %d; y = %d\n", x, y);
//	
//	swap(&x, &y);
//	
//	printf("After swapping, x = %d; y = %d", x, y);'

	
	return 0;
}

//  		&x       &y
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
	
}

void sortArray(int a[], int size) {
	// in mảng trước khi sort 
	int t;
	printf("The array before sorting\n");
	
	
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (a[i] < a[j]) 
				swap(&a[i], &a[j]);// a[i] và a[j] phải đổi value cho nhau
	printf("The array before sortring descending\n");
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
}

// hàm cần 1 mnargr, cần size để for, hàm 2 đầu vào
/*
void sortArray(int a[], int size) {
	// in mảng trước khi sort 
	int t;
	printf("The array before sorting\n");
	
	
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	printf("The array before sortring descending\n");
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
}
*/