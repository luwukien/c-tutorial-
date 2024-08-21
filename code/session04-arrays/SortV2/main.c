#include <stdio.h>
#include <stdlib.h>

//Cho mảng 10 phần tử, 10 biến có value, tìm con số nhỏ nhất trong mảng, đưa nó lên đầu mảng

int main(int argc, char *argv[]) {
	
	int arr[] = {12, 13, 8, 2, 9, 4, -1000, 5, 1, 99};
	//			 [0] 
	//  			 [1] có nhỏ hơn hay không, có đổi đi
	
	int arr[0], temp, length; // mặc định nhỏ nhất là thằng đầu tiên luôn 
	
	length =  sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
		if (minNum > arr[i]) {
			temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}

	printf("After swapping, the array now is: \n");
	for (int i = 0; i < length; i++)
		printf("%d\t", arr[i]);

	return 0;
}


