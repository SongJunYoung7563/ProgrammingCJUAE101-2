#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void p();
void main_select();
void rule();
int com_card();
int player_card();
int p_recv(int player);
void end_game();
void in_game();
void p()
{
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		Sleep(1000);
		printf(". ");
	}
}
void rule()
{
	printf("$게임규칙$\n");
	printf("1.패는 총 52개를 사용합니다.\n");
	printf("2.숫자 1~10을 사용합니다.\n");
	printf("3.컴퓨터와 플레이어 모두 카드 2장을 가지고 시작합니다.\n");
	printf("4.이후 추가로 카드를 1장씩 받을 수 있고, 멈출 수 있습니다.\n");
	printf("5.숫자 21을 기준으로 숫자 21에 가까운 사람이 승리합니다.(21일 경우 족보가 제일 높습니다.)\n");
	printf("6.21을 초과할 경우 그 즉시 패배합니다.\n\n\n");
	printf("아무키나 누를 경우 메인메뉴로 돌아갑니다.");
	system("pause");
}
void main_select()
{
	
	while (true)
	{
		system("cls");
		int select = 0;
		printf("1.$게임시작$\n\n");
		printf("2.$게임규칙$");
		scanf_s("%d", &select);
		
		switch (select)
		{
			case 1 :
			{
				system("cls");
				printf(" S T A R T !");
				break;
			}
			case 2 : 
			{
				system("cls");
				rule();
				break;
			}
		}
		if (select == 1)
		{
			in_game();
		}
	}
}
int com_card()
{
	int c1, c2, c, sum,result = 0;
	c1 = rand() % 10 + 1;
	c2 = rand() % 10 + 1;
	sum = c1 + c2;
	
		while (sum <= 14)
		{
			
			c = rand() % 10 + 1;
			result += c;
			if (result + sum > 14)
			{
				result = result + sum;
				return result;
			}
		}
	
	
}
int player_card()
{
	int c1, c2, sum, result = 0;
	c1 = rand() % 10 + 1;
	c2 = rand() % 10 + 1;
	sum = c1 + c2;
	return sum;
}
int p_recv(int player)
{
	int c, sum = 0;
	c = rand() % 10 + 1;
	sum = c + player;
	return sum;
}
void end_game()
{
	int Game = 0;
	system("cls");
	printf("1.Retry?         2.Finish");
	scanf_s("%d", &Game);
	if (Game == 1)
	{
		main_select();
	}
	else if (Game == 2)
	{
		system("cls");
		printf("게임을 종료합니다.");
			Sleep(2000);
		exit(0);
	}
}
void in_game()
{
	int com_total = 0;
	int player_total = 0;
	com_total = com_card();
	player_total = player_card();
	while (true)
	{
		int c = 0;
		system("cls");
		printf("Me               Com\n\n");
		printf("        Vs       \n\n");
		printf("%d                %d\n\n", player_total, com_total);
		printf("1.카드받기         2.멈추기\n");
		scanf_s("%d", &c);
		if (c == 1)
		{
			player_total = p_recv(player_total);
		}
		else if (c == 2)
		{
			if (player_total > com_total && player_total <= 21)
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > player_total && com_total <= 21)
			{
				system("cls");
				printf("You Lose!");
				Sleep(5000);
				end_game();
			}
			else if (com_total == player_total)
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21 && player_total > 21)
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21)
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (player_total > 21)
			{
				system("cls");
				printf("You Lose!");
				Sleep(5000);
				end_game();
			}
			
		}
		
	}
}
int main()
{
	srand((unsigned int)(time(NULL)));
	int com_total = 0;
	int player_total = 0;

	printf("- - - - - - - - - - -\n");
	printf("l                   l\n");
	printf("l  $The black jack$ l\n");
	printf("l                   l\n");
	printf("- - - - - - - - - - -\n\n\n");

	system("pause");
	printf("로 딩 중 . ");
	p();
	system("cls");
	
	main_select();
	Sleep(1500);
	system("cls");

	in_game();
	


	return 0;

}