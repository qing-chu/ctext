#define _CRT_SECURE_NO_WARNINGS 1
///32 ѭ�����while2
//��������1
#include <stdio.h>
/*int main()
{
	int ch = 0;
	//ctrl z��ȡ���� - getchar
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//�����Ĵ��벻������Ļ�϶�ȡ�ַ�

	//������˼��getchar��ȡ���ַ��ŵ�ch���棬��ֵ��֮��õ���ch�������������EOF��
	//˵��getchar��ȡ���������ַ�������whileѭ���ڲ���Ȼ���ӡ�ַ�ch��
	//���������ֵ����EOF���򲻷���!= ��Ϊ��
	return 0;
}*/

/*int main()
{
	//
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password); //һ��scanf���涼Ҫȡ��ַ&
	//����ȡ��ַ&����Ϊpassword�����Ǹ����飬�����������������Ǹ���ַ������û��ȡ��ַ��
	printf("��ȷ������(Y/N):>");

	//��������
	//getchar(); //����'\n',����ֻ�ܴ���һ���ַ�

	//���������еĶ���ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}*/

//��������2
/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)    
	{
	//�鿴ASCIIֵ9�ַ�����������
		if (ch < '0' || ch>'9')
			continue;

		putchar(ch);
	}
	//������ͣ�������������ַ���continue��continue�ͻ���������ѭ���Ĵ��벻��ӡ��
	//������������ַ�������û�н���if��䣬�ʹ�ӡ������������ֻ���ӡ�����ַ���
	return 0;
}*/

/*int main()
{
	int i = 1;//��ʼ��
	//��ʼ������Ҫ����i=10ʱ��10<=10�����ֻ���10����Ϊֻѭ��һ��

	while (i <= 10) //�жϲ���
	{
		printf("%d", i);

		i++;//ѭ��������������

		//���������κ�һ�����ֱ仯����Ӱ��ѭ��
	}
}*/