#include <iostream>
using namespace std;

int main() {
float a=0;
float b=0;
int opzione=0;
cin>>a>>b>>opzione;
   switch(opzione){
      case 0:
         cout<<((a*b)/2);
         break;
      case 1:
         cout<< (a*a);
         break;
      case 2:
         cout<<(a*b);
      default: cout<<"opzione non valida"<< endl;
         
         
   
   return 0;
}
