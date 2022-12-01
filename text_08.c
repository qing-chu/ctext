#define _CRT_SECURE_NO_WARNINGS 1
//29 分支语句 if else
//1.什么是语句？？ 分号隔开的就是一条语句
/*int main()
{
	//int age = 20;
	//①
	//if (age >= 18)
	//	printf("成年\n");

	//② if和else后面只能控制一条语句
	//if (age >= 18)
	//	printf("成年\n");
	//else
	//{
	//	printf("未成年\n");

	//	printf("不能谈恋爱\n");
	//}

	//③这种写法是错误的
	int age = 79;
	if (age < 18)
	{
		printf("少年\n");
	}
	//else if (18 <= age < 26)  //错误写法
	else if (age >= 18 && age < 26) //或者18<=age && age<26    //正确的写法
	{
		printf("青年\n");
	}
	else if (age >= 26 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老不死\n");
	//else也可以不写，不是必须要有的

	return 0;
}*/

//悬空else
/*#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n"); 
	 //结果不打印
	return 0;
}*/

//if书写形式的对比  --ppt
/*int test() 
{
	if (1)   //1为真
		return 0;

	printf("hhhh\n");
	return 1;
}
int main()
{
	test();
	return 0;
}*/

/*
int main()
{
	int num = 3;
	if (num == 5)  //或者if (5 == num)
		printf("hehe\n");
	return 0;
}*/

//练习
//1.判断一个数是否为奇数   [奇数就是模2余1的数]
/*int main()
{
	int num = 15;
	if (num % 2 == 1)
		printf("奇数\n");

	return 0;
}*/

//2.输出1-100之间的奇数    -- 很多写法
//首先要产生1-100的数，然后判断每个数是否为奇数，是奇数的打印出来，不是奇数就不打印
//①
/*int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/
//②
/*int main()
{
	for (int i = 1; i <= 100; i+=2)
	{
		printf("%d ", i);
	}
	return 0;
}*/

//30 分支语句 switch
//switch语句也是一种分支语句。常常用于多分支的情况。
//语句项是case语句  case 整形常量表达式:

//分别输出星期一到星期天
/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
	return 0;
}*/

/*【注意：case后面的break也不一定要加，不加的话语法上也没有问题，只是不符合逻辑】
如果符号逻辑也可以不加break*/
//1-5 工作日
//6-7 休息日
/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;   //加不加都可以，最好加上  即使是最后一个break也最好加上
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}*/

//练习
#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n) //从switch (n)进入，n=1
	{
	case 1:m++; //m—>3
	case 2:n++; //n—>2
	case 3:
		switch (n)  //现在的n是2，当n是2的时候case1不会执行，因为n是几就从几进去，因此直接从case2进去
		{//switch允许嵌套使用
		case 1:n++;
		case 2:m++;n++;  //m—>4，n—>3
			break;  //这个break是case 3: switch (n)的，因此只会跳出这个switch，来到case 4
		}
	case 4:
		m++;  //m—>5
		break;   //这个break是跳出整个switch语句的
	default:
		break; 
	}
	printf("m = %d, n = %d\n", m, n);  //m=5，n=3
	return 0;
	//总结：1.break跳出的是自己所在的switch语句
	//2.break跳出的是谁
	//3.没有break不会跳出
	//4.switch后面的表达式结果是多少，就是从case多少进去，前面可能会跳过一些case语句
}