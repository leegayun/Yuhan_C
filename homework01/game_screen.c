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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char title_part1[12] = "몽실이와";
    for (i = 0; i < 12; i++) 
    {
        line[i + 248] = title_part1[i];
    }
    
    char title_part2[16] = "대화하기 ♥";
    for (i = 0; i < 16; i++)
    {
        line[i + 289] = title_part2[i];
    }
    
    char one[16] = "1. 게임 시작";
    for (i = 0; i < 16; i++)
    {
        line[i + 333] = one[i];
    }
    char two[16] = "2. 게임 방법";
    for (i = 0; i < 16; i++)
    {
        line[i + 376] = two[i];
    }
    char three[16] = "3. 게임 종료";
    for (i = 0; i < 16; i++)
    {
        line[i + 419] = three[i];
    }
    
    for (i = 438; i < 508; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n';
    line[220] = '\n';
    line[261] = '\n';
    line[306] = '\n';
    line[307] = '\n';
    line[350] = '\n';
    line[393] = '\n';
    line[436] = '\n';
    line[437] = '\n';
    line[438] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char speech1[40] = "이 친구의 이름은 몽실이에요.";
    for (i = 0; i < 40; i++) 
    {
        line[i + 239] = speech1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    char speech2[70] = "당신은 이유는 모르지만, 몽실이와 친해져야 합니다.";
    for (i = 0; i < 70; i++) 
    {
        line[i + 290] = speech2[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    for (i = 365; i < 435; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[222] = '\n';
    line[280] = '\n';
    line[361] = '\n';
    line[362] = '\n';
    line[363] = '\n';
    line[364] = '\n';
    line[365] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char speech1[47] = "기왕 하는 거 열심히 친해져봅시다!";
    for (i = 0; i < 47; i++) 
    {
        line[i + 237] = speech1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    char speech2[37] = "새 친구도 사귀고 좋잖아요.";
    for (i = 0; i < 37; i++) 
    {
        line[i + 304] = speech2[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    char speech3[86] = "몽실이가 좋아할 것 같은 대답을 골라주며 호감도를 쌓아보아요!";
    for (i = 0; i < 86; i++) 
    {
        line[i + 347] = speech3[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    for (i = 442; i < 512; i++)  // '@' 출력
    {
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[285] = '\n';
    line[342] = '\n';
    line[438] = '\n';
    line[439] = '\n';
    line[440] = '\n';
    line[441] = '\n';
    line[442] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char speech1[49] = "중간중간 스크립트를 넘기고 싶을 땐";
    for (i = 0; i < 49; i++) 
    {
        line[i + 237] = speech1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    char speech2[81] = "별도의 설명이 없을 시, 아무 숫자나 입력하시면 넘어갑니다.";
    for (i = 0; i < 81; i++) 
    {
        line[i + 293] = speech2[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    for (i = 378; i < 448; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[222] = '\n';
    line[287] = '\n';
    line[374] = '\n';
    line[375] = '\n';
    line[376] = '\n';
    line[377] = '\n';
    line[378] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char name[11] = "[몽실이]";
    for (i = 0; i < 11; i++) 
    {
        line[i + 249] = name[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog1[25] = "안녕! 난 몽실이야.";
    for (i = 0; i < 25; i++) 
    {
        line[i + 286] = dialog1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    for (i = 314; i < 384; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[261] = '\n';
    line[262] = '\n';
    line[263] = '\n'; //name 밑에 공백 두 칸
    line[311] = '\n';
    line[312] = '\n';
    line[313] = '\n';
    line[314] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char name[11] = "[몽실이]";
    for (i = 0; i < 11; i++) 
    {
        line[i + 249] = name[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog1[20] = "반가워 친구야~";
    for (i = 0; i < 20; i++) 
    {
        line[i + 287] = dialog1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog2[54] = "오늘부터 밥도 같이 먹고 친하게 지내자!";
    for (i = 0; i < 54; i++) 
    {
        line[i + 322] = dialog2[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    for (i = 380; i < 450; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[261] = '\n';
    line[262] = '\n';
    line[308] = '\n'; //두 번째 대사 시작
    line[377] = '\n';
    line[378] = '\n';
    line[379] = '\n';
    line[380] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기 16줄

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[18] = "(Ꮚ ´ ꒳ ` Ꮚ";
    for (i = 0; i < 18; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 194] = leg[i];
    }

    char name[11] = "[몽실이]";
    for (i = 0; i < 11; i++) 
    {
        line[i + 249] = name[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog1[7] = "안녕~";
    for (i = 0; i < 7; i++) 
    {
        line[i + 291] = dialog1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog2[45] = "(얘 벌써 노잼의 향기가 나는데...)";
    for (i = 0; i < 45; i++) 
    {
        line[i + 325] = dialog2[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    for (i = 380; i < 450; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[167] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[261] = '\n';
    line[262] = '\n';
    line[308] = '\n'; //두 번째 대사 시작
    line[377] = '\n';
    line[378] = '\n';
    line[379] = '\n';
    line[380] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료


    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기 16줄

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[20] = "(ㅗ ◠ ‿ ◠ ㅗ";
    for (i = 0; i < 20; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 198] = leg[i];
    }

    char name[11] = "[몽실이]";
    for (i = 0; i < 11; i++) 
    {
        line[i + 249] = name[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char dialog1[13] = "그럼 꺼져";
    for (i = 0; i < 13; i++) 
    {
        line[i + 290] = dialog1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }
    
    for (i = 314; i < 384; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[171] = '\n';
    line[219] = '\n'; //몽실이 부분 바로 아래
    line[220] = '\n';
    line[221] = '\n';
    line[261] = '\n';
    line[262] = '\n';
    line[263] = '\n'; //name 밑에 공백 두 칸
    line[311] = '\n';
    line[312] = '\n';
    line[313] = '\n';
    line[314] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

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

    char line[530];

    int i = 0;
    while(i < 70)
    {
        line[i] = '@';
        i = i + 1;
    }

    for (i = 70; i < 530; i++)  // 나머지 요소를 공백 문자로 초기화
    {
        line[i] = ' ';
    }

    char head[23] = "╭ ◜◝   ◜◝ ╮";
    for (i = 0; i < 23; i++)  // head 배열 초기화
    {
        line[i + 100] = head[i];
    }

    char face[20] = "(ㅗ ◠ ‿ ◠ ㅗ";
    for (i = 0; i < 20; i++)  // face 배열 초기화
    {
        line[i + 150] = face[i];
    }

    char leg[24] = "╰◟ ◞ ͜ ◟ ◞╯";
    for (i = 0; i < 24; i++)  // leg 배열 초기화
    {
        line[i + 198] = leg[i];
    }

    char gameover[16] = "** GAME  OVER **";
    for (i = 0; i < 16; i++) 
    {
        line[i + 250] = gameover[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    char script1[66] = "몽실이에게 조금 다정하게 대해주는 건 어떨까요?";
    for (i = 0; i < 66; i++) 
    {
        line[i + 278] = script1[i]; //여기 꼭 변수명으로 바꿔주는거 잊지말기
    }

    for (i = 349; i < 419; i++)  // '@' 출력
    {   //마지막 인덱스값 +70
        line[i] = '@';
    }

    line[71] = '\n';
    line[72] = '\n';
    line[73] = '\n';
    line[123] = '\n';
    line[171] = '\n';
    line[223] = '\n'; 
    line[224] = '\n';
    line[225] = '\n';
    line[266] = '\n';
    line[267] = '\n';
    line[345] = '\n';
    line[346] = '\n';
    line[347] = '\n';
    line[348] = '\n';
    line[349] = '\n';
    line[529] = '\0';  // line 배열의 끝을 널 문자로 종료

    //공백넣고싶을 때는 시작 라인 숫자 조절.인덱스 값 잘 세야됨 안그러면
    //이상한거 뜸

    //개행할 때 참고: title_part2를 예시로 인덱스 숫자[12]에다가
    //시작 라인[248] 더하면 260나오는데 +1한 261이 개행해야할 구간임

    //크기 맞추기

    printf("%s", line);
    return 0;
}