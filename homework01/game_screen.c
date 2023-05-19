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
    printStringToScreen(line, "(Ꮚ ´ ꒳ ` Ꮚ", 17, 145);
    tap(line, 17,145);
    printStringToScreen(line, "╰◟ ◞ ͜ ◟ ◞╯", 24, 189);
    tap(line, 24,189);
    tap(line, 24,190);
    tap(line, 24,191);
    printStringToScreen(line, "몽실이와", 12, 244);
    tap(line, 12,244);
    printStringToScreen(line, "대화하기 ♥", 16, 284);
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
    printStringToScreen(line, "중간중간 스크립트를 넘기고 싶을 땐", 49,232);
    tap(line, 49,232);
    printStringToScreen(line, "별도의 설명이 없을 시, 아무 숫자나 입력하시면 넘어갑니다.", 81,288);
    tap(line, 81,288);
    tap(line, 81,289);
    tap(line, 81,290);
    tap(line, 81,291);
    tap(line, 81,292);
    tap(line, 81,293);
       

    for (i = 375; i < 441; i++)  // '@' 출력
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