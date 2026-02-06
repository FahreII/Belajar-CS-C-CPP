#include<stdio.h>

int main(){
    
    int masukanAngka;
    float masukanAngkaKoma;
    char karakter;
    char kata[100];

    scanf("%d", &masukanAngka);
    getchar();
    printf("Angka yang dimasukan adalah %d\n", masukanAngka);

    scanf("%f", &masukanAngkaKoma);
    getchar();
    printf("Float yang anda masukan adalah %.2f\n", masukanAngkaKoma);

    scanf("%c", &karakter);
    getchar();
    printf("Charakter yang anda masukan adalah %c\n", karakter);

    scanf("%[^\n]", kata);
    getchar();
    printf("Kata yang anda tulis : %s\n", kata);


}