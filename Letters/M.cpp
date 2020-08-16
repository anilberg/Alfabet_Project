#include <iostream>
using namespace std;

int main()
{

     for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j == 1 || j == 5)
                cout<<"* ";
            else if(((i == 2) && (j != 3)) || (i == 3 && j != 2 && j != 4))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

return 0;}