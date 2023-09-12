#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
#define ESC 27


int main()
{
	printf("  이은석과 함께하는 즐거운 VC++ 시간\n");
	
	printf("q, w, e, r, esc(종료)를(을) 입력하세요\n");

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
			printf("qwer 화이팅.\n");
		}
		else if (str == 'w')
		{
			printf("w\n");
			printf("과제 너무 좋다.\n");
		}
		else if (str == 'e')
		{
			printf("e\n");
			printf("다음주부턴 과제량 3배다.\n");
		}
		else if (str == 'r')
		{
			printf("r\n");
			printf("행복하다.\n");
		}
		else
			printf("다시 입력하세요. 제발\n");
	}

}