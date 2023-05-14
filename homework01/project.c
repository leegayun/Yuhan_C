#include <stdio.h>
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
        {   title_screen();
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
            int how_choice;
            how_to_play();
            printf("\n설명을 계속보려면 2 (1을 누르면 메인화면으로 돌아갑니다.)->");
            scanf("%d",&input);
            if(input == 1)
            {
                game_state = 1;
            }
            else if(input == 2)
            {
                how_to_play2();
                printf("\n메인메뉴로 돌아가려면 1, 설명을 다시 듣고싶다면 2를 입력하세요.");
                scanf("%d",&how_choice);
                if(how_choice == 1)
                {
                    game_state = 1;
                }
                else if(how_choice == 2)
                {
                    game_state = 2;
                }
                else
                    game_state = 2;
            }
            else
                continue;
        }
        if(game_start == 1)
        {
            int choice;
            game_start1();
            printf("\n1 > 반가워 몽실아!");
            printf("\n2 > 안녕");
            printf("\n3 > 내가 왜 너랑 친해져야되냐?");
            scanf("%d",&choice);
            if(choice == 1)
            {
                choice1();
            }
            else if(choice == 2)
            {
                choice2();
            }
            else if(choice == 3)
            {
                choice3();
                game_over = 1;
            }
            else
                continue;
        }
        if(game_over == 1)
        {
            game_over_screen();
            game_state = 1;
        }
    }


    return 0;
}