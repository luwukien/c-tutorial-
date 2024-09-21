#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char s1[50] = "Ahihi";
	char s2[50] = "ahihi";
	
	// hỏi xem s1 có lớn hơn s2 không
	// thuật toán so sánh hai chuỗi:
	// so từng kí tự tương ướng của 2 chuỗi. so sánh từ trái sang phải
	// thấy khác biệt dừng ngay để kết luận. Chuỗi dài hơn chua chắc đã lớn hơn
	// lưu ý có phân biệt hoa thường hay không? ignore case
	// CẤM TUYỆT ĐỐI DÙNG == > >= < <= != CỦA CÁC BIẾN ĐƠN ĐEM SO SÁNH/ GÁN MẢNG
	// MÀ PHẢI XÀI QUA HÀM 
	
	int r = strcmp(s1, s2); 
	printf("s1 vs. s2: %d\n", r);
	if (strcmp(s1, s2) > 0)
		printf("%s > %s\n", s1, s2);
	else
		printf("s1 larger s2\n");
		
	// s1 = giá trị mới, s2 = giá trị mới 
	
	strcpy(s1, "Ahihi");
//	s2 = "Ahihi"; đây là tên mảng, cũng là con trỏ, nên nó cần một địa chỉ mà 
	
	strcpy(s1, "AHIHI");
	strcpy(s2, "ahihi"); // dĩ nhiên 2 thằng không bằng nhau rồi nếu phân biệt hoa thường
	
	r = stricmp(s1, s2);
	printf("s1 vs s2: %d\n", r);
	
	
	
	return 0;
}