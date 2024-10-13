#include <iostream>
using namespace std;

int main()
{
    int angka = 0, input, jumlahGanjil = 0,jumlahGenap = 0, counter = 0;

    cout << "Masukan jumlah data : ";
    cin >> input;
    for(angka = 0; angka < input; angka++)
    {
        if(angka % 2 == 0)
        {
            jumlahGenap += angka;
            counter++;
        }
        else
        {
            jumlahGanjil += angka;
            counter++;
        }
    }
    cout << "Jumlah total bilangan ganjil : " << jumlahGanjil << '\n';
    cout << "Jumlah total bilangan genap : " << jumlahGenap;
}