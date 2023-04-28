#include <iostream>
#include <ctime>
#include <random>
#include<stdlib.h>

using namespace std;

char board[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
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

void computer_vs_player()
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
        char winner=check_winner();
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

void player_vs_player()
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
