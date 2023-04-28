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
