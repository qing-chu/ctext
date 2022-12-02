#define _CRT_SECURE_NO_WARNINGS 1
//31 循环语句while1
/*int main()
{
	//if (1)
	while (1)
		printf("hehe\n");

	return 0;
}*/

//在屏幕上打印1-10的数字。
/*int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}

	return 0;
}*/

//ccontinue和break
int main()
{
	int i = 1;
	//在while循环中，break用于永久的终止循环

	//在while循环中，continue的作用是跳过本次循环continue后边的代码，
	//直接去判断部分，看是否进行下一次循环

	while (i <= 10)
	{
		if (i == 5)
			//break;      
			continue;

		printf("%d ", i);
		i++;
	}

	return 0;
}

//gechar  获取字符
//EOF - end of file - 文件结束标志
/*int main()
{
	int ch = getchar();
	//printf("%c\n", ch);
	putchar(ch); //输出一个字符

	return 0;
}*/

#include <stdio.h>
int main()
{
	int ch = 0;
	//ctrl z读取结束 - getchar
	while ((ch = getchar()) != EOF)   
	{
		putchar(ch);
	}
	//这样的代码不断在屏幕上读取字符
	return 0;
}
