#include <bits/stdc++.h>
using namespace std;

string to_upper(string kelime);

int main(){

    string kelime = "tHis iS aN sTRinG";

    cout<<"Eski kelime: "<<kelime<<endl;

    cout<<"Yeni 'buyulenmis' Kelime: "<<to_upper(kelime)<<endl;

    return 8;
}

string to_upper(string kelime){

    int length = kelime.size();

    for(int i = 0; i < length; i++){

        for(int j = 97; j < 123; j++){

            if(kelime[i] == (char)j){

                kelime[i] = (char)j - 32;}
        }
    }

    return kelime;
}
