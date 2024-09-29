#include <iostream>

using namespace std;
int main(){
int hargaAwal = 150000;
double diskon = 12.5;
double besarDiskon = hargaAwal * diskon/100;
int hargaAkhir = hargaAwal - besarDiskon;

cout << "Harga : " <<  hargaAwal << " ribu" << '\n';
cout << "Diskon : " << diskon << '\n';
cout << "Besarnya diskon dari harga : " << besarDiskon << '\n';
cout << "Harga setelah diskon " << hargaAkhir << " ribu" << '\n';
}
