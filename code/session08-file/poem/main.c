#include <stdio.h>
#include <stdlib.h>

void writeFile(); // ghi từ ram xuống đĩa cứng
void readFile(); // đọc từ đĩa cứng vào ram 

int main(int argc, char *argv[]) {
	
//	writeFile();

	readFile();
	
	return 0;
}

void writeFile() {
	FILE* f = fopen("tuay.txt", "a"); // w: là write heng, a: append vào đuôi
	
	fprintf(f, "Tu ay trong oi bung code gao\n");
	fprintf(f, "Man hinh code do cua con tim\n");
	fprintf(f, "Hon toi ngap tran do-for-if\n");
	fprintf(f, "Rat nhi phan va day tieng do la\n");
	fclose(f);
	printf("The file is created sucessfully");
}

void readFile() {
	FILE* f = fopen("tuay.txt", "r"); // read heng, open 1 tập tin
	char ch; // biến lưu 1 ký tự
	do {
		ch = fgetc(f);
		printf("%c", ch);
		
	} while (ch != EOF);
	
	fclose(f);
}
