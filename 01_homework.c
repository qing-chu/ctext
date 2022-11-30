#define _CRT_SECURE_NO_WARNINGS 1
//27 关键字等作业讲解  -- 题目在笔记那里
//第二题 A选项
/*void test()
{
int b = 0;
}

int main()
{
int a = 10;
return 0;
}
*/

//第三题 
/*#include<stdio.h>
int num = 10;   //全局变量
int main()
{
//当局部变量和全局变量名字相同一起使用的时候，局部变量优先
int num = 1;  //局部变量
printf("num = %d\n", num);  //1
return 0;
}*/

//2.生命周期&作用域作业
//第二题，求字符串长度
/*#include<stdio.h>
#include<string.h>
int main()
{
char arr[] = { 'b', 'i', 't' };
//char arr[] = { 'b', 'i', 't', '\0' };
printf("%d\n", strlen(arr));  //随机数
//因为只知道自己的内存空间，不知道别人的，
//要遇到\0才能结束，前面和后面是多少是未知的，如果是char arr[] = { 'b', 'i', 't' ,'\0'}; 输出就是三个字符
return 0;
}*/

//第五题 B选项
//c99标准中引用一个概念：变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
//vs2013/19 不支持c99中变长数组的
/*int main()
{
int n = 10;
//int arr[n] = { 0 };
int arr[n];

return 0;
}*/

//第六题 求字符串长度  -- 也是考转义字符
/*#include<stdio.h>
#include<string.h>
int main()
{
printf("%d\n", strlen("c:\test\121"));
//c  :  \t  e  s  t  \121     共七个
return 0;
}*/

//第七题
//MAX  一般不建议把函数的名字写成全大写
/*int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b); 
	int m = Max(a, b);
	printf("%d\n", m);
	return 0;
}*/

//3.关键字等作业  第五题
/*#include<stdio.h>
int sum(int a)
{
	int c = 0;    //第二次循环c的值不变，重新创建了，但是b c会改变
	static int b = 3;
	c += 1;  //c=c+1;
	b += 2;
	return(a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}*/

//第七题-- 编程题
//KIKI学会了printf在屏幕输出信息，他想输出一架飞机。请帮他编写程序输出这架小飞机。
//方法一
/*#include<stdio.h>
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *\n");
	printf("    *  *\n");

	return 0;
}*/
//方法二
/*#include<stdio.h>
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");

	return 0;
}*/

//第8题
//判断一个整数是否能被5整除。  
// -- 输入描述：输入包括一个整数M（1<=M<=100000）。
// -- 输出描述：输出包括一行，如果M可以被5整除就输出YES，
//否则输出NO（结果大小写敏感）--就是说结果一定是大小写的YES或NO。
#include<stdio.h>
int main()
{
	//输入
	int m = 0;
	scanf("%d", &m);

	//判断并输出
	if (m & 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
