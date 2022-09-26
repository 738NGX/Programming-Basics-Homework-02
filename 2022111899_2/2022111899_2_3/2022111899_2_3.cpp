#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,j=0,a,b,c,d,e,f,g,h,w,x,y,z; //i,j:计数器  abcd:十进制数 efgh:十六进制数 wxyz:十二进制数
	for(i=1000;i<=9999;i++)
	{
		a=i/1000; b=i%1000/100; c=i%100/10; d=i%10; //十进制数提取四位数字，下以此类推
		e=i/4096; f=i%4096/256; g=i%256/16; h=i%16;
		w=i/1728; x=i%1728/144; y=i%144/12; z=i%12;
		if((a+b+c+d==e+f+g+h)&&(a+b+c+d==w+x+y+z))
		{
			// printf("i[10]=%d,i[16]=%d %d %d %d,i[12]=%d %d %d %d,sum=%d\n",i,e,f,g,h,w,x,y,z,a+b+c+d); 
			//上为检查语句，分别输出十进制，十六进制，十二进制数及四位数字总和，最终运行时不输出
			cout<<i<<" ";
			j++;
			if(j==10)
			{
				cout<<"\n";
				j=0;
			} //无情的换行机器，每输出十个数换一次行(否则输出截屏截不下了)
		}			
	}
	return 0;
}


