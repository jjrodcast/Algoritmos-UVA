#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>
#define MAX 90
using namespace std;
char pal[MAX];
int n;
int main()
{   while(cin>>pal){
       if(pal[0]=='#') break;
       n=strlen(pal);
       if(next_permutation(pal,pal+n)) cout<<pal<<endl;
       else cout<<"No Successor"<<endl;
    }
    return 0;
}
