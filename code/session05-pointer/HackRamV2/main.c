#include <stdio.h>
#include <stdlib.h>

// số nhà / địa chỉ là một con số nhưng con số không hẳn là số nhà]
// có cách nào convert 1 con số bình thường thành địa chỉ không??


int main(int argc, char *argv[]) {
	
	int yob = 2002;
	int* hari;
	
	printf("The addr of yob: %u\n", &yob);
	printf("YOB: %d\n", yob);

	// 6684188
	// biết địa chỉ của điểm game, và giờ ta sẽ sửa điểm game
	
	//hari = &yob; đéo còn gì để nói nữa rồi
	
	// hari = 6684188; GHI THẾ NÀY KHÔNG ỔN, VÌ ĐÂY LÀ CON SỐ
	// nhầm lẫn với giá trị biến int 1 con số nguyên
	
	// Mình phải nhấn, đây là con số nhưng là con số địa chỉ đó nhen
	// nếu là địa chỉ thì cất vào viến con trỏ int*
	
	hari = (int*)6684180; //cast/casting/ ép kiểu/ ép chó thành mèo
						  // đưa địa chỉ/ con số qua (int*)
						  // tức là địa chỉ
	printf("YOB now is (via Hari) %d\n", *hari);
	
	// sửa điểm game
	*hari = 101010;
	printf("Finally, yob now is (via Hari) %d\n", yob);
	
	return 0;
}