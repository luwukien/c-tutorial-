#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // đây là tập tin trên HDD/SDD chứa các hãm
				  // các xử lí có sẵn mà ta lôi ra xài
				  // ta cần viết hòm nào chứa đồ gì
				  // tên hòm.h  ~~ các cốp xe chưa đồ chơi
				  // char.h, string.h, math.h, ......h
				  // các hòm .h phân loại các đồ chơi
				  // ~~~ các cốp xe chưa các loại hàng khác nhau
				  // include<> mở cốp xe tương ứng
				  // .h được gọi là LIBRARY - THƯ VIỆN/ NƠI CHỨA
				  // NHIỀU ĐỒ CHƠI DÙNG CHUNG , XÀI LẠI DÙNG NHIỀU LẦN
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viết app nho nhỏ in ra tính cách của bạn theo tên của bạn
//dùng kí tự đầu trong tên để luận ra tính cách
//áp dụng công thức IPO
//để bói được tính cách, làm được bài này, ta cần gì?
//INPUT ?: kí tự đầu trong tên?  character name
//PROCESS ?: tùy kí tự tên là gì, A, B, C, D, E thì 
//			 sẽ in/ghép với tính cách đã được tổng kết nhân loại
//OUTPUT ?: in ra tính cách tương ứng  - printf("...")

//TIPS: cứ có bao nhiêu input, thì ta sẽ cần bao nhiêu biến!!!!!!!!!!!!!!
//		cứ có output, thì sẽ có xác suất cần thêm biến để lưu output
//		trừ trường hợp output là in câu gì đó, không cần biến
//>>> bài này sẽ chỉ cần 1 biến

//		output của nghiệm pt b2: 2 nghiệm cần in ra là a, b
//		phần thuật toán xử lí/process, có khả năng cần thêm biến trung gian để xử lí
//		bài in tuổi theo năm sinh, age =  2022 - yob;
//									biến trung gian
// 		bài giải phương trình bậc 2, del-ta = b^2 - 4ac nó là trung gian
// 		output thực sự cần của pt b2 là x1, x2

int main(int argc, char *argv[]) {
	// input: chữ cái đầu trong tên gọi 
	
	char fL;
	//process: có tên thì if tương ứng và in ra
	//output: chỉ in ra kq, không cần biến

	//có biến thì cần value: hoặc gán ngay - hard-code, hoặc nhập
	printf("Welcome to Lenovo diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);	// nếu gõ HOA, okie, không care if tiếp in kết quả
						// nếu goc thg, thì đổi thành Hoa đã, if như bth
						// if(thường) - 32 về HOA
	fL = toupper(fL); // func là một quy tắc biến đổi là cái mẹ gì đó
					  // m đưa 2 thì m sẽ nhận được 4 
	// có được tên rồi đấy, chỉ 1 kí tự hoy
	// fl = 'A..Z', 'a...z', $, %, ^, *,...........
	// coi A với a đều là a nói chung, A nói chung đâu có sao
	// ta chỉ cần so sánh fL với A là đủ, nếu gõ a thường a convert thành A hoa luôn
	
//	if (fL >= 'A' && fL <= 'Z') // đúng là bạn nhập chữ cái từ a... z thường hay không?
//								// thì convert thành HOA
//								// đúng thường thì convert HOA
//		fL += 32;								
							
	if (fL == 'A')
		printf("Never joke");
		
	if (fL == 'B')
		printf("Introvert");		
	
	if (fL == 'C')
		printf("Friendly");	
	
	if (fL == 'D')
		printf("sense of humor");
		
	

	// một if - else sẽ đi liền kề trong, tránh trường hợp nhiều if liền kề nhau + 1 lệnh else thì if - else 
	// sẽ lệch kết quả mà không như mong muốn  >>> else là ngược lại của if ngay sau đó
	
	// CODE CHẠY SAI NẾU GÕ a thường, không in ra tính cách
	// lỗi do ta chỉ hỏi/ xét chữ A thôi
	
	
	
	
	
	
	
	
	return 0;
}