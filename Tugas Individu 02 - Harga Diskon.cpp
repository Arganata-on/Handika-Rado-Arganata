#include <iostream>

int main(){
    int hargaAsli = 150000;
    double diskon = 12.5;
    int besarDiskon = hargaAsli * (diskon/100);
    int hargaFinal = hargaAsli - besarDiskon;

    std::cout << "Harga : " << hargaAsli << " ribu" << '\n';
    std::cout << "Diskon : " << diskon << '\n'; 
    std::cout << "Besarnya diskon dari harga : " << hargaAsli * (diskon/100) << '\n';
    std::cout << "Harga setelah diskon " << hargaFinal << " ribu";
    return 0;
}
