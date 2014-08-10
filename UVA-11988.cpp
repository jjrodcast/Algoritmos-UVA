#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <list>
#define MAX 100001
using namespace std;

typedef list<char>::iterator itlc;

int main()
{   char cad[MAX];
    while(cin.getline(cad,MAX)){
      list<char> lista;
      itlc it;
      it = lista.begin();
      int n = strlen(cad);
      for(int i=0; i<n; i++){
          if(cad[i]=='[') it = lista.begin();
          else if(cad[i]==']') it = lista.end();
          else lista.insert(it, cad[i]);
      }
      for(it = lista.begin(); it != lista.end(); it++){
          cout<<*it;
      }
      cout<<endl;
    }    
    return 0;
}
