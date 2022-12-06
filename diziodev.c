/******************************************************************************
BMT-103 Dersi 9. hafta uygulama ödevi. 
Bu kod parçası iki matrise 0-100 arasında rastgele değerler atayıp sonrasında
bu iki matrisi toplamakta ve sonucunu 3. bir matrisi atamaktadır. 
Açıkalamar doğrultusunda;
- matris_yazdir fonksiyonu tanımlayınız. 
- main fonksiyonu icerisindeki talimatlar doğrultusunda kodu tamamlayınız. 
*******************************************************************************/

/*
Ad Soyad:Ahmet SÖĞÜT
Numara: 22181616004
Şube: 1
*/
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdıracak şekilde
kodlayınız. 
*/
void matris_yazdir(int matris[][SUT] ){
    
    for(int i=0;i<5;i++){
        for( int k=0;k<4;k++){            
           printf("%d  ", matris[i][k]) ;
        }
    printf("\n");
}
}

int main()
{
   srand(time(NULL));
    int a;
    int matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];
    
    // Burada matrisA ve matrisB ye 0 ile 100 arasında rastgele değerler atayan kodu yazınız. 
    for(int i=0;i<5;i++){
        for(int k=0;k<4;k++){
           
            matrisA[i][k]=rand() % 100;            
        }
    }

    for(int i=0;i<5;i++){
        for(int k=0;k<4;k++){
           
            matrisB[i][k]=rand() % 100;
            
        }
    }
    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    printf("matirsA\n");
    matris_yazdir(matrisA);
    printf("\n");
    printf("matrisB\n");
    matris_yazdir(matrisB);
    printf("\n");
    // Burada iki matrisA ve matrisB yi toplayarak sonucunu matrisT ye atayınız. 
    
    for(int i=0;i<5;i++){
        for(int k=0;k<4;k++){
            matrisT[i][k]=matrisA[i][k]+matrisB[i][k];
        }
    }
     // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    printf("matrisT\n");
    matris_yazdir(matrisT);


    return 0;
}
