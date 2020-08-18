#ifndef STR2STARS_H_INCLUDED
#define STR2STARS_H_INCLUDED

#include <iostream>
#include <string>
#include <windows.h>

#include "myFuncs.h"
#include "alphabetShapes.h"

using namespace std;

/// --- PRINT FUNC --- ///
void str2stars(string word){    //This func prints input string as star letters.

    int length = word.length(); //Input word's length
    int totalWeight = 0;        //Total weight of letters. This variable must be change after every letter printed.

    string allCapWord = to_upper(word);  //Input word turns into all capital characters

    for(int i = 0; i < length; i++){
        for(int row = 0; row < 6; row++){
            for(int col = 0; col < 8; col++){

                if(alphabet[(int)allCapWord[i] - 65][row][col] == 1)
                    cout<<"*";

                else
                    cout<<" ";
            }
            gotoxy(totalWeight, row + 1);
        }
        gotoxy(totalWeight + 9, 0);   //Avoid cursor's position end on letter's bottom

        totalWeight += 9;   //After the letter printed total weight increased 9

    }
}
#endif // STR2STARS_H_INCLUDED
