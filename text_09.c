#define _CRT_SECURE_NO_WARNINGS 1
//31 ѭ�����while1
/*int main()
{
	//if (1)
	while (1)
		printf("hehe\n");

	return 0;
}*/

//����Ļ�ϴ�ӡ1-10�����֡�
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

//ccontinue��break
int main()
{
	int i = 1;
	//��whileѭ���У�break�������õ���ֹѭ��

	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��

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

//gechar  ��ȡ�ַ�
//EOF - end of file - �ļ�������־
/*int main()
{
	int ch = getchar();
	//printf("%c\n", ch);
	putchar(ch); //���һ���ַ�

	return 0;
}*/

#include <stdio.h>
int main()
{
	int ch = 0;
	//ctrl z��ȡ���� - getchar
	while ((ch = getchar()) != EOF)   
	{
		putchar(ch);
	}
	//�����Ĵ��벻������Ļ�϶�ȡ�ַ�
	return 0;
}
