#include<bits/stdc++.h>
using namespace std;

int binpow(int a,int n)
{
    int result=1;
    while(n)
    {
        if(n&1)///if n&1==1, then n is odd otherwise even.

           result*=a;
        a*=a;
        n>>=1;/// n is being divided by 2;
        }

    return result;
}

int main()
{
    int a,n; // a^n
    while(scanf("%d%d",&a,&n)==2)
    {
        printf("%d\n",binpow(a,n));
    }
    return 0;
}

