#include <stdio.h>
#include <stdlib.h>

// cho tao địa chỉ tao sẽ dọn nhà mày

//void  f(int x); // mỗi lần xài hàm, hãy đưa tui 1 value thường hoy
				// tui cần 5 10 15 20 hay đưa 1 biến int bình thường
				// TRUYỀN THAM TRỊ, CHỈ CẦN THẢY 1 VLAUE/ 1 GIÁ TRỊ LÀ OKE
				// GIÁ TRỊ THƯỜNG

void f(int* x); // mỗi lần xài hàm đừng đưa value 5 10 15 20, không cần 
				// TRUYỀN THAM CHIẾU, CHIẾU TỪ XA
				//TAO CẦN 1 TỌA ĐỘ, CHO TỌA ĐỘ NÀO ĐÓ, XA GẦN ÉO QUAN TÂM
				// ĐƯA TỌA ĐỘ ĐÂY, KHÔNG ĐƯA VALUE THƯỜNG
				// TAO CẦN ĐỊA CHỈ 1 BIẾN INT Ở ĐÂU ĐÓ, LÁT TAO DỌN NHÀ NÓ
				
// LOGIC, *X SẼ CHÍNH LÀ BẢN GỐC, BIẾN Ở XA XA NÀO ĐÓ
int main(int argc, char *argv[]) {
	
	int x = 10; // biến local 
	
	printf("In main, before calling f() x is %d\n", x);
	f(&x);
	// muốn thay đổi giá trị ở nơi gọi hàm thì cần đưa địa chỉ cho hàm
	// hàm sẽ thay đổi nơi gốc gọi hàm
	printf("In main, before calling f() x finally is %d\n", x);
	
	return 0;
}

void f(int* x) { // biến local khác 
	*x = *x * *x; // chết mẹ em!!!!
	
	//
}