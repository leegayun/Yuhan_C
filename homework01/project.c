#include <stdio.h>
#include <stdlib.h>
#include "game_screen.h"

int main()
{
    int game_state = 1;
    int game_start;
    int game_over;

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
                {   next2 = 0;
                    system("cls");
                    how_to_play3();
                    printf("\n메인메뉴로 돌아가려면 1, 설명을 다시 듣고싶다면 2를 입력하세요.");
                    scanf("%d",&how_choice);
                    if(how_choice == 1)
                    {   
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
            system("cls");
            game_start1();
            printf("\n1 > 반가워 몽실아!");
            printf("\n2 > 안녕");
            printf("\n3 > 내가 왜 너랑 친해져야되냐?");
            scanf("%d",&chapter1);
            if(chapter1 == 1)
            {
                system("cls");
                choice1();
            }
            else if(chapter1 == 2)
            {   
                system("cls");
                choice2();
            }
            else if(chapter1 == 3)
            {   
                system("cls");
                choice3();
                printf("\n몽실이의 호감도가 하락했습니다!\n>");
                scanf("%d",&answer);
                if (answer == 1)
                {   game_over = 1;
                    answer = 0;
                }
                else
                {
                    game_over = 1;
                    answer = 0;
                }
            }
            else
                continue;
        }
        if(game_over == 1)
        {   
            int answer;
            system("cls");
            game_over_screen();
            printf("\n>");
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
        }
    }


    return 0;
}