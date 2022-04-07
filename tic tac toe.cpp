#include<iostream>
#include<conio.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int har=0;
void display()
{
    cout<<"\t\t\t\t\t\t TIC TACK TOE\n";
    cout<<"\t\t\t\t      |      |     \n";
    cout<<"\t\t\t\t "<<board[0][0]<<"    |  "<<board[0][1]<<"   |  "<<board[0][2]<<"   \n";
    cout<<"\t\t\t\t----- ----- -----\n";
    cout<<"\t\t\t\t      |      |     \n";
    cout<<"\t\t\t\t  "<<board[1][0]<<"   | "<<board[1][1]<<"    |  "<<board[1][2]<<"  \n";
    cout<<"\t\t\t\t----- ----- -----\n";
    cout<<"\t\t\t\t  "<<board[2][0]<<"   |  "<<board[2][1]<<"   |  "<<board[2][2]<<"   \n";
    cout<<"\t\t\t\t      |      |     \n";
}
void turn()
{

char y;
    int count=0;
    if(count==0)
    {
        y='o';
        count++;
    }
      if(y='o')
    {
       cout<<"player 1 chance:";
       cin>>choice;
    } switch(choice)
    {
   case 1:
        board[0][0]='o';
        break;
        case 2:
        board[0][1]='o';
        break;
        case 3:
        board[0][2]='o';
        break;
        case 4:
        board[1][0]='o';
        break;
        case 5:
        board[1][1]='o';
        break;
        case 6:
        board[1][2]='o';
        break;
        case 7:
        board[2][0]='o';
        break;
        case 8:
        board[2][1]='o';
        break;
        case 9:
        board[2][2]='o';
        break;
    }

    if(y='x')
    {
        cout<<"player 2 chance:";
        cin>>choice;
    }





     switch(choice)
    {
   case 1:
        board[0][0]='x';
        break;
        case 2:
        board[0][1]='x';
        break;
        case 3:
        board[0][2]='x';
        break;
        case 4:
        board[1][0]='x';
        break;
        case 5:
        board[1][1]='x';
        break;
        case 6:
        board[1][2]='x';
        break;
        case 7:
        board[2][0]='x';
        break;
        case 8:
        board[2][1]='x';
        break;
        case 9:
        board[2][2]='x';
        break;
    }
    if(count==1)
    {
        y='x';
        count--;
    }


}
void check()
{
    if(board[0][0]=='o'&& board[0][1]=='o'&& board[0][2]=='o')
    {
        cout<<"player 1 won:";
        har=1;
    }
     if( board[1][0]=='o'&&board[1][1]=='o'&&board[1][2]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[2][0]=='o'&&board[2][1]=='o'&&board[2][2]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[0][0]=='o'&&board[1][0]=='o'&&board[2][0]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[0][1]=='o'&&board[1][1]=='o'&&board[2][1]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[0][2]=='o'&&board[1][2]=='o'&&board[2][2]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[0][0]=='o'&&board[1][1]=='o'&&board[2][2]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    } if( board[0][2]=='o'&&board[1][1]=='o'&&board[2][0]=='o' )
    {
        cout<<"player 1 won:";
        har=1;
    }


    if( board[0][0]=='x'&&board[0][1]=='x'&&board[0][2]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    }
     if( board[1][0]=='x'&&board[1][1]=='x'&&board[1][2]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[2][0]=='x'&&board[2][1]=='x'&&board[2][2]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[0][0]=='x'&&board[1][0]=='x'&&board[2][0]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[0][1]=='x'&&board[1][1]=='x'&&board[2][1]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[0][2]=='x'&&board[1][2]=='x'&&board[2][2]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[0][0]=='x'&&board[1][1]=='x'&&board[2][2]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    } if( board[0][2]=='x'&&board[1][1]=='x'&&board[2][0]=='x' )
    {
        cout<<"player 2 won:";
        har=1;
    }
}


main()
{


while(har==0)
{


    display();
    turn();
    display();
    check();
    getch();

    }


