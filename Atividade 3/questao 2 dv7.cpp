
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  int n,p,i;
  i=0;
  p=0;
   do {
    cout << " digite um valor "<< endl;
    cin >> n;
    if (n%2==0){
     p++;
    }else if (n%2==1){
     i++;
    }

  }while (n!= 0);
  cout << " foram digitados "<< p << " numeros par "<<endl;
  cout << " foram digitados "<< i << " numeros impar "<<endl;

  return 0;
}
