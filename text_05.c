#define _CRT_SECURE_NO_WARNINGS 1
//19 操作符2
//单目操作符 
//1. ~ -- 按（二进制）位取反
/*#include<stdio.h>
int main()
{
int a = 0;
printf("%d\n", ~a);  //-1 【看笔记有解释】
//~ 按位取反
return 0;
}*/

//2. *** 前置、后置++    前置、后置--
/*int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a); //不建议研究 - 浪费时间研究的是错误的代码
	printf("%d\n", b);   //在不同的编译器可能会产生不同的结果

	//int a = 10;
	//int b = ++a; //前置++，先++，后使用  【先++，a的值为10，a++后为11就是b，然后赋给a】
	//printf("%d\n", b); //11
	//printf("%d\n", a); //11

	int a = 10;
	int b = a++; //后置++，先使用，再++ 【先使用a的值，为10，然后赋给b再++】
	printf("%d\n", b); //10
	printf("%d\n", a); //11

	return 0;
}*/

//3. (类型) -- 强制类型转换
/*int main()
{
	//强制类型转换
	int a = (int)3.14;
	printf("%d\n", a);     //报错，a是整型，3.14是double型，会到丢失精度.解决方法：在3.14前面括号里面加上int即可
	return 0;
}*/

//逻辑操作符
/*&& 逻辑与 两边的值都为真整个表达式才是真，如果有一边的值为假就是假
  || 逻辑或 两边有一边为真就是真，两边都是假就为假，如果两边都是真也是真
  真为1，假为0*/
/*int main()
{
	int a = 3;
	//int b = 5;
	int b = 0;
	int c = a && b;
	printf("%d\n", c);

	int a = 3;
	int b = 0;
	int c = a || b;
	printf("%d\n", c);

	//if (a && b)
	//{

	//}
	return 0;
}
*/

//条件操作符（三目操作符）
/*int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	//if (a > b)
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}
	//逻辑操作符： exp1 ? exp2 : exp3
	//exp1 成立，exp2 计算，整个表达式的结构是：exp2的结果
	//exp1 不成立，exp3 计算，整个表达式的结构是：exp3的结果
	max = a > b ? a : b; //表达式1的结果如果为真，表达式2要计算，表达式的结果是整个表达式的结果，否则就是表达式3的结果
	printf("%d\n", max);

	return 0;
}*/

//逗号表达式
/*int main()
{
	//(3, 4 + 5, 6);

	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, b = c + 2);  //a=3+2=5,c=5-4=1,b=1+2=3,最后结果为3
	//从左向右依次计算，整个表达式的结果是它最后一个表达式的结果

	printf("%d\n", d);

	return 0;
}*/

//下标引用、函数调用和结构成员
//a.下标引用操作符
/*int main()
{
	//数组下标从0开始
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", arr[5]);
	return 0;
}*/

//b.函数调用操作符
/*int main()
{
	//调用函数的时候，函数名后边的()就是函数调用操作符
	printf("hehe\n");
	printf("%d", 100)

	return 0;
}*/

//20 常见关键字    c语言提供的关键字
//1.c语言提供的，不能自己创建关键字
//2.关键字不能做变量名 [变量名不能是关键字 ]

/*int main()
{
	//int char;  //err
	//进了{}创建，出了{}销毁
	{
		int a = 10; //对于a来说它是自动创建，自动销毁  -- 自动变量
		//auto int a = 10; //基本上auto是省略了的
		//auto 新的c语言语法种也有其他用法  -- 暂时不考虑
	}
	return 0;
}*/

/*int main()
{
	//大量/频繁被使用的数据，想放在寄存器中，提升效率
	register int num = 100;//建议num的值存放在寄存器中
	//register仅仅是建议的作用，是不是存放到寄存器里面去是编译器说了算
	return 0;
}*/

