#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#define ESC 27


int main()
{
	printf("  �������� �Բ��ϴ� ��ſ� VC++ �ð�\n");
	
	printf("q, w, e, r, esc(����)��(��) �Է��ϼ���\n");

	char str;


	while (true)
	{
		std::cout << "command > ";

		str = _getch();
		if (str == ESC)
			break;

		else if (str == 'q')
		{
			printf("q\n");
			printf("qwer ȭ����.\n");
		}
		else if (str == 'w')
		{
			printf("w\n");
			printf("���� �ʹ� ����.\n");
		}
		else if (str == 'e')
		{
			printf("e\n");
			printf("�����ֺ��� ������ 3���.\n");
		}
		else if (str == 'r')
		{
			printf("r\n");
			printf("�ູ�ϴ�.\n");
		}
		else
			printf("�ٽ� �Է��ϼ���. ����\n");
	}

}