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

letter letters_array[26];   //This array keeps height and weight values of letters that printing with stars

void setAlphabet(){ //This function sets the alphabet with height and weight values
                    //into letters_array
    for(int i = 0; i < 26; i++){

        //Identifying letters height values
        if(i == 16){    // Q = 16. order, it's height should be 6.
            letters_array[i].height = 6;
        }
        else{   //Other's height should be 5.
            letters_array[i].height = 5;
        }

        //Identifying letters weight values
        if(i == 2 || i == 4 || i == 5 || i == 8 || i == 11 || i == 19){ //C, E, F, I, L, T should be 3.
            letters_array[i].weight = 3;
        }
        else if(i == 12 || i == 22){    //M, W should be 5.
            letters_array[i].weight = 5;
        }
        else{   //C, E, F, I, L, T should be 3.
            letters_array[i].weight = 4;
        }
    }
}
/// --- INIT END --- ///

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

void print_C(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(j == 1 && !(i == 1 || i == 5))
                cout<<"* ";

            else if((i == 1 || i == 5) && j != 1)
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[2].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_D(int totalWeight){
    for(int i = 1; i <= 5; i++){
        cout<<"* ";
        for(int j = 1; j <= 4; j++){
            if((i == 1 || i == 5) && j < 3)
                cout<<"* ";

            else if(j == 3 && i != 1 && i != 5)
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[3].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_E(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <=3 ; j++){

            if(j == 1)
                cout<<"*";

            else if (i ==1 || i == 3 || i == 5 )
                cout<<"*";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[4].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_F(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(i == 1 || i == 3)
                cout<<"* ";

            else if(j == 1)
                cout<<"* ";

            else
                cout<<"  ";
        }
            gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[5].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_G(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <=4 ; j++){

            if(i==1 && j != 1)
                cout<<"* ";

            else if(i==2 && j==1)
                cout<<"* ";

            else if(i==3 && (j==3 || j==4))
                cout<<"* ";

            else if(i==4 && j==4)
                cout<<"* ";

            else if(i==5 && j !=1)
                cout<<"* ";

            else if(j==1)
                cout<<"* ";

            else
                cout<<"  ";


        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[6].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_H(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <=4 ; j++){

            if(j==1 || j==4)
                cout<<"*";

            else if(i==3)
                cout<<"*";

            else
                cout<<" ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[7].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_I(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(i == 1 || i == 5)
                cout<<"* ";

            else if(j == 2)
                cout<<"* ";

            else
                cout<<"  ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[8].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_J(int totalWeight){
for(int i = 1; i <= 5; i++){
    for(int j = 1; j <=4 ; j++){

        if(i==1 && j==3)
            cout<<"*";

        else if(j==4 && i!=5)
            cout<<"*";

        else if(i==4 && j==1)
            cout<<"*";

        else if(i==5 && (j==2 || j==3))
            cout<<"*";

        else
            cout<<" ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[9].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_K(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){

            if(j==1)
                cout<<"*";

            else if((i==1 || i==5) && j==4)
                cout<<"*";

            else if((i==2 || i==4) && j==3)
                cout<<"*";

            else if(i==3 && j==2)
                cout<<"*";

            else
                cout<<" ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[10].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_L(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 3; j++){

            if(i == 5 || j == 1)
                cout<<"* ";

            else
                cout<<"  ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[11].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_M(int totalWeight){
     for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){

            if(j == 1 || j == 5)
                cout<<"* ";

            else if(((i == 2) && (j != 3)) || (i == 3 && j != 2 && j != 4))
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[12].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_N(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if(i == 1 && (j == 4 || j == 1))
                cout<<"*";

            else if(i == 2 && j !=3)
                cout<<"*";

            else if(i == 3 && j !=2)
                cout<<"*";

            else if(i == 4 && (j == 4 || j == 1))
                cout<<"*";

            else if(i == 5 && (j == 4 || j == 1))
                cout<<"*";

            else
                cout<<" ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[13].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_O(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){

            if((i == 1 || i == 5) && !(j == 1 || j == 4))
                cout<<"* ";

            else if((j == 1 || j == 4) && !(i == 1 || i == 5))
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[14].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_P(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){

            if(j == 1)
                cout<<"* ";

            else if((i == 1 || i == 4) && j != 4)
                cout<<"* ";

            else if((i == 2 || i == 3) && j == 4)
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[15].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_Q(int totalWeight){
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 4; j++){

            if((j == 1 || j == 4) && !(i == 1 || i == 5 || i == 6))
                cout<<"*";

            else if((j==2 || j==3)&&(i==1||i==5))
                cout<<"*";

            else if(i==6&&j==4)
                cout<<"*";

            else
                cout<<" ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[16].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_R(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if(i == 1 && j !=4)
                cout<<"*";

            else if(i == 2 && (j == 4 || j == 1))
                cout<<"*";

            else if(i == 3 && (j == 4 || j == 1))
                cout<<"*";

            else if(i == 4 && j !=4)
                cout<<"*";

            else if(i == 5 && (j == 4 || j == 1))
                cout<<"*";

            else
                cout<<" ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[17].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_S(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if(i == 1 && j != 1)
                cout<<"*";

            else if(i == 2 && j == 1)
                cout<<"*";

            else if(i == 3 && (j == 2 || j == 3))
                cout<<"*";

            else if(i == 4 && j == 4)
                cout<<"*";

            else if(i == 5 && j != 4)
                cout<<"*";

            else
                cout<<" ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[18].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_T(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 4; j++){

            if(i == 1)
                cout<<"* ";

            else if(j == 2)
                cout<<"* ";

            else
                cout<<"  ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[19].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_U(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if(i == 5 || j == 1 || j == 4)
                cout<<"* ";

            else
                cout<<"  ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[20].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_V(int totalWeight){
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 5; j++){

            if(j == 1 && i != 5)
                cout<<"* ";

            else if(i == 5 && j == 2)
                cout<<"* ";

            else if(j == 3 && (i == 3 || i == 4))
                cout<<"* ";

            else if(j == 4 && (i == 1 || i == 2))
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[21].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_W(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5 ; j++){

            if(i==1 && (j==1 || j==5))
                cout<<"*";

            else if(i==2 && (j==1 || j==5))
                cout<<"*";

            else if(i==3 && (j==1 || j==5))
                cout<<"*";

            else if(i==4 && (j==1 || j==5))
                cout<<"*";

            else if((i!=1 && i!=5) &&j==3)
                cout<<"*";

            else if(i==5 && (j==2 || j==4))
                cout<<"*";

            else
                cout<<" ";

        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[22].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_X(int totalWeight){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if((j == 1 || j == 4) && i != 3)
                cout<<"* ";

            else if(i == 3 && !(j == 1 || j == 4))
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[23].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_Y(int totalWeight){
     for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){

            if(((j == 1) && (i != 3) && (i != 4) && (i != 5)) || (j == 4 && i != 5))
                cout<<"* ";

            else if(((i == 3) && (j != 1)) || (i == 5 && (j != 1 && j != 4)))
                cout<<"* ";

            else
                cout<<"  ";
        }
        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[24].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

void print_Z(int totalWeight){
    int z = 3;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 3; j++){

            if(i == 1 || i == 5 || j == z + 1)
               cout<<"* ";

            else
               cout<<"  ";
        }
        z--;

        gotoxy(totalWeight, i);
    }
    gotoxy(totalWeight + (letters_array[25].weight)*2 + 1, 0);   //Avoid cursor's position end on letter's bottom
}

/// --- LETTERS END --- ///

/// --- PRINT FUNC --- ///

void str2stars(string word){    //This func prints input string as star letters.

    int length = word.length(); //Input word's length
    int totalWeight = 0;    //Total weight of letters. This variable must be change after every letter printed.

    for(int i = 0; i < length; i++){

        if(word[i] == 'a'){
            print_A(totalWeight);
            totalWeight += (letters_array[0].weight)*2 + 1;
        }
        else if(word[i] == 'b'){
            print_B(totalWeight);
            totalWeight += (letters_array[1].weight)*2 + 1;
        }
        else if(word[i] == 'c'){
            print_C(totalWeight);
            totalWeight += (letters_array[2].weight)*2 + 1;
        }
        else if(word[i] == 'd'){
            print_D(totalWeight);
            totalWeight += (letters_array[3].weight)*2 + 1;
        }
        else if(word[i] == 'e'){
            print_E(totalWeight);
            totalWeight += (letters_array[4].weight)*2 + 1;
        }
        else if(word[i] == 'f'){
            print_F(totalWeight);
            totalWeight += (letters_array[5].weight)*2 + 1;
        }
        else if(word[i] == 'g'){
            print_G(totalWeight);
            totalWeight += (letters_array[6].weight)*2 + 1;
        }
        else if(word[i] == 'h'){
            print_H(totalWeight);
            totalWeight += (letters_array[7].weight)*2 + 1;
        }
        else if(word[i] == 'i'){
            print_I(totalWeight);
            totalWeight += (letters_array[8].weight)*2 + 1;
        }
        else if(word[i] == 'j'){
            print_J(totalWeight);
            totalWeight += (letters_array[9].weight)*2 + 1;
        }
        else if(word[i] == 'k'){
            print_K(totalWeight);
            totalWeight += (letters_array[10].weight)*2 + 1;
        }
        else if(word[i] == 'l'){
            print_L(totalWeight);
            totalWeight += (letters_array[11].weight)*2 + 1;
        }
        else if(word[i] == 'm'){
            print_M(totalWeight);
            totalWeight += (letters_array[12].weight)*2 + 1;
        }
        else if(word[i] == 'n'){
            print_N(totalWeight);
            totalWeight += (letters_array[13].weight)*2 + 1;
        }
        else if(word[i] == 'o'){
            print_O(totalWeight);
            totalWeight += (letters_array[14].weight)*2 + 1;
        }
        else if(word[i] == 'p'){
            print_P(totalWeight);
            totalWeight += (letters_array[15].weight)*2 + 1;
        }
        else if(word[i] == 'q'){
            print_Q(totalWeight);
            totalWeight += (letters_array[16].weight)*2 + 1;
        }
        else if(word[i] == 'r'){
            print_R(totalWeight);
            totalWeight += (letters_array[17].weight)*2 + 1;
        }
        else if(word[i] == 's'){
            print_S(totalWeight);
            totalWeight += (letters_array[18].weight)*2 + 1;
        }
        else if(word[i] == 't'){
            print_T(totalWeight);
            totalWeight += (letters_array[19].weight)*2 + 1;
        }
        else if(word[i] == 'u'){
            print_U(totalWeight);
            totalWeight += (letters_array[20].weight)*2 + 1;
        }
        else if(word[i] == 'v'){
            print_V(totalWeight);
            totalWeight += (letters_array[21].weight)*2 + 1;
        }
        else if(word[i] == 'w'){
            print_W(totalWeight);
            totalWeight += (letters_array[22].weight)*2 + 1;
        }
        else if(word[i] == 'x'){
            print_X(totalWeight);
            totalWeight += (letters_array[23].weight)*2 + 1;
        }
        else if(word[i] == 'y'){
            print_Y(totalWeight);
            totalWeight += (letters_array[24].weight)*2 + 1;
        }
        else if(word[i] == 'z'){
            print_Z(totalWeight);
            totalWeight += (letters_array[25].weight)*2 + 1;
        }
    }
}

#endif // LETTERS_H_INCLUDED
