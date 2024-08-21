#include <stdio.h>
#include <stdlib.h>


//BÀ CON GIỮA MẢNG VÀ CON TRỎ
// MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ CÓ BÀ CON VỚI NHAU
// TRUYỀN THÁI Y, MẢNG/CON TRỎ LÀ ĐẦU VÀO CỦA HÀM
// lưu và in ra mảng 10 con số nguyên bất kì


int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, 15, 20,-25};
	// mảng là khai báo nhiều biến cùng lúc, cùng tên, cùng kiểu
	// ở sát nhau!!!
	
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value:%d\n", i, &a[i], a[i]);
		
	// các nahf int cách nhau 4, ước gì dùng con trỏ ++ -- leo qua
	//xem qua các value!!!
	
	int* hari = &a[0]; // tui trỏ vào đầu dãy được không, lưu danh bạn
						// số nhà của biến đầu mảng
	// in mảng coi
	
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *hari);
	printf("a[1] = %d\n", a[1]);
	hari++;
	printf("a[1] = %d\n", *hari);
	
	hari = &a[0]; // resetcon trỏ trỏ về đầu mảng
	
	for (int i = 0; i < 5; i++)            
		printf("%d ", *(hari + i));
		
	// hari vẫn chốt đầu mảng
	// lấy tọa độ đầu mảng
	
	// biến con trỏ + thì là có địa chỉ mới
	// vào địa chỉ mới *(của con trỏ + ) 
	// con trỏ vẫn chốt, mã vẫn duyệt được mảng!!!!!
	
	return 0;
}