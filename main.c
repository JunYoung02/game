#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define length 10               // ���̵�� ��й�ȣ length�� ��

typedef struct data {            // ���̵�� ��й�ȣ�� ���� ����ü ����
    char id[length + 1];         // NULL�� �������� ���� ������ +1�� �Ѵ�
    char pw[length + 1];
}D;

D member[1];      // �ϳ��� ����ü member�� ����.

int i = 0;

void login();      // id ����� �Լ�
void login2();      // password ����� �Լ�
void introduce();

int main()
{
    introduce();
    login();
    login2();

    printf("\"%s\" ���� ȸ�������� �Ϸ�Ǿ����ϴ�.\n\n", member->id);
    printf("�α����� �Ϸ��� Ű�� �Է��Ͻÿ�\n");
    getch();
    system("cls");

    return 0;
}
void introduce()
{
    printf("<ȸ������ ���ǻ���>\n\n");
    printf("1. ���̵�� ��й�ȣ�� ���̴� 10���̳��� �մϴ�.\n");
    printf("2. ���̵�� ��й�ȣ�� �ҹ��ڿ� ������ �������� �մϴ�.\n");
    printf("3. ����� �Ұ��� �մϴ�.\n\n");
}

void login()   // id ����� �Լ�
{
    char* str;

rute:

    printf("���̵� �Է��Ͻÿ� : __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", member->id, sizeof(member->id));         // member.id�� �����.

    str = member->id;      // member.id�� str�� �ű�.

    if (strlen(str) == 0)                           // ���ڼ� �˻�
    {
        printf("���ڼ��� �ʰ��Ͽ����ϴ�.\n");
        goto rute;
    }

    for (i = 0; i < strlen(str); i++)                  // �ҹ��ڳ� ������ �˻�
    {
        if (isdigit(*(str + i)) == 0 && islower(*(str + i)) == 0)
        {
            printf("�ҹ��ڳ� ������ ������ �ƴմϴ�.\n");
            goto rute;
        }
    }
}

void login2()   // password ����� �Լ�
{
    char* str2;

rute:

    printf("��й�ȣ�� �Է��Ͻÿ� : __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", member->pw, sizeof(member->pw));         // member.pw�� �����.

    str2 = member->pw;

    if (strlen(str2) == 0)                           // ���ڼ� �˻�
    {
        printf("���ڼ��� �ʰ��Ͽ����ϴ�.\n");
        goto rute;
    }

    for (i = 0; i < strlen(str2); i++)                  // �ҹ��ڳ� ������ �˻�
    {
        if (isdigit(*(str2 + i)) == 0 && islower(*(str2 + i)) == 0)
        {
            printf("�ҹ��ڳ� ������ ������ �ƴմϴ�.\n");
            goto rute;
        }
    }
}