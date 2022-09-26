#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,a,b; //i:底数 a,b:平方数的前两位数字
	for(i=1;(i*i)<=9999;i++)
	{
		a=(i*i)/1000; //提取数位，下同
		b=(i*i)%1000/100;
		if(a==b&&a!=0) //符合题意，并且是四位数
			printf("%d=%d^2\n",i*i,i); 
	}
	return 0;
}


