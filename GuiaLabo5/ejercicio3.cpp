#include <iostream>
#include <stdlib.h>

using namespace std;
/*Se hizo un programa usando la estructura basica del if, 
en la cual se ocupo el modulo para saber si el año era divisible o no, además de utilizar la lógica vista en matemática discreta para la segunda condición*/

bool anhodivisible(int x, int y){
    if (x%y==0) {
    return true;
    }

else{
return false;
}

}

main (){

int anho=0;
int div=400;
int div2=4;
int nodiv=100;
cout << "Ingrese el a"<<char(164)<<"o que desea comprobar si es bisiesto o no: "<< "\n";
cin >> anho;
if (anhodivisible(anho,div)) {
cout<< "El a"<<char(164)<<"o es bisiesto";
}
if ((anhodivisible(anho,div2)) && !(anhodivisible(anho,nodiv))) {
cout<< "El a"<<char(164)<<"o es bisiesto";
}
else cout <<"El a"<<char(164)<<"o no es bisiesto";
return 0;
}