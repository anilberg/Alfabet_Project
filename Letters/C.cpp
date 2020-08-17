#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(j == 1 && !(i == 1 || i == 5)){
                cout<<"* ";
            }
            else if((i == 1 || i == 5) && j != 1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
