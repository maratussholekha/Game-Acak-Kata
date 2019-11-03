//deteksi huruf dalam kata

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
   string kata , jawaban , tebakan ;
   char temp;
   int indeks1 , indeks2, jumlah ;

   cout << "SELAMAT DATANG DI GAME ACAK KATA" << endl;
   cout << "================================" << endl << endl;

    cout << "Masukkan Sebuah Kata : "; cin >> kata ; //menginputkan kata

    cout << "Jumlah huruf dari " << kata << " adalah : "; //menampilkan jumlah kata

    //proses menampilkan jumlah kata
    cout << kata.size() << endl;
    jawaban=kata;
    jumlah=kata.size();
    srand(static_cast < unsigned > (time(0)));

    //proses merandom kata
    for(int a=jumlah ; a>0 ; a--)
    {
        indeks1=rand()% jumlah; //menamdom kata yang diacak
        indeks2=a-1;
        temp = kata[indeks1];
        kata[indeks1]=kata[indeks2];
        kata[indeks2]= temp;
    }

    cout << "Acak Kata : "; //menampilkan kata yang telah diproses acak

    //proses menampilkan kata yg telah diproses acak
    for(int i=0 ; i< jumlah ; i++)
        {
            cout << kata[i];
        }
    cout << endl << endl;



return 0;
}
