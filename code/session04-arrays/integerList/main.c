#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con sso từ bàn phím. Kiểm tra xem số 10
// có xuất hiện trong mảng hay không
//IPO
//I: 10 biến
//P: lôi từng biến ra hỏi value == 10 hay không
//O: in ra có hay không


int main(int argc, char *argv[]) {
	int a[] = {10, 6, -1000, 100, 50, 70, 66, 6, 10, 99};
	// nên nhớ, ta có 10 biến int đó hen
	// duyệt mảng, quét từ đầu tới cuối mảng
	
	for (int i = 0; i < 10; i++) {
		if (a[i] == 10)
			printf("Hey, found 10 at position of %d\n", i);
		else
			printf("Not, 10 found at the array\n");
		
	}
	return 0;
}