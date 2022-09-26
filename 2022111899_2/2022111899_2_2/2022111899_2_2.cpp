#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,a,b,c; //a,b,c为三角形三边长度
	cout<<"请输入(x1,y1):"<<endl;
	cin>>x1>>y1;
	cout<<"请输入 (x2,y2):"<<endl;
	cin>>x2>>y2;
	cout<<"请输入 (x3,y3):"<<endl;
	cin>>x3>>y3;
	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2)); //两点间距离公式，下同
	b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	c=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	if(a+b>c&&a+c>b&&b+c>a) //三角形存在条件：任意两边之和大于第三边
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}


