#include <iostream>
using namespace std;

int main(void)
{

// B harfi

    for(int i = 1; i <= 5; i++){
         cout<<"* ";
        for(int j = 1; j <= 4; j++){
            if((i == 1 || i == 3 || i == 5) && j < 3)
                cout<<"* ";
            else if(j == 3 && i != 1 && i != 3 && i != 5)
                cout<<"*  ";
            else
                cout<<"  ";
    }
    cout<<endl;}

    return 0;}
