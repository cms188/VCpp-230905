#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void rect(int x, int y, int *z) {
	*z = x * y;
}

int main(void)
{
	int w, h;
	int result;

	printf("����?");
	scanf("%d", &w);
	printf("����?");
	scanf("%d", &h);

	rect(w, h, &result);

	printf("���簢���� ����: %d", result);
}