#include <stdio.h>
#include <stdlib.h>

// Trấn Thành đem 5k$ đi Mỹ, cùng Hari sắm đồ
// Trấn Thành xài tiền, bình thường
// Hari lấy ví của TT xài tiền, bình thường luôn!!

//int testcase(int *case1, int arr[]);

int main(int argc, char *argv[]) {
/*	
	int tt = 5000; // đem 5k đi dùng
	// giả bộ TT mua 1 bộ đồ tốn 1k
	// mô phòng được TT tiêu tiền
	// tT = 4000;  // gán biến = giá trị mới
	// TT tiêu tiền 
	tt -= 1000;
	
	// Hari xài, ví TT phải giảm, TT đưa ví cho Hari tự do mua!!!!
	int* hari = &tt; // hành động đưa ví cho ai đó!!!!
				     // &tt tọa độ, địa chỉ của hộp tt đang chưa 4k bên trong
					 // cho vị trí cái ví ở cái mông!! lấy được ví
	// int* là một data mới
	// nó dùng để đại diện, lữu trữ danh bạn, lưu địa chỉ của biến
	// int khác, địa chỉa của biến cũng là con số thôi, nhưng không phải số bình thuờng
	// mà còn mang ý nghĩa địa chỉ
	
	// kiểm tra xem Hari nắm trong trong tay cái ví tt chưa khi đã chỉ ra vị trí
	printf("Vi TT is at %u\n", &tt);
	printf("After buying a LV bag, TT now has %d$\n", tt);
	printf("Vi TT is at %u\n", hari);
	
	//XÀI TIỀN TT THÔI, nhấc máy gọi thằng bạn khi có số của nó
	//hari đang mắ trongtay đại chỉ ví tt, tọa độ vó, tọa độ vùng ram
	//chứa 4k onoff
	// hỏi hari, tt đang có bao nhiêu tiền
	//printf("Hari said: Tt now has %d\n");
	printf("Hari said: Tt now has %d\n", *hari); // *hari: jump/zoom phóng tới
													// địa chỉ danh bạ


	// *hari ~~ ví trấn thành rồi
	//*hari gọi danh bạ tương tác với thằng bạn ở xa ~~ ở trước mắt rồi
	*hari = *hari - 3000; 
	//hari tiêu tiền của trấn thành *hari 4K, trừ đi thì biến ai bị giảm tiền rồi!!!!!
	
	printf("After Hari buying a Dior bag, TT now has %d$\n", tt);
	// dùng biến con trỏ để can thiệp vào biến gốc */

//	int arr[] = {29, 10, 20006};
//	int value1 = 29;
//	
//	int *pValue = &value1;
//	
//	printf("The addr of variable value 1 is : %u\n", &value1);
//	
//	printf("The addr of variable pointer value 1 is: %u\n", pValue);
//	
//	*pValue = value1 * 11;
//	printf("%d", *pValue);
//	
//	printf("%d", testcase(value1, arr));

	int* v1, v2;
	
	
	



	
	return 0;
}

//int testcase(int *case1, int arr[]) {
//	*case1 *= 10;
//	for (int i = 0; i < *case1; i++)
//		*case1 = 20;
//	return *case1;
//}