#include <iostream>
#include <ctime>
#include <random>
#include<stdlib.h>
using namespace std;

void design();
char check_winner();

void get_x_player_choice();
void get_o_player_choice();//computer
void get_computer_choice();

int count_board(char symbol);
void computer_vs_player();
void player_vs_player();

string x_player_name , o_player_name;
char board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
// logic behind the design of the board
void design(){
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[0]<<"   |   "<<board[1]<<"   |   "<< board[2]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"------- ------- -------"<<endl;

    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[3]<<"   |   "<<board[4]<<"   |   "<< board[5]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"------- ------- -------"<<endl;

    cout<<"   "<<"    |   "<<"    |   "<<endl;
    cout<<"   "<<board[6]<<"   |   "<<board[7]<<"   |   "<< board[8]<<endl;
    cout<<"   "<<"    |   "<<"    |   "<<endl;

}

void computer_vs_player()// This Mode enables to play User against Computer
{
    string player_name;
    cout<<"Enter Your Name: ";
    cin>> player_name;
    while(1){
        system("cls");
        design();
        if(count_board('X')==count_board('O')){
            cout<<player_name<<"'s turn."<<endl;
            get_x_player_choice();
        }
        else
        {
            get_computer_choice();
        }
        char winner=check_winner(); // This winner Functions checks winner by Checking the positions of charcter 'X' and 'O'
                                                                                                                                                                   
        if(winner=='X'){
            system("cls");
            design();
            cout<<player_name<<" Won the game. "<<endl;
            break;
        }
        else if(winner=='O'){
            system("cls");
            design();
            cout<<" Computer Won the game. "<<endl;
            break;
        }else if (winner=='D'){
            cout<<"Game is Draw."<<endl;
            break;
        }
    }
}

void player_vs_player()  // This Mode enables user to play against each other                                                                                   
{   string x_player_name,o_player_name;

    cout <<"Enter X player name :  ";
    cin >> x_player_name;
    cout << "Enter O player name :  ";
    cin >> o_player_name;

    while(true)
    {
        system("cls");
        design();
        if(count_board('X') == count_board('O'))
        {
            cout << x_player_name << "'s Turn." << endl;
            get_x_player_choice();

        }
        else{
          cout << o_player_name << "'s Turn." << endl;
            get_o_player_choice();
        }
        char winner = check_winner();
        if(winner == 'X')
        {
            system("cls");
            design();
            cout << x_player_name << "Won The Game." << endl;
            break;
        }
        else if(winner =='O')
        {
             system("cls");
            design();
            cout << o_player_name << "Won The Game." << endl;
            break;
        }
        else if(winner == 'D')
        {
            cout << "Game is Draw" << endl;
            break;
        }
    }
}

int count_board(char symbol)
{
    int total = 0;
    for(int i=0 ; i<9 ; i++)
    {

        if(board[i] == symbol)
        {
            total++;
        }
    }
        return total;


}
void get_computer_choice()
{
    srand(time(0));//for random choice from computer
    int choice;
    do
    {

        choice =  rand()%10;//randm choice from 0 t0 9

    }while(board[choice] != ' ');
    board[choice] = 'O';
}
void get_x_player_choice()
{

    while(true)
    {

        cout << "Select Your position (1 - 9) : ";
        int choice;
        cin >> choice;
        choice--;//because indexes are in between 0-9
        if(choice <0 || choice >8)
        {

            cout << "Please Select your Choice From  (1-9)." << endl;

        }
        else if(board[choice] != ' ')
        {
            cout << "Please Select an Empty Position ." << endl;
        }
        else
        {

              board[choice]='X';
              break;
        }
    }
}
void get_o_player_choice()
{

    while(true)
    {

        cout << "Select Your position (1 - 9) : ";
        int choice;
        cin >> choice;
        choice--;//because indexes are in between 0-9
        if(choice <0 || choice >8)
        {

            cout << "Please Select your Choice From  (1-9)." << endl;

        }
        else if(board[choice]!=' ')
        {
            cout << "Please Select an Empty Position ." << endl;
        }
        else
        {

              board[choice]='O';
              break;
        }
    }
}
int main()
{   
    int mode;
    cout << "1. Computer VS Player." << endl;
    cout << "2. Player VS Player." << endl;
    cout << "Select Game Mode." << endl;
    cin >> mode;
    switch(mode)
    {
    case 1:
    computer_vs_player();
    break;
    
    case 2:
    player_vs_player();
    break;
    
    default :
    cout << "Please Select Valid Game Mode" << endl;
    break;

    }

    return 0;
}
