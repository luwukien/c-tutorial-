#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ta tự viết hàm coppy 2 chuỗi. Độ lại hàm strcpy()
// lí do viết hàm vì ta không được gán trực tiếp 2 mảng cho nhau
// do tên 2 mảng là 2 con trỏ, 2 má mì, 2 má thì phải chốt đầu mảng
// của mình, không cho trỏ lung tung như con trỏ thuần chủng
// khai báo bằng dấu *. LỠ GẮN mảng NÀO, GẮN CHặt mẳng Đó

// gán chuỗi cho nhau bản chất là coppy value của từng biến chả trong mảng
// này gán sang mảng kia
// 2 dãy chung cư đối diến mặt nhau ném đồ sang nhau!!!

//void strcpy(char dest[50], char src[50]); // khong hay khi khai bao kieu nay
//void strcpy(char dest[50], char src[50]); // hay hon mot chut
void strcpy2006(char* dest, char* src);  // chuẩn nhất

void removeChar(); // tạm thời dùng trong nội bọ hàm cho dễ hiểu
					// truyền tham số thêm con trỏ thì dễ gây xoắn não
void removeCharV2(); // cho tao cái chỗ m muốn xóa, t xóa đúng vị trí đó
						// truyền tham số int pos vị trí muốn xóa
						
void removeCharV3();

// cho chuỗi Ahihi123DoNgok
// hãy xóa tất cả các con số xuất hiện trong chuỗi  


int main(int argc, char *argv[]) {
	char name[50], n[50] = "Cong hoa xa hoi chu nghia Viet Nam";
//	
//	// tôi muốn name = Cong hoa xa hoi chu nghia Viet Nam, đổ sang
//	// không cho dùng dấu  = gán mảng, vậy thì xài hàm strcpy() của người ta 
//	//													strcpy2006() của bố mày	
//	strcpy2006(name, n);
//	printf("Name: ");
//	puts(name);
	removeCharV3();
	
	
	return 0;
}

// dest  sẽ trỏ vào đầu 1 mảng cần đổ data vào
// src: trỏ mảng đang có data, chữ, cần ném cho ai đó 
// con trỏ: ta trỏ đầu mảng
// truyền tham chiếu rồi, hàm sửa bên ngoài bị ảnh hưởng

//xóa tất cả các con số trong mảng, xóa nhiều lần, dồn nhiều lần
//dồn lên là 1 vòng for từ pos đến cuối mảng
//duyệt từng [i] để biết có cần xóa không, nếu cần thì xóa (for)
// for
//for ngoài lấy được từng kí tự, để biết có cần xóa [i] không
// có được [i] cần xóa, for trong dồn lên

void removeCharV3() {
	char n[50] = "Ahihi123DoNgok";
	// ta phải hỏi từng kí tự xem m có là số hay không
	// vòng for đầu tiên là để duyệt mảng kí tự
	for (int i = 0; i < strlen(n); i++) {
		if (n[i] >= '0' && n[i] <= '9') { // mày là số rồi, xứng đáng xóa	
													// tịa vị trí i - pos đó
			// xóa là 1 vòng for dồn lên - i là pos tìm thấy số
			// vòng for này để dồn khi phát hiện ra số rồi
			for (int j = i; j < strlen(n); j++)
				n[j] = n[j + 1];	
			// dồn xong rồi đấy
			// theo lẽ thường i đi tiếp qua thằng kế
			// nhưng tình huống này có thể là thằng i-pos được dồn
			// lên nó lại là 1 con số, i đi tiếp trong chuỗi là bị sót con 1 
			// vừa dồn lên dúng vị trí i 
			// không cho i đi lên sau khi dồn, vì đề phòng chỗ pos lại có
			// con số, xảy ra khi nhiều con số ở gần nhau
			// chữ còn lỗi lòm thì không sao 
			i--;	
	}
}
	printf("After removing numbers in a string: ");
	puts(n);
	

void removeCharV2() {
	char n[50] = "SOS$#A1hihi"; 
	// tui muon xoa dau #  vi tri 5 tinh tu  0
	int pos = 4; //scanf() vị trí muốn xóa
	for (int i = pos; i < strlen(n); i++)
		n[i] = n[i + 1];
		
	
	printf("After removing 1: ");
	puts(n);
}

void removeChar() {
	char n[50] = "A1hihi"; // dài 6, nhưng xìa 7 vì còn null ở cuối
	// 				A 1 h i h i 0-null
	// xóa số 1, biết trước tại vị trí 1
	// n[0] giữ nguyên
//	n[1] = n[2]; // chỗi số 1 thay bằng thằng đứng sau, chữ h đi lên
	//				chữ h lên chỗ 1, nhưng h ở [2] vẫn còn nhà, đổ value, gán value
	// 				biến thì cố định trong vùng Ram nhưng value thì được đổi
	
	for (int i = 1; i < strlen(n); i++)
		n[i] = n[i + 1];
		
	printf("After removing 1: ");
	puts(n);
}

//void strcpy2006(char* dest, char* src) {
//	
//	// đi từ đàu đến cuối chuỗi gốc, cippy từng cháu sang bên kia
//	for (int i = 0; i <= strlen(src); i++) // phải <= vì cần có chữ NULL ở cuối chuỗi mảng
//		dest[i] = src[i];
//	// xong 
//}