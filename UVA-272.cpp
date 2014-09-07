#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <iostream>
#define LIM 50000
using namespace std;

int main()
{   int i,n,cont=0;
    char cad[LIM];
    while(cin>>cad){
        n=strlen(cad);
        for(i=0;i<n;i++){
           if(cad[i]=='"'){
               cont++;
               if(cont%2==1) cout<<"``";
               else cout<<"''";
           }
           else cout<<cad[i];
        }
        cout<<endl;
    }
    return 0;
}
