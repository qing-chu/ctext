#define _CRT_SECURE_NO_WARNINGS 1

//第十四集  选择语句
/*
int main()
{
int input = 0; //输入的值，存放数值
printf("加入信科:>\n");
printf("你要好好学习吗(1/0)?:");
scanf("%d", &input);   //scanf接收值

if (input == 1)    //判断
{
printf("好offer\n");
}
else
{
printf("卖红薯\n");
}

return 0;
}*/

//第15集  循环语句
/*int main()
{
	int line = 0;
	//循环
	while (line < 3000)
	{
		//printf("写代码\n");
		printf("写代码:%d\n", line);   //%d表示行，line行号
		line++;
	}
	if (line == 3000)
	{
		printf("跳出循环\n");
	}

return 0;
}*/

//16函数和数组
//1.函数
/*int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{

	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);

	//int sum = num1 + num2;  //int定义了一个sum，把num1 + num2的结果放进sum里面

	//函数的方式解决
	int sum = Add(num1, num2);
	printf("%d\n", sum);

	return 0;
}*/

//2.数组
/*int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;

	//....

	//数组 - 一组相同类型的元素的集合
	//10个整型1-10存起来
	//数组是用下标来访问的，下标从0开始
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};  //创建数组。数组名arr，有10个元素，每个元素是int
	int i = 0;
	while (i<10)
	{
		printf("%d", arr[i]);
		i++;
	}
	//char ch[5] = { 'a', 'b', 'c' };  //不完全初始化，剩余的默认为0
	return 0;
}*/

//18 操作符1
/*int main()
{
	//算术操作符
	//除号两端如果都是整数，结果都是整数；如果有一端是小数，结果就是小数
	//int a = 9 / 2;  //4
	//float a = 9 / 2;  //4.0000
	//float a = 9 / 2.0;  //4.5

	//int a = 9 % 2;   //% - 取模（取余）

	//printf("%d\n", a); 
	//printf("%f\n", a);

	//移位操作符
	int a = 2;
	int b = a << 1;

	printf("%d\n", b);

	return 0;
}*/

//赋值操作符
/*int main()
{
	int a = 2;
	int a = a + 5;   //也可以这样写a+=5;

	a = a - 3; //a -= 3;

	a = a % 3;
	a %= 3;

	printf("%d\n", a);
	return 0;
}*/

//单目操作符
// !逻辑反操作，把真变成假，把假变成真。
/*int main()
{
	//0表示假，非0就是真
	//int a = 10;  //10非0，就是真
	//printf("%d\n", !a);  
	//!a可以把真变成假，也可以把假变成真。 这里的a里面是10就是真，!a就是假，结果就是0

	int a = 0;  //0就是假，!a就是真,那么1 2 3 5 4 8....都是真，默认为1
	printf("%d\n", !a);//1

	//if (a)
	//{
		//如果a为真，做事
	//}
	//if (!a)
	//{
		//如果a为假，做事
	//}

	//-负号
	//a = -5;  //负值5
	//a = -a;
	//a = +a; //正值，+可以省略不写

	return 0;
}*/
/*
int main()
{
	//sizeof  操作数的类型长度（以字节为单位）
	//sizeof后面的括号可以省略，它不是函数。函数是不能省略的。【求变量括号可以省略，类型就不能省略】
	//但是通常两边的括号都不会省略，只是说一下省略也支持。
	//sizeof是一个操作符，计算类型或者变量的大小
	int a = 10;
	printf("%d\n", sizeof(int));   
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a); //sizeof后面的括号可以省略

	return 0;
}*/
/*
int main()
{
	//10
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //计算的是数组的总大小，单位是字节   输出结果为40
	//为什么是40？ 因为是10个元素，每个元素是一个int，一个int是4个字节，所以就是10*4=40
	printf("%d\n", sizeof(arr[0])); //输出结果为4  因为每个元素都是整型，所以第一个元素也是整型
	int sz = sizeof(arr) / sizeof(arr[0]);  //40/4=10
	printf("%d\n", sz);  //10

	return 0;
}*/

//19 操作符2
//单目操作符 ~ -- 按（二进制）位取反
#include<stdio.h>
int main()
{
	int a = 0;
	printf("%d\n", ~a);
	//~ 按位取反
	return 0;
}