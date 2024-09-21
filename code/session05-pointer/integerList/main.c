#include <stdio.h>
#include <stdlib.h>

// hãy lưu mảng 5 con số nguyên 5 - 10 - 15 - 20

void printIntegerList();
// phiên bản oanh tạc tự do, xin vùng rram của ai khai phá, HEAP

// vùng HEAP gọi là vùng nhớ biến động - dynamic - vùng nhớ OBJECT của OOP

// vùng STACK windows quản lí cực kì chặt chẽ - dựa trên nguyên tắc
// LIFO - Last in first out
// hàm vừa chạy xong, hủy ngay các biến local

void printIntegerListHEAP();
void printIntegerListHEAP2();

int main(int argc, char *argv[]) {
	
	printIntegerListHEAP2();
	return 0;
}
void printIntegerListHEAP2() {
	int* p; 
	p = (int*)malloc(20);
	
	*p = 5;
	
	*(p + 1) = 10;
	*(p + 2) = 15;
	*(p + 3) = 20;
	*(p + 4) = 25;
	
		
	 // p[0] = 5 4 byte đầu  = 5 ON OFF
	
	// trong HEAP, lúc này xem như là mảng
	printf("The array has values of (HEAP)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
}


void printIntegerListHEAP() {
	int* p; //p là pointer, em là cái hộp, biến, 
			//em sẽ lưu giá trị địa chỉu
			// của thằng khác
			
			//		(int*)địa-chỉ-nào-đó (int*)6000000
			
			//p nằm trong STACK, khai báo biến trong hàm là nằm trong STACK
			// VẤN ĐỀ TAO MUỐN TRỎ VƯỢT STACK, LÊN HEAP
	//int tt = 5000;
	//p[ = &tt; /// trỏ quanh quẩn trong stack
	
//	p = (int*)malloc(số-byte-muốn-xin);
	// 				nên xin bội số của data type mà kiểu con trỏ đang trỏ
	/// hàm này trả về tọa độ của byte đầu tiên trong 20 byte đã xin
	
	p = (int*)malloc(20);
	
	p[0] = 1;
	p[1] = 2;
	p[2] = 5;
	p[3] = 26;
	p[4] = 29;
	// trong HEAP, lúc này xem như là mảng
	printf("The array has values of (HEAP)\n");
	for (int i = 0; i < 5; i++)
		printf("%d", p[i]);
}

void printIntegerList() {
	int a[] = {5, -10, -15, 20, 25}; // 5 biến  x 4 byte =  20 bytes
	// mảng tĩnh, mảng nằm ở trong hàm, mày sẽ nằm trong STACK
	
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));
	
	printf("\n");
}

