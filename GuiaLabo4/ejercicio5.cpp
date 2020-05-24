#include <iostream>
#include <string>
using namespace std;

int main(){
    string palabra ="";
    cout << "ingrese su palabra" << "\n";
    cin >> palabra;
    int longi= palabra.length();
    if (palabra.at(0) == (palabra.at(longi-1)))
        cout <<"los extremos son iguales";
        else
        {
            cout <<"los extremos no son iguales";
        }
return 0;        
  
   
}