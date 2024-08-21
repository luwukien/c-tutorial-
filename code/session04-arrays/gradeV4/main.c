#include <stdio.h>
#include <stdlib.h>

// kỹ thuật khai báo mảng và gán luôn giá trị
// int a = 10; // mảng có trò này không. có

int main(int argc, char *argv[]) {
	// mảng giống như tập hợp/ dãy value ở toán học phổ thông!!!!
	float c[10] = {1, 1, 2, 3, 5, 8};
					// cho 6 điểm thôi mà lại có 10 biến
					// gán value ngay cho 6 phần tử đầu của mảng
					//[0] = 1; [5] = 8
					//biến còn lại value DEFAULT = 0; không có garbage value 
	printf("Your ten grades\n");
	for (int i = 0; i < 10; i++)
		printf("Grade [%d] = %.2f\n", i, c[i]);
		
	float col[] = {2, 4, 6, 8, 10};
	// câu lệnh này không nói rõ có bao nhiêu biến được cấp. Nhưng lại
	// gán sẵn value cho 1 số biến. Mảng sẽ tự động được cấp số biến
	// tùy theo số lượng value được gán; bài này là5
	// bài này chính là mảng [5]
	
	// float a[]; bị chửi vì không nói rõ bao nhiêu biến được cấp.
	// phải nói rõ số biến cần xin,, gán value sau cũng được
	// vừa xin bao nhiêu, vừa gán
	// vừa gán, mà không thèm nói xin, thì sẽ cấp theo số gán
	return 0;
}