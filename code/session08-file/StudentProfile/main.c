#include <stdio.h>
#include <stdlib.h>

//ta làm toàn  bộ thao tác trên tập tin trên hàm void cho nó
//gọn gàng trên các hàm, trên thực tế phải dùng linh hoạt giữa các hàm 

void saveAChar(); // lưu đúng một kí tự ra tập tin trên ổ đĩa
void openAChar(); // hàm đọc kí tự đáng có trong tập tin 
						// đọc xong đưa vào biến trong ram và in ra màn hình
void openChars(); //hàm đọc nhiều kí tự tập tin, do tập tin có nhiều kí tự 
					//mà hàm fgets() chỉ đọc đúng 1 kí tự từ đầu tập tin 
					//ta yêu cầu hàm này đọc tiếp đi mày
					//có nghĩa là đọc được nhiều kí tự hơn
					
void openCharsV2(); //tập tin có quá trời kí tự, đọc rất nhiều lần mới hết được
					//bao nhiều lần thì hết, tùy độ dài/số kí tự có trong file .txt
					//đọc đến bao giờ, đọc hết tập tin gặp EOF
					//vòng lặp đọc đến EOF - còn chưa EOF còn đọc tiếp!!1
					//while (ch != EOF) thì đọc tiếp đi
					//đọc từng byte từ tập tin, thấy byte đó chưa là EOF
					//thì đọc tiếp
					
void saveADocument(); //hàm mời user nhập một văn bản từ bàn phím
						// có quyền căn lề, dấu cách, xuống hàng(đơn từ 
						//văn bản thì có nhiều dòng
						//khó khăn; khi  nào thì kết thúc nhập?? dấu hiệu
						//kết thúc nhập để save ra tập tin??
						//dùng các kí tự bàn phím thông thường thì không ổn
						//ta sẽ dùng hotkey - tổ hợp phím 
						//những tổ hợp này tạo bởi Ctrl - phimd
						//							Alt  - phím
						//							Window - phím
						//là những tôr hợp phím vô hình, dùng để ra lệnh gì đó
						//nó cũng có mã ASCII riêng
						//NOW-PRINTABLE
						
	
int main(int argc, char *argv[]) {
	//saveAChar();
	//openAChar();
 
//	openCharsV2();
	saveADocument();
	return 0;
}

void saveADocument() {
	char ch;
	FILE* f = fopen("don-doi-chuyen-nganh.txt", "a");
	
	printf("You are required to input a document. Hit Ctrl-S to stop & save your work to");
	
	
	do {
		ch = getchar(); //không chơi scanf() vì cứ gặp enter là kết thúc chương trình 
						//éo cần enter
						//gõ-gán-save, gõ - gán - save,...
		//fprintf(f, "%c", ch);
		fputc(ch, f);
		
	} while (ch != EOF); //chưa gõ Cltr-S, thì chưa cho thoát, gõ tiếp đi mày!!
	
	fclose(f);
	printf("Your document is saved to the drive successfully!!\n");
	
}
void openCharsV2() {
	char ch;
	FILE* f = fopen("char.txt", "r"); // tao muốn tìm chữ '$' trên tập tin
										// đem nó vào ram rồi in ra màn hình 
										// read/ơpen//input
	printf("The contents of char.txt:\n");
	//đọc in đọc in đọc in cho đến EOF
	
	do {
		ch = fgetc(f);
		printf("%c", ch);	
		
	} while (ch != EOF); 	
	


	fclose(f);
}

void openChars() {
	char ch = '$';
	FILE* f = fopen("char.txt", "r"); // tao muốn tìm chữ '$' trên tập tin
										// đem nó vào ram rồi in ra màn hình 
										// read/ơpen//input
	printf("The contents of char.txt:\n");
	
	ch = fgetc(f);
	printf("%c", ch); // đọc từ đĩa vào biến ch, in ra màn hình bình thường
	
	ch = fgetc(f); //chơi hơi lầy, đọc kí tự đầu tiên xong
	printf("%c", ch); //chuyển qua đọc thằng thứ 2
					//hầu hết các hàm fx(0 là tự động dịch chuyển sang 
					//vị trí kế trên tập tin!!!!
	fclose(f);
}

void openAChar() {
	char ch = '$';
	FILE* f = fopen("char.txt", "r"); // tao muốn tìm chữ '$' trên tập tin
										// đem nó vào ram rồi in ra màn hình 
										// read/ơpen//input
	printf("The contents of char.txt:\n");
	
	ch = fgetc(f);
	printf("%c", ch); // đọc từ đĩa vào biến ch, in ra màn hình bình thường
	fclose(f);
}

void saveAChar() {
	
	char ch = '#';
//	FILE* f = fopen("char.txt", "w");
							//w: tao sẽ tạo mới 1 tập tin có tên char.txt
							//nếu tập tin này đã tồn tại trước đó, có content riêng
							//tao sẽ xóa sạch, tao sẽ tạo tập tin mới tinh!!! CỰC KÌ NGUY HIỂM
							//KHI CHƠI "W" MÀ KHÔNG CHÚ Ý XEM TẬP TIN NÀY ĐÃ CÓ SẴN TRƯỚC ĐÓ
							//chưa có - tạo mới; có rồi trước đó, xóa, tạo mới
	FILE* f = fopen("char.txt", "a");
							//a: nối data mới vào đuôi tập tin nếu tập tin đã tồn tại sẵn trước
							//đó với data nào đó 
							
							//nếu chưa tồn tại, thì tạo mới trắng tinh - w
							
							//tên tập tin có thể kèm đường dẫn path
							//D:\\music\\char.txt D:\music\char.txt
	//đúng chuẩn, nếu OS cho phép mình/app được quyền có 1 vùng
	//byte trên địa thì f sẽ trỏ vào đàu dãy byte
	//nếu vì 1 lí do nào đó, đĩa đầym thì không cho phép trỏ
	//lúc này f trỏ đến 1 giá trị đặc biệt gọi là NULL, lúc này
	//f là NULL, if(f == NULL) nghĩa là éo trỏ được vào ổ đĩa
//	fprintf(f, "%c", '$');
	fprintf(f, "%c", ch); //cũng là $ thôi mà!!!, dùng biến hoặc trực tiếp đều được 
	fclose(f); //đóng tập tin lại
	printf("The $ char  has been written to the file successfully\n");

}	

