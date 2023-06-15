#include <stdio.h>
#include <stdlib.h>
#include "game_screen.h"
#include <windows.h>

int main()
{   
    system("cls");
    COORD Cur = { 0,0 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen2();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen2();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen2();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen();
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    title_screen2();
    Sleep(300);
    
    int game_state = 1;
    int game_start;
    int game_over;
    int intimacy = 0;

    while(game_state)
    {
        int input;

        if(game_state == 1)
        {   game_state = 0;
            system("cls");
            title_screen();
            printf("\n>");
            scanf ("%d",&input);
            if(input == 1)
            {   game_start = 1; }
            else if(input == 2)
            {   game_state = 2; }
            else if(input == 3)
            {
                return 0;
            }

        }
        else if(game_state ==2)
        {   
            int next;
            int next2;
            int how_choice;
            system("cls");
            how_to_play();
            printf("\n설명을 계속보려면 2 (1을 누르면 메인화면으로 돌아갑니다.)->");
            scanf("%d",&next);
            if(next == 1)
            {   next = 0;
                game_state = 1;
            }
            else if(next == 2)
            {   next = 0;
                system("cls");
                how_to_play2();
                printf("\n설명을 계속보려면 2 (1을 누르면 메인화면으로 돌아갑니다.)->");
                scanf("%d",&next2);
                if(next2 == 1)
                {
                    next2 = 0;
                    game_state = 1;
                }
                else if(next2 == 2)
                {   next = 0;
                    system("cls");
                    how_to_play3();
                    printf("\n메인메뉴로 돌아가려면 1, 설명을 다시 듣고싶다면 2를 입력하세요.");
                    scanf("%d",&how_choice);
                    if(how_choice == 1)
                    {   
                        next = 0;
                        how_choice = 0;
                        game_state = 1;
                    }
                
                    else if(how_choice == 2)
                    {
                        game_state = 2;
                    }
                    else
                    {   
                        continue;
                    }
                }
            }
            else
                continue;
        }
        if(game_start == 1)
        {
            int chapter1;
            int answer;
            int answer2;
            system("cls");
            game_start1();
            printf("\n1 > 반가워 몽실아!");
            printf("\n2 > 안녕");
            printf("\n3 > 내가 왜 너랑 친해져야되냐?");
            printf("\n");
            scanf("%d",&chapter1);
            if(chapter1 == 1)
            {
                system("cls");
                choice1();
                scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   intimacy = 1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = 1;
                        answer2 = 0;
                    }
            }
            else if(chapter1 == 2)
            {   
                system("cls");
                choice2();
                    scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   intimacy = 1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = 1;
                        answer2 = 0;
                    }
            }
            else if(chapter1 == 3)
            {   
                system("cls");
                choice3();
                printf("\n");
                scanf("%d",&answer);
                if (answer == 1)
                {   game_over = 1;
                    answer = 0;
                }
                else
                {
                    answer = 1;
                }
            }
            else
                continue;
        }
        
        if(intimacy == 1)
        {   
            int answer2;
            int answer;
            int chapter2;
            system("cls");
            question1();
            printf("\n1 > 당연히 했지~");
            printf("\n2 > 음...조금?");
            printf("\n3 > 아니..하나도 안했어..");
            printf("\n");
            scanf("%d",&chapter2);
            if(chapter2 == 1 || chapter2 == 2)
            {
                system("cls");
                question1_answer1_2();
                intimacy = intimacy+1;
                printf("\n1 > 너 그럴려고 나랑 친구하자 한거냐?");
                printf("\n2 > 알았어 보여주지 뭐 (어차피 봐도 모를 것 같은데..)");
                printf("\n3 > 싫은데? 니가 알아서 해");
                printf("\n");
                scanf("%d",&answer);
                if (answer == 1)
                {   intimacy = intimacy+1;
                    answer = 0;
                    system("cls");
                    answer_choice1();
                    scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                }
                else if(answer == 2)
                {   intimacy = intimacy+1;
                    answer = 0;
                    system("cls");
                    answer_choice2();
                    scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                }
                else if(answer == 3)
                {
                    answer = 0;
                    system("cls");
                    choice3();
                    printf("\n");
                    scanf("%d",&answer2);
                        if (answer2 == 1)
                        {   game_over = 1;
                            answer2 = 0;
                        }
                        else
                        {
                            answer2 = 1;
                        }
                    }
            }
            else if(chapter2 == 3)
            {   
                system("cls");
                question1_answer3();
                intimacy = intimacy+1;
                printf("\n1 > 너 그럴려고 나랑 친구하자 한거냐?");
                printf("\n2 > 알았어 하고나서 보여줄게.");
                printf("\n3 > 싫은데? 니가 알아서 해");
                printf("\n");
                scanf("%d",&answer);
                if (answer == 1)
                {   intimacy = intimacy+1;
                    answer = 0;
                    system("cls");
                    answer_choice1();
                    scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                }
                else if(answer == 2)
                {   intimacy = intimacy+1;
                    answer = 0;
                    system("cls");
                    answer_choice2();
                    scanf("%d",&answer2);
                    if (answer2 == 1)
                    {   
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1;
                        answer2 = 0;
                    }
                }
                else if(answer == 3)
                {
                    answer = 0;
                    system("cls");
                    choice3();
                    scanf("%d",&answer2);
                        if (answer2 == 1)
                        {   game_over = 1;
                            answer2 = 0;
                        }
                        else
                        {
                            game_over = 1;
                            answer2 = 0;
                        }
                }
            }
            else
                continue;
        }

        if(intimacy == 4)
        {   
            int next;
            int answer;
            int chapter3;
            system("cls");
            question2_1();
            printf("\n > 재밌는 얘기?");
            printf("\n");
            scanf("%d",&next);
            if (next == 1)
            {
                system("cls");
                question2_2();
                printf("\n1 > 갑자기..?");
                printf("\n2 > 나 첫사랑 없는데...");
                printf("\n");
                scanf("%d",&chapter3);
                if (chapter3 == 1)
                {
                    intimacy = intimacy+1; //호감도 5
                    system("cls");
                    question2_answer1();
                    printf("\n > (;;)너부터 말해 봐. 그럼 말해줄지 말지 생각 좀..");
                    printf("\n");
                    scanf("%d",&answer);
                    if(answer == 1)
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;

                    }
                    else
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }
                }
                else if (chapter3 == 2)
                {
                    intimacy = intimacy+1; //호감도 5
                    system("cls");
                    question2_answer2();
                    printf("\n > (이 새키가)그럼 넌 있냐? 니 첫사랑 얘기부터 해보던가.");
                    printf("\n");
                    scanf("%d",&answer);
                    if(answer == 1)
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }

                }
                else
                    continue;
            }
            else
            {
                system("cls");
                question2_2();
                printf("\n1 > 갑자기..?");
                printf("\n2 > 나 첫사랑 없는데...");
                printf("\n");
                scanf("%d",&chapter3);
                if (chapter3 == 1)
                {
                    intimacy = intimacy+1; //호감도 5
                    system("cls");
                    question2_answer1();
                    printf("\n > (;;)너부터 말해 봐. 그럼 말해줄지 말지 생각 좀..");
                    printf("\n");
                    scanf("%d",&answer);
                    if(answer == 1)
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;

                    }
                    else
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }
                }
                else if (chapter3 == 2)
                {
                    intimacy = intimacy+1; //호감도 5
                    system("cls");
                    question2_answer2();
                    printf("\n > (이 새키가)그럼 넌 있냐? 니 첫사랑 얘기부터 해보던가.");
                    printf("\n");
                    scanf("%d",&answer);
                    if(answer == 1)
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }
                    else
                    {
                        intimacy = intimacy+1; //호감도 6
                        answer = 0;
                    }

                }
                else
                    continue;
            }
        }

        if (intimacy == 6)
        {   
            int answer1 ;
            int answer2 ;
            system("cls");
            first_love_story_start();
            printf("\n > 오..(설마 진짜 있었을 줄이야;;)");
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                answer1 = 0;
                system("cls");
                first_love_story1();
                printf("\n > (중딩 때까지 거슬러 올라간다고?)");
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {
                    answer2 = 0;
                    intimacy = intimacy+1; //호감도 7
                }
                else
                {
                    answer2 = 0;
                    intimacy = intimacy+1; //호감도 7
                }
            }
            else
            {
                answer1 = 1;
            }
        }

        if (intimacy == 7)
        {
            int answer1;
            int answer2;
            system("cls");
            first_love_story2();
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                answer1 = 0;
                system("cls");
                first_love_story3();
                printf("\n1 > 그랬구나.");
                printf("\n2 > ㅋㅋㅋ걍 차일거 분명해서 그랬겠지 핑계도 가지각색으로 대네..");
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {
                    answer2 = 0;
                    intimacy = intimacy+1; //호감도 8
                }
                else if(answer2 == 2)
                {
                    answer2 = 0;
                    system("cls");
                    choice3();
                    printf("\n");
                    scanf("%d",&answer2);
                        if (answer2 == 1)
                        {   game_over = 1;
                            answer2 = 0;
                        }
                        else
                        {
                            answer2 = 1;
                        }
                }
                else
                {
                    continue;
                }
            }
        }

        if (intimacy == 8)
        {
            int answer1;
            int answer2;
            system("cls");
            first_love_story4();
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                answer1 = 0;
                system("cls");
                first_love_story5();
                printf("\n > 갑자기?");
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {
                    answer2 = 0;
                    intimacy = intimacy+1; //호감도 9
                }
                else
                {
                    answer2 = 1;
                }
            }
            else
            {
                answer1 == 1;
            }
        }

        if (intimacy == 9)
        {
            int answer1;
            int answer2;
            int answer3;
            system("cls");
            first_love_story6();
            printf("\n1 > 길어;");
            printf("\n2 > 알았는데..?");
            printf("\n");
            scanf("%d",&answer1);
            if(answer1 == 1)
            {
                answer1 = 0;
                system("cls");
                choice3();
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {   game_over = 1;
                    answer2 = 0;
                }
                else
                {
                    answer2 = 1;
                }
            }
            else if(answer1 == 2)
            {
                answer1 = 0;
                system("cls");
                first_love_story7();
                printf("\n");
                scanf("%d",&answer3);
                if(answer3 == 1)
                {
                    intimacy = intimacy+1; //호감도 10
                    answer3 = 0;
                }
                else
                {
                    answer3 = 1;
                }
            }
            else
            {
                continue;
            }

        }

        if(intimacy == 10)
        {
            int answer1;
            int answer2;
            system("cls");
            first_love_story8();
            printf("\n1 > 뭐?!");
            printf("\n2 > 주작하고 앉아있네;;");
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                intimacy = intimacy+1; //호감도 11
                system("cls");
                first_love_story9();
                printf("\n > 와...");
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {
                    intimacy = intimacy+1; //호감도 12
                    answer2 = 0;
                }
                else
                {
                    answer2 = 1;
                }
            }
            else if(answer1 == 2)
            {
                answer1 = 0;
                system("cls");
                choice3();
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {   game_over = 1;
                    answer2 = 0;
                }
                else
                {
                    answer2 = 1;
                }
            }
            else
            {
                continue;
            }
        }
        
        if (intimacy == 12)
        {
            int answer1;
            int answer2;
            int answer3;
            system("cls");
            first_love_story10();
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                answer1 = 0;
                intimacy = intimacy+1; //호감도 13
                system("cls");
                first_love_story11();
                printf("\n1 > 너 울어..?");
                printf("\n2 > 우냐?");
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1 || answer2 == 2)
                {   
                    answer2 = 0;
                    system("cls");
                    first_love_story12();
                    printf("\n1 > 그랬구나...꽤 낭만적인 이야기였어.");
                    printf("\n2 > ㅋㅋ..응..순 주작썰 잘 들었고~");
                    printf("\n3 > 너가 왜 친구 없는지 알겠다.");
                    printf("\n");
                    scanf("%d",&answer3);
                    if(answer3 == 1)
                    {
                        intimacy = intimacy+1; //호감도 14
                        answer3 = 0;
                    }
                    else if(answer3 == 2 || answer3 == 3)
                    {
                        answer1 = 0;
                        system("cls");
                        choice3();
                        printf("\n");
                        scanf("%d",&answer2);
                        if (answer2 == 1)
                        {   game_over = 1;
                            answer2 = 0;
                        }
                        else
                        {
                            answer2 = 1;
                        }
                    }
                    else
                    { answer2 = 1; }
                }
                else
                {
                    answer2 = 1;
                }
            }
            else
            { answer1 = 1; }
        }

        if(intimacy == 14)
        {
            int answer1;
            int answer2;
            system("cls");
            question3();
            printf("\n1 > 뭐 임마?");
            printf("\n2 > 그렇게 봐주니 고맙네...");
            printf("\n3 > 너가 노잼이라 그래");
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1 || answer1 == 2)
            {
                system("cls");
                question3_answer();
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {
                    answer2 = 0;
                    intimacy = intimacy+1; //호감도 15
                }
                else
                {
                    answer2 = 1;
                }
            }
            else if (answer1 == 3)
            {
                answer1 = 0;
                system("cls");
                choice3();
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {   game_over = 1;
                    answer2 = 0;
                }
                else
                {
                    answer2 = 1;
                }
            }
            else
            {   continue; }
        }

        if (intimacy == 15)
        {
            int answer1;
            int answer2;
            int answer3;
            system("cls");
            ending();
            printf("\n");
            scanf("%d",&answer1);
            if (answer1 == 1)
            {
                answer1 = 0;
                system("cls");
                end_script();
                printf("\n");
                scanf("%d",&answer2);
                if (answer2 == 1)
                {   
                    answer2 = 0;
                    system("cls");
                    end_script2();
                    printf("\n");
                    scanf("%d",&answer3);
                    if(answer3 ==1)
                    {
                        answer3 = 0;
                        intimacy = intimacy+1; //호감도 16
                    }
                    else
                    {answer3 = 1;}
                }
                else
                {answer2=1;}
            }
            else
            {
                answer1 = 1;
            }
        }

        if (intimacy == 16)
        {   
            int answer;
            system("cls");
            end_script3();
            printf("\n메인화면으로 돌아가시려면 1 , 게임을 종료하시려면 2를 눌러주세요. ->");
            scanf("%d",&answer);
            if(answer == 1)
            {
                answer = 0;
                game_state = 1;
            }
            else if(answer == 2)
            {
                return 0;
            }
            else
            {
                continue;
            }
        }

        if(game_over == 1)
        {   
            int answer;
            system("cls");
            game_over_screen();
            printf("\n");
            scanf("%d",&answer);
            if (answer == 1)
                {
                    answer = 0;
                    game_state = 1;
                    game_over = 0;
                }
                else
                {
                    answer = 0;
                    game_state = 1;
                    game_over = 0;
                }
            game_state = 1;
            game_over = 0;
        }
    }


    return 0;
}