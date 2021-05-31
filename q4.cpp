///(10)Aplicatie in matematica T.P (teorema lui Pitagora):
//Afla ipotenuza unui triunghi dreptunghic stiind catetele
 
#include <iostream>
#include <cmath>
 
using namespace std;
int main(){
int a,b,a1,b1;
cin>>a>>b;
a1=a*a;
b1=b*b;
cout<<"Valoarea ipotenuzei este:"<<endl;
cout<<" _________"<<endl;
cout<<"√"<<a1+b1<<endl<<endl<<"sau"<<endl<<endl;
cout<<sqrt(a1+b1);
 
 
    return 0;
 
}
