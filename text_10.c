#define _CRT_SECURE_NO_WARNINGS 1
///32 循环语句while2
//分析代码1
#include <stdio.h>
/*int main()
{
	int ch = 0;
	//ctrl z读取结束 - getchar
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//这样的代码不断在屏幕上读取字符

	//代码意思：getchar读取的字符放到ch里面，赋值完之后得到的ch内容如果不等于EOF，
	//说明getchar读取的是正常字符，进入while循环内部，然后打印字符ch；
	//而如果返回值等于EOF，则不符合!= 就为假
	return 0;
}*/

/*int main()
{
	//
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password); //一般scanf后面都要取地址&
	//这里取地址&是因为password本身是个数组，数组的数组名本身就是个地址，所以没有取地址。
	printf("请确认密码(Y/N):>");

	//清理缓冲区
	//getchar(); //处理'\n',但是只能处理一个字符

	//清理缓冲区中的多个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}*/

//分析代码2
/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)    
	{
	//查看ASCII值9字符的左右两边
		if (ch < '0' || ch>'9')
			continue;

		putchar(ch);
	}
	//代码解释：如果不是数字字符就continue，continue就会跳过本次循环的代码不打印，
	//而如果是数字字符，它就没有进入if语句，就打印。因此这个代码只会打印数字字符。
	return 0;
}*/

/*int main()
{
	int i = 1;//初始化
	//初始化很重要，当i=10时，10<=10，最后只输出10，因为只循环一次

	while (i <= 10) //判断部分
	{
		printf("%d", i);

		i++;//循环变量调整部分

		//三个部分任何一个部分变化都会影响循环
	}
}*/