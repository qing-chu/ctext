#define _CRT_SECURE_NO_WARNINGS 1
//33 ѭ�����for
/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		//if (i == 5)
			//break; //ֻҪbreakִ�У��������ֹ
		if (i == 5)
			continue;

		printf("%d ", i);
	}

	return 0;
}*/

//ѭ�����ڸı�ѭ������������  -- ����ȡ
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
	//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д���� i = 0ǰ�� i<10��
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}*/


/*int main()
{
	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��   ��ѭ��
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
