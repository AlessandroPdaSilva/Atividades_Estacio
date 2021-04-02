
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale (LC_ALL, " portuguese");
  float n1,n2,n3,m;
  cout <<(" MEDIA DO ALUNO \n");
  cout << (" digita a primeira nota do aluno \n");
  cin >> (n1);
  cout << (" digita a segunda nota do aluno \n");
  cin >> (n2);
  cout << (" digita a terceira nota do aluno \n");
  cin >> (n3);
  m=(n1+n2+n3)/3;
  cout << (" a media do aluno foi ")<<m;
  if (m<4){
    cout<< ("\n aluno reprovado \n ");
  }else if(m>=4 && m<6){
    cout<< (" \n aluno em recuperação \n");
  }else{
    cout<<(" \n aluno aprovado \n");
  }

  return 0;
}
