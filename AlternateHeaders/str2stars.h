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

    int totalWeight = 0;        //Total weight of letters. This variable must be change after every letter printed.

    string allCapWord = to_upper(word);  //Input word turns into all capital characters

    int i = 0, yaxis = 8, counter = 0;
    while(allCapWord[i]){   //While letters are exist

        if(i >= 14){

            if(counter == 0){
               totalWeight = 0;}

                gotoxy(totalWeight, yaxis);

                    if(isalpha(allCapWord[i])){ //This control does if allCapWord[i] is alphabetic. If it is, can print.
                        for(int row = 0; row < 6; row++){
                            for(int col = 0; col < 8; col++){

                            if(alphabet[(int)allCapWord[i] - 65][row][col] == 1)    //Detecting which letter will print
                            cout<<"*";

                    else
                        cout<<" ";
                }
                gotoxy(totalWeight, yaxis + row + 1);   //Creating new line
            }
            gotoxy(totalWeight + 8, yaxis);   //Avoid cursor's position end on letter's bottom

            totalWeight += 8;   //After the letter printed total weight increased 8
        }

        else if(allCapWord[i] == ' '){   //If counting letter is space, must be printed

            for(int row = 0; row < 6; row++){   //These two loop generate 6 rows 3 cols space
                for(int col = 0; col < 4; col++){

                    cout<<" ";
                }

                gotoxy(totalWeight, yaxis + row + 1);   //Creating new line
            }
            gotoxy(totalWeight + 4, yaxis);   //Avoid cursor's position end on letter's bottom

            totalWeight += 4;   //After the letter printed total weight increased 4
        }

counter ++;
}

        else if((isalpha(allCapWord[i]) && (i < 14))){ //This control does if allCapWord[i] is alphabetic. If it is, can print.

            for(int row = 0; row < 6; row++){
                for(int col = 0; col < 8; col++){

                    if(alphabet[(int)allCapWord[i] - 65][row][col] == 1)    //Detecting which letter will print
                        cout<<"*";

                    else
                        cout<<" ";
                }
                gotoxy(totalWeight, row + 1);   //Creating new line
            }
            gotoxy(totalWeight + 8, 0);   //Avoid cursor's position end on letter's bottom

            totalWeight += 8;   //After the letter printed total weight increased 8
        }

        else if(allCapWord[i] == ' '){   //If counting letter is space, must be printed

            for(int row = 0; row < 6; row++){   //These two loop generate 6 rows 3 cols space
                for(int col = 0; col < 4; col++){

                    cout<<" ";
                }

                gotoxy(totalWeight, row + 1);   //Creating new line
            }
            gotoxy(totalWeight + 4, 0);   //Avoid cursor's position end on letter's bottom

            totalWeight += 4;   //After the letter printed total weight increased 4
        }
        
        i++;    //Loop variable
    }

    //This loops is from 1.0.4 unless isalpha control
    /*for(int i = 0; i < length; i++){
        for(int row = 0; row < 6; row++){
            for(int col = 0; col < 8; col++){

                if(alphabet[(int)allCapWord[i] - 65][row][col] == 1)
                    cout<<"*";

                else if(alphabet[(int)allCapWord[i] - 32] == char(32))
                    cout<<" ";

                else
                    cout<<" ";
            }
            gotoxy(totalWeight, row + 1);
        }
        gotoxy(totalWeight + 8, 0);   //Avoid cursor's position end on letter's bottom

        totalWeight += 8;   //After the letter printed total weight increased 9

    }*/
}
#endif // STR2STARS_H_INCLUDED
