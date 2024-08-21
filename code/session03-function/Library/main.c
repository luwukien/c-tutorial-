#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// có hai loại hàm:
// Loại 1: thiên hạ viết sẵn cho mình sài. Tìm đem về sài (Pre-defined function)
// tolwr(kí tự) ->chữ thường
// sqrt(con số) -> căn bậc 2
// abs(con số) -> trị tuyệt đối
// sin(độ góc cung) -> sin cho mày lượng giác
// pow(5, 2) -> trả về 5^2
// pow (a, b> -> trả về 10^10
// pow (a, b) -> a^b
// ...
// đặt hàm này vòa những ngăn tủ, cốp xe để phân loại
// ngăn tủ ở trong C chứa những hàm được phân loại rồi thì gọi là thư viênj
// .h
// #include <math.h> ta sẽ mở ngăn math, 1 đống hàm toán học cho mình dùng
// HẦU HẾT HÀM LOẠI 4, re-use

// #include <ctype.h> mở ngăn hàm xử lí ASCII
// #include <string.h> mở ngăn toàn hàm xử lí câu văn/ string/ chuỗi

// mình có thể làm .h cho riêng mình, bữa nào rảnh sẽ chỉ!!!!

// Loại 2: hàm tự làm, nhận vào và trả về, giống hàm nhà người ta thôi (cumtomized function)



int main(int argc, char *argv[]) {
	
	
	// tôi muốn lấy căn bậc 2 của 100 -> coi có được 10 hem?
	// double sqrt(double x)
	int test = 100, result;
	
	printf("%.2lf\n", sqrt(test));
	
	double sum = sqrt(9) + sqrt(25) + sqrt(64);
	
	printf("Sum of sqare root: %.2lf\n", sum);
	
	// trị tuyệt đối cảu -5 -> 5
	printf("Absoluion of -5 is %d", abs(-5));	
	
	return 0;
}