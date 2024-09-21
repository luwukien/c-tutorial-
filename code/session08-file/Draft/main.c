#include <stdio.h>
#include <stdlib.h>

void writeAFile();
void readAFile();

int main(int argc, char *argv[]) {
	writeAFile();
	readAFile();
	return 0;
}

void writeAFile() {
	FILE* f = fopen("input.txt", "a");

	fprintf(f, "djt cai lon me tap tin kho hieu vai ca llon. dcm m bo m se hieu thoi dcm c programming!!");
	
	fclose(f);
}

void readAFile() {
	FILE* f = fopen("input.txt", "r");
	int n;
	float k;
	fscanf(f, "%i%f", &n, &k);
	fprintf(f, "n: %i and k: %f", n, k);
	fclose(f);
}