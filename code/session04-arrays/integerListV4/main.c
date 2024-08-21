#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con sso từ bàn phím. Kiểm tra xem số 10
// có xuất hiện trong mảng hay không
//IPO
//I: 10 biến
//P: lôi từng biến ra hỏi value == 10 hay không
//O: in ra có hay không


int main(int argc, char *argv[]) {
	int a[] = {1, 10, -1000, 100, 10, 70, 66, 6, 10, 99};
	int flag = 0; // giả bộ ban đầu 0 thấy 10 cho đến khi thấy em
				   // thì anh đổi trạng thái; biến sẽ giữ value cũ
				   // cho đến khi bị thay đổi
				   
	// nên nhớ, ta có 10 biến int đó hen
	// duyệt mảng, quét từ đầu tới cuối mảng
	int position; //lưu vị trí tìm thấy!!!
	
	for (int i = 0; i < 10; i++) 
		if (a[i] == 10) {
			flag = 1; 
			position = i;
//			break; // tìm vị trí xuất hiện cuối cùng
		}
	// kiêm tra cờ để in kết quả
	if (flag == 0)
		printf("10 not found !!!!");
	else
		printf("10 found at position of %d!!!!\n", (position + 1));
	return 0;
}