#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int x,guess,sign,chance; //x:随机数绝对值 guess: 猜的数 sign:随机数正负号 chance:剩余机会
	bool win=0; //win:胜负判定
	srand(time(NULL));
	x=rand()%501; //在0-500中生成一个随机数
	sign=rand()%2; //随机生成正负号
	if(sign==0)
		x*=-1; //sign=1 x正负号不变，sign=0 x取负值
	for(chance=9;chance>=0;chance--) //机会递减
	{
		cout<<"请输入你想猜的数(在-500~500之间):";
		cin>>guess;
		if(guess==x) //猜对:结束循环
		{
			win=1;
			break;
		}
		else
		{
			if(guess>x) //猜错:判断大小
				cout<<"太大了!";
			else
				cout<<"太小了!";
		}
		printf(" 你还有%d次机会\n",chance);
	}
	if(win==1) //结果输出
		cout<<"你猜对了!"<<endl;
	else
		cout<<"你输了!"<<endl;
	
}


