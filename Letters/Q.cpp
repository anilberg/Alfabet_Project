#include <iostream>
    using namespace std;

    int main(){

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 4; j++){



   if((j == 1 || j == 4) && !(i == 1 || i == 5 || i == 6)){
      cout<<"*";
      }
else if((j==2 || j==3)&&(i==1||i==5)){
    cout<<"*";
}
else if(i==6&&j==4){
    cout<<"*";
}






  else{cout<<" ";}


    }

    cout<<endl;
    }
    }
