#ifndef LETTERS_H_INCLUDED
#define LETTERS_H_INCLUDED

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/// --- REQUIRED FUNCS --- ///
void gotoxy (int x, int y){ //With this func we can control cursor's position.
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

string to_lower(string word){   //This func turns capital letters into lower.

    int length = word.size(); //Input word's length

    for(int i = 0; i < length; i++){    //We'll control all letter of this word.

        for(int j = 65; j < 91; j++){   //This loop gets A-Z letters as ASCII code.

            if(word[i] == (char)j){   //This condition controls if a letter of word is capital.

                word[i] = (char)j + 32;   //If any capital letter exist, it turns into lower one as ASCII code
            }
        }
    }
    return word;  ///New all lower word is returned
}

string to_upper(string word){   //This func turns lower letters into capital.

    int length = word.size();   //Input word's length

    for(int i = 0; i < length; i++){    //We'll control all letter of this word.

        for(int j = 97; j < 123; j++){  //This loop gets a-z letters as ASCII code.

            if(word[i] == (char)j){ //This condition controls if a letter of word is lower.

                word[i] = (char)j - 32; //If any lower letter exist, it turns into capital one as ASCII code
            }
        }
    }
    return word;
}

/// --- INIT --- ///
struct letter{
    int height, weight;
};

letter letters_array[26];

void setAlphabet(){ //This function sets the alphabet with height and weight values
                    //into letters_array
    for(int i = 0; i < 26; i++){

        //Identifying letters height values
        if(i == 16){
            letters_array[i].height = 6;
        }
        else{
            letters_array[i].height = 5;
        }

        //Identifying letters weight values

        if(i == 2 || i == 4 || i == 5 || i == 8 || i == 11 || i == 19){
            letters_array[i].weight = 3;
        }
        else if(i == 12 || i == 22){
            letters_array[i].weight = 5;
        }
        else{
            letters_array[i].weight = 4;
        }
    }
}

/// --- LETTERS --- ///
void print_A(int totalWeight){
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
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[0].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_B(int totalWeight){
    for(int i = 1; i <= 5; i++){
         cout<<"* ";
        for(int j = 1; j <= 4; j++){

            if((i == 1 || i == 3 || i == 5) && j < 3)
                cout<<"* ";

            else if(j == 3 && i != 1 && i != 3 && i != 5)
                cout<<"*  ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[1].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

/// --- LETTERS END --- ///

/// --- PRINT --- ///

void str2stars(string word){

    int length = word.length();
    int totalWeight = 0;

    for(int i = 0; i < length; i++){

        if(word[i] == 'a'){
            print_A(totalWeight);
            totalWeight += (letters_array[0].weight)*2 + 1;
        }
        else if(word[i] == 'b'){
            print_B(totalWeight);
            totalWeight += (letters_array[1].weight)*2 + 1;
        }


    }

}

#endif // LETTERS_H_INCLUDED
