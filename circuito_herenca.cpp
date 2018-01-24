/*

EN. A little software that do a simulation of logic gates using inheritance.

PT. Um pequeno software que faz uma simulação de portas lógicas usando herança.

*/

#include<iostream>
using namespace std;
class Porta{
  protected:
    int a,b,s;
  public:
    Porta(){
      a=0;
      b=0;
      s=0;
    }
    Porta(int x, int y){
      a=x;
      b=y;
      s=0;
    }
    ~Porta(){}
    void set_dados() {
      cout<<"Entrada a";cin>>a;
      cout<<"Entrada b";cin>>b;
    }
    int saida(){}
};
class And_C:public Porta{
  public:
    int saida(){
      if(a==1 && b==1)
            return 1;
        else
            return 0;
    }
};
class Or_C:public Porta{
  public:
    int saida(int a, int b){
      if(a==0 && b==0)
        return 0;
      else
        return 1;
    }
};
class Not_C:public Porta{
  public:
    int saida(int a){
      if(a==1)
        return 0;
      else
        return 1;
    }
};
int main() {
  int s,s1,s2;
  And_C A,B;
  Or_C C;
  Not_C D;

  A.set_dados();
  C.set_dados();

  s=A.saida();
  s1=C.saida();

  s2=B.saida(s,s1);

  cout<<"\nA saida e"<<D.saida(s2);

  cout<<"\n\n";
  return 0;
}
