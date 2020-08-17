#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){

            if(j == 1 && i != 5){
                cout<<"* ";
            }
            else if(i == 5 && j == 2){
                cout<<"* ";
            }
            else if(j == 3 && (i == 3 || i == 4)){
                cout<<"* ";
            }
            else if(j == 4 && (i == 1 || i == 2)){
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
