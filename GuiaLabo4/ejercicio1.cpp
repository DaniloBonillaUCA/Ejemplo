#include <iostream>
using namespace std;

int main ()
{
int n; 
int d;
cout << "escriba sus 2 numeros" << "\n";
cin >> n >> d;
if (n%d==0)
cout << n << "  "<< "es divisible entre:" << "  " << d << "\n";
else
cout << "El numero no es divisible entre el otro" << "\n";
}


