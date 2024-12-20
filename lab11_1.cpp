#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
string grade[]= {"A", "B+", "B", "C+", "C", "D+", "D", "F" , "W"};

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    srand(time(0));
    int i = rand()%9;
    cin.get();
    cin.get();
    cin.get();
    if( i == 0 ) cout << "You will get "<< grade[0] <<" in this 261102.";
    else if( i == 1 ) cout << "You will get "<< grade[1] <<" in this 261102.";
    else if( i == 2 ) cout << "You will get "<< grade[2] <<" in this 261102.";
    else if( i == 3 ) cout << "You will get "<< grade[3] <<" in this 261102.";
    else if( i == 4 ) cout << "You will get "<< grade[4] <<" in this 261102.";
    else if( i == 5 ) cout << "You will get "<< grade[5] <<" in this 261102.";
    else if( i == 6 ) cout << "You will get "<< grade[6] <<" in this 261102.";
    else if( i == 7 ) cout << "You will get "<< grade[7] <<" in this 261102.";
    else  cout << "You will get "<< grade[8] <<" in this 261102.";
}

