#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra ="";
    cout << "ingrese su palabra" << "\n";
    cin >> palabra;
    int caracteres = palabra.length();
    if ((caracteres >= 10) && (caracteres%2==0)){
 cout << "la palabra tiene 10 o mas caracteres y es par" << "\n";
    }
   
    else if ((caracteres >= 10) && (caracteres%2!=0)) {
 cout << "la palabra tiene 10 o mas caracteres y es impar" << "\n";
    }
   
    else if ((caracteres < 10) && (caracteres%2==0)) {
 cout << "  la palabra tiene menos de 10 caracteres y es par" << "\n";
    }
 else  {
 cout << "  la palabra tiene menos de 10 caracteres y es impar" << "\n";
    }
   
}