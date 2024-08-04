#include <stdio.h>
#include <stdlib.h>

// vòng lặp vô cực
// in các số tự nhiên từ 1.. 100

int main(int argc, char *argv[]) {
	

	printf("The list of numbers from 1 to 100\n");
	int count = 1;
	for (;;) // không khởi đầu không kết thúc, không đếm gì cả// vip pro 
	{		 // đặt biến cần lưu ý chỗ đặt và cách đặt sao cho hợp lí

		printf("%d ",count);
		count++;
		if (count == 1001)
			break; // điều kiện thoát đặt trong for
	} 
	


	return 0;
}