#include "AlternateHeaders/str2stars.h"

#include <fstream>
#include <string>

int main(){

    while(1){

        //Preparing user settings
        int* arr = readSettings();  //Reading from file
        MAX_SPACE = *arr;
        USING_SHAPE = *(arr + 1);

        string word;     //Input String
        int control,        //To control progress
        settingsArray[2];   //To keep user settings

        cout<<"Select progress...\n1 - Print String\n2 - Settings\n3 - Exit\n";
        cin>>control;
        system("CLS");  //Clear Screen

        switch(control){

            case 1:     //Printing
                cout<<"Enter your String: ";
                cin.get();
                getline(cin, word);

                cout<<word;

                system("CLS");  //Clear Screen

                str2stars(word);    //Printing Word
                getchar();

                system("CLS");

                break;

            case 2:     //Settings
                int settingsControl;

                cout<<"Select progress...\n1 - Change Settings\n2 - Reset\n3 - Exit\n";
                cin>>settingsControl;

                switch(settingsControl){

                    case 1:
                        system("CLS");

                        cout<<"Enter line width (count of words in a line... Default 2): ";
                        cin>>settingsArray[0];

                        cout<<"Enter the using character as ASCII code (Default 42): ";
                        cin>>settingsArray[1];

                        writeSettings(settingsArray);
                        cout<<"Changes Saved...";
                        system("CLS");
                        break;

                    case 2:
                        resetSettings();
                        cout<<"Settings Reseted...";
                        system("CLS");
                        break;

                    case 3:
                        system("CLS");
                        break;

                    default:
                        cout<<"Pls enter a valid progress...";
                        break;

                }
                break;

            case 3:
                exit(0);
                break;

            default:
                cout<<"Pls enter a valid progress...";
                break;

        }
    }

    //This code is an example for reading values from settings.txt
    //Pls do not delete
     /*int* arr = readSettings();
    cout<<*arr<<endl<<*(arr + 1)<<endl;*/

    return 0;
}
