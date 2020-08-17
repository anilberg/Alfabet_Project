#include <iostream>
#include <string>
using namespace std;

string to_lower(string kelime);

int main(){

    string kelime = "ThiS iS aN sTRiNg";

    cout<<"Eski kelime: "<<kelime<<endl;

    cout<<"Yeni Kelime: "<<to_lower(kelime)<<endl;


    return 0;
}

string to_lower(string kelime){

    int length = kelime.size(); ///Gelen kelimenin uzunlugu

    for(int i = 0; i < length; i++){    ///Gelen kelimenin harf sayisi kadar donmeli
                                        ///cunku harfleri tek tek kontrol edecez


        for(int j = 65; j < 91; j++){   ///Bu dongunun amaci ASCII olarak buyuk harfler 65-90 arasi oldugu icin
                                        ///tum buyuk harfleri kontrol ettigimiz kelimenin siradaki harfi ile
                                        ///karsilastirmak

            if(kelime[i] == (char)j){   ///Burada butun buyuk harfleri gelen kelimenin siradaki harfine esit mi
                                        ///diye kontrol ediyoruz

                kelime[i] = (char)j + 32;   ///Eger esitse yani kelimede buyuk bir harf varsa o harfi kucuk
                                            ///yapmamiz gerekir. Bunun icin harfi 32 ile toplayabiliriz ASCII
                                            ///tablosunda ayni harfin kucugu buyuk olandan 32 sonra geldigi icin
                                            ///yani 'A' = 65 ise 'a' = 97 oldugu icin 32 ile topladýk. Ve buyuk olan
                                            ///harfi kucugu ile degistirdik.
            }

        }
    }


    return kelime;  ///Yenilenmis kelimeyi cevap olarak gonderiyoruz
}
