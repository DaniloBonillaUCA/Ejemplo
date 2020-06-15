#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
    
    int hora (int x, int y, int z){

    if ((x>=0 && x <10) && (y>=0 && y <10) && (z>=0 && z <10)){
    cout<<"La hora actual es: " << "\n";
    cout <<"0"<< x << ":"<<"0" << y << ":"<<"0" << z << "\n";
    }
    
    if ((x>=0 && x <10) && (y>=0 && y <10) && (z>=10 && z <=59)) {
    cout<<"La hora actual es: " << "\n";
    cout <<"0"<< x << ":"<<"0" << y << ":"<< z << "\n";
    }
    if ((x>=0 && x <10) && (y>=10 && y <=59) && (z>=10 && z <=59)) {
    cout<<"La hora actual es: " << "\n";
    cout <<"0"<< x << ":" << y << ":"<< z << "\n";
    }
    if ((x>=10 && x <=23) && (y>=10 && y <=59) && (z>=10 && z <=59)) {
    cout<<"La hora actual es: " << "\n";
    cout << x << ":" << y << ":"<< z << "\n";
    }
    if ((x>=10 && x <=23) && (y>=0 && y <10) && (z>=10 && z <=59)) {
    cout<<"La hora actual es: " << "\n";
    cout << x << ":"<<"0" << y << ":"<<"0"<< z << "\n";
    }
    if ((x>=10 && x <=23) && (y>=0 && y <10) && (z>=0 && z <10)) {
    cout<<"La hora actual es: " << "\n";
    cout << x << ":"<<"0" << y << ":"<<"0"<< z << "\n";
    }  if ((x>=10 && x <=23) && (y>=10 && y <=59) && (z>=0 && z <10)) {
    cout<<"La hora actual es: " << "\n";
    cout << x << ":" << y << ":"<<"0"<< z << "\n";
    }
    }
main (){
     time_t now = time(0);
   tm * time = localtime(&now); 
   int hour = time->tm_hour;
   int min = time->tm_min;
   int sec = time->tm_sec;   
    hora(hour,min,sec);
   
   if ((hour==23 && min==59) && (sec==59)){
        hour=0;
        min=0;
        sec=0;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
          cout<<"0" << hour << ":"<<"0" << min << ":"<<"0" << sec << "\n";
          return(0);
    }
    if ((hour >=9 && hour <23) && (min==59 && sec==59)){
        hour=hour+1;
        min=0;
        sec=0;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout << hour << ":"<<"0" << min << ":" <<"0"<< sec << "\n";
          return(0);
          
    }
     if ((hour >=0 && hour <9) && (min==59 && sec==59)){
        hour=hour+1;
        min=0;
        sec=0;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout << "0"<< hour << ":" <<"0"<< min << ":"<<"0" << sec << "\n";
          return(0); }

     if ((hour >=10 && hour <24) && (min>=9 && min<59) && (sec==59)){
        hour=hour;
        min=min+1;
        sec=0;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout << hour << ":" << min << ":"<<"0"  << sec << "\n";
          return(0);
    }
      if ((hour >=0 && hour <10) && (min>=0 && min<9) && (sec==59)){
        hour=hour;
        min=min+1;
        sec=0;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout <<"0"<< hour << ":" <<"0"<< min << ":"<<"0" << sec << "\n";
          return(0);
    }
      if ((hour >=10 && hour <24) && (min>=10 && min<59) && (sec>=10 && sec<59)){
        hour=hour;
        min=min+1;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout << hour << ":" << min << ":" << sec << "\n";
          return(0);
    }
    if ((hour >=0 && hour <10) && (min>=0 && min<10) && (sec>=0 && sec<9)){
        hour=hour;
        min=min;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout <<"0" << hour << ":" <<"0"<< min << ":"<<"0"<< sec << "\n";
          return(0);
    }   if ((hour >=0 && hour <10) && (min>=10 && min<59) && (sec>=10 && sec<59)){
        hour=hour;
        min=min;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout <<"0" << hour << ":" << min << ":"<<sec << "\n";
          return(0);
    } if ((hour >=0 && hour <10) && (min>=10 && min<59) && (sec>=0 && sec<9)){
        hour=hour;
        min=min;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout <<"0" << hour << ":" << min << ":"<< "0" << sec << "\n";
          return(0);
    } if ((hour >=0 && hour <10) && (min>=0 && min<10) && (sec>=0 && sec<9)){
        hour=hour;
        min=min;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout <<"0" << hour << ":" << min << ":"<< "0" << sec << "\n";
          return(0);
    }
 if ((hour >=10 && hour <59) && (min>=0 && min<59) && (sec>=0 && sec<9)){
        hour=hour;
        min=min;
        sec=sec+1;
        cout<< "La hora adelantada 1 segundo es: "<<"\n";
            cout << hour << ":" << min << ":"<<"0" << sec << "\n";
          return(0);
    }
}
    

