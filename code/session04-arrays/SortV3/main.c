#include <stdio.h>
#include <stdlib.h>

// cho mười phần tử mảng cho người dùng nhập vào, hãy sắp xếp các phần tử trong mảng

void bubbleSort(int arr[], int length);

int main() {

	int arr[] = {99, -129, 3232, 4334, -1100};
	int size;
	size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);

}

void bubbleSort(int arr[], int size) {
	int temp;
	
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++) 
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;	
			}
	for (int i = 0; i < size; i++)	
		printf("%d ", arr[i]);
}
