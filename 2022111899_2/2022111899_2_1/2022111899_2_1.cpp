#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m,cxk,atp;// n=鸡兔总数 m=脚的总数 cxk=鸡 atp=兔
	bool right=1; //数据合法检查指示
	cout<<"请依次输入鸡和兔的总数量, 腿的总数量:"<<endl;
	cin>>n>>m;
	if(m%2!=0)
		right=0;	//如果脚的总数为奇数，则不合法
	atp=(m-n*2)/2;
	cxk=n-atp;		//抬脚计算法
	if(atp<0||cxk<0)
		right=0;	//如果鸡兔任一数目小于0，则不合法
	if(right==1)
		printf("鸡:%d, 兔:%d\n",cxk,atp);	//数据合法，直接输出
	else
		cout<<"无解！"<<endl; //数据非法，输出无解
	return 0;
}


