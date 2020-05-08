#include <iostream>
#include <math.h>
using namespace std;


float laraiz(float x,float y, float z)
{
    return (sqrt(pow(y,2)-(4*x*z)));

}

float cuadraticaposi(float x, float y, float z){
return ((-y+laraiz(x,y,z))/(2*x));
}

float cuadraticanega(float x, float y, float z){
return ((-y-laraiz(x,y,z))/(2*x));
}

main(void){
float num1=0, num2=0, num3=0;
cin >> num1 >> num2>> num3;
float cp= cuadraticaposi(num1, num2, num3);
float cn= cuadraticanega(num1, num2, num3);
cout << "el resultado de la formula cuadratica positiva es:" << cp << "\n";
cout << "el resultado de la formula cuadratica negativa es:" << cn << "\n";
}

