#include <bits/stdc++.h>
using namespace std;

string to_upper(string word);

int main(){

    string word = "tHis iS aN sTRinG";

    cout<<"Old word: "<<word<<endl;

    cout<<"New 'enchanted' word: "<<to_upper(word)<<endl;

    return 8;
}

string to_upper(string word){

    int length = word.size();   //Input word's length

    for(int i = 0; i < length; i++){    //We'll control all letter of this word.

        for(int j = 97; j < 123; j++){  //This loop gets a-z letters as ASCII code.

            if(word[i] == (char)j){ //This condition controls if a letter of word is lower.

                word[i] = (char)j - 32; //If any lower letter exist, it turns into capital one as ASCII code
            }
        }
    }
}
