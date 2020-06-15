#include <iostream>

using namespace std;
/* se hace uso del metodo de Euclides, el cual se mete dentro de un do while, con la condicion de que este se ejecute
siempre y cuando el residuo obtenido entre el numero mayor y el menor sea diferente a 0, el metodo de Euclides se hace con un if, que mientras el residuo sea diferente de 0,
se realice la operacion del modulo entre el numero mayor y el menor, y que la variable "mayor" pase a ser el numero menor que se habia ingresado y la variable "menor" se convierta
en el residuo que se acaba de obtener, y se repita hasta que el residuo quede en 0, eso para simular el proceso que se hace en un cuaderno o en una tabla, y la variable "menor" simula
la parte donde se va escribiendo lo que comunmente se le llama "tiene 5ta, o tiene 2da, y se van poniendo los numeros a un costado", al final basta con mostrar en pantalla el valor que se habia 
guardado en "menor"*/
main(void)
{
int mayor, menor, residuo;
cout << "A continuacion se calculara el MCD de los numeros que ingreses"<<"\n";
cout << "Digite el numero mayor: ";
cin >> mayor;
cout << "Digite el numero menor: ";
cin >> menor;
do
{
residuo = mayor % menor;
if(residuo != 0){
mayor = menor;
menor = residuo;
}
}
while(residuo != 0);
cout << "El MCD es: " << menor<< "\n";

return 0;
}
