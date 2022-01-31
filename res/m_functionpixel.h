#include <iostream>
#include <cstdlib>
#include "r_color.h"
#include "s_pixel.h"
using namespace std;

void gotoxy(int x, int y){
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Gameover()
{
    int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 30; i++)
    {
        for (space = 0; space <60; space++)
        {
            textcolor(BLACK,BLACK);
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (gameover[i][j])
            {




            case '+':
            {
                textcolor(GREEN,BLACK);
                printf("%c", gameover[i][j]);

            }
            break;

            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", gameover[i][j]);

            }
            break;


            case '_':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", gameover[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", gameover[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", gameover[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", gameover[i][j]);

            }
            break;


            case 'b':
            {
                textcolor(CYAN,CYAN);
                printf("%c", gameover[i][j]);

            }
            break;

            case 'B':
            {
                textcolor(AQUA,AQUA);
                printf("%c", gameover[i][j]);

            }

            break;

            case '-':
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", gameover[i][j]);

            }
            break;

            case '|':
            {
                textcolor(BLACK,BLACK);
                printf("%c", gameover[i][j]);

            }

            break;

            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", gameover[i][j]);
            }
            break;

            case 'd':
            {
                textcolor(CYAN,CYAN);
                printf("%c", gameover[i][j]);
            }
            break;

             case 'D':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", gameover[i][j]);
            }
            break;

                case '@':
            {
                textcolor(AQUA,AQUA);
                printf("%c", gameover[i][j]);
            }
            break;

              case 'u':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", gameover[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", gameover[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", gameover[i][j]);

            }
            break;
            case 'f' :
            {
                textcolor(WHITE,WHITE);
                printf("%c", gameover[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", gameover[i][j]);

            }
            break;

            case '=':
            {
                textcolor(RED,DARKRED);
                printf("%c", gameover[i][j]);

            }
            break;


            case 'x':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", gameover[i][j]);

            }
            break;

            case 'X':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", gameover[i][j]);

            }
            break;

            default:
            {
                printf("%c", gameover[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }

}

////////////////////////////////////////////////////////////////


void DIE()
{
    int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 30; i++)
    {
        for (space = 0; space <60; space++)
        {
            textcolor(BLACK,BLACK);
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (die[i][j])
            {




            case '+':
            {
                textcolor(GREEN,BLACK);
                printf("%c", die[i][j]);

            }
            break;

            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", die[i][j]);

            }
            break;


            case '_':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", die[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", die[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", die[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", die[i][j]);

            }
            break;


            case 'b':
            {
                textcolor(CYAN,CYAN);
                printf("%c", die[i][j]);

            }
            break;

            case 'B':
            {
                textcolor(AQUA,AQUA);
                printf("%c", die[i][j]);

            }

            break;

            case '-':
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", die[i][j]);

            }
            break;

            case '|':
            {
                textcolor(BLACK,BLACK);
                printf("%c", die[i][j]);

            }

            break;

            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", die[i][j]);
            }
            break;

            case 'D':
            {
                textcolor(CYAN,CYAN);
                printf("%c", die[i][j]);
            }
            break;

             case 'd':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", die[i][j]);
            }
            break;




            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", die[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", die[i][j]);

            }
            break;
            case 'f' :
            {
                textcolor(WHITE,WHITE);
                printf("%c", die[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", die[i][j]);

            }
            break;

            case '=':
            {
                textcolor(RED,DARKRED);
                printf("%c", die[i][j]);

            }
            break;


            case 'x':
            {
                textcolor(RED,RED);
                printf("%c", die[i][j]);

            }
            break;

            case 'X':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", die[i][j]);

            }
            break;

            default:
            {
                printf("%c", die[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }

}

////////////////////////////////////////////////////////////////



void Suicide()
{
    int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 40; i++)
    {
        for (space = 0; space <40; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (suicide[i][j])
            {

             case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", suicide[i][j]);

            }
            break;

              case '#':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", suicide[i][j]);

            }
            break;


            case 'p':
            {
                textcolor(BLACK,BLACK);
                printf("%c", suicide[i][j]);

            }
            break;

            case 'c':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", suicide[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", suicide[i][j]);

            }
            break;

            case 'o':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", suicide[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", suicide[i][j]);

            }
            break;

            case '}' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", suicide[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", suicide[i][j]);

            }
            break;

            case '=':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", suicide[i][j]);

            }
            break;


            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", suicide[i][j]);
            }
            break;


            case 'O':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(BLACK,BLACK);
                printf("%c", rich[i][j]);
            }
            break;

            case 'X':
            {
                textcolor(BLACK,BLACK);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'y':
            {
                textcolor(BLACK,BLACK);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'z':
            {
                textcolor(BLACK,BLACK);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'd':
            {
                textcolor(RED,RED);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'v':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", suicide[i][j]);
            }
            break;

            case 't':
            {
                textcolor(GRAY,GRAY);
                printf("%c", suicide[i][j]);
            }
            break;

            case 'T':
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", suicide[i][j]);
            }
            break;

            default:
            {
                printf("%c", suicide[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }

}

//////////////////////////////////////////////////////////
void Intro()
{
     int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 28; i++)
    {
        for (space = 0; space <32; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (intro[i][j])
            {
            case '-':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", intro[i][j]);

            }break;

            case 'z':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", intro[i][j]);

            }
            break;
            case 'y':
            {
                textcolor(CYAN,CYAN);
                printf("%c", intro[i][j]);

            }
            break;

            case 'X':
            {
                textcolor(AQUA,AQUA);
                printf("%c", intro[i][j]);

            }
            break;
            case 'x':
            {
                textcolor(BLUE,BLUE);
                printf("%c", intro[i][j]);

            }
            break;

            case 'C':
            {
                textcolor(BLACK,BLACK);
                printf("%c", intro[i][j]);

            }
            break;

            case 'a':
            {
                textcolor(BLUE,BLUE);
                printf("%c", intro[i][j]);

            }
            break;

            case 'b':
            {
                textcolor(AQUA,AQUA);
                printf("%c", intro[i][j]);

            }
            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", intro[i][j]);

            }
            break;



             case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", intro[i][j]);

            }
            break;

             case 'D':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", intro[i][j]);

            }
            break;
            case '*':
            {
                textcolor(RED,RED);
                printf("%c", intro[i][j]);

            }
            break;
            case '+':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", intro[i][j]);

            }
            break;
            case '?':
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c", intro[i][j]);

            }
            break;
            case ':':
            {
                textcolor(RED,RED);
                printf("%c", intro[i][j]);

            }
            break;



            case ',':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", intro[i][j]);

            }
            break;




            case 'M' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", intro[i][j]);

            }
            break;




            case '7':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", intro[i][j]);
            }
            break;

            case 'N':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", intro[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(RED,RED);
                printf("%c", intro[i][j]);
            }
            break;


            case 'I':
            {
                textcolor(RED,RED);
                printf("%c", intro[i][j]);
            }
            break;



            default:
            {
                printf("%c", intro[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
//////////////////////////////////////////////////////////////////////////////////////
    cout<<endl;
/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////covid-19//////////////////////////////////////////////
    for(i=0; i<9; i++)
    {


        for (space = 0; space <30; space++)
        {
            printf(" ");
        }



        for(j=0; j<128; j++)
        {

            switch (covidsoda[i][j])
            {


            case ':':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", covidsoda[i][j]);
            }
            break;

            case '@':
            {
                textcolor(RED,RED);
                printf("%c", covidsoda[i][j]);
            }
            break;

            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", covidsoda[i][j]);
            }
            break;

            case '!':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", covidsoda[i][j]);
            }
            break;

            default:
            {
                printf("%c", covidsoda[i][j]);
            }
            break;

            }



        }

        cout<<endl;

    }
    textcolor(WHITE,BLACK);
}

void Cup_banner(int x, int y)
{
    int i, j;

    for(i=0; i<10; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for(j=0; j<128; j++)
        {
            if(j & 1) continue;

            switch (ccup[i][j])
            {
            case '@':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", ccup[i][j]);
            }
            break;

            case '!':
            {
                textcolor(RED,BLACK);
                printf("%c", ccup[i][j]);
            }
            break;

            case ':':
            {
                textcolor(GRAY,BLACK);
                printf("%c", ccup[i][j]);
            }
            break;

            default:
            {
                printf("%c", ccup[i][j]);
            }
            break;

            }
        }
        cout<<endl;
    }
}
///////////////////////////////////////////CUP////////////////////////////////////
void Cup(int x, int y){

    int i, j;

    for (i = 0; i < 25; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for (j = 0; j < 128; j++)
        {
            if(j & 1) continue;

            switch (cup[i][j])
            {
            case 'D':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;
            case '.':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;
            case '+':
            {
                textcolor(VIOLET,BLACK);
                printf("%c", cup[i][j]);

            }
            break;
            case '?':
            {
                textcolor(DARKVOILET,BLACK);
                printf("%c", cup[i][j]);

            }
            break;
            case ':':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '~':
            {
                textcolor(VIOLET,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case ',':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '0':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '8':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case 'M' :
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '=':
            {
                textcolor(VIOLET,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", cup[i][j]);

            }
            break;

            case '7':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", cup[i][j]);
            }
            break;

            case 'N':
            {
                textcolor(VIOLET,BLACK);
                printf("%c", cup[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);
            }
            break;
            case 'o':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(RED,BLACK);
                printf("%c", cup[i][j]);
            }
            break;

            default:
            {
                printf("%c", cup[i][j]);
            }
            break;
            }
        }
        cout<<endl;
    }
    textcolor(WHITE, BLACK);
}

//////////////////////////////////////////////////////////////
void Ice_banner(int x, int y)
{
    int i, j;

    for(i=0; i<10; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;


        for(j=0; j<128; j++)
        {
            if(j & 1) continue;
            switch (iice[i][j])
            {
            case '@':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", iice[i][j]);
            }
            break;

            case '!':
            {
                textcolor(RED,BLACK);
                printf("%c", iice[i][j]);
            }
            break;

            case ':':
            {
                textcolor(GRAY,BLACK);
                printf("%c", iice[i][j]);
            }
            break;

            default:
            {
                printf("%c", iice[i][j]);
            }
            break;

            }



        }


        cout<<endl;

    }

}
    ///////////////////////////////////////////ice////////////////////////////////////

void Ice(int x, int y){
    int i, j;
    for (i = 0; i < 25; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for (j = 0; j < 128; j++)
        {
            if(j & 1) continue;
            switch (ice[i][j])
            {




            case 'D':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;
            case '.':
            {
                textcolor(AQUA,BLACK);
                printf("%c", ice[i][j]);

            }
            break;
            case '+':
            {
                textcolor(CYAN,BLACK);
                printf("%c", ice[i][j]);

            }
            break;
            case '?':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;
            case ':':
            {
                textcolor(AQUA,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '~':
            {
                textcolor(CYAN,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case ',':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '0':
            {
                textcolor(BLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '8':
            {
                textcolor(BLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case 'M' :
            {
                textcolor(AQUA,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '=':
            {
                textcolor(CYAN,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", ice[i][j]);

            }
            break;

            case '7':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", ice[i][j]);
            }
            break;

            case 'N':
            {
                textcolor(CYAN,BLACK);
                printf("%c", ice[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(BLUE,BLACK);
                printf("%c", ice[i][j]);
            }
            break;
            case 'o':
            {
                textcolor(AQUA,BLACK);
                printf("%c", ice[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(BLUE,BLACK);
                printf("%c", ice[i][j]);
            }
            break;

            default:
            {
                printf("%c", ice[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);

}


/////////////////////////////////////////////////////
void Syrup_banner(int x, int y)
{
    int i, j;
    for(i=0; i<10; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for(j=0; j<128; j++)
        {

            if(j & 1) continue;
            switch (ssyrup[i][j])
            {
            case '@':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", ssyrup[i][j]);
            }
            break;

            case '!':
            {
                textcolor(RED,BLACK);
                printf("%c", ssyrup[i][j]);
            }
            break;

            case ':':
            {
                textcolor(GRAY,BLACK);
                printf("%c", ssyrup[i][j]);
            }
            break;

            default:
            {
                printf("%c",ssyrup[i][j]);
            }
            break;

            }



        }


        cout<<endl;

    }
}
/////////////////////////////////////syrup/////////////////////////////////////////////////
void Syrup(int x, int y){
    int i, j;
    for (i = 0; i < 28; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;
        for (j = 0; j < 128; j++)
        {
            if(j & 1) continue;
            switch (syrup[i][j])
            {




            case 'D':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;
            case '.':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;
            case '+':
            {
                textcolor(CYAN,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;
            case '?':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;
            case ':':
            {
                textcolor(AQUA,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '~':
            {
                textcolor(CYAN,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case ',':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '0':
            {
                textcolor(BLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '8':
            {
                textcolor(BLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case 'M' :
            {
                textcolor(BLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '=':
            {
                textcolor(CYAN,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", syrup[i][j]);

            }
            break;

            case '7':
            {
                textcolor(DARKBLUE,BLACK);
                printf("%c", syrup[i][j]);
            }
            break;

            case 'N':
            {
                textcolor(CYAN,BLACK);
                printf("%c", syrup[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(BLUE,BLACK);
                printf("%c", syrup[i][j]);
            }
            break;
            case 'o':
            {
                textcolor(AQUA,BLACK);
                printf("%c", syrup[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(BLUE,BLACK);
                printf("%c", syrup[i][j]);
            }
            break;

            default:
            {
                printf("%c", syrup[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);

}


///////////////////////////////////////////////////////////////////////////////////
void Soda_banner(int x, int y)
{
    int i, j;
    for(i=0; i<10; i++)
    {

        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for(j=0; j<128; j++)
        {
            if(j & 1) continue;
            switch (ssoda[i][j])
            {
            case '@':
            {
                textcolor(DARKRED,BLACK);
                printf("%c", ssoda[i][j]);
            }
            break;

            case '!':
            {
                textcolor(RED,BLACK);
                printf("%c", ssoda[i][j]);
            }
            break;

            case ':':
            {
                textcolor(GRAY,BLACK);
                printf("%c", ssoda[i][j]);
            }
            break;

            default:
            {
                printf("%c",ssoda[i][j]);
            }
            break;

            }



        }


        cout<<endl;

    }
}
/////////////////////////////////////////////////SODA/////////////////////////////
void Soda(int x, int y){

    int i, j;
    for (i = 0; i < 40; i++)
    {
        gotoxy(x, y+i/2);
        if(i & 1) continue;

        for (j = 0; j < 128; j++)
        {
            if(j & 1) continue;
            switch (soda[i][j])
            {




            case 'D':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;
            case '.':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;
            case '+':
            {
                textcolor(CYAN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;
            case '?':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;
            case ':':
            {
                textcolor(CYAN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '~':
            {
                textcolor(CYAN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case ',':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '0':
            {
                textcolor(GREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '8':
            {
                textcolor(GREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case 'M' :
            {
                textcolor(GREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '=':
            {
                textcolor(CYAN,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", soda[i][j]);

            }
            break;

            case '7':
            {
                textcolor(DARKGREEN,BLACK);
                printf("%c", soda[i][j]);
            }
            break;

            case 'N':
            {
                textcolor(CYAN,BLACK);
                printf("%c", soda[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(GREEN,BLACK);
                printf("%c", soda[i][j]);
            }
            break;
            case 'o':
            {
                textcolor(AQUA,BLACK);
                printf("%c", soda[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(GREEN,BLACK);
                printf("%c", soda[i][j]);
            }
            break;

            default:
            {
                printf("%c", soda[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);
}
/////////////////////////////////////////////////////////////////////////////
void richs()
{
    int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 30; i++)
    {
        for (space = 0; space <40; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (rich[i][j])
            {

             case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", rich[i][j]);

            }
            break;

            case 'p':
            {
                textcolor(BLACK,BLACK);
                printf("%c", rich[i][j]);

            }
            break;

            case 'c':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", rich[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", rich[i][j]);

            }
            break;

            case 'o':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", rich[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", rich[i][j]);

            }
            break;

            case '}' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", rich[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", rich[i][j]);

            }
            break;

            case '=':
            {
                textcolor(DARKRED,RED);
                printf("%c", rich[i][j]);

            }
            break;


            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", rich[i][j]);
            }
            break;

            case '@':
            {
                textcolor(RED,RED);
                printf("%c", rich[i][j]);
            }
            break;

            case 'O':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", rich[i][j]);
            }
            break;

            case '$':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", rich[i][j]);
            }
            break;
            case 'a':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", rich[i][j]);
            }
            break;

            case 'X':
            {
                textcolor(AQUA,AQUA);
                printf("%c", rich[i][j]);
            }
            break;

            case 'y':
            {
                textcolor(RED,RED);
                printf("%c", rich[i][j]);
            }
            break;

            case 'z':
            {
                textcolor(CYAN,CYAN);
                printf("%c", rich[i][j]);
            }
            break;

            default:
            {
                printf("%c", rich[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }

}

//////////////////////////////////////////////////////////


void stand()
{
    int i,space,j;

    cout<<endl<<endl<<endl;
    for (i = 0; i < 28; i++)
    {
        for (space = 0; space <32; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (ghost1[i][j])
            {

            case 'z':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", ghost1[i][j]);

            }
            break;
            case 'y':
            {
                textcolor(CYAN,CYAN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'X':
            {
                textcolor(AQUA,AQUA);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'C':
            {
                textcolor(BLACK,BLACK);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'a':
            {
                textcolor(BLUE,BLUE);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'b':
            {
                textcolor(AQUA,AQUA);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", ghost1[i][j]);

            }
            break;

            case 'o':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '}' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '=':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '-':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", ghost1[i][j]);

            }
            break;

             case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", ghost1[i][j]);

            }
            break;

            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", ghost1[i][j]);
            }
            break;

            case '@':
            {
                textcolor(RED,RED);
                printf("%c", ghost1[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(RED,RED);
                printf("%c", ghost1[i][j]);
            }
            break;

            case '~':
            {
                textcolor(DARKYELLOW,DARKRED);
                printf("%c", ghost1[i][j]);
            }
            break;

            default:
            {
                printf("%c", ghost1[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
//////////////////////////////////////////////////////////////////////////////////////
    cout<<endl;
///////////////////////////////////////covid-19//////////////////////////////////////////////





}

void jump()
{
    int i,space,j;



    for (i = 0; i < 28; i++)
    {
        for (space = 0; space <25; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (ghost[i][j])
            {

            case 'x':
            {
                textcolor(RED,RED);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'y':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", ghost[i][j]);

            }
            break;


            case 'z':
            {
                textcolor(AQUA,AQUA);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'Z':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", ghost[i][j]);

            }
            break;
            case 'C':
            {
                textcolor(BLACK,BLACK);
                printf("%c", ghost[i][j]);

            }
            break;
            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'a':
            {
                textcolor(BLUE,BLUE);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'b':
            {
                textcolor(AQUA,AQUA);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", ghost[i][j]);

            }
            break;

            case '#':
            {
                textcolor(RED,RED);
                printf("%c", ghost[i][j]);

            }
            break;

            case 'o':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost[i][j]);

            }
            break;

            case '}' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost[i][j]);

            }
            break;

            case '|':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost[i][j]);

            }
            break;

            case '=':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", ghost[i][j]);

            }
            break;

            case '-':
            {
                textcolor(WHITE,WHITE);
                printf("%c", ghost[i][j]);

            }
            break;

            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", ghost[i][j]);
            }
            break;

            case '@':
            {
                textcolor(DARKRED,RED);
                printf("%c", ghost[i][j]);
            }
            break;

            case 'I':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", ghost[i][j]);
            }
            break;

            case '+':
            {
                textcolor(YELLOW,DARKYELLOW);
                printf("%c", ghost[i][j]);
            }
            break;

            default:
            {
                printf("%c", ghost[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
//////////////////////////////////////////////////////////////////////////////////////
    cout<<endl<<endl;
///////////////////////////////////////covid-19//////////////////////////////////////////////
    for(i=0; i<9; i++)
    {


        for (space = 0; space <50; space++)
        {
            printf(" ");
        }



        for(j=0; j<128; j++)
        {

            switch (covid[i][j])
            {


            case ':':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", covid[i][j]);
            }
            break;

            case '@':
            {
                textcolor(RED,RED);
                printf("%c", covid[i][j]);
            }
            break;

            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", covid[i][j]);
            }
            break;

            case '!':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", covid[i][j]);
            }
            break;

            default:
            {
                printf("%c", covid[i][j]);
            }
            break;

            }



        }


        cout<<endl;

    }


}

////////////////////////////////////////////////////////////////////////////////
void BossuiN()
{
    int i,space,j;

    printf("\n\n\n");
    for (i = 0; i < 20; i++)
    {
        //if(i & 1) continue;
        for (space = 0; space <60; space++)
        {
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            //if(j & 1) continue;
            switch (Bossinterfacenormal[i][j])
            {




            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case 'x':
            {
                textcolor(RED,RED);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;


            case 'X':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case '_':
            {
                textcolor(GREEN,GREEN);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;


            break;

            case '=':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;


            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", Bossinterfacenormal[i][j]);
            }
            break;

            case '@':
            {
                textcolor(CYAN,CYAN);
                printf("%c", Bossinterfacenormal[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            case '|' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", Bossinterfacenormal[i][j]);

            }
            break;



            case 'c' :
            {
                textcolor(AQUA,AQUA);
                          printf("%c", Bossinterfacenormal[i][j]);

            }
            break;

            default:
            {
                printf("%c", Bossinterfacenormal[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);
    printf("\n\n\n");
}
////////////////////////////////////////////////////////////////////////////////////

void BossuiH()
{
    int i,space,j;

    printf("\n\n\n");
    for (i = 0; i < 20; i++)
    {
        for (space = 0; space <60; space++)
        {
            printf(" ");
        }


        for (j = 0; j < 128; j++)
        {
            switch (Bossinterfacehappy[i][j])
            {




            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case 'x':
            {
                textcolor(RED,RED);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;


            case 'X':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case '_':
            {
                textcolor(GREEN,GREEN);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;


            break;

            case '=':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;


            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", Bossinterfacehappy[i][j]);
            }
            break;

            case '@':
            {
                textcolor(CYAN,CYAN);
                printf("%c", Bossinterfacehappy[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            case '|' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", Bossinterfacehappy[i][j]);

            }
            break;



            case 'c' :
            {
                textcolor(AQUA,AQUA);
                          printf("%c", Bossinterfacehappy[i][j]);

            }
            break;

            default:
            {
                printf("%c", Bossinterfacehappy[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);
    printf("\n\n\n");
}
///////////////////////////////////+
void BossuiC()
{
    int i,space,j;
    printf("\n\n\n");
    for (i = 0; i < 19; i++)
    {
        for (space = 0; space <60; space++)
        {
            textcolor(BLACK,BLACK);
            printf(" ");
        }

        for (j = 0; j < 128; j++)
        {
            switch (Bossinterfacecovid[i][j])
            {




            case '+':
            {
                textcolor(GREEN,BLACK);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;


            case '_':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;


            case 'b':
            {
                textcolor(CYAN,CYAN);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case 'B':
            {
                textcolor(AQUA,AQUA);
                printf("%c", Bossinterfacecovid[i][j]);

            }

            break;

            case '-':
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '|':
            {
                textcolor(BLACK,BLACK);
                printf("%c", Bossinterfacecovid[i][j]);

            }

            break;

            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", Bossinterfacecovid[i][j]);
            }
            break;

            case '@':
            {
                textcolor(CYAN,CYAN);
                printf("%c", Bossinterfacecovid[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case '=':
            {
                textcolor(RED,DARKRED);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;


            case 'x':
            {
                textcolor(RED,RED);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            case 'X':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", Bossinterfacecovid[i][j]);

            }
            break;

            default:
            {
                printf("%c", Bossinterfacecovid[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE, BLACK);
    printf("\n\n\n");
}

////////////////////////////////////////////////////////////////

void medN(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {
        if(i & 1) continue;
        gotoxy(x, y+i/2);
        for (j = 0; j < 48; j++)
        {
            if(j & 1) continue;
            switch (medicnormal[i][j])
            {




            case '#':
            {
                textcolor(DARKRED,RED);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '{':
            {
                textcolor(BLUE,BLACK);
                printf("%c", medicnormal[i][j]);

            }

            break;

            case '_':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;



            case '=':
            {
                textcolor(DARKRED,RED);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '*':
            {
                textcolor(GREEN,GREEN);
                printf("%c", medicnormal[i][j]);
            }
            break;

            case '@':
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", medicnormal[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(CYAN,CYAN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '+' :
            {
                textcolor(RED,RED);
                printf("%c", medicnormal[i][j]);

            }

            break;

            case '!' :
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'I' :
            {
                textcolor(GRAY,WHITE);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'b' :
            {
                textcolor(CYAN,CYAN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'B' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case '|' :
            {
                textcolor(GRAY,BLACK);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'v' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'X' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", medicnormal[i][j]);

            }
            break;

            default:
            {
                printf("%c", medicnormal[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
///////////////////////////////////////////////////////////////////

void medS(int x, int y)
{
    int i, j;
    for (i = 0; i < 20; i++)
    {
        if(i & 1) continue;
        gotoxy(x, y+i/2);

        for (j = 0; j < 48; j++)
        {
            if(j & 1) continue;
            switch (medicsad[i][j])
            {




            case '#':
            {
                textcolor(RED,DARKRED);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '{':
            {
                textcolor(BLUE,BLACK);
                printf("%c", medicsad[i][j]);

            }

            break;

            case '_':
            {
                textcolor(GREEN,GREEN);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '/':
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicsad[i][j]);

            }
            break;


            case '=':
            {
                textcolor(DARKRED,RED);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c",medicsad[i][j]);

            }
            break;

            case '*':
            {
                textcolor(GREEN,GREEN);
                printf("%c",medicsad[i][j]);
            }
            break;

            case '@':
            {
                textcolor(AQUA,AQUA);
                printf("%c", medicsad[i][j]);
            }
            break;

            case 'u':
            {
                textcolor(BLUE,BLUE);
                printf("%c", medicsad[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c", medicnormal[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(CYAN,CYAN);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '+' :
            {
                textcolor(RED,RED);
                printf("%c",medicsad[i][j]);

            }

            break;

            case '!' :
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'I' :
            {
                textcolor(DARKGRAY,GRAY);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'b' :
            {
                textcolor(CYAN,CYAN);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'B' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", medicsad[i][j]);

            }
            break;

            case '|' :
            {
                textcolor(GRAY,BLACK);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'v' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'X' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", medicsad[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GRAY,GRAY);
                printf("%c", medicsad[i][j]);

            }
            break;
            case '0' :
            {
                textcolor(AQUA,AQUA);
                printf("%c", medicsad[i][j]);

            }
            break;

            default:
            {
                printf("%c", medicsad[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}

/////////////////////////////////////////////////////////////////
void EnN(int x, int y)
{
    int i, j;
    for (i = 0; i < 20; i++)
    {
        if(i & 1) continue;
        gotoxy(x, y+i/2);
        for (j = 0; j < 48; j++)
        {
            if(j & 1) continue;
            switch (entertainnormal[i][j])
            {




            case '#':
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case 'T':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", entertainnormal[i][j]);

            }

            break;

            case 't':
            {
                textcolor(RED,RED);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case '/':
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainnormal[i][j]);

            }
            break;




            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c",entertainnormal[i][j]);

            }
            break;

            case '*':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",entertainnormal[i][j]);
            }
            break;

            case 'k':
            {
                textcolor(WHITE,WHITE);
                printf("%c", entertainnormal[i][j]);
            }
            break;

            case 'K':
            {
                textcolor(GRAY,GRAY);
                printf("%c", entertainnormal[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", entertainnormal[i][j]);

            }
            break;

            case 'W' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",entertainnormal[i][j]);

            }

            break;




            case '|' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",entertainnormal[i][j]);

            }
            break;


            case 'X' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c",entertainnormal[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(VIOLET,VIOLET);
                printf("%c",entertainnormal[i][j]);

            }
            break;


            default:
            {
                printf("%c",entertainnormal[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);

}
/////////////////////////////////////////////////////


void EnS(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {
        if(i & 1) continue;
        gotoxy(x, y+i/2);
        for (j = 0; j < 48; j++)
        {
            if(j & 1) continue;
            switch (entertainsad[i][j])
            {




            case '#':
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case 'T':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", entertainsad[i][j]);

            }

            break;

            case 't':
            {
                textcolor(RED,RED);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case '/':
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case '\\' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainsad[i][j]);

            }
            break;




            case '.':
            {
                textcolor(WHITE,WHITE);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case '-':
            {
                textcolor(BLACK,BLACK);
                printf("%c",entertainsad[i][j]);

            }
            break;

            case '*':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",entertainsad[i][j]);
            }
            break;

            case 'k':
            {
                textcolor(WHITE,WHITE);
                printf("%c", entertainsad[i][j]);
            }
            break;

            case 'K':
            {
                textcolor(GRAY,GRAY);
                printf("%c", entertainsad[i][j]);
            }
            break;



            case 'o' :
            {
                textcolor(BLACK,BLACK);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case 'p' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case 'c' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", entertainsad[i][j]);

            }
            break;

            case 'W' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",entertainsad[i][j]);

            }

            break;




            case '|' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",entertainsad[i][j]);

            }
            break;


            case 'X' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",entertainsad[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",entertainnormal[i][j]);

            }
            break;

            case 'u' :
            {
                textcolor(AQUA,AQUA);
                printf("%c",entertainsad[i][j]);

            }
            break;


            default:
            {
                printf("%c",entertainsad[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
////////////////////////////////////

void workman1Normal(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman1N[i][j])
            {




            case 'T':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman1N[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman1N[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c", workman1N[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman1N[i][j]);

            }
            break;

            case 'O':
            {
                textcolor(BLACK,WHITE);
                printf("%c",workman1N[i][j]);

            }
            break;

            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman1N[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman1N[i][j]);
            }
            break;



            case '7' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c",workman1N[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c",workman1N[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GREEN,GREEN);
                printf("%c",workman1N[i][j]);

            }
            break;



            default:
            {
                printf("%c",workman1N[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
////////////////////////////////////

void workman1Covid(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {
        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman1C[i][j])
            {

            case '-':
            {
                textcolor(DARKBLUE,BLUE);
                printf("%c", workman1C[i][j]);

            }

            break;


            case '*':
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman1C[i][j]);

            }

            break;
            case 'T':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman1C[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman1C[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c", workman1C[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman1C[i][j]);

            }
            break;

            case 'O':
            {
                textcolor(BLACK,WHITE);
                printf("%c",workman1C[i][j]);

            }
            break;

            case '+':
            {
                textcolor(CYAN,CYAN);
                printf("%c",workman1C[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman1C[i][j]);
            }
            break;



            case '7' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c",workman1C[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",workman1C[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",workman1C[i][j]);

            }
            break;



            default:
            {
                printf("%c",workman1C[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
////////////////////////////////////////////////////
void workman1SAD(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);
        for (j = 0; j < 64; j++)
        {
            switch (workman1S[i][j])
            {




            case 'T':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman1S[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman1S[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c", workman1S[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman1S[i][j]);

            }
            break;

            case 'O':
            {
                textcolor(BLACK,WHITE);
                printf("%c",workman1S[i][j]);

            }
            break;

            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman1S[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman1S[i][j]);
            }
            break;



            case '7' :
            {
                textcolor(DARKGREEN,GREEN);
                printf("%c",workman1S[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c",workman1S[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman1S[i][j]);

            }
            break;

             case 'u' :
            {
                textcolor(AQUA,AQUA);
                printf("%c",workman1S[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman1S[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman2Normal(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++){

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman2N[i][j])
            {




            case 'T':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman2N[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman2N[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman2N[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman2N[i][j]);

            }
            break;



            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman2N[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman2N[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman2N[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c",workman2N[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GREEN,GREEN);
                printf("%c",workman2N[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman2N[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman2N[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman2Covid(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman2C[i][j])
            {




            case 'T':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman2C[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman2C[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman2C[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman2C[i][j]);

            }
            break;





            case 'a':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman2C[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman2C[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",workman2C[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",workman2C[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman2C[i][j]);

            }
            break;
            case '+' :
            {
                textcolor(BLUE,BLUE);
                printf("%c",workman2C[i][j]);

            }
            break;

            case '-' :
            {
                textcolor(DARKBLUE,CYAN);
                printf("%c",workman2C[i][j]);

            }
            break;

            case '*' :
            {
                textcolor(AQUA,AQUA);
                printf("%c",workman2C[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman2C[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman2SAD(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman2S[i][j])
            {




            case 'T':
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman2S[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman2S[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman2S[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman2S[i][j]);

            }
            break;



            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman2S[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman2S[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman2S[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c",workman2S[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman2S[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman2S[i][j]);

            }
            break;

             case 'u' :
            {
                textcolor(AQUA,AQUA);
                printf("%c",workman2S[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman2S[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman3Normal(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman3N[i][j])
            {




            case 'T':
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman3N[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", workman3N[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman3N[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman3N[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman3N[i][j]);

            }
            break;


            case 'O':
            {
                textcolor(DARKYELLOW,YELLOW);
                printf("%c", workman3N[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", workman3N[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman3N[i][j]);

            }
            break;




            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman3N[i][j]);
            }
            break;

            case 'o':
            {
                textcolor(RED,RED);
                printf("%c",workman3N[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman3N[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman3N[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c",workman3N[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GREEN,GREEN);
                printf("%c",workman3N[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman3N[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman3N[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(RED,RED);
                printf("%c",workman3N[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman3N[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman3N[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}

/////////////////////////////////////////////////////////////
void workman3Covid(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman3C[i][j])
            {




            case 'T':
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman3C[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", workman3C[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman3C[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman3C[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman3C[i][j]);

            }
            break;


            case 'O':
            {
                textcolor(DARKYELLOW,YELLOW);
                printf("%c", workman3C[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", workman3C[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman3C[i][j]);

            }
            break;




            case '+':
            {
                textcolor(BLUE,BLUE);
                printf("%c",workman3C[i][j]);
            }
            break;


            case '-':
            {
                textcolor(DARKBLUE,YELLOW);
                printf("%c",workman3C[i][j]);
            }
            break;

            case '*':
            {
                textcolor(CYAN,CYAN);
                printf("%c",workman3C[i][j]);
            }
            break;

            case 'o':
            {
                textcolor(RED,RED);
                printf("%c",workman3C[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman3C[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman3C[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",workman3C[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",workman3C[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman3C[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman3C[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(RED,RED);
                printf("%c",workman3C[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman3C[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman3C[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman3SAD(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);
        for (j = 0; j < 64; j++)
        {

            switch (workman3S[i][j])
            {




            case 'T':
            {
                textcolor(BLUE,BLUE);
                printf("%c", workman3S[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c", workman3S[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(RED,RED);
                printf("%c", workman3S[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman3S[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman3S[i][j]);

            }
            break;


            case 'O':
            {
                textcolor(DARKYELLOW,YELLOW);
                printf("%c", workman3S[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c", workman3S[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman3S[i][j]);

            }
            break;




            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman3S[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman3S[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman3S[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKGRAY,DARKGRAY);
                printf("%c",workman3S[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman3S[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman3S[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman3S[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(RED,RED);
                printf("%c",workman3S[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman3S[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman3S[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman4Normal(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {

            switch (workman4N[i][j])
            {




            case 'T':
            {
                textcolor(GREEN,GREEN);
                printf("%c", workman4N[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c", workman4N[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman4N[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman4N[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman4N[i][j]);

            }
            break;


            case 'v':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman4N[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman4N[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman4N[i][j]);

            }
            break;




            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman4N[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman4N[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman4N[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKBLUE,DARKBLUE);
                printf("%c",workman4N[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(BLUE,BLUE);
                printf("%c",workman4N[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c",workman4N[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman4N[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman4N[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman4N[i][j]);

            }
            break;

             case 'g' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman4N[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman4N[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
/////////////////////////////////////////////////////////////
void workman4Covid(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {


            switch (workman4C[i][j])
            {




            case 'T':
            {
                textcolor(GREEN,GREEN);
                printf("%c", workman4C[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c", workman4C[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman4C[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman4C[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman4C[i][j]);

            }
            break;


            case 'v':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman4C[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman4C[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman4C[i][j]);

            }
            break;

            case '*':
            {
                textcolor(CYAN,CYAN);
                printf("%c",workman4C[i][j]);
            }
            break;

            case '-':
            {
                textcolor(DARKBLUE,YELLOW);
                printf("%c",workman4C[i][j]);
            }
            break;


            case '+':
            {
                textcolor(BLUE,BLUE);
                printf("%c",workman4C[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman4C[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman4C[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(DARKRED,DARKRED);
                printf("%c",workman4C[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(YELLOW,YELLOW);
                printf("%c",workman4C[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c",workman4C[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman4C[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman4C[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman4C[i][j]);

            }
            break;

             case 'g' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman4C[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman4C[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }

}
/////////////////////////////////////////////////////////////
void workman4SAD(int x, int y)
{
    int i, j;

    for (i = 0; i < 20; i++)
    {

        gotoxy(x, y+i/2);

        for (j = 0; j < 64; j++)
        {


            switch (workman4S[i][j])
            {




            case 'T':
            {
                textcolor(GREEN,GREEN);
                printf("%c", workman4S[i][j]);

            }

            break;


            case 't':
            {
                textcolor(DARKGREEN,DARKGREEN);
                printf("%c", workman4S[i][j]);

            }

            break;

            case 'c':
            {
                textcolor(CYAN,CYAN);
                printf("%c", workman4S[i][j]);

            }
            break;


            case 'p' :
            {
                textcolor(DARKYELLOW,DARKYELLOW);
                printf("%c", workman4S[i][j]);

            }
            break;




            case '.':
            {
                textcolor(BLACK,BLACK);
                printf("%c", workman4S[i][j]);

            }
            break;


            case 'v':
            {
                textcolor(DARKRED,DARKRED);
                printf("%c", workman4S[i][j]);

            }
            break;

            case 'P':
            {
                textcolor(VIOLET,VIOLET);
                printf("%c", workman4S[i][j]);

            }
            break;

            case 'u':
            {
                textcolor(AQUA,AQUA);
                printf("%c", workman4S[i][j]);

            }
            break;




            case '+':
            {
                textcolor(DARKRED,RED);
                printf("%c",workman4S[i][j]);
            }
            break;

            case 'a':
            {
                textcolor(YELLOW,YELLOW);
                printf("%c", workman4S[i][j]);
            }
            break;



            case '@' :
            {
                textcolor(RED,RED);
                printf("%c",workman4S[i][j]);

            }

            break;



            case 'X' :
            {
                textcolor(GRAY,GRAY);
                printf("%c",workman4S[i][j]);

            }
            break;

            case 'x' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman4S[i][j]);

            }
            break;
            case 'b' :
            {
                textcolor(DARKVOILET,DARKVOILET);
                printf("%c",workman4S[i][j]);

            }
            break;

             case '=' :
            {
                textcolor(DARKRED,RED);
                printf("%c",workman4S[i][j]);

            }
            break;

             case '#' :
            {
                textcolor(BLACK,BLACK);
                printf("%c",workman4S[i][j]);

            }
            break;

             case 'w' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman4S[i][j]);

            }
            break;

             case 'g' :
            {
                textcolor(WHITE,WHITE);
                printf("%c",workman4S[i][j]);

            }
            break;


            default:
            {
                printf("%c",workman4S[i][j]);
            }
            break;
            }



        }


        printf("\n");
    }
    textcolor(WHITE,BLACK);
}
