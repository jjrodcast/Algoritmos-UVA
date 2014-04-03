#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int x[6],min,b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
       x[0]=b2+b3+c1+c3+g1+g2;
       x[1]=b2+b3+c1+c2+g1+g3;
       x[2]=b1+b3+c2+c3+g1+g2;
       x[3]=b1+b2+c2+c3+g1+g3;
       x[4]=b1+b3+c1+c2+g3+g2;
       x[5]=b2+b1+c1+c3+g3+g2;
       min=x[0];
       for(int i=1;i<6;i++){
          if(min>x[i]) min=x[i];
       }
       for(int i=0;i<6;i++){
         if(x[i]==min){
             if(i==0) cout<<"BCG ";
             else if(i==1) cout<<"BGC ";
             else if(i==2) cout<<"CBG ";
             else if(i==3) cout<<"CGB ";
             else if(i==4) cout<<"GBC ";
             else cout<<"GCB ";
             cout<<x[i]<<endl;
             break;
         }
       } 
    }
    return 0;
}
