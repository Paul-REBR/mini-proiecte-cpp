///(1) Rezolvarea ecuatiei de gradul I in c++:
///trebuie puse in consola 2 numere
///ele vor afisa ecuatia de gradul 1 cu acele numere si solutia ecuatiei
///exemplu: daca utilizatorul tasteaza 5 5 programul va afisa ecuatia :5x+5=0 si solutia ecuatiei -1
#include <iostream>
using namespace std; 
int main() { 
    float a,x,b;
    cin>>a>>b;
    cout<<a<<"x"<<"+"<<b<<"="<<0;
    cout<<endl<<endl;
     x=-b/a;
    cout<<"x="<<x;
    return 0; 
}
