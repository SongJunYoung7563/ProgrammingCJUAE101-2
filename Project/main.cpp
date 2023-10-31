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
	printf("$���ӱ�Ģ$\n");
	printf("1.�д� �� 52���� ����մϴ�.\n");
	printf("2.���� 1~10�� ����մϴ�.\n");
	printf("3.��ǻ�Ϳ� �÷��̾� ��� ī�� 2���� ������ �����մϴ�.\n");
	printf("4.���� �߰��� ī�带 1�徿 ���� �� �ְ�, ���� �� �ֽ��ϴ�.\n");
	printf("5.���� 21�� �������� ���� 21�� ����� ����� �¸��մϴ�.(21�� ��� ������ ���� �����ϴ�.)\n");
	printf("6.21�� �ʰ��� ��� �� ��� �й��մϴ�.\n\n\n");
	printf("�ƹ�Ű�� ���� ��� ���θ޴��� ���ư��ϴ�.");
	system("pause");
}
void main_select()
{
	
	while (true)
	{
		system("cls");
		int select = 0;
		printf("1.$���ӽ���$\n\n");
		printf("2.$���ӱ�Ģ$");
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
		printf("������ �����մϴ�.");
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
		printf("1.ī��ޱ�         2.���߱�\n");
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
	printf("�� �� �� . ");
	p();
	system("cls");
	
	main_select();
	Sleep(1500);
	system("cls");

	in_game();
	


	return 0;

}