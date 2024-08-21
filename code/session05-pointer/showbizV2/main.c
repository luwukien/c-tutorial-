#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	
	printf("1st. TT has %d: TD has %d\n", tt, td);
	printf("1st, vi TT is at %u; vi TD is at %u\n", &tt, &td);
	
	int* hari = &tt;
	
	// hỏi hari xem tt đang có bao nhiêu
	printf("1st, Hari said, TT has %d\n", *hari); // TT 5000
	
	//Har mua do het 4000
	*hari -= 4000;
	
	//hỏi lại tt còn bao nhiêu, hỏi qua hari cũng oke, trực tiếp tt cũng oke  luôn
	printf("2nd, Hari said, TT now has (after 4K) %d\n", *hari);
	printf("2nd, TT said, TT  now has (after 4K by Haru) %d\n", tt);
	
	//Hari xem ví TD, ta muốn có danh bạ mới thay danh bạ mới
	hari = &td;
	
	printf("3rd, Hari said, TT now has  %d\n", *hari); //4k
	
	*hari -= 2000; // tiêu của td 2k
	// hỏi td còn mấy
	printf("4td, TD said, TD now (after 2k by Hari\)has  %d\n", *hari);
	return 0;
}	