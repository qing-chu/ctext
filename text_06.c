#define _CRT_SECURE_NO_WARNINGS 1
//22 常见关键字2
//1.typedef 类型重命名
/*typedef unsigned int u_int;   //给unsigned取别名为u_int
int main()
{
	unsigned int num = 100;
	u_int num2 = 100;

	return 0;
}*/

/*2.static 静态的
a.修饰局部变量
b.修饰全局变量
c.修饰函数*/
/*void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}*/

//extern 声明外部符号  -- 不需要指定值，只需指定类型、名字
/*extern int g_val;  //声明外部，用extern，在extern.c

int main()
{
	printf("%d\n", g_val);

	return 0;
}*/

//声明函数
/*extern int Add(int x, int y);
//extern int Add(int, int);//也可以这样子写

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}*/

//23 常量和宏    #define 定义常量和宏
//define是一个预处理指令
//1.define定义符号
/*#define MAX 1000

int main()
{
	printf("%d\n", MAX);
	return 0;
}*/

//2.define 定义宏 ***   [网上百度，宏就是一种替换]
/*#define Add(X, Y) X+Y  //define定义的宏，宏名为Add，参数是X Y
#define Add(X, Y) ((X)+(Y))
int main()
{
	//printf("%d\n", Add(2, 3));   //5
	printf("%d\n", 4*Add(2, 3));   //11,为什么不是4*5呢，因为上面X+Y是传参数是2和3，解决方法？
	return 0;
}*/