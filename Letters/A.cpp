#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){

            if(i == 1 && !(j == 1 || j == 4)){
                cout<<"* ";
            }
            else if((j == 1 || j == 4) && i != 1){
                cout<<"* ";
            }
            else if(i == 4){
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
