#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double sum=0;
    int i,n,m;
    cout<<"请输入n,m,使0<n<m<10^6:";
    cin>>n>>m;
    for(i=1;i<=m-n+1;i++)
        sum+=(i)/pow(n+i-1,2);
    printf("S=%.5lf",sum);
}