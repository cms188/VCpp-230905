#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#define ESC 27


int main()
{
	printf("  202207007\n");
	printf("  �ֹμ� ����\n");
	printf("  Application\n");
	printf("p, j, r, esc(����)��(��) �Է��ϼ���\n");

	char str;

	
	while (true)
	{
		str = _getch();
		if (str == ESC)
			break;

		else if (str == 'p')
		{
			std::cout << "command > p\n";
			printf("���� ������ �̳� ���ϴ� �л��̴�.\n");
		}
		else if (str == 'j')
		{
			std::cout << "command > j\n";
			printf("���� ������ �ʹ� ��̴�.\n");
		}
		else if (str == 'r')
		{
			std::cout << "command > r\n";
			printf("������ ���� �� ���ּ���.\n");
		}
	}

}