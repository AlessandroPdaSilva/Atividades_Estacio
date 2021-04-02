
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale (LC_ALL, " portuguese");
  float sl,r;
  cout<< (" REAJUSTE DE SALARIO \n");
  cout<< (" digite o salario do funcionario ");
  cin>> (sl);
  if (sl<=900){
    r= (sl*25/100)+sl;
    cout<< (" \n o salario resjustado foi de ")<<r;
  }else {
    r = (sl*20/100)+sl;
    cout<< (" \n o salario reajustado foi de ")<<r;
  }
  return 0;
}
