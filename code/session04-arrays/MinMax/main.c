#include <stdio.h>
#include <stdlib.h>

//Nhập 1 mảng 10 con số. In ra con số nhỏ nhất, lớn nhất của mảng 
//IPO
//I: cần có 10 con số, khai báo lẻ, hoặc khai báo sỉ
//O: Min: ?, Max: ? -> 2 biến
//P: -5    10   100    -50    -1000
//	  [0] [1]	[2] 	[3] 	[4]
//dùng biến cờ, nguyên tắc giả định, cho tới khi thấy nó sai thì điều chỉnh
//min = -5, max = -5
//quét/ nhìn qua cả cái mảng, [i] mày là mấy??


int main(int argc, char *argv[]) {
	
	int arr[10];
	int flagMin, flagMax;
	//Input array
	for (int i = 0; i < 10; i++) {
		printf("Input your number #%d: ", (i + 1));
		scanf("%d", &arr[i]);
		flagMin = arr[0];
		flagMax = arr[0];
	}
	//Compare 
	for (int i = 0; i < 10; i++)
	{
		if (flagMin > arr[i + 1])
			flagMin = arr[i + 1];
		if (flagMax < arr[i + 1])
			flagMax = arr[i + 1];
	}
	printf("The min of the list integer is: %d\n", flagMin);
	printf("The max of the list integer is: %d", flagMax);		
	return 0;

}





