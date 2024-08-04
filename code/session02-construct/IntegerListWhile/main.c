#include <stdio.h>
#include <stdlib.h>

// viết app nho nhỏ in ra danh sách các số tự nhiên từ 1 -> 100 
//IPO
// I: đéo cần input
// P: done
// O: done
int main(int argc, char *argv[]) {
	
//	printf("This program will show the list of 100 first integer (FOR): \n");
	int count = 0;
//	for (int i = 1; i <= 100; i++)
//		printf("%d\t", i);
//	
//	printf("\n\nThis program will show the list of 100 first integer (WHILE): \n");
//	
//	for (;;)
//		{
//			
//			printf("%d ", count);
//			count++;
//			if (count == 101)
//				break;
//		}
//
//	printf("\n\nThis program will show the list of 100 first integer (DO - WHILE): \n");
//	count = 1; // vip, reset lại để có khởi đầu đúng
//	do
//	{
//
//		printf("%d ", count); //HIỆU ỨNG LỀ - TRÁI TIM BÊN LÊ
//							  //SIDE EFFECT, ta bị mất kiểm soát, vô tình
//							  //quên giá trị đang của count, mà đem đi dùng tiếp
//							  //KHI VÀO VÒNG LẶP MỚI
//		count++;
//
//		if (count == 101)
//			break;
//	} while ( 2 < 1);
	
	printf("\n\nThis program will show the list of 100 first integer (WHILE): \n");
	count = 1; // vip, reset lại để có khởi đầu đúng
	while (100 < 101)
	{

		printf("%d ", count); //HIỆU ỨNG LỀ - TRÁI TIM BÊN LÊ
							  //SIDE EFFECT, ta bị mất kiểm soát, vô tình
							  //quên giá trị đang của count, mà đem đi dùng tiếp
							  //KHI VÀO VÒNG LẶP MỚI
		count++;

		if (count == 101)
			break;
			
	} 
	
	

// SỰ KHÁC BIỆT CHÍNH YẾU NHẤT CỦA DO- WHILE VÀ WHILE LÀ: 
// Thằng do-while luôn chạy được ít nhất 1 nhát bên trong, chữ DO là cứ làm đi rồi xét sau
// Thằng while tệ nhất là không làm được nhát nào luôn

// điều kiện (còn đúng thì con lặp) phải có lúc nào đó được sai ++ đề cho () sai
// chơi kiểu vô tận()
	return 0;
}