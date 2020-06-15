#include <iostream>
#include <stdlib.h>

using namespace std;

bool anhodivisible(int x, int y){
    if (x%y==0) {
    return true;
    }

else{
return false;
}

}

int bisiesto (int a, int b, int c){

int div=400;
int div2=4;
int nodiv=100;
if (anhodivisible(c,div) && (a==28 && b==2)){
cout<< "29/02/"<< c<<"\n";
exit(0);
}
if ((anhodivisible(c,div2) && (a==28 && b==2)) && !(anhodivisible(c,nodiv))) {
cout<< "29/02/"<< c<<"\n";
exit(0);
}
if ((a==28 && b==2) && !((anhodivisible(c,div)||((anhodivisible(c,div2) && !(anhodivisible(c,nodiv))))))){
cout << "01/03/"<<c<<"\n";
exit(0);
}
}

main (void){
    int dia=0;
    int mes=0;
    int anho=0;
    cout<<"Ingrese la fecha con el dia y mes en solamente 2 digitos, utiliza solo numeros"<<"\n";
    cout<<"Ingresa el dia"<<"\n";
    cin >> dia;
    cout<<"Ingresa el mes"<<"\n";
    cin >> mes;
    cout<<"Ingresa el a"<<char(164)<<"o"<<"\n";
    cin >> anho;
    if (dia==31 && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10)) {
        dia=1;
        mes=mes+1;
        cout << dia<<"/"<< mes<<"/"<<anho;
        exit(0);
    }
    if (dia==30 && (mes==2 || mes==4 || mes==6 || mes==9 || mes==11)) {
       dia=1;
       mes=mes+1;
        cout << dia<<"/"<< mes<<"/"<<anho;
        exit(0);

}
    if (dia==31 && mes==12) {
        dia=1;
        mes=1;
        anho=anho+1;
        cout << dia<<"/"<< mes<<"/"<<anho;
        exit(0);
 }
  if ((dia>0 && dia <=30) && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10)) {
      dia=dia+1;
    cout << dia<<"/"<< mes<<"/"<<anho;
    exit(0);

}
  if ((dia>0 && dia <=29) &&  (mes==4 || mes==6 || mes==9 || mes==11)) {
      dia=dia+1;
    cout << dia<<"/"<< mes<<"/"<<anho;
    exit(0);
  
}
if ((dia>0 && dia <=27) &&  mes==2) {
      dia=dia+1;
    cout << dia<<"/"<< mes<<"/"<<anho;
    exit(0);
  
}
else
{
  bisiesto(dia,mes,anho);
}
cout <<"Ingresa una fecha valida por favor"<<"\n";
}
