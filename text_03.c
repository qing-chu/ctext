#define _CRT_SECURE_NO_WARNINGS 1
//第九集 常量  --不能改变的量

/*int main()
{
	//1.字面常量 -- 直接写出来的常量
	3.14;
	10;
	'a';
	"abcdef";

	return 0;
}*/


/*int main()
{
	//2.const修饰的常变量   【本质上还是变量，只不过具有常属性而已】
	//①
	//int num = 10; //变量
	//num = 20;
	//printf("num = %d\n", num);  //num可变的，最终输出20

	//②
	//const int num = 10; //num就是常变量 - 具有常属性（不能被改变的属性）
	//num = 20;
	//printf("num = %d\n", num);  


	//int arr[10] = { 0 };//10个元素
	
	//①
	//int n = 10;
	//int arr2[n] = { 0 };//n是变量的，这里是不行的

	//②
	//const int n = 10;    //这样子写也是不行的，const只是修饰一下n，让它的值不能改变，但是n它本身还是一个变量
	//int arr2[n] = { 0 };

	//return 0;
}*/


//#define MAX 10000   //在大括号里面定义也是可以的
/*int main()
{
	//3.#define定义的标识符常量
	//MAX = 20000; //错误的
    #define MAX 10000      //在{}内或者外面定义都是可以的

	int n = MAX;
	printf("n = %d\n", n);

	return 0;
}*/


//定义性别
/*enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	//枚举常量默认从0开始，如果赋有初值就从初值开始
	MALE = 3,  //赋初值
	FEMALE,
	SECERT  //保密
};*/

/*int main()
{
	//4.枚举常量    
	//可以一一列举的常量

	enum Sex s = MALE;   //只能填上面定义的三个值，分别是MALE,FEMALE,SECERT

	//MALE = 3; //错误的，是常量，不能改变，但是可以在定义那里赋值

	printf("%d\n", MALE);       //枚举常量默认从0开始
	printf("%d\n", FEMALE);
	printf("%d\n", SECERT);

	return 0;
}*/


//第十集 初始字符串
//字符串 + 转义字符 + 注释

/*1.字符串
字符串就是一串字符 - 用双引号括起来的一串字符
注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容*/
/*int main()
{
	"abcdef";
	"hello hx";

	return 0;
}*/

/*#include <string.h>
int main()
{
	//字符数组 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	
	//char arr[] = "hello";

	//单引号引起来的叫一个字符，由双引号引起来的叫一串字符
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	//char arr2[] = { 'a', 'b', 'c','\0'};

	//求一下字符串的长度  
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//int len = strlen("abc");  //string length
	//printf("%d\n", len);   //3   注意：在计算字符串长度的时候\0是结束标志，不算做字符串内容.就是说abc\0，\0不算在里面

	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//求数组的元素个数算\0,但是求字符串长度不算\0

	return 0;
}*/


//第十二集 转义字符
/*int main()
{
	printf("ab\ncd");

	//printf("%c\n", '\'');   //打印'
	printf("%s\n", "abc");
	printf("%s\n", "a");   
	printf("%s\n","\"");   //打印"
	printf("%s\n", "'");    //这样就不用加转义字符\，因为不会跟前面或者后面组成一对

	//printf("c:\test\test.c");     // \t就是水平制表符，就是键盘上的tab键，打印结果为	est	est.c
	printf("c:\\test\\test.c");    //如果不想让\是\t里的\，就要转义，打印结果为\test\test.c
	printf("\a\a\a");

	//printf在打印数据的时候，可以指定打印的格式

	return 0;
}*/

//printf("%d", 100);   --打印整型，100
//printf("%c", 'a');   --打印字符，a
//printf("%s", "abc");   --打印字符串，abc

/*特殊转义字符
1.\ddd --ddd表示1-3个八进制的数字。 如:\130 —> X
2.\xdd --dd表示2个十六进制数字。如：\x30 —> 0*/
/*int main(){
	//printf("%c\n", '\130');//8进制的130的十进制是多少呢？  88
	//X  -- ASCII码值是88
	//当\130是一个字符的时候(%c字符)，是把130这个八进制转换成十进制所得的88，
	//作为ASCII码值代表的那个字符--X，就是\130
	//【总结：这个字符—>八进制—>转换成十进制以它为ASCII码值代表的字符】

	//printf("%d\n", '\65');  //A - 65 - 8进制是：    (解释：A的ASCII码值65，十进制的65转换为八进制是多少)

	printf("%c\n", '\x30'); //48 - ASCII码值是'0' 【字符0，因为用%c】

	return 0;
}
*/


//程序输出什么？
#include <stdio.h>
int main()
{
	//printf("%d\n", strlen("abc")); //3

	printf("%d\n", strlen("abcdef"));

	// \62被解析成一个转义字符
	printf("%d\n", strlen("c:\test\328\test.c"));  //14
	//c : \t e s t \62 8 \t e s t . c  共14个
	//\t转义字符当成一个，\32是一个转义字符，算一个，8进制数组里面没有8，
	//8不能算进去，算一个独立字符，所以不能\328，要分开，\32和8

	return 0;
}
