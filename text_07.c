#define _CRT_SECURE_NO_WARNINGS 1
//25 指针
/*int main()
{
	int a = 10; //a在内存中要分配空间的 - 4个字节
	printf("%p\n", &a);//%p 专门用来打印地址的

	int * pa = &a;//pa是用来存在地址的，在c语言中pa叫是指针变量
	//* 说明 pa是指针变量
	//int 说明pa执行的对象是int类型的

	char ch = 'w';
	char * pc = &ch;

	return 0;
}*/

/*int main(){
	int * pa = &pa;

	return 0;
}*/

//指针就是地址
/*int main()
{
	int a = 10;
	int * pa = &a;
	*pa = 20; //* 解引用操作[是一个单目操作符] *pa就是通过pa里边的地址，找到a
	printf("%d\n", a);

	return 0;
}*/


/*int main()
{
	//指针的大小是相同的！为什么呢？
	//指针是用来存放地址的！
	//指针需要多大空间，取决于地址的存储需要多大空间
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}*/

//26 结构体
//结构体可以让c语言创建新的类型出来

//创建一个学生
/*struct Stu
{
	char name[20];  //成员变量
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = {"张三", 20, 85.5}; //结构体的创建和初始化
	//printf("%s %d %lf\n", s.name, s.age, s.score); //结构体变量 .是成员变量
	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}*/


