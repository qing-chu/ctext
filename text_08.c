#define _CRT_SECURE_NO_WARNINGS 1
//29 ��֧��� if else
//1.ʲô����䣿�� �ֺŸ����ľ���һ�����
/*int main()
{
	//int age = 20;
	//��
	//if (age >= 18)
	//	printf("����\n");

	//�� if��else����ֻ�ܿ���һ�����
	//if (age >= 18)
	//	printf("����\n");
	//else
	//{
	//	printf("δ����\n");

	//	printf("����̸����\n");
	//}

	//������д���Ǵ����
	int age = 79;
	if (age < 18)
	{
		printf("����\n");
	}
	//else if (18 <= age < 26)  //����д��
	else if (age >= 18 && age < 26) //����18<=age && age<26    //��ȷ��д��
	{
		printf("����\n");
	}
	else if (age >= 26 && age < 40)
		printf("����\n");
	else if (age >= 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age < 100)
		printf("����\n");
	else
		printf("�ϲ���\n");
	//elseҲ���Բ�д�����Ǳ���Ҫ�е�

	return 0;
}*/

//����else
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
	 //�������ӡ
	return 0;
}*/

//if��д��ʽ�ĶԱ�  --ppt
/*int test() 
{
	if (1)   //1Ϊ��
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
	if (num == 5)  //����if (5 == num)
		printf("hehe\n");
	return 0;
}*/

//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����   [��������ģ2��1����]
/*int main()
{
	int num = 15;
	if (num % 2 == 1)
		printf("����\n");

	return 0;
}*/

//2.���1-100֮�������    -- �ܶ�д��
//����Ҫ����1-100������Ȼ���ж�ÿ�����Ƿ�Ϊ�������������Ĵ�ӡ���������������Ͳ���ӡ
//��
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
//��
/*int main()
{
	for (int i = 1; i <= 100; i+=2)
	{
		printf("%d ", i);
	}
	return 0;
}*/

//30 ��֧��� switch
//switch���Ҳ��һ�ַ�֧��䡣�������ڶ��֧�������
//�������case���  case ���γ������ʽ:

//�ֱ��������һ��������
/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	}
	return 0;
}*/

/*��ע�⣺case�����breakҲ��һ��Ҫ�ӣ����ӵĻ��﷨��Ҳû�����⣬ֻ�ǲ������߼���
��������߼�Ҳ���Բ���break*/
//1-5 ������
//6-7 ��Ϣ��
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;   //�Ӳ��Ӷ����ԣ���ü���  ��ʹ�����һ��breakҲ��ü���
	default:
		printf("�������\n");
		break;
	}
	return 0;
}*/

//��ϰ
#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n) //��switch (n)���룬n=1
	{
	case 1:m++; //m��>3
	case 2:n++; //n��>2
	case 3:
		switch (n)  //���ڵ�n��2����n��2��ʱ��case1����ִ�У���Ϊn�Ǽ��ʹӼ���ȥ�����ֱ�Ӵ�case2��ȥ
		{//switch����Ƕ��ʹ��
		case 1:n++;
		case 2:m++;n++;  //m��>4��n��>3
			break;  //���break��case 3: switch (n)�ģ����ֻ���������switch������case 4
		}
	case 4:
		m++;  //m��>5
		break;   //���break����������switch����
	default:
		break; 
	}
	printf("m = %d, n = %d\n", m, n);  //m=5��n=3
	return 0;
	//�ܽ᣺1.break���������Լ����ڵ�switch���
	//2.break��������˭
	//3.û��break��������
	//4.switch����ı��ʽ����Ƕ��٣����Ǵ�case���ٽ�ȥ��ǰ����ܻ�����һЩcase���
}