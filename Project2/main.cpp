#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define The_Number_Of_Question 7

typedef struct {

	char A[50];
}Answer;
Answer list[The_Number_Of_Question] = {
		{"WATER"},
		{"SOJU"},
		{"KID"},
		{"MADONNA"},
		{"WING"},
		{"CARBON DIOXIDE"},
		{"LE PETIT PRINCE"}
};
void Intro(); //���α׷� ����
void loading();//�ε���
void Story();//�� ��
void Q1();//���� 1��
void Q2();//���� 2��
void Q3();//���� 3��
void Q4();//���� 4��
void Q5();//���� 5��
void Q6();//���� 6��
void Q7();//���� 7��
void O();//������ ���� ���
void X();//������ Ʋ�� ���
void outro();
int main()
{
	Intro();
	system("pause");
	system("cls");
	loading();
	Story();
	system("cls");
	Q1();
	Q2();
	Q3();
	Q4();
	Q5();
	Q6();
	Q7();
	system("cls");
	outro();

	return 0;
}
void Intro()
{
	printf("------------------\n");
	printf("------------------\n");
	printf("l                l\n");
	printf("l                l\n");
	printf("l T h e  T e s t l\n");
	printf("l                l\n");
	printf("l                l\n");
	printf("------------------\n");
	printf("------------------\n");
}
void loading()
{
	printf("------------------\n");
	printf("------------------\n");
	printf(" ��  ��  �� . . . \n");
	printf("------------------\n");
	printf("------------------\n");
	Sleep(3000);
	system("cls");
	printf("------------------\n");
	printf("------------------\n");
	printf(" ��  ��  ��  ��  !\n");
	printf("------------------\n");
	printf("------------------\n");
	Sleep(1500);
	system("cls");

}
void Story()
{
	puts("����� ���� 'â���� ����' ���� �߰���縦 ���� �ֽ��ϴ�.");
	Sleep(3500);
	system("cls");
	puts("�ε� ��� ������ ���� ������ �޾ư��ñ� �ٶ��ϴ�.");
	Sleep(3500);
	system("cls");
	puts("��� ������ �� �빮��(����)�� �Է��ؾ��մϴ�!(�߿�!)");
	system("pause");
}
void Q1()
{
	char reply[30];
	char* str[1];

	while (1)
	{
		puts("Q1");//���� ����
		puts("�μ�ҿ��� ���� ����鿡�� ������ �� �������� ����� ����");
		puts("������ ���� ���ڵ��� �����Ͽ� �μ⹰�� ���´�.");
		puts("<56>-<2983>-<5986>-<7259>-<4613> \n");
		puts("���� ������� �� �������� ���� A�� ���� �� �� �־���.\nA�� ���� �ֹε��� ���� �ʿ��� ���� ? \n");
		gets_s(reply);//���� �޴´�.
		str[0] = (char*)malloc(strlen(reply) + 1);//���� ���� ���̸�ŭ ����Ʈ�� �Ҵ��Ѵ�.
		strcpy(str[0], reply);//���� ���� �迭�� �����Ѵ�.
		if (strcmp(str[0], list[0].A) == 0)//strcmp�Լ��� �̿��Ͽ� ���� ��� �ش��� ���Ͽ� ����� ����Ѵ�.
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[0].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}

}
void Q2()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q2");
		puts("�� Tree *2 = A , ��Sun *2 = B, �� Sun *3 = C");
		puts("A+B+C = D �̴�. D�� �� ��ǥ�ϴ� ��ü�� �����ΰ�?");
		gets_s(reply);
		str[0] = (char*)malloc(strlen(reply) + 1);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[1].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[1].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}
}
void Q3()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q3");
		puts("������ �������� ���� �� �ܰ����� �������� ����Ű��");
		puts("11���� �հ������� ������ ���� ���ڸ� ����� ������� ��� ������.\n");
		puts("�� ߲   < ' _ _ ߲ ��     <  ' ��\n");
		puts("���� �γ��� �ǻ�� �� ������ �ʾ� �ܰ� �ؼ��ϰ�� �ǰ��� �´�.");
		puts("�ܰ� �ؼ��Ͽ� �� �ӿ��� ���� ��������. (Answer : 3 letters)");
		gets_s(reply);
		str[0] = (char*)malloc(strlen(reply) + 1);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[2].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[2].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}

}
void Q4()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q4");
		puts("������ �ȿ� �پ��� �������� �־���.");
		puts("Aquamarine - Peridot - Turquoise - Opal - Topaz x2 - Diamond");
		puts("�� �������� ������ �����ϱ�?");
		str[0] = (char*)malloc(strlen(reply) + 1);
		gets_s(reply);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[3].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[3].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}

}
void Q5()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q5");
		puts("[����] ���� �����ؼ� [����] ���� ������");
		puts("�r �� ��");
		puts("�� ŧ Ǳ");
		puts("�� �� ��");
		gets_s(reply);
		str[0] = (char*)malloc(strlen(reply) + 1);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[4].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[4].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}
}
void Q6()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q6");
		puts("Inventory");
		puts("2nd[1��,��ü],8th[2��,���Ż]");
		puts("Shop[���� �ݾ� : 5��](������ ������ ������ �� �ִ�.)(���� �������� �Ǹ� �����ϴ�.)");
		puts("8th[2��,���Ż],9th[2��,�ҷ���],6th[2��,���Ż],15th,[3��,���Ż],8th[2��,���Ż]\n");
		puts("Rule");
		puts("���� ������ 3�� �����ϸ� �������鼭 ��޾��� �ȴ�.[ex A + A + A = A2]");
		puts("������ ������ ������� ����� ���ٸ� �ɷ�ġ�� ����.");
		puts("����� ���� ���� �ɷ�ġ�� ����.");
		puts("���ֵ鿡�� Ư���� �����Ѵ�. ���� Ư���� 2�� �̻��� �� ������ ȿ���� �ߵ��Ѵ�.");
		puts("���� ���� ���� ������ ���� �� �� ������ �̸��� �˾Ƴ��ÿ�.");
		gets_s(reply);
		str[0] = (char*)malloc(strlen(reply) + 1);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[5].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[5].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}

}
void Q7()
{
	char reply[30];
	char* str[1];
	while (1)
	{
		puts("Q7");
		puts("���� ũ�� ���� ���� �������� �� �̸��� �� ���迡��");
		puts("�ڱ� �ڽ��� ������ ���ƺ��� ������ �϶�.");
		puts("������ ������ ������ ���� ���� �� �� ���� ���̴�.\n");
		puts("������ - SENTIME(?1)(?2)(?3)(?4)\n");
		puts("(?2)(?4)(?1)(?3)�� ������ ��ġ�� �� �ڽ��� 'ģ��'�� ��ٸ���.\n");
		puts("'ģ��'�� �̸��� �����ϱ�?");
		gets_s(reply);
		str[0] = (char*)malloc(strlen(reply) + 1);
		strcpy(str[0], reply);
		if (strcmp(str[0], list[6].A) == 0)
		{
			O();
			system("cls");
			break;
		}
		else if (strcmp(str[0], list[6].A) != 0)
		{
			X();
			system("cls");
			continue;
		}
		free(str);
	}
}
void O()
{
	puts("�����Դϴ�!");
	puts("���� ������ �Ѿ�ϴ�!");
	Sleep(1500);
}
void X()
{
	puts("�����Դϴ�!");
	puts("������ �ٽ� �Է����ּ���!");
	Sleep(1500);
}
void outro()
{
	puts("����� 100�� ������ �޾ҽ��ϴ�!");
	puts("���ϵ帳�ϴ�!");
}