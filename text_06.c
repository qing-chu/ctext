#define _CRT_SECURE_NO_WARNINGS 1
//22 �����ؼ���2
//1.typedef ����������
/*typedef unsigned int u_int;   //��unsignedȡ����Ϊu_int
int main()
{
	unsigned int num = 100;
	u_int num2 = 100;

	return 0;
}*/

/*2.static ��̬��
a.���ξֲ�����
b.����ȫ�ֱ���
c.���κ���*/
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

//extern �����ⲿ����  -- ����Ҫָ��ֵ��ֻ��ָ�����͡�����
/*extern int g_val;  //�����ⲿ����extern����extern.c

int main()
{
	printf("%d\n", g_val);

	return 0;
}*/

//��������
/*extern int Add(int x, int y);
//extern int Add(int, int);//Ҳ����������д

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}*/

//23 �����ͺ�    #define ���峣���ͺ�
//define��һ��Ԥ����ָ��
//1.define�������
/*#define MAX 1000

int main()
{
	printf("%d\n", MAX);
	return 0;
}*/

//2.define ����� ***   [���ϰٶȣ������һ���滻]
/*#define Add(X, Y) X+Y  //define����ĺ꣬����ΪAdd��������X Y
#define Add(X, Y) ((X)+(Y))
int main()
{
	//printf("%d\n", Add(2, 3));   //5
	printf("%d\n", 4*Add(2, 3));   //11,Ϊʲô����4*5�أ���Ϊ����X+Y�Ǵ�������2��3�����������
	return 0;
}*/