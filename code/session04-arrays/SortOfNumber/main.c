#include <stdio.h>
#include <stdlib.h>

// sắp xếp một dãy mười số nguyên trong mảng rồi in ra
// ở đây t sử dụng thuật toán bubble_sort

void bubbleSort(int arr[], int num);
void printArray(int arr[], int size);


int main(int argc, char *argv[]) {
	int arr[] = {1, 54, 12, 32, 444};
	int num;
	num = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, num);
	printf("After sort the list number: \n");
	printArray(arr, num);
	
	
	return 0;
}

void bubbleSort(int arr[], int num) {
	int temp;
	// vòng lặp ngoài sẽ chạy từ số đầu tiên với phần tử cuối cùng
	for (int i = 0; i < num - 1; i++)  
		for (int j = 0; j < num - i - 1; j++) 
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}	
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
}