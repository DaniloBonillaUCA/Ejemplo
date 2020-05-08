#include <iostream>
using namespace std;

float dinerogastado(float x, float y){
return (x*y);
}

main(void){
    string string1= " ",string2="escriba el producto que quiere", string3="escriba el precio del producto", string4="escriba la cantidad que desea adquirir";
    float precio=0, cantidad=0;
    cout << string2 << "\n";
    cin >> string1; "\n";
    cout <<"el producto que usted quiere comprar es: " << string1 << "\n";
    cout << string3 << "\n";
    cin >> precio;
    cout <<"el precio del producto es: $ " << precio << "\n";
    cout << string4 << "\n";
    cin >> cantidad;
    cout <<"usted quiere comprar esta cantidad:" << cantidad << "\n";

    float total= dinerogastado(precio, cantidad);
    cout << "El total de dinero gastado es: $" << total << "\n";
}