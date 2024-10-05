#include <iostream>

int main(){
    int jumlahBilanganPrima = 0;
    std::cout << "Bilangan Prima : ";
    for(int pertama = 2; pertama <= 50; pertama++){
        bool bilanganPrima = true;

        for(int kedua = 2; kedua < pertama; kedua++){
            if(pertama % kedua == 0){
                bilanganPrima = false;
                break;
            }
        }
        if(bilanganPrima){
            std::cout << pertama << " ";
            jumlahBilanganPrima++;
        }
    }
        std::cout << '\n' << "Jumlah Bilangan Prima : " << jumlahBilanganPrima;
}