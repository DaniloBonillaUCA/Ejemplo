#include <iostream>
using namespace std;
float area(float r);
float perimetro(float r);

main(void){
   float radio=0;
    cin >> radio;
    float a=area(radio);
    cout << "el area es:" << a<<"\n";
    cout << "el perimetro es:" << perimetro(radio)<<"\n";
}

float area(float r){
    return (3.1416*(r*2));
};
float perimetro(float r){
    return (2*3.141516*r);
}