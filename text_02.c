#define _CRT_SECURE_NO_WARNINGS 1 
//第七集  初始常量变量
//放在代码的第一行
//int main()
//{
//	//创建一个变量
//	//类型 变量的名字 = 0;  -- 推荐
//	//类型 变量的名字; -- 语法允许但是不推荐
//	int age = 20;
//	double weight = 42.5;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);      //打印一个double双精度浮点型 - %lf
//	return 0;
//}

//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先，eg：局部和全局都定义了a，那么会优先打印局部的a
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//写一个代码求2个整数的和
//scanf函数是输入函数
/*注意：scanf_s函数 - VS编译提供的，不是c语言标准规定的（只能在vs里面跑，其他平台都会报错）
不建议学scanf_s函数，如果非要用要事先研究它的用法，跟scanf用法有区别的*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &b);  //意思是第一个%d放到a，第二个%d放到b里面
//	sum = a + b;
//
//	printf("sum = %d\n", sum);
//	return 0;
//}

//第八集  初始变量的作用域和声明周期、
//1.作用域：
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程,包括跨工程，跨工程只要声明一下变量即可


//#include<stdio.h>
//
//int g_val = 2022; //全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{ 
//		printf("2:%d\n", g_val);
//
//		int a = 10;                //局部变量的作用域
//		printf("a = %d\n", a);  
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}

//在text_01定义了int g_val = 2022;
//声明一下变量
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


/*2.生命周期
变量的生命周期：变量的创建和销毁之间的时间段
局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
全部变量的生命周期：程序的生命周期
【eg：从main函数的第一句开始执行到结束，已经跨工程声明变量等】
*/
int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	//printf("%d\n", a);  如果把这个出了大括号使用发现不能使用，就证明没有必要存在了，因此它就是在出大括号那一瞬间就销毁了

	return 0;
}

