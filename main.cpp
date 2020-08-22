#include "AlternateHeaders/str2stars.h"

#include <fstream>

int main(){


    resetSettings();

    int arr[2] = {2, 42};

    writeSettings(arr);


    string abc = "anil berk bilge han necmi berat";

    str2stars(abc);

    getchar();

    //This code is an example for reading values from settings.txt
    //Pls do not delete
     /*int* arr = readSettings();
    cout<<*arr<<endl<<*(arr + 1)<<endl;*/

    return 0;
}
