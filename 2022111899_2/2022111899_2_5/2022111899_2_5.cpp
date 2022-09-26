#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,j=0,dInput; //i,j:计数器 dInput:输入的宽度精度
	double pai,d,x,xPrev=0,h; //pai:π  d:矩形实际宽度  x:当前横坐标  xPrev:上一个横坐标  h:矩形高度
	cout<<"请指定矩形的宽度(单位:10^-n,推荐3-9之间):"<<endl; //用10^-n将宽度d用一个精度值n(即dInput)表示
	cin>>dInput;
	d=pow(10,0-dInput); //将精度值转换为实际宽度
	for(i=1;i<=1/d;i++)
	{
		x=i*d;
		h=sqrt(1-pow(0.5*(xPrev+x),2));
		pai+=(d*h); //将矩形面积加入到总面积
		xPrev=x;
		//下面是一个小进度条，程序每五千万次运算会输出一个运算精度值
		j++;
		if(j==50000000)
		{
			printf("Loading %.2f %% ",x*100);
			j=0;
		}		
	}
	pai*=4; //之前算的总面积是四分之一个圆，乘以四得到总面积π
	printf("\nπ=%.15lf\n",pai); //输出小数点后共计15位
	return 0;
}


