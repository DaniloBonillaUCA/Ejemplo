#include <iostream>

using namespace std;

void arreglo(int arr[], int n){
    for (int i=1;i<=n;i++){
        cout << "Ingrese su numero de la posicion " << i << " de su arreglo" << "\n";
        cin >> arr[i];
    }
}

void arreglossumados(int arr1[], int arr2[], int n, int suma[]){
    for (int i=1;i<=n;i++){
        suma[i] = arr1[i] + arr2[i];
    }
}

void resultado(int suma[], int n){
    cout << "La suma de los arreglos es: " << "\n";
    for(int i=1;i<=n;i++){
        cout << "En la posicion "<< i << " la suma es: "<< suma[i]<< "\n";
    }
}

int main(){
    int n=0;
    cout << "Ingrese la cantidad de numeros que desea en su arreglo: "<< "\n";
    cin >> n;
    int arr1[n];
    int arr2[n];
    int suma[n];
    arreglo(arr1,n);
    arreglo(arr2,n);
    arreglossumados(arr1, arr2, n, suma);
    resultado (suma, n);

}