#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

int main(){
    int angka, tebak, n=0;
    
    srand (time(NULL))
    angka=rand() % 10 +1;
    
    cout << "Saya memfikirkan angka dari 1 samapai 10, berapakah itu ?\n";
    
    do{
        n++;
        cin >> tebak;
        if(tebak < angka) cout << "Angka anda terlalu kecil!!!\n";
        else if(tebak > angka) cout << "Angka anda terlalu besar!!!\n";
      }while(tebak!=angka);
      
      cout << "Benar! anda telah menebak sebayak " << n << "kali.\n";
      
      return 0;
      
}