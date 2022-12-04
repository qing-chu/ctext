#define _CRT_SECURE_NO_WARNINGS 1
//33 循环语句for
/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		//if (i == 5)
			//break; //只要break执行，程序就终止
		if (i == 5)
			continue;

		printf("%d ", i);
	}

	return 0;
}*/

//循环体内改变循环变量的例子  -- 不可取
/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	

	return 0;

}*/

/*int main()
{
	int arr[10] = { 0 };
	int i = 0;
	//建议for语句的循环控制变量的取值采用“前闭后开区间”写法。 i = 0前闭 i<10后开
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}*/


/*int main()
{
	//判断部分的省略 - 判断部分恒为真   死循环
	for (;;)
	{
		printf("hehe\n");
	}
	return 0;
}*/

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
