#define _CRT_SECURE_NO_WARNINGS 1
//25 ָ��
/*int main()
{
	int a = 10; //a���ڴ���Ҫ����ռ�� - 4���ֽ�
	printf("%p\n", &a);//%p ר��������ӡ��ַ��

	int * pa = &a;//pa���������ڵ�ַ�ģ���c������pa����ָ�����
	//* ˵�� pa��ָ�����
	//int ˵��paִ�еĶ�����int���͵�

	char ch = 'w';
	char * pc = &ch;

	return 0;
}*/

/*int main(){
	int * pa = &pa;

	return 0;
}*/

//ָ����ǵ�ַ
/*int main()
{
	int a = 10;
	int * pa = &a;
	*pa = 20; //* �����ò���[��һ����Ŀ������] *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
	printf("%d\n", a);

	return 0;
}*/


/*int main()
{
	//ָ��Ĵ�С����ͬ�ģ�Ϊʲô�أ�
	//ָ����������ŵ�ַ�ģ�
	//ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}*/

//26 �ṹ��
//�ṹ�������c���Դ����µ����ͳ���

//����һ��ѧ��
/*struct Stu
{
	char name[20];  //��Ա����
	int age;
	double score;
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"����", 20, 85.5}; //�ṹ��Ĵ����ͳ�ʼ��
	//printf("%s %d %lf\n", s.name, s.age, s.score); //�ṹ����� .�ǳ�Ա����
	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}*/


