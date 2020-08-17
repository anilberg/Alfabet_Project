#include <iostream>
using namespace std;

int main(){

 for(int i = 1; i <= 5; i++){


for(int j = 1; j <=3 ; j++){


    if(j == 1){
        cout<<"*";
    }
    else if (i ==1 || i == 3 || i == 5 ){
        cout<<"*";
    }
else{
    cout<<" ";
}
}
cout<<endl;
}

}
