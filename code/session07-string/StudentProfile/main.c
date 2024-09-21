#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void storeName(); //  khai báo chuỗi kiểu mảng 's', 'o', 's'
void storeNameV2();// khai báo chuỗi kiểu "" cho hiệu quả, từ chen null vào cuối
void storeNameV3();//đổi kí tự hoa sang thường, thường sang hoa của một cái chuỗi
void storeNameV4(); // đổi kí tự từ thường sang hoa
void storeNameV5(); //%s khong them f lấy tên sau dấu cách đàu tiên

void storeNameV6(); // lấy luôn chuỗi có dấu cách
					// hãy xem enter như là phím duy nhất đẻ kết
					// thúc việc nhập. Dấu cách là data thường
					// không dùng dấu cách mặc định để phân tách
					// các value trong quá trình nhập
					
void storeNameV7(); // nhập chuỗi bị lố thì sao
void storeNameV8(); // nhập chuỗi có chặn độ dài có tính cả dấu cách
void storeNameV9(); // nhập chuỗi không chặn độ dài nhưng dễ viết hơn
void storeNameV10(); // gán gí trị cho

int main(int argc, char *argv[]) {
//	storeNameV2();

	storeNameV10();
	return 0;
}

void storeNameV10() {
	char n1[50] = "Ahihi"; // Okie gán ngay lúc khai báo cũng không thành vấn đề
	char n2[50] = {'A', 'h', 'i', 'h', 'i', 0};
												// kết thúc băng mã ASCII NULL
												
	char n3[50] = {'A', 'h', 'i', 'h', 'i', '\0'};
	
	//										tao chơi bằng kí tự NULL cũng oke nè
	// nhưng vất vả quá 
	char name[50];
//	name1 = "Ahihi"; // dấu bằng chỉ dùng lúc khai báo hoặc gán một biến đơn !!!
	
//	name = n1; // cố gắng lấy ahihi ở n1 gán vào name1
	// không cho vì 2 con trỏ đổ value cho nhau 
	// nếu là con trỏ thuần chủng * thì oke3
	// đây là con trỏ má mì, chốt mảng từ đầu, éo cho trỏ chỗ khác
	// ta phải dùng đồ chơi
	
	strcpy(name, n1); //n1 đổ vào name
	// vào trong mảng 1 n1 và copy từng kí tự đổ sang tương ứng name, copy luôn
	// cả null ở cuối chuỗi
	printf("After copy the string, name now is: ");
	puts(name);
	
}


void storeNameV9() {
	char name[50];
	printf("Input your name: ");
	gets(name);
	puts(name); // chỉ là tên mảng/chuỗi đưa vòa
	printf("Your name is %s\n", name);
}

void storeNameV8() {
		
	int yob = 2002;
	char name[10];
	
	printf("yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr: %u\n", name);
	
	printf("input your name: ");
	scanf("%9[^\n]", name); // nhập ten và nhập lố 10 kí tự 
							// sẽ ảnh hưởng đến biến phía sau
	
	printf("Hi, %s\n", name);
	printf("Yob, %d\n", yob);
	
}


void storeNameV7() {
	
	int yob = 2002;
	char name[10];
	
	printf("yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr: %u\n", name);
	
	printf("input your name: ");
	scanf("%[^\n]", name); // nhập ten và nhập lố 10 kí tự 
							// sẽ ảnh hưởng đến biến phía sau
	
	printf("Hi, %s\n", name);
	printf("Yob, %d\n", yob);
}

void storeNameV6() {
	char name[50];
	printf("input your name: ");
	scanf("%[^\n]", name); // đưa địa chỉ thằng đầu mản &name[0]
	// tự động sẽ đổ luôn 1 loạt các kí tự vào dyax biến san sát nhau
	// do cả đám biến liền nhau, ăn ké luôn...  đổ full luôn
	
	printf("Hi, %s\n", name);
	
	
	
}


void storeNameV5() {
	char name[50];
	printf("input your name: ");
	scanf("%s", name);
	
	printf("Hi %s\n", name);
}


//void storeNameV2() {
//	char name[50]  = "et-so-et";
//	//khai báo chuỗi nhanh hơn, khỏi cần dùng kí tựd
//	//nháy đôi
//	//C tự chèn thêm kí tự null vào cuối chuỗi!!!
//	
//
//	// kiểm tra phần con fliaj của mảng-chuỗi là gì??
//	//[50] byte: Et-o-et NULL< rác hay cái mẹ gì thì mình chưa biết
//	printf("The rest of the array after the/NULL\n"); // sau kí tự 10 là gì
//	for (int i = 0; i < 500; i++)
//		printf("%c ", name[i]);



void storeNameV4() {
	char name[50] = "giao&*^lang";
	printf("The orginal name: %s\n", name);
	
	strupr(name);// truyền tham chiếu, truyền con trỏ, giống hàm swap(*tên-mảng)
	// name ở main(), đưa cho hàm strupr()
	// hàm chạy xong, name bị thay đổi
	// rõ ràng name là địa chỉ name[0] đưa cho hàm
	//strlwr(name);
	printf("The orginal name: %s\n", name);
}
		
void storeNameV3() {
	char name[50] = "giao.lang";
	printf("The original name: %s\n", name); // C tự động * tất cả các kí tự 
	// đổi từ thường sang hoa
	// quét qua tất cả các kí tự, +- 32 đơn vị tùy thuộc vào bảng mã ascii
//	for (int i = 0; i < strlen(name); i++)
//		name[i] = name[i] - 32; // nmae[i] là từng kí tự lẻ
//	// cái này coi chừng toang vì dấu. trừ đi có  thể ra kí tự khác


	for (int i = 0; i < strlen(name); i++)
		if (name[i] >= 97 && name[i] <= 122)
			name[i] -= 32; // tao chỉ đổi thành Hoa nếu mày là thường
			
	printf("\nThe upper case name: %s\n", name);
	
}

//void storeName() {
//	
//	int a[] = {2, 4, 6, 8, 10};
//	
//	//char name[] = {'S', 'O', 'S','\0', '$', '#'};
//	char name[] = {65, 'O', 'S', 0, '$', '#'};
//	
//	// hàm xem độ dài của chuỗi/tên mình strlen(đưa chuỗi vào) -> độ dài của chuỗi
//	int len = strlen(name);
//	printf("\nThe length of var your  name is %d\n", len);
//	printf("Your name: %s", name);
//	//%s quét chuỗi/mảng cho đến khi gặp NULL dừng ngay!!!
//	// báo hiệu hết chuỗi rồi, không cần đi hết mảng
//	// muốn in phần sao NULL, thì xài for bình thương
//	// for bt sẽ quét qua từng phần tử mảng
//	
//	printf("Your name (printed by using for)\n");
//	for (int i = 0; i < 6; i++)	
//		printf("%c", name[i]);
//			
//}