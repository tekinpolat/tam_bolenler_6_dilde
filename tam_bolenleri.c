#include <stdio.h>
#include <stdlib.h> 
int * tam_bolenler(int sayi){
    int* tam_bolenler = NULL;
    tam_bolenler = (int*)malloc(100 * sizeof(int)); 

    int sayac = 1;
    int index = 0;
    while (sayac <= sayi){
        if (sayi%sayac == 0){
             tam_bolenler[index] = sayac; 
             index++;
             tam_bolenler[index] = (-1)*sayac; 
             index++;
        }
        sayac++;
    }
    return tam_bolenler;
}
int main () { 
    printf("Starting...\n");
    int *tam_bolenler_sonuc, sayi;
    printf("Lütfen tam bölenlerini görmek listediğiniz sayıyı giriniz:");
    scanf("%d", &sayi);
    
    tam_bolenler_sonuc = tam_bolenler(sayi);
    for (int i = 0; i < 200; i++ ) {
        printf("%d\n", *(tam_bolenler_sonuc + i));
    }
    return 0;
 } 