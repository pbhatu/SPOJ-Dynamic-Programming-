#include<iostream>
#include<map>

#include<stdio.h>
using namespace std;
map <int , long long> arr;
long long int max(long long int a,long long int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
long long int calculate(long long int n)
{
    if(n==0)
    {
        return 0;
    }
    long long int result=arr[n];
    if(result==0)
    {
        result=max(n,(calculate(n/2)+calculate(n/3)+calculate(n/4)));
        arr[n]=result;
    }
    return result;

}
int main()
{

    int tcases;
    long long int n,i;
       while( scanf("%lld",&n)!=EOF)
       {
        printf("%lld\n",calculate(n));
       }


    return 0;
}


