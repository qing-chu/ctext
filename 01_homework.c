#define _CRT_SECURE_NO_WARNINGS 1
//27 �ؼ��ֵ���ҵ����  -- ��Ŀ�ڱʼ�����
//�ڶ��� Aѡ��
/*void test()
{
int b = 0;
}

int main()
{
int a = 10;
return 0;
}
*/

//������ 
/*#include<stdio.h>
int num = 10;   //ȫ�ֱ���
int main()
{
//���ֲ�������ȫ�ֱ���������ͬһ��ʹ�õ�ʱ�򣬾ֲ���������
int num = 1;  //�ֲ�����
printf("num = %d\n", num);  //1
return 0;
}*/

//2.��������&��������ҵ
//�ڶ��⣬���ַ�������
/*#include<stdio.h>
#include<string.h>
int main()
{
char arr[] = { 'b', 'i', 't' };
//char arr[] = { 'b', 'i', 't', '\0' };
printf("%d\n", strlen(arr));  //�����
//��Ϊֻ֪���Լ����ڴ�ռ䣬��֪�����˵ģ�
//Ҫ����\0���ܽ�����ǰ��ͺ����Ƕ�����δ֪�ģ������char arr[] = { 'b', 'i', 't' ,'\0'}; ������������ַ�
return 0;
}*/

//������ Bѡ��
//c99��׼������һ������䳤����
//֧�����鴴����ʱ���ñ���ָ����С�ģ�����������鲻�ܳ�ʼ��
//vs2013/19 ��֧��c99�б䳤�����
/*int main()
{
int n = 10;
//int arr[n] = { 0 };
int arr[n];

return 0;
}*/

//������ ���ַ�������  -- Ҳ�ǿ�ת���ַ�
/*#include<stdio.h>
#include<string.h>
int main()
{
printf("%d\n", strlen("c:\test\121"));
//c  :  \t  e  s  t  \121     ���߸�
return 0;
}*/

//������
//MAX  һ�㲻����Ѻ���������д��ȫ��д
/*int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b); 
	int m = Max(a, b);
	printf("%d\n", m);
	return 0;
}*/

//3.�ؼ��ֵ���ҵ  ������
/*#include<stdio.h>
int sum(int a)
{
	int c = 0;    //�ڶ���ѭ��c��ֵ���䣬���´����ˣ�����b c��ı�
	static int b = 3;
	c += 1;  //c=c+1;
	b += 2;
	return(a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}*/

//������-- �����
//KIKIѧ����printf����Ļ�����Ϣ���������һ�ܷɻ����������д����������С�ɻ���
//����һ
/*#include<stdio.h>
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *\n");
	printf("    *  *\n");

	return 0;
}*/
//������
/*#include<stdio.h>
int main()
{
	printf("     **     \n");
	printf("     **     \n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");

	return 0;
}*/

//��8��
//�ж�һ�������Ƿ��ܱ�5������  
// -- �����������������һ������M��1<=M<=100000����
// -- ����������������һ�У����M���Ա�5���������YES��
//�������NO�������Сд���У�--����˵���һ���Ǵ�Сд��YES��NO��
#include<stdio.h>
int main()
{
	//����
	int m = 0;
	scanf("%d", &m);

	//�жϲ����
	if (m & 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
