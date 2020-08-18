#include <iostream>
#include <string>
using namespace std;

string to_lower(string word);

int main(){

    string word = "ThiS iS aN sTRiNg";

    cout<<"Old Word: "<<word<<endl;

    cout<<"New Word: "<<to_lower(word)<<endl;


    return 0;
}

string to_lower(string word){

    int length = word.size(); ///Input word's length

    for(int i = 0; i < length; i++){    ///We'll control all letter of this word.

        for(int j = 65; j < 91; j++){   ///This loop gets A-Z letters as ASCII code.

            if(word[i] == (char)j){   ///This condition controls if a letter of word is capital.

                word[i] = (char)j + 32;   ///If any capital letter exist, it turns into lower one as ASCII code
            }

        }
    }

    return word;  ///New all lower word is returned
}
