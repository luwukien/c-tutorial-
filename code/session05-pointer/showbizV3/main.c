#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	int* hari; // chưa trỏ ai cả
	printf("1st. TT has %d: TD has %d\n", tt, td);
	printf("1st, vi TT is at %u; vi TD is at %u\n", &tt, &td);
	
	hari = &td; //hari tro vi tdd
	// hoi td co bao nhieu
	printf("1st, Hari said, TD now has %d\n", td);
	printf("1st, Hari said, TD now has %d\n", *hari);  // 4K
	
	// tui mún, hari lấy ví tt
	//hari = &tt; 
	hari++; // tui là hộp lưu số nhà, số nhà ++ nghĩa là sang kế 1 căn!!!
	
	//Hari ơi, nhà em đang trỏ gì, có bao nhiêu tiền
	printf("2nd, Hari said, ai do now has %d\n", *hari);
	
	// ++ nhưng là 4 bytes, vì 1 biến int chứa 4byte
	// tui đang trỏ tọa độ 84, 84+++ không là 85, nhảy cóc 1 căn nhà
	
	// căn nhà bao nhiêu byte thì nhảy bấy nhiêu bytes
	
	// con trỏ++ / con trỏ-- nghĩa là nhảy vèo mấy byte, vì nó phải sang nhà kế
	// 1nhà chiếm nhiều bytes, đi 1 nhà, đi 1 biến
	
	(*hari)++;
	++(*hari);
	// câu này được hiểu là vào vùng ram, tăng value eleen 1 -> 5k + 1
	// ++ -- của biến bình thường
	
	printf("TT now has %d\n", tt);
	printf("3rd, Hari points to %u\n", hari);
	
	hari--;
	printf("4td, after -- points to %u\n", hari);
	
	return 0;
}