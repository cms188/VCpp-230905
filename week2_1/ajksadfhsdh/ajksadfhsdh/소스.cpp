#include <stdio.h>
#include <iostream>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	printf("  202207007\n");
	printf("  최민석 님의\n");
	printf("  Application\n");

	char str;

	
	while (true)
	{
		printf("p, j, r, esc(종료)를(을) 입력하세요\n");
		std::cin >> str;

		if (str == 'p')
			printf("나는 과제를 겁나 잘하는 학생이다.\n");

		else if (str == 'j')
			printf("나는 과제가 너무 즐겁다.\n");

		else if (str == 'r')
			printf("교수님 과제 더 내주세요.\n");

		else if (str == 'ESC')
			printf("과제는 이클래스가 아닌 GIT에 올리자.\n");

	}
}