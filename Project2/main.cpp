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
void Intro(); //프로그램 실행
void loading();//로딩중
void Story();//서 론
void Q1();//문제 1번
void Q2();//문제 2번
void Q3();//문제 3번
void Q4();//문제 4번
void Q5();//문제 5번
void Q6();//문제 6번
void Q7();//문제 7번
void O();//문제가 맞을 경우
void X();//문제가 틀릴 경우
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
	printf(" 로  딩  중 . . . \n");
	printf("------------------\n");
	printf("------------------\n");
	Sleep(3000);
	system("cls");
	printf("------------------\n");
	printf("------------------\n");
	printf(" 로  딩  완  료  !\n");
	printf("------------------\n");
	printf("------------------\n");
	Sleep(1500);
	system("cls");

}
void Story()
{
	puts("당신은 지금 '창의적 사고력' 과목 중간고사를 보고 있습니다.");
	Sleep(3500);
	system("cls");
	puts("부디 모든 문제를 맞춰 만점을 받아가시길 바랍니다.");
	Sleep(3500);
	system("cls");
	puts("모든 문제는 꼭 대문자(영문)로 입력해야합니다!(중요!)");
	system("pause");
}
void Q1()
{
	char reply[30];
	char* str[1];

	while (1)
	{
		puts("Q1");//문제 내용
		puts("인쇄소에서 마을 사람들에게 나누어 줄 전단지를 만들기 위해");
		puts("다음과 같은 숫자들을 주조하여 인쇄물을 찍어냈다.");
		puts("<56>-<2983>-<5986>-<7259>-<4613> \n");
		puts("마을 사람들은 이 전단지를 보고 A에 대해 알 수 있었다.\nA에 대해 주민들이 가장 필요한 것은 ? \n");
		gets_s(reply);//답을 받는다.
		str[0] = (char*)malloc(strlen(reply) + 1);//받은 답의 길이만큼 바이트를 할당한다.
		strcpy(str[0], reply);//받은 답을 배열에 복사한다.
		if (strcmp(str[0], list[0].A) == 0)//strcmp함수를 이용하여 받은 답과 해답을 비교하여 결과를 출력한다.
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
		puts("ㅡ Tree *2 = A , ㅣSun *2 = B, △ Sun *3 = C");
		puts("A+B+C = D 이다. D일 때 대표하는 액체는 무엇인가?");
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
		puts("법정에 증인으로 서게 된 외계인은 누군가를 가르키며");
		puts("11개의 손가락으로 다음과 같은 문자를 남기고 지장까지 찍고 떠났다.\n");
		puts("ㅓ 三   < ' _ _ 三 ⊃     <  ' ⊃\n");
		puts("명석한 두뇌의 판사는 얼마 지나지 않아 외계어를 해석하고는 판결을 냈다.");
		puts("외계어를 해석하여 그 속에서 답을 유추하자. (Answer : 3 letters)");
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
		puts("보석함 안에 다양한 보석들이 있었다.");
		puts("Aquamarine - Peridot - Turquoise - Opal - Topaz x2 - Diamond");
		puts("이 보석함의 주인은 누구일까?");
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
		puts("[가어] 에서 시작해서 [샤휴] 에서 끝난다");
		puts("쳑 ㅏ 헛");
		puts("ㄵ 큘 풉");
		puts("동 ㅑ 툠");
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
		puts("2nd[1원,기체],8th[2원,논메탈]");
		puts("Shop[보유 금액 : 5원](상점의 유닛을 구입할 수 있다.)(구입 가격으로 판매 가능하다.)");
		puts("8th[2원,논메탈],9th[2원,할로젠],6th[2원,논메탈],15th,[3원,논메탈],8th[2원,논메탈]\n");
		puts("Rule");
		puts("같은 유닛을 3개 소유하면 합쳐지면서 등급업이 된다.[ex A + A + A = A2]");
		puts("유닛의 종류에 상관없이 등급이 같다면 능력치가 같다.");
		puts("등급이 높을 수록 능력치가 높다.");
		puts("유닛들에겐 특성이 존재한다. 동일 특성이 2개 이상일 때 강력한 효과가 발동한다.");
		puts("현재 가장 강한 조합을 만든 후 그 조합의 이름을 알아내시오.");
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
		puts("가장 크고 붉은 것을 시작으로 그 이름을 딴 세계에서");
		puts("자기 자신을 스스로 돌아보는 여행을 하라.");
		puts("여행의 끝에서 잊혀진 것을 마주 할 수 있을 것이다.\n");
		puts("여행경로 - SENTIME(?1)(?2)(?3)(?4)\n");
		puts("(?2)(?4)(?1)(?3)은 여행을 마치고 올 자신의 '친구'를 기다린다.\n");
		puts("'친구'의 이름은 무엇일까?");
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
	puts("정답입니다!");
	puts("다음 문제로 넘어갑니다!");
	Sleep(1500);
}
void X()
{
	puts("오답입니다!");
	puts("정답을 다시 입력해주세요!");
	Sleep(1500);
}
void outro()
{
	puts("당신은 100점 만점을 받았습니다!");
	puts("축하드립니다!");
}