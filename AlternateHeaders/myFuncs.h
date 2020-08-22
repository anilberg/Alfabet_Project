#ifndef MYFUNCS_H_INCLUDED
#define MYFUNCS_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

/// --- GLOBAL VARIABLES --- ///
int MAX_SPACE;    //This variable controls when new line will create

int USING_SHAPE;

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

/// --- FILE FUNCS --- ///

///This func reads the settings from settings.txt and return them as array
//Settings with array index: (For now we have 2 user settings)
// 0 - MaxLetter (Default 14)
// 1 - UsingShape (Default 42 or char(*))
int* readSettings(){

    static int settsArray[2];

    fstream file;

    file.open("settings.txt");

    if(file.is_open()){ //If file opened

        string info;
        int var;

        file >> info;
        file >> var;

        settsArray[0] = var;

        file >> info;
        file >> var;

        settsArray[1] = var;
    }

    file.close();

    return settsArray;

}

///This func writes the settings to settings.txt
//Settings with array index: (For now we have 2 user settings)
// 0 - MaxLetter (Default 2)
// 1 - UsingShape (Default 42 or char(*))
void writeSettings(int arr[2]){

    //static int settsArray[2];

    fstream file;

    file.open("settings.txt", ios::out);

    if(file.is_open()){ //If file opened

        //Writing changes to settings.txt and variables
        file << "MaxSpaces " << arr[0] << "\n" << "UsingShape " << arr[1];

        MAX_SPACE = arr[0];
        USING_SHAPE = arr[1];
    }

    file.close();

}

///This func resets settings.txt
void resetSettings(){

    fstream file;

    file.open("settings.txt", ios::out);  //Open File, ios::out means write mode, if file does not exist creates it

    if(file.is_open()){ //If file opened

        file << "MaxSpaces " << 14 << "\n" << "UsingShape " << 42;

        MAX_SPACE = 2;    //reseting variables
        USING_SHAPE = 42;
    }
    file.close();

}

#endif // MYFUNCS_H_INCLUDED
