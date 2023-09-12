#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#define ESC 27


int main()
{
	printf("  202207007\n");
	printf("  최민석 님의\n");
	printf("  Application\n");
	printf("p, j, r, esc(종료)를(을) 입력하세요\n");

	char str;

	
	while (true)
	{
		str = _getch();
		if (str == ESC)
			break;

		else if (str == 'p')
		{
			std::cout << "command > p\n";
			printf("나는 과제를 겁나 잘하는 학생이다.\n");
		}
		else if (str == 'j')
		{
			std::cout << "command > j\n";
			printf("나는 과제가 너무 즐겁다.\n");
		}
		else if (str == 'r')
		{
			std::cout << "command > r\n";
			printf("교수님 과제 더 내주세요.\n");
		}
	}

}