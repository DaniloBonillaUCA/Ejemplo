#include <iostream>
using namespace std;

int main ()
{
int n; 
cout << "escriba su numero positivo o negativo" << "\n";
cin >> n;
if (n>0){
cout << n << "  "<<  "es un numero positivo" << "\n";
}
else if (n<0){
    cout << n << "  "<< "es un numero negativo" << "\n";
}
else
{
     cout << n << "  "<< "tu numero es 0" << "\n";
}
}