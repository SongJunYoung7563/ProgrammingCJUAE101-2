#include <stdio.h>//������Ʈ�� ����µ� �ʿ��� �������
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void p();//�����
void main_select();//���θ޴�
void rule();//���ӱ�Ģ
int com_card();//��ǻ���� ī��̱�(ī�� 2���� ���� �� �� ���� ������ �����Ѵ�.)
int player_card();//�÷��̾��� ī��̱�(ī�� 2���� �̴´�.)
int p_recv(int player);//�÷��̾ ī�� 2���� ���� �� �߰��� ī�带 �̴� �Լ�
void end_game();//�� ���� ������ ��� �� ������ ���������� �����Ѵ�.
void in_game();//�÷��̾ ī�带 ���� ������ �� �������� �����ϸ�, �¸�,���º�,�й� ������ �ִ�.
void p()
{
	int i = 0;
	for (i = 0; i <= 2; i++)//2��
	{
		Sleep(1000);//1�� ���� ��ٸ��� ���� ��´�.
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
		printf("1.$���ӽ���$\n\n");//1. ���ӽ��� 2. ���ӱ�Ģ�� ����.
		printf("2.$���ӱ�Ģ$\n");
		scanf_s("%d", &select);//1,2 �����ϳ��� ���ڸ� �޴´�.
		
		switch (select)
		{
			case 1 :
			{
				system("cls");
				printf(" S T A R T !");//1�� ������� ��ŸƮ ������ ����Ѵ�.
				break;
			}
			case 2 : 
			{
				system("cls");
				rule();//2�� ������� ���ӱ�Ģ�� ����Ѵ�.
				break;
			}
		}
		if (select == 1)
		{
			in_game();//��ŸƮ ������ ����ѵ�,������ ���۵ȴ�.
		}
	}
}
int com_card()
{
	int c1, c2, c, sum,result = 0;
	c1 = rand() % 10 + 1;//��ǻ���� ù��° ī��
	c2 = rand() % 10 + 1;//��ǻ���� �ι�° ī��
	sum = c1 + c2;//�� ī���� ��
	
		while (sum <= 14)//��ǻ���� 1,2��° ī���� ���� 14������ ��� �߰��� ī�带 �̴´�.
		{
			
			c = rand() % 10 + 1;
			result += c;
			if (result + sum > 14)//�� ī���� ���� 14���� Ŀ����� �����.
			{
				result = result + sum;
				return result;
			}
		}
	
	
}
int player_card()
{
	int c1, c2, sum, result = 0;
	c1 = rand() % 10 + 1;//�÷��̾��� ù��° ī��
	c2 = rand() % 10 + 1;//�÷��̾��� �ι�° ī��
	sum = c1 + c2;//�÷��̾��� 1,2��° ī���� ��
	return sum;
}
int p_recv(int player)//�÷��̾ ī�� 2���� ���� �� �߰��� ���� �� ī����� �� ��
{
	int c, sum = 0;
	c = rand() % 10 + 1;
	sum = c + player;
	return sum;
}
void end_game()//�� ������ ���� ��
{
	int Game = 0;
	system("cls");
	printf("1.Retry?         2.Finish");//�ٽ� ������ ������ �� ������ ���´�.
	scanf_s("%d", &Game);
	if (Game == 1)
	{
		main_select();//1�� �Է¹����� ������ �ٽ� �����Ѵ�.
	}
	else if (Game == 2)
	{
		system("cls");
		printf("������ �����մϴ�.");//2�� �Է¹����� ������ �Բ� ������ ����ȴ�.
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
		printf("Me               Com\n\n");//����ȭ��
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
			if (player_total > com_total && player_total <= 21)//�÷��̾��� ī�尡 ��ǻ���� ī���պ��� ũ�� 21���� �۰ų� ���� �� �¸��Ѵ�.
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > player_total && com_total <= 21)//��ǻ���� ī�尡 �÷��̾��� ī���պ��� ũ�� 21���� �۰ų� ���� �� �¸��Ѵ�.
			{
				system("cls");
				printf("You Lose!");
				Sleep(5000);
				end_game();
			}
			else if (com_total == player_total)//�÷��̾��� ī�尡 ��ǻ���� ī���հ� ���� ���ٸ� ����.
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21 && player_total > 21)//��ǻ���� ī���հ� �÷��̾��� ī�� ���� ���� 21�� ���� ��� ����.
			{
				system("cls");
				printf("Draw!");
				Sleep(5000);
				end_game();
			}
			else if (com_total > 21)//��ǻ���� ī������ 21�� ������ �÷��̾ �¸��Ѵ�.
			{
				system("cls");
				printf("Player Win!");
				Sleep(5000);
				end_game();
			}
			else if (player_total > 21)//�÷��̾��� ī������ 21�� ������ ��ǻ�Ͱ� �¸��Ѵ�.
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

	printf("- - - - - - - - - - -\n");//Ÿ��Ʋ ���
	printf("l                   l\n");
	printf("l  $The black jack$ l\n");
	printf("l                   l\n");
	printf("- - - - - - - - - - -\n\n\n");

	system("pause");
	printf("�� �� �� . ");
	p();
	system("cls");
	
	main_select();//���θ޴� ����
	Sleep(1500);
	system("cls");

	in_game();//���ӽ���
	


	return 0;

}