#include <stdio.h>
#include <stdlib.h>


//BÀ CON GIỮA MẢNG VÀ CON TRỎ
// MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ CÓ BÀ CON VỚI NHAU
// TRUYỀN THÁI Y, MẢNG/CON TRỎ LÀ ĐẦU VÀO CỦA HÀM
// lưu và in ra mảng 10 con số nguyên bất kì


int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, 15, 20,-25};
	// tên mảng là biến má mì, biến má mì, lưu số nhà của biến đàu tiền trong mảng
	// value của biến tên mảng là số nhà
	// hari lưu số nhà, tọa độ vó
	// tên mảng lưu số nhà thằng A[0] đầu dãy
	// tên mảng là con trỏ rồi, hỏi nó có gì, giống hari có gì
	//em có địa chỉ
	
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value:%d\n", i, &a[i], a[i]);
		
	printf("A has value of %u\n", a); // mày là một biến
	
	// tên mảng là con trỏ int*
	// A sánh ngang với hari
	// đều là int*
	// mà hỗi nãy minh đi qua mảng là hari
	// giờ này mình đi qua mảng = a kiểu con trỏ
	
	//in mảng
	printf("The array has values: \n"); // in kiểu bình thườn
	for (int i = 0; i < 5; i++)			// dùng biến a[i] bình thường
		printf("a[%d] = %d\n", i, a[i]);
		
	// biết thừa a là tên mảng,lại là biến co	n trỏ, nắm đầu thằng
	// &a[0] như biến *hari	
	
	for (int i = 0; i < 5; i++) // dùng biến a[i] như bình thường
		printf("a[%d] = %d\n", i, *(a + i));
		
	// vẫn giữ chốt a trỏ đầu dãy, +i để odiwf nhà, lấu địa chỉ mới
	// *(a + i) để lấy value vùng trỏ, mà không mất chốt!!!!
	
	// tuy nhiên hãy nhớ int* hari là con trỏ tường mình, tức là nó được trỏ thoải mái luôn
	// a tên mảng được gọi là con trỏ ngầm/ không tường mình/ con trỏ hằng
	// là con trỏ, nhưng cấm bị đi lung tung, việc nó là phải chốt đầu mảng, không cho ++ -- 
	// nhưng được quyền dùng nó + và - để tăng tọa độ!!!
	// không được rời vị trí, CHỈ VÀ LUÔN PHẢI TRỎ THẰNG A[0]
	// biến con trỏ mà mì, quản lí đám chân dài ngắn a[i]
	
	// tên mảng đứng một mình là int* hari
	// tại sao tên mảng người ta kí hiệu luôn là con trỏ
	
	// int* f(int a[]) ~~~ int f(int* a)
	return 0;
}