#include <iostream>
using namespace std;

float prom(float x, float y, float z){
    return ((x+y+z)/3);
}

main(void){
   float num1=0,num2=0,num3=0;
    cin >> num1 >> num2 >>num3;
    float n=prom(num1,num2,num3);
    cout << "los numeros ingresados son:"<< "\n" << num1 << "\n"<< num2<< "\n" << num3 << "\n";
    cout << "el promedio de los 3 numeros ingresados es:" << n <<"\n";
}


