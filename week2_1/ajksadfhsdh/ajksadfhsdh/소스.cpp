#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	printf("  202207007\n");
	printf("  �ֹμ� ����\n");
	printf("  Application\n");

	char str;

	
	while (true)
	{
		printf("p, j, r, esc(����)��(��) �Է��ϼ���\n");
		std::cin >> str;

		if (str == 'p')
			printf("���� ������ �̳� ���ϴ� �л��̴�.\n");

		else if (str == 'j')
			printf("���� ������ �ʹ� ��̴�.\n");

		else if (str == 'r')
			printf("������ ���� �� ���ּ���.\n");

		else if (str == 'ESC')
			printf("������ ��Ŭ������ �ƴ� GIT�� �ø���.\n");

	}
}