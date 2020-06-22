#include <iostream>

using namespace std;

int main(){
    int arr[10] ={5,5,9,7,6,4,8,9,7,9};

    int acum=0;

    for(int i=0; i<10;i++){
        if (arr[i]==4){
        acum=acum+1; 
        }
    }
    cout<< "La cantidad de veces que se repite el numero 4 son: " << acum << " veces"<< "\n";
    acum=0;
    for(int i=0; i<10;i++){
        if (arr[i]==5){
        acum=acum+1;   
        }
    }
     cout<< "La cantidad de veces que se repite el numero 5 son: " << acum << " veces"<< "\n";
    acum=0;
    for(int i=0; i<10;i++){
        if (arr[i]==6){
        acum=acum+1; 
        }
    
    }
   cout<< "La cantidad de veces que se repite el numero 6 son: " << acum << " veces"<< "\n";
   acum=0;
    for(int i=0; i<10;i++){
        if (arr[i]==7){
        acum=acum+1;
        }
     
    }
    cout<< "La cantidad de veces que se repite el numero 7 son: " << acum << " veces"<< "\n";
    acum=0;
     for(int i=0; i<10;i++){
        if (arr[i]==8){
        acum=acum+1;
        }
     
    } cout<< "La cantidad de veces que se repite el numero 8 son: " << acum << " veces"<< "\n";
    acum=0;
        for(int i=0; i<10;i++){
        if (arr[i]==9){
        acum=acum+1;
        }
     
    }
    cout<< "La cantidad de veces que se repite el numero 9 son: " << acum << " veces"<< "\n";
    return 0;
}