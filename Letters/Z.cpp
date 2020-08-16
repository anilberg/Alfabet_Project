#include <iostream>
using namespace std;

int main(void)
{

// Z harfi

    int z = 4;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 4; j++){
            if(i == 1 || i == 6 || j == z+1 )
               cout<<"* ";
            else
               cout<<"  ";
        }
    cout<<endl;
    z--;}

    return 0;}
