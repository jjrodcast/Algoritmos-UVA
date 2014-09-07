#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{   double base,num,k;
    while(cin>>base>>num){
       if(base<1 || base>200) break;
       if((num<1)||(num>(pow(10,101))));
       k=pow(num,(1.0/base));
       printf("%.0lf\n",k);
    }  
    return 0;
}   
