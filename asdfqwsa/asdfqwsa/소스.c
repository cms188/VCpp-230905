#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void rect(int x, int y, int *z) {
	*z = x * y;
}

int main(void)
{
	int w, h;
	int result;

	printf("가로?");
	scanf("%d", &w);
	printf("세로?");
	scanf("%d", &h);

	rect(w, h, &result);

	printf("직사각형의 넓이: %d", result);
}