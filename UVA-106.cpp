#include <iostream>  
#include <cmath>  
#define MAXN 1000001
using namespace std;  
bool used[MAXN];  
int gcd(int a, int b)  
{  
  return a < b ? gcd(b, a) : (b ? gcd(b, a % b) : a);  
}  
  
int main(int argc, char const *argv[])  
{   int n, limit, x, y, z;  
    while (cin >> n)  
    {  
        for (int i = 1; i <= n; i++)  
            used[i] = false;   
        limit = floor(sqrt(n));           
        int total = 0;  
        for (int i = 1; i < limit; i++)  
            for (int j = i + 1; j <= limit; j += 2)  
                if ((z = (i * i + j * j)) <= n && gcd(i, j) == 1)  
                {  
                    x = j * j - i * i;  
                    y = 2 * i * j;  
                    total++;  
                    for (int start = 1; z * start <= n; start++)  
                        used[x * start] = used[y * start] = used[z * start] = true;  
                }  
        int unused = 0;  
        for (int i = 1; i <= n; i++)  
            if (!used[i])  
                unused++;  
        cout << total << " " << unused << endl;  
    }  
    return 0;  
}  
