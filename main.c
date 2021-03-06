#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define length 10               // 아이디와 비밀번호 length로 함

typedef struct data {            // 아이디와 비밀번호를 담을 구조체 선언
    char id[length + 1];         // NULL을 마지막에 들어가기 때문에 +1을 한다
    char pw[length + 1];
}D;

D member[1];      // 하나의 구조체 member로 설정.

int i = 0;

void login();      // id 만드는 함수
void login2();      // password 만드는 함수
void introduce();

int main()
{
    introduce();
    login();
    login2();

    printf("\"%s\" 님의 회원가입이 완료되었습니다.\n\n", member->id);
    printf("로그인을 하려면 키를 입력하시오\n");
    getch();
    system("cls");

    return 0;
}
void introduce()
{
    printf("<회원가입 유의사항>\n\n");
    printf("1. 아이디와 비밀번호의 길이는 10자이내로 합니다.\n");
    printf("2. 아이디와 비밀번호는 소문자와 숫자의 조합으로 합니다.\n");
    printf("3. 띄어쓰기는 불가능 합니다.\n\n");
}

void login()   // id 만드는 함수
{
    char* str;

rute:

    printf("아이디를 입력하시오 : __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", member->id, sizeof(member->id));         // member.id에 저장됨.

    str = member->id;      // member.id를 str에 옮김.

    if (strlen(str) == 0)                           // 글자수 검사
    {
        printf("글자수를 초과하였습니다.\n");
        goto rute;
    }

    for (i = 0; i < strlen(str); i++)                  // 소문자나 숫자의 검사
    {
        if (isdigit(*(str + i)) == 0 && islower(*(str + i)) == 0)
        {
            printf("소문자나 숫자의 조합이 아닙니다.\n");
            goto rute;
        }
    }
}

void login2()   // password 만드는 함수
{
    char* str2;

rute:

    printf("비밀번호를 입력하시오 : __________\b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", member->pw, sizeof(member->pw));         // member.pw에 저장됨.

    str2 = member->pw;

    if (strlen(str2) == 0)                           // 글자수 검사
    {
        printf("글자수를 초과하였습니다.\n");
        goto rute;
    }

    for (i = 0; i < strlen(str2); i++)                  // 소문자나 숫자의 검사
    {
        if (isdigit(*(str2 + i)) == 0 && islower(*(str2 + i)) == 0)
        {
            printf("소문자나 숫자의 조합이 아닙니다.\n");
            goto rute;
        }
    }
}