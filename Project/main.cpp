#include <stdio.h>//프로젝트를 만드는데 필요한 헤더파일
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void p();//점찍기
void main_select();//메인메뉴
void rule();//게임규칙
int com_card();//컴퓨터의 카드뽑기(카드 2장을 뽑은 후 더 뽑을 것인지 결정한다.)
int player_card();//플레이어의 카드뽑기(카드 2장을 뽑는다.)
int p_recv(int player);//플레이어가 카드 2장을 받은 후 추가로 카드를 뽑는 함수
void end_game();//한 게임 종료후 계속 할 것인지 말것인지를 결정한다.
void in_game();//플레이어가 카드를 받을 것인지 말 것인지를 결정하며, 승리,무승부,패배 조건이 있다.
void p()
{
	int i = 0;
	for (i = 0; i <= 2; i++)//2번
	{
		Sleep(1000);//1초 정도 기다린후 점을 찍는다.
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
		printf("1.$게임시작$\n\n");//1. 게임시작 2. 게임규칙을 띄운다.
		printf("2.$게임규칙$\n");
		scanf_s("%d", &select);//1,2 둘중하나의 숫자를 받는다.
		
		switch (select)
		{
			case 1 :
			{
				system("cls");
				printf(" S T A R T !");//1을 받을경우 스타트 문구를 출력한다.
				break;
			}
			case 2 : 
			{
				system("cls");
				rule();//2를 받을경우 게임규칙을 출력한다.
				break;
			}
		}
		if (select == 1)
		{
			in_game();//스타트 문구를 출력한뒤,게임이 시작된다.
		}
	}
}
int com_card()
{
	int c1, c2, c, sum,result = 0;
	c1 = rand() % 10 + 1;//컴퓨터의 첫번째 카드
	c2 = rand() % 10 + 1;//컴퓨터의 두번째 카드
	sum = c1 + c2;//두 카드의 합
	
		while (sum <= 14)//컴퓨터의 1,2번째 카드의 합이 14이하일 경우 추가로 카드를 뽑는다.
		{
			
			c = rand() % 10 + 1;
			result += c;
			if (result + sum > 14)//총 카드의 합이 14보다 커질경우 멈춘다.
			{
				result = result + sum;
				return result;
			}
		}
	
	
}
int player_card()
{
	int c1, c2, sum, result = 0;
	c1 = rand() % 10 + 1;//플레이어의 첫번째 카드
	c2 = rand() % 10 + 1;//플레이어의 두번째 카드
	sum = c1 + c2;//플레이어의 1,2번째 카드의 합
	return sum;
}
int p_recv(int player)//플레이어가 카드 2장을 받은 후 추가로 받을 때 카드들의 총 합
{
	int c, sum = 0;
	c = rand() % 10 + 1;
	sum = c + player;
	return sum;
}
void end_game()//한 게임이 끝난 후
{
	int Game = 0;
	system("cls");
	printf("1.Retry?         2.Finish");//다시 시작할 것인지 말 것인지 묻는다.
	scanf_s("%d", &Game);
	if (Game == 1)
	{
		main_select();//1을 입력받으면 게임을 다시 시작한다.
	}
	else if (Game == 2)
	{
		system("cls");
		printf("게임을 종료합니다.");//2를 입력받으면 문구와 함께 게임이 종료된다.
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
		printf("Me               Com\n\n");//게임화면
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
			if (player_total > com_total && player_total <= 21)//플레이어의 카드가 컴퓨터의 카드합보다 크고 21보다 작거나 같을 때 승리한다.
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > player_total && com_total <= 21)//컴퓨터의 카드가 플레이어의 카드합보다 크고 21보다 작거나 같을 때 승리한다.
			{
				system("cls");
				printf("You Lose!");
				Sleep(5000);
				end_game();
			}
			else if (com_total == player_total)//플레이어의 카드가 컴퓨터의 카드합과 값이 같다면 비긴다.
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21 && player_total > 21)//컴퓨터의 카드합과 플레이어의 카드 합이 각각 21이 넘을 경우 비긴다.
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21)//컴퓨터의 카드합이 21이 넘으면 플레이어가 승리한다.
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (player_total > 21)//플레이어의 카드합이 21이 넘으면 컴퓨터가 승리한다.
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

	printf("- - - - - - - - - - -\n");//타이틀 출력
	printf("l                   l\n");
	printf("l  $The black jack$ l\n");
	printf("l                   l\n");
	printf("- - - - - - - - - - -\n\n\n");

	system("pause");
	printf("로 딩 중 . ");
	p();
	system("cls");
	
	main_select();//메인메뉴 실행
	Sleep(1500);
	system("cls");

	in_game();//게임실행
	


	return 0;

}