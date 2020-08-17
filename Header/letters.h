#ifndef HARFLER_H_INCLUDED
#define HARFLER_H_INCLUDED

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/// --- REQUIRED FUNC --- ///
void gotoxy (int x, int y){
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

/// --- INIT --- ///
struct letter{  //Letter's properties
    int height,
    weight,
    order;
};

letter letters_array[26]; //All letters are kept by this array

void setAlphabet(){  //This function sets the alphabet with height and weight values
                    //into letters_array

    for(int i = 0; i < 26; i++){

        //Identifying Letter's Height
        if(i == 16)
            letters_array[i].height = 6;

        else
            letters_array[i].height = 5;

        //Identifying Letter's Weight
        if(i == 2 || i == 4 || i == 5 || i == 8 || i == 11 || i == 19)
            letters_array[i].weight = 3;

        else if(i == 12 || i == 22)
            letters_array[i].weight = 5;

        else
            letters_array[i].weight = 4;
    }
}

/// ----- LETTERS ----- ///
/// --- A --- ///
void print_A(int coordinate){

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
        gotoxy(coordinate, i);
    }
}

/// --- B --- ///
void print_B(int coordinate){

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
        gotoxy(coordinate, i);
    }
}
/// ----- LETTERS END ----- ///


void ab(string word){

    int len = word.length(),    //Word's lenght
    totalWeight = 0;            //This variable keeps total weight of all letters

    for(int i = 0; i <= len; i++){

        if(word[i] == 'a'){
            print_A(totalWeight);
            totalWeight += (letters_array[0].weight)*2 + 1;
        }
        else if(word[i] == 'b'){
            print_B(totalWeight);
            totalWeight += (letters_array[1].weight)*2 + 1;
        }

        //gotoxy(totalWeight*2, 0);

        //print_B(totalWeight*2);


    }

}

#endif // HARFLER_H_INCLUDED
