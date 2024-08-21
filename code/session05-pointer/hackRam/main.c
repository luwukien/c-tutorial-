#include <stdio.h>
#include <stdlib.h>

// chuẩn bị đến lễ tình nhân || 8.3, tặng phiếu mua hàng 
// liệu rằng anh ấy có tặng phiếu mua hàng hay không??
//$??



int main(int argc, char *argv[]) {
	
	int gift = 16164; // trong ram lưu con số 4 byte
						// 2 byte dưới on - off thành con số 36 63
						
	int* hari = &gift;
	char* hack = &gift; // thằng char này nó chỉ nhìn 1 byte trng 4 byte thôi
	
	// hỏi Hari em đang lưu địa chỉ gì??
	printf("Gift addr = %u\n", hari); // địa chỉ nè : 6m8
	
	// hỏi rằng đang trỏ đến vùng giá trị cụ thể nào??
	
	printf("Gift = %d\n", *hari);
	printf("Hack = %c\n", *hack);
	
	
	hack++;
	printf("Finally char of hack = %c\n", *hack);
	printf("73 addr %u\n", hack);
	return 0;
}