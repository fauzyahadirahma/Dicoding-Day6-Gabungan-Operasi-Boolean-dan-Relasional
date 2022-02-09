/* File         : gabungan.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh perbandingan nilai numerik dengan 
                  menggabungkan pemakaian operator */
                  
#include <stdio.h>
int main () 
{
    /* KAMUS */
    int uang = 6000;
    int hujan = 0; /* Artinya hujan bernilai FALSE */
    
    /* PROGRAM */
    printf ("uang > 5000 dan tidak hujan : %d \n", (uang > 5000) && (!hujan));
    
    uang = 6000;
    hujan = 1; /* Artinya hujan bernilai TRUE */
    printf ("uang > 5000 dan tidak hujan : %d \n", (uang > 5000) && (!hujan));
    
    return 0;
}
