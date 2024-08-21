#include <stdio.h>
#include <stdlib.h>

// Nhập 1 mảng 10 con sso từ bàn phím. Kiểm tra xem số 10
// có xuất hiện trong mảng hay không
//IPO
//I: 10 biến
//P: lôi từng biến ra hỏi value == 10 hay không
//O: in ra có hay không


int main(int argc, char *argv[]) {
	int a[] = {1, 6, -1000, 100, 50, 70, 66, 6, 10, 99};
	// nên nhớ, ta có 10 biến int đó hen
	// duyệt mảng, quét từ đầu tới cuối mảng
	
	for (int i = 0; i < 10; i++) {
		if (a[i] == 10) {
			printf("Hey, found 10 at position of %d\n", i);
			break;
		}
		else
			printf("Not found 10\n");
		// LÀM SAO ĐỂ IN ĐƯỢC 1 CÂU KHÔNG THẤY, KHÔNG TIN NHIỀU CÂU
		// KHI NÀO ĐƯỢC QUYỀN KẾT LUẬN KHÔNG THẤY
		// SO SÁNH HẾT RỒI MÀ VẪN KHÔNG THẤY == 10 THÌ MỚI ĐƯỢC QUYỀN KL
		// TÌM ĐƯỢC BẰNG MỚI DÁM KẾT LUẬN
		// BIẾN CỜ - FLAG NGUYÊN TẮC SUY ĐOÁN VÔ TỘI
		// giả bộ rằng 10 xuất hiện từ đầu tiên
		// đi hỏi phần từ 1, mày có == 10 không, dạ em không GIẢ BỘ VẪN ĐANG ĐÚNG
		
		// QUY ƯỚC: CỜ = 0; không tìm thấy
		// 			CỜ = 1; TÌM THẤY EM 10 
		
		// ******* KĨ THUẬT ĐẶT CỜ LUÔN ĐƯỢC DÙNG TRONG CÁC BÀI TOÁN CÓ NHIỀU DỮ LIỆU
		// TA GIẢ ĐỊNH MỘT ĐIỀU GÌ ĐÓ TỪ BAN ĐẦU
		// SẼ PHẤT KHI DATA CÓ ĐIỀU GÌ ĐẶC BIỆT!!!!!!
	}
	return 0;
}