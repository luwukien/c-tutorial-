#include <stdio.h>
#include <stdlib.h>

// nhập từ bàn phím mảng 10 số nguyên bất kì. Hỏi rằng con số 10 có xuất hiện trong mảng hay không?


int main() {
	
	int pos = -1; // pos = flag = -1 || 
	printf("Hello, input 10 positive integer numbers after we will scan number 10 which existed the list integer\n");
	
	// input array
	int arr[10];
	printf("Please input 10 positive integer numbers: ");
	for (int i = 0; i < 10; i++) {
	    printf("Your number #%d: ", (i + 1));
		scanf("%d", &arr[i]); // use for to input 10 variable
	}

	// scan array
	
	for (int i = 1; i <= 10; i++)
		if (arr[i] == 10) {
			pos = i;
			break;
		}
	if (pos == -1)
		printf("10 not found!!!!");
	else
		printf("10 found at position #%d", (pos + 1));	


}