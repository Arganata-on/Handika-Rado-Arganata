#include <iostream>

int main(){
    int hargaAsli = 150000;
    double diskon = 12.5;
    int besarnyaDiskon = (diskon/100) * hargaAsli;
    double hargaSetelah = hargaAsli - (diskon/100) * hargaAsli;
    
    std::cout << "Harga : " << hargaAsli << " ribu" << '\n';
    std::cout << "Diskon : " << diskon << '\n';
    std::cout << "Besarnya diskon dari harga : " << besarnyaDiskon << '\n';
    std::cout << "Harga Setelah diskon " << hargaSetelah << " ribu";
    return 0;
}