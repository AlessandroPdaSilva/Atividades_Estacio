
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  int n;
  cout <<(" NULO, POSITIVO E NEGATIVO \n");
  cout << (" digite um numero \n");
  cin>> (n);
  if (n==0){
   cout <<(" o numero digitado e nulo \n");
  }else if(n<0){
   cout << (" o numero digitado e negativo \n");
  }else{
   cout << ("  o numero digitado e positivo \n");
  }
  return 0;
}
