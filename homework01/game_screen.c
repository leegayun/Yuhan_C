#include "game_screen.h"

int title_screen()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 95);
    tap(line, 23,95);
    printStringToScreen(line, "( Ꮚ´ ꒳ `  Ꮚ", 18, 145);
    tap(line, 18,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 190);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "몽실이와", 12, 245);
    tap(line, 12,245);
    printStringToScreen(line, "대화하기 ♥", 16, 285);
    tap(line, 16,285);
    tap(line, 16,286);
    printStringToScreen(line, "1. 게임 시작", 16, 329);
    tap(line, 16,329);
    printStringToScreen(line, "2. 게임 방법", 16, 372);
    tap(line, 16,372);
    printStringToScreen(line, "3. 게임 종료", 16, 415);
    tap(line, 16,415);
    tap(line, 16,416);
    tap(line, 16,417);
    tap(line, 16,418);

    for (i = 435; i < 501; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int title_screen2()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 95);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "몽실이와", 12, 244);
    tap(line, 12,244);
    printStringToScreen(line, "대화하기 ♡", 16, 284);
    tap(line, 16,284);
    tap(line, 16,285);
    printStringToScreen(line, "1. 게임 시작", 16, 328);
    tap(line, 16,328);
    printStringToScreen(line, "2. 게임 방법", 16, 371);
    tap(line, 16,371);
    printStringToScreen(line, "3. 게임 종료", 16, 414);
    tap(line, 16,414);
    tap(line, 16,415);
    tap(line, 16,416);
    tap(line, 16,417);

    for (i = 434; i < 500; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int how_to_play()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "이 친구의 이름은 몽실이에요.", 40,234);
    tap(line, 40,234);
    printStringToScreen(line, "당신은 이유는 모르지만, 몽실이와 친해져야 합니다.", 70,284);
    tap(line, 70,284);
    tap(line, 70,285);
    tap(line, 70,286);
    tap(line, 70,287);
    tap(line, 70,288);
    tap(line, 70,289);
       

    for (i = 360; i < 426; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int how_to_play2()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "기왕 하는 거 열심히 친해져봅시다!", 47,232);
    tap(line, 47,232);
    printStringToScreen(line, "새 친구도 사귀고 좋잖아요.", 37,299);
    tap(line, 37,299);
    printStringToScreen(line, "몽실이가 좋아할 것 같은 대답을 골라주며 호감도를 쌓아보아요!", 86,341);
    tap(line, 86,341);
    tap(line, 86,342);
    tap(line, 86,343);
    tap(line, 86,344);
    tap(line, 86,345);
       

    for (i = 432; i < 498; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int how_to_play3()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "중간중간 스크립트를 넘겨야 할 땐", 46,232);
    tap(line, 46,232);
    printStringToScreen(line, "별도의 설명이 없을 시, 1을 입력하시면 넘어갑니다.", 69,288);
    tap(line, 69,288);
    tap(line, 69,289);
    tap(line, 69,290);
    tap(line, 69,291);
    tap(line, 69,292);
    tap(line, 69,293);
       

    for (i = 363; i < 429; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}


int game_start1()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "안녕! 난 몽실이야.", 25,280);
    tap(line, 25,280);
    tap(line, 25,281);
    tap(line, 25,282);
    tap(line, 25,283);
    tap(line, 25,284);
    tap(line, 25,285);           

    for (i = 311; i < 377; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int choice1()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "반가워 친구야~", 20,282);
    tap(line, 20,282);
    printStringToScreen(line, "오늘부터 밥도 같이 먹고 친하게 지내자!", 54,317);
    tap(line, 54,317);
    tap(line, 54,318);
    tap(line, 54,319);
    tap(line, 54,320);
    tap(line, 54,321);

    for (i = 376; i < 442; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int choice2()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "안녕~", 7,286);
    tap(line, 7,286);
    printStringToScreen(line, "(얘 벌써 노잼의 향기가 나는데...)", 45,310);
    tap(line, 45,310);
    tap(line, 45,311);
    tap(line, 45,312);
    tap(line, 45,313);
    tap(line, 45,314);

    for (i = 360; i < 426; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int choice3()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(ㅗ ◠ ‿ ◠ ㅗ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    printStringToScreen(line, "[몽실이]", 11,247);
    tap(line, 11,247);
    tap(line, 11,248);
    printStringToScreen(line, "그럼 꺼져", 13,287);
    tap(line, 13,287);   
    tap(line, 13,288);  
    tap(line, 13,289);  
    tap(line, 13,290);  
    tap(line, 13,291);  
    tap(line, 13,292);  

    for (i = 306; i < 372; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int game_over_screen()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(ㅗ ◠ ‿ ◠ ㅗ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    printStringToScreen(line, "** GAME  OVER **", 16,243);
    tap(line, 16,243);
    tap(line, 16,244);
    printStringToScreen(line, "몽실이에게 조금 다정하게 대해주는 건 어떨까요?", 66,272);
    tap(line, 66,272);
    tap(line, 66,273);
    tap(line, 66,274);
    tap(line, 66,275);
    tap(line, 66,276);
    tap(line, 66,277);

    for (i = 344; i < 410; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question1()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "너 c언어 과제 다 했어?", 30,278);
    tap(line, 30,278);
    tap(line, 30,279);
    tap(line, 30,280);
    tap(line, 30,281);
    tap(line, 30,282);
    tap(line, 30,283);

    for (i = 314; i < 380; i++)  // '@' 출력. 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question1_answer1_2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "아 그래?", 11,285);
    tap(line, 11,285);
    printStringToScreen(line, "나 그럼 너 과제 베껴도 돼?", 36,316);
    tap(line, 36,316);
    tap(line, 36,317);
    tap(line, 36,318);
    tap(line, 36,319);
    tap(line, 36,320);

    for (i = 357; i < 423; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question1_answer3()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "헐 나돈데..", 15,284);
    tap(line, 15,284);
    printStringToScreen(line, "얼른 해 봐 너 것 좀 베끼게", 36,319);
    tap(line, 36,319);
    tap(line, 36,320);
    tap(line, 36,321);
    tap(line, 36,322);
    tap(line, 36,323);

    for (i = 360; i < 426; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int answer_choice1()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◔ _ ◔ Ꮚ", 18, 145);
    tap(line, 18,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 190);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "아니거든?? 농담이야;", 28,278);
    tap(line, 28,278);
    printStringToScreen(line, "(이래서 눈치빠른 놈은 싫다니까)", 44,322);
    tap(line, 44,322);
    tap(line, 44,323);
    tap(line, 44,324);
    tap(line, 44,325);
    tap(line, 44,326);

    for (i = 371; i < 437; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int answer_choice2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◔ _ ◔ Ꮚ", 18, 145);
    tap(line, 18,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 190);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "어..진짜로?", 15,282);
    tap(line, 15,282);
    printStringToScreen(line, "(농담이었는데 의문의 개이득)", 40,315);
    tap(line, 40,315);
    tap(line, 40,316);
    tap(line, 40,317);
    tap(line, 40,318);
    tap(line, 40,319);

    for (i = 360; i < 426; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question2_1()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "어찌됐든..칙칙하게 과제 얘기 그만하고", 53,272);
    tap(line, 53,272);
    printStringToScreen(line, "재밌는 얘기나 하나 하자.", 34,347);
    tap(line, 34,347);
    tap(line, 34,348);
    tap(line, 34,349);
    tap(line, 34,350);
    tap(line, 34,351);

    for (i = 386; i < 452; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question2_2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "ㅇㅇㅋㅋㅋㅋ", 18,283);
    tap(line, 18,283);
    printStringToScreen(line, "야 첫사랑 얘기 함 해봐", 31,323);
    tap(line, 31,323);
    tap(line, 31,324);
    tap(line, 31,325);
    tap(line, 31,326);
    tap(line, 31,327);

    for (i = 359; i < 425; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question2_answer1()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "왜, 얘기 할 첫사랑이 없기라도 해?", 46,273);
    tap(line, 46,273);
    printStringToScreen(line, "에이 설마 그건 아니겠지(ㅋㅋ)", 41,338);
    tap(line, 41,338);
    tap(line, 41,339);
    tap(line, 41,340);
    tap(line, 41,341);
    tap(line, 41,342);

    for (i = 384; i < 450; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question2_answer2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "뭐..? 이 불쌍한 놈..", 26,279);
    tap(line, 26,279);
    printStringToScreen(line, "(몽실이는 당신을 측은한 듯 바라보았다..)", 56,318);
    tap(line, 56,318);
    tap(line, 56,319);
    tap(line, 56,320);
    tap(line, 56,321);
    tap(line, 56,322);

    for (i = 379; i < 445; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story_start()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "어? 내 첫사랑 얘기?", 26,280);
    tap(line, 26,280);
    printStringToScreen(line, "뭐 그래 까짓꺼 해줄게.", 31,328);
    tap(line, 31,328);
    tap(line, 31,329);
    tap(line, 31,330);
    tap(line, 31,331);
    tap(line, 31,332);

    for (i = 364; i < 430; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story1()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "때는 중학교 3학년...", 27,279);
    tap(line, 27,279);
    printStringToScreen(line, "1학기 첫 날부터 눈에 띄는 아이가 있었지...", 58,320);
    tap(line, 58,320);
    tap(line, 58,321);
    tap(line, 58,322);
    tap(line, 58,323);
    tap(line, 58,324);

    for (i = 383; i < 449; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "눈이 아주 맑은 아이였어...", 36,277);
    tap(line, 36,279);
    printStringToScreen(line, "성격도 좋아서 인기도 많았었지...", 45,332);
    tap(line, 45,332);
    tap(line, 45,333);
    tap(line, 45,334);
    tap(line, 45,335);
    tap(line, 45,336);

    for (i = 382; i < 448; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story3()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "난 그 아이에게 다가가고 싶었지만", 46,275);
    tap(line, 46,275);
    printStringToScreen(line, "나 말고도 걜 좋아하는 애들이 많았던지라 겁먹고 다가가지 못했어.", 90,325);
    tap(line, 90,325);
    tap(line, 90,326);
    tap(line, 90,327);
    tap(line, 90,328);
    tap(line, 90,329);

    for (i = 420; i < 486; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story4()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "그러던 어느 날,", 21,281);
    tap(line, 21,281);
    printStringToScreen(line, "갑자기 그 애가 학교를 나오지 않게 된 거야.", 59,315);
    tap(line, 59,315);
    tap(line, 59,316);
    tap(line, 59,317);
    tap(line, 59,318);
    tap(line, 59,319);

    for (i = 379; i < 445; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story5()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "심장이 철렁하더라고.멀쩡히 다니던 애가 갑자기 안나온다니까...", 87,261);
    tap(line, 87,261);
    printStringToScreen(line, "선생님한테 다급하게 물어보니까 학교를 그만뒀다는거야.", 77,355);
    tap(line, 77,355);
    tap(line, 77,356);
    tap(line, 77,357);
    tap(line, 77,358);
    tap(line, 77,359);


    for (i = 437; i < 503; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story6()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "그렇게 허무하게 내 첫사랑은 끝을 맽게..", 55,271);
    tap(line, 55,271);
    printStringToScreen(line, "되는 줄 알았는데....", 27,350);
    tap(line, 27,350);
    tap(line, 27,351);
    tap(line, 27,352);
    tap(line, 27,353);
    tap(line, 27,354);

    for (i = 382; i < 448; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story7()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "며칠 전에 템플스테이를 다녀왔거든?", 49,273);
    tap(line, 49,273);
    printStringToScreen(line, "그런데 거기서 그 애를 만났어...", 43,342);
    tap(line, 43,342);
    tap(line, 43,343);
    tap(line, 43,344);
    tap(line, 43,345);
    tap(line, 43,346);

    for (i = 390; i < 456; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story8()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "스님이랑.. 손님으로..;;", 31,279);
    tap(line, 31,279);
    tap(line, 31,280);
    tap(line, 31,281);
    tap(line, 31,282);
    tap(line, 31,283);
    tap(line, 31,284);           

    for (i = 316; i < 382; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story9()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "잠시만 앉아서 얘기를 하는데", 39,276);
    tap(line, 39,276);
    printStringToScreen(line, "글쎄 그 애도 날 기억하고 있는거야", 47,332);
    tap(line, 47,332);
    tap(line, 47,333);
    tap(line, 47,334);
    tap(line, 47,335);
    tap(line, 47,336);

    for (i = 384; i < 450; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story10()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "갑자기 절에 들어가게 되었다고...", 45,275);
    tap(line, 45,275);
    printStringToScreen(line, "그런데..사실 절에 들어가기 전부터 나를...", 57,333);
    tap(line, 57,333);
    tap(line, 57,334);
    tap(line, 57,335);
    tap(line, 57,336);
    tap(line, 57,337);

    for (i = 395; i < 461; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story11()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ㅠ o ㅠ Ꮚ", 18, 145);
    tap(line, 18,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 190);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "나를..허흑...흑..흑..", 27,278);
    tap(line, 27,278);
    printStringToScreen(line, "나를 좋아하고 있었다고.....", 37,324);
    tap(line, 37,324);
    tap(line, 37,325);
    tap(line, 37,326);
    tap(line, 37,327);
    tap(line, 37,328);

    for (i = 366; i < 432; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int first_love_story12()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ㅠ o ㅠ Ꮚ", 18, 145);
    tap(line, 18,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 190);
    tap(line, 24,190);
    tap(line, 24,191);
    tap(line, 24,192);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "자긴 스님이라서 속세의 사람과 엮일 수 없대..", 62,269);
    tap(line, 62,269);
    printStringToScreen(line, "하....내 첫사랑이 그렇게 가버린거야...", 52,347);
    tap(line, 52,347);
    tap(line, 52,348);
    tap(line, 52,349);
    tap(line, 52,350);
    tap(line, 52,351);

    for (i = 403; i < 469; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question3()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "...너..처음엔 노잼에 별로일 줄 알았는데", 54,270);
    tap(line, 54,270);
    printStringToScreen(line, "생각보다 정말 좋은 녀석이었구나...", 48,342);
    tap(line, 48,342);
    tap(line, 48,343);
    tap(line, 48,344);
    tap(line, 48,345);
    tap(line, 48,346);

    for (i = 395; i < 461; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int question3_answer()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "[몽실이]", 11,244);
    tap(line, 11,244);
    tap(line, 11,245);
    printStringToScreen(line, "내 첫사랑 얘기를 듣고 주작이라고 하거나", 56,270);
    tap(line, 56,270);
    printStringToScreen(line, "비웃지 않은 녀석은 네가 처음이야.", 47,342);
    tap(line, 47,342);
    tap(line, 47,343);
    tap(line, 47,344);
    tap(line, 47,345);
    tap(line, 47,346);

    for (i = 394; i < 460; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int ending()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@'; 
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◠ ᗜ ◠ Ꮚ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    printStringToScreen(line, "[몽실이]", 11,247);
    tap(line, 11,247);
    tap(line, 11,248);
    printStringToScreen(line, "우리 정말 좋은 친구가 될 수 있겠다.", 49,276);
    tap(line, 49,276);
    printStringToScreen(line, "앞으로 진짜로 친하게 지내자, 친구야!!", 52,341);
    tap(line, 52,341);
    tap(line, 52,342);
    tap(line, 52,343);
    tap(line, 52,344);
    tap(line, 52,345);

    for (i = 398; i < 464; i++)  // '@' 출력
    {
        line[i] = '@'; // 앞숫자엔 마지막줄 두 숫자 더해서+1값하고 뒤에숫자는 그거에 +66
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int end_script()
{
    int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◠ ᗜ ◠ Ꮚ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    tap(line, 24,195);
    printStringToScreen(line, "이야, 축하드려요!", 24,243);
    tap(line, 24,243);
    printStringToScreen(line, "몽실이와 진정한 친구가 되셨군요!", 46,284);
    tap(line, 46,284);
    tap(line, 46,285);
    tap(line, 46,286);
    tap(line, 46,287);
    tap(line, 46,288);
    tap(line, 46,289);
       

    for (i = 336; i < 402; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int end_script2()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◠ ᗜ ◠ Ꮚ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    tap(line, 24,195);
    printStringToScreen(line, "앞으로 몽실이와의 진한 우정,", 40,239);
    tap(line, 40,239);
    printStringToScreen(line, "오래오래 이어나가시길 바랍니다!", 45,297);
    tap(line, 45,297);
    tap(line, 45,298);
    tap(line, 45,299);
    tap(line, 45,300);
    tap(line, 45,301);
    tap(line, 45,302);
       

    for (i = 348; i < 414; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}

int end_script3()
{
        int strPrint(const char* string)
    {
        char *a;
        a = (char* )string;
        printf("%s",a);
        return 0;
    }

    int printStringToScreen(char* line, const char* str, int strLength, int pos)
    {
        int i = 0;
        for (i = 0; i < strLength; i++)
        {
             line[i + pos] = str[i];
        }
    }

    int tap(char* line, int strLength, int pos)
    {
        line[strLength + pos +1] = '\n';
    }

    char line[530];

    int i = 0;
    while(i < 66)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 66; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    //***문자열 수 잘 세야됨 안그러면 출력이 안됨..ㅠㅠ (출력 안될 시 참고)***

    printStringToScreen(line, "╭ ◜◝   ◜◝ ╮", 23, 96);
    tap(line, 23,95);
    printStringToScreen(line, "(Ꮚ ◠ ᗜ ◠ Ꮚ", 20, 145);
    tap(line, 20,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 192);
    tap(line, 24,192);
    tap(line, 24,193);
    tap(line, 24,194);
    tap(line, 24,195);
    printStringToScreen(line, "** THE  END **", 14,245);
    tap(line, 14,245);
    tap(line, 14,246);
    tap(line, 14,247);
    tap(line, 14,248);
    tap(line, 14,249);
    tap(line, 14,250);
    tap(line, 14,251);
       

    for (i = 266; i < 332; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[67] = '\n';
    line[68] = '\n';
    line[69] = '\n';
    line[70] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    printf("%s", line);
    return 0;
}