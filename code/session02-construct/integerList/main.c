#include <stdio.h>
#include <stdlib.h>

// in ra các con số từ 1...100
//IPO: 
//I: đéo cần đầu vào cc gì cả
//P: lặp lại số lần i++
//O: in ra số từ 1...100

int main(int argc, char *argv[]) {
	printf("The list of integers from 1..100\n");
	for (int i = 100; i < 200; i++)
		printf("%d\t", (i-99)); // cần một trick để in ra 1; 2 ... 100 bỏ ";"??
		
	// dùng for .... ; -> do nothing, chết con mẹ m r
	// i: index -> nên dùng i vì trong giới lập trình thì dùng i - index
	// nên khai báo kiểu for (int i = ..) -> biến siêu local
	// nhớ câu "còn đúng thì còn tiếp tục" trong các câu lệnh do-while, for để xác định xem
	// nó có cần được chạy nữa hay không??
	
	return 0;
}