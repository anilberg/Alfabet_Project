#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(i == 1){
                cout<<"* ";
            }
            else if(j == 2){
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
