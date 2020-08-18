#ifndef MYFUNCS_H_INCLUDED
#define MYFUNCS_H_INCLUDED

#include <iostream>
using namespace std;

///With this func we can control cursor's position.
void gotoxy (int x, int y){
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

///This func turns capital letters into lower.
string to_lower(string word){

    int length = word.size(); //Input word's length

    for(int i = 0; i < length; i++){    //We'll control all letter of this word.
        for(int j = 65; j < 91; j++){   //This loop gets A-Z letters as ASCII code.

            if(word[i] == (char)j)   //This condition controls if a letter of word is capital.
                word[i] = (char)j + 32;   //If any capital letter exist, it turns into lower one as ASCII code
        }
    }
    return word;  //New all lower word is returned
}

///This func turns lower letters into capital.
string to_upper(string word){

    int length = word.size();   //Input word's length

    for(int i = 0; i < length; i++){    //We'll control all letter of this word.
        for(int j = 97; j < 123; j++){  //This loop gets a-z letters as ASCII code.

            if(word[i] == (char)j) //This condition controls if a letter of word is lower.
                word[i] = (char)j - 32; //If any lower letter exist, it turns into capital one as ASCII code
        }
    }
    return word;
}

#endif // MYFUNCS_H_INCLUDED
