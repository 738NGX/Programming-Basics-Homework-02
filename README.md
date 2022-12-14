# 上海财经大学 信息管理与工程学院 程序设计基础课 第二次大作业
## 实验准备： 
实验教材：《C++程序设计实验指导》（第二版），孟桂蛾编， 上海交大出版社，2019
## 实验题目： 
1. 已知鸡和兔的总数量为 n, 腿的总数量为 m, 编写一个程序，输入 n 和 m, 输出鸡和兔的数目。[此题与《C++程序设计实验指导》实验 3 编程题（3）相同] （提示：此题可以不用循环）<br>
程序运行示例一：<br>
请依次输入鸡和兔的总数量, 腿的总数量: 14 32 <br>
鸡：12， 兔：2 <br>
程序运行示例二：<br>
请依次输入鸡和兔的总数量, 腿的总数量: 10 16<br> 
无解<br> 
2. 编写一个程序，输入二维平面上的 3 个点(x1, y1), (x2, y2) 和 （x3, y3), 判断是否存在以这3个点为顶点的三角形（假定所有坐标值均为整数，且各坐标值的绝对值<2^15）[根据《C++程序设计实验指导》实验 3 编程题（4）改编] <br>
程序运行实例一：<br> 
x1,y1: 4 2 <br>
x2,y2: 6 4 <br>
x3,y3: 8 6 <br>
No <br>
程序运行实例二： <br>
x1,y1: 4 2 <br>
x2,y2: 6 5 <br>
x3,y3: 8 6 <br>
Yes<br>
程序运行实例三：<br> 
x1,y1: 2 1000<br>
x2,y2: 250 32000<br>
x3,y3: 171 22125<br>
No<br>
3. （Special Four-digit Numbers）找到并输出所有具有这样特性的 4 位数字：其 4 位数字的和等于这个数字以十六进制表示时的 4 位数字的和，也等于这个数字以十二进制表示时的 4 位数字的和。<br>
样例输入：无。<br>
4. 输出所有形如 aabc（即前两位数字相等）的 4 位完全平方数。完全平方数是指那些可以表示为某一正整数的平方的数。<br>
样例输入：无。<br>
5. 定积分的物理意义是某个函数 f(x) 与 x 轴围成的区域的面积。 定积分可以通过将这块面积分解成一连串的小矩形，计算各小矩形的面积的和而得到。计算时，小矩形的宽度 d=（xi - xi-1) 可由用户指定，矩形的高度选取函数值 f((xi + xi-1)/2),请依据计算定积分的方法，编写程序求𝜋的近似值。提示：考虑计算f(x)= √1 − 𝑥2在[-1,1]区间上的定积分。<br>
6. 编写程序，程序随机生成一个整数 x, 其中 x 在-500 和 500 之间，即-500≤x≤500。程序给用户 10 次机会猜测这个整数，在这 10 次机会中，程序先提示“请输入你猜得数：”，若用户给出的值大于 x, 程序输出信息“大 了”，若用户给出的值小于 x, 程序输出信息“小了”，若用户给出的值等于 x, 程序输出信息“恭喜， 你答对了”。若超过 10 次，用户都没有猜中，程序输出“不好意思， 你失败了！”<br> 
7. 附加题：求子序列的和：输入两个正整数 0< n < m < 106, 输出 1𝑛2 +2(𝑛+1)2 + ⋯ +𝑚−𝑛+1𝑚2,保留 5 位小数。<br>
提示：注意整型数的范围。<br>
样例输入：<br>
2 4<br>
样例输出：<br>
0.65972<br>
样例输入：<br>
65536 655360<br>
样例输出：<br>
1.4026<br>
