/************************************************************************************************************************************************************************************************************************************************************************
**                                                                 SAKARYA ÜNİVERSİTESİ
**                                              BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**                                                     BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                                                         PROGRAMLAMAYA GİRİŞ DERSİ
**
**                          ÖDEV NUMARASI...........: 1
**                          ÖĞRENCİ ADI......: SENA NUR ERDEM
**                          ÖĞRENCİ NUMARASI.....: G201210033
**                          DERS GRUBU.................................: 2A
 ************************************************************************************************************************************************************************************************************************************************************************/

#include <iostream>
#include <locale.h>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;
void run(string*sehirler)
{
        srand(time(NULL));
        for (int z = 3; z < 14; z++) // rastgele 3 harfli sehir bulur
        {
            char yeni_sehir [4];
            string randomsehir [3];
            for (int y = 0; y < 100000; y++)
            {
                for (int x = 0; x < 3; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 3; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];
                }
                yeni_sehir [3] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "3 harfli sehir: " << yeni_sehir << endl;
                        return;
                    }
                }
            }
        }
    
}
void run1(string* sehirler)
{
    srand(time(NULL));

    for (int z = 4; z < 14; z++) //rastgele 4 harfli sehir bulur
    {
        char yeni_sehir [5];
        string randomsehir [4];
        for (int y = 0; y < 100000; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                randomsehir[x] = sehirler [rand() % 81];
            }

            for (int x = 0; x < 4; x++)
            {
                yeni_sehir [x] = randomsehir [x] [0];

            }
            yeni_sehir [4] = '\0';
            for (int x = 0; x < 81; x++)
            {
                if (sehirler [x] == yeni_sehir)
                {
                    cout << "4 harfli sehir: " << yeni_sehir << endl;
                    return;
                }
            }
        }
    }

}

void run2(string* iller)
{
    srand(time(NULL));

    for (int z = 5; z < 14; z++) // rastgele 5 harfli sehir bulur
    {
        char yeni_il [6];
        string randomil [5];
        for (int y = 0; y < 100000; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                randomil [x] = iller[rand() % 81];            }

            for (int x = 0; x < 5; x++)
            {
                yeni_il [x] = randomil [x] [0];

            }
            yeni_il [5] = '\0';
            for (int x = 0; x < 81; x++)
            {
                if (iller [x] == yeni_il)
                {
                    cout << "5 harfli sehir: " << yeni_il << endl;
                    return;
                }
            }
        }
    }

}

void run3(string*sehirler)
{
    srand(time(NULL));

    for (int n = 6; n < 14; n++) //rastgele 6 harfli sehir bulur
    {
        
        char yeni_sehir [7];
        string randomsehir [6];
        for (int y = 0; y < 100000; y++)
        {
            for (int x = 0; x < 6; x++)
            {
                randomsehir [x] = sehirler[rand() % 81];
            }

            for (int x = 0; x < 6; x++)
            {
                yeni_sehir[x] = randomsehir [x] [0];

            }
            yeni_sehir [6] = '\0';
            for (int x = 0; x < 81; x++)
            {
                if (sehirler [x] == yeni_sehir)
                {
                    cout <<"6 harfli sehir: " << yeni_sehir << endl;
                    return;                }
            }
        }
        
        
    }

}

void run4(string*sehirler)
{
        srand(time(NULL));

        for (int n = 7; n < 14; n++) //rastgele 7 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [8];
            string randomsehir [7];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 7; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 7; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [7] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "7 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0){ //bulamazsa bulunamadı yazdırır
                cout << "7 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}
void run5(string*sehirler)
{
        srand(time(NULL));

        for (int n = 8; n < 14; n++) //rastgele 8 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [9];
            string randomsehir [8];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 8; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 8; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [8] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "8 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            { //bulamazsa bulunamadı yazdırır
                cout << "8 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}
void run6(string*sehirler)
{
        srand(time(NULL));

        for (int n = 9; n < 14; n++) //rastgele 9 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [10];
            string randomsehir [9];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 9; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 9; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [9] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "9 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            { //bulamazsa bulunamadı yazdrır
                cout << "9 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}


void run7(string*sehirler)
{
        srand(time(NULL));

        for (int n = 10; n < 14; n++) //rastgele 10 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [11];
            string randomsehir [10];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 10; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 10; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [10] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "10 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
               { //bulamazsa bulunamadı yazdırır
                cout << "10 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}


void run8(string*sehirler)
{
        srand(time(NULL));

        for (int n = 11; n < 14; n++)//rastgele 11 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [12];
            string randomsehir [11];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 11; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 11; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [11] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "11 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            { //bulamazsa bulunamadı yazdırır
                cout << "11 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}

void run9(string*sehirler)
{
        srand(time(NULL));

        for (int n = 12; n < 14; n++) //rastgele 12 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [13];
            string randomsehir [12];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 12; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 12; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [12] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "12 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            {  //bulamazsa bulunamadı yazdırır
                cout << "12 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}
void run10(string*sehirler)
{
        srand(time(NULL));

        for (int n = 13; n < 14; n++) //rastgele 13 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [14];
            string randomsehir [13];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 13; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 13; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [13] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "13 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            {   //bulamazsa bulunamadı yazdırır
                cout << "13 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}

void run11(string*sehirler)
{
        srand(time(NULL));

        for (int n = 14; n < 14; n++) //rastgele 14 harfli sehir bulur
        {
            int sehirkontrol=0;
            char yeni_sehir [15];
            string randomsehir [14];
            for (int a = 0; a < 100000; a++)
            {
                for (int x = 0; x < 14; x++)
                {
                    randomsehir [x] = sehirler [rand() % 81];
                }
                for (int x = 0; x < 14; x++)
                {
                    yeni_sehir [x] = randomsehir [x] [0];

                }
                yeni_sehir [14] = '\0';
                for (int x = 0; x < 81; x++)
                {
                    if (sehirler [x] == yeni_sehir)
                    {
                        cout << "14 harfli sehir: " << yeni_sehir << endl;
                    
                        return;
                    }
                }
            }
            if(sehirkontrol == 0)
            {  //bulamazsa bulunamadı yazdırır
                cout << "14 harfli sehir bulunamadi" << endl;
                return;
            }
        }
    
}
   
int main()
{
    setlocale(LC_ALL, "turkish");

    string sehirler[81] = { "adana", "adiyaman", "afyonkarahisar", "agri", "aksaray", "amasya",
       "ankara", "antalya", "ardahan", "artvin", "aydin", "balikesir", "bartin", "batman",
       "bayburt", "bilecik", "bingol", "bitlis", "bolu", "burdur", "bursa", "canakkale",
       "cankiri", "corum", "denizli", "diyarbakir", "duzce", "edirne", "elazig", "erzincan",
       "erzurum", "eskisehir", "gaziantep", "giresun", "gumushane", "hakkari", "hatay", "igdir",
       "isparta", "istanbul", "izmir", "kahramanmaras", "karabuk", "karaman", "kars", "kastamonu",
       "kayseri", "kilis", "kirikkale", "kirklareli", "kirsehir", "kocaeli", "konya", "kutahya",
       "malatya", "manisa", "mardin", "mersin", "mugla", "mus", "nevsehir", "nigde", "ordu",
       "osmaniye", "rize", "sakarya", "samsun", "sanliurfa", "siirt", "sinop", "sivas", "sirnak",
       "tekirdag", "tokat", "trabzon", "tunceli", "usak", "van", "yalova", "yozgat", "zonguldak" };

    run(sehirler);
    run1(sehirler);
    run2(sehirler);
    run3(sehirler);
    run4(sehirler);
    run5(sehirler);
    run6(sehirler);
    run7(sehirler);
    run8(sehirler);
    run9(sehirler);
    run10(sehirler);
    run11(sehirler);
    
    
    
   //en uzun karakterli il = afyonkarahisar
   //en kısa karakterli il = mus ve van
    string enuzunkarakterlisehir = sehirler[0];
    string enkisakarakterlisehir = sehirler[0];

    for (int i=0; i<81; i++){
        if (sehirler[i].length()< enkisakarakterlisehir.length())
        { //en kısa karakterli sehiri buldurur
            enkisakarakterlisehir=sehirler[i];
        }
        if (sehirler[i].length()> enuzunkarakterlisehir.length())
        { //en uzun karakterli sehiri buldurur
            enuzunkarakterlisehir=sehirler[i];
        }
    }
    cout << "En kısa karakterli sehir: " << enkisakarakterlisehir << endl;
    cout << "En uzun karakterli sehir: " << enuzunkarakterlisehir << endl;

    
}
