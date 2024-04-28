#include <stdio.h>
//设计一个函数，返还两整数的和
//int main()
//{
//	int x, y;
//	printf("请输入两个整数，我会将他们的和告诉你\n");
//	scanf("%d %d", &x, &y);
//	printf("%d和%d的和为%d", x, y, x+y);
//	return 0;
//}


//把上题改为返还两个double类型的值之和，应该如何修改函数？
//int main()
//{
//	double x, y;
//	printf("请输入两个数，我会把他两的和告诉你\n");
//	scanf("%lf %lf", &x, &y);
//	printf("%lf和%lf的和为%lf", x, y, x + y);
//	return 0;
//}

//设计一个名为alter（）的函数，接受两个int类型的变量x和y，把他们的值分别改成两个变量之和以及两变量之差；
//void alter(int x, int y);
//int main()
//{
//	int x, y;
//	printf("请输入两个整数\n");
//	scanf("%d %d", &x, &y);
//	alter(x, y);
//	return 0;
//}
//void alter(int x, int y)
//{
//	int sum = x;
//	x = x + y;
//	y = sum - y;
//	printf("两数之和为%d 两数之差为%d", x, y);
//
//}

//编写一个函数，返回三个整数参数中的最大值

//int max(int x, int y, int z);
//int main()
//{
//	int x, y, z,MAX;
//	printf("请输入三个整数，我会返还他们中最大的那个值\n");
//	scanf("%d %d %d", &x, &y, &z);
//	MAX=max(x, y, z);
//	printf("最大值为%d", MAX);
//	return 0;
//}
//int max(int x, int y, int z)
//{
//	int max=x;
//	if (x <= y)
//		max = y;
//	if (x <= z)
//		max = z;
//	if (y >= z)
//		max = y;
//	return max;
//	
//}
//void menu(void);
//int Scanf(int x, int y);
//int main()
//{
//	int x;
//	menu();
//	while  ((x=Scanf(1,4))!=4)
//	{
//		printf("choice %d Work!\n", x);
//		menu();
//	}
//	printf("Done!\n");
//}
//int Scanf(int x, int y)
//{   
//	int c, d;
//	d = scanf("%d", &c);
//	while (d == 1 && (c<x || c>y))
//	{
//		printf("%d 错了 重新输入！\n",c);
//		menu();
//		scanf("%d", &c);
//	}
//	if (d != 1)
//	{
//		printf("输入异常！\n");
//		c = 4;
//	}
//	return c;
//}
//void menu(void)
//{
//	printf("Please choose one of the following:\n");
//	printf("1) copy files                )2 files\n");
//	printf("3) remove files              )4 quit\n ");
//	printf("Enter the number of your choice:\n");
//}

//4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
//编写一个函数，接受两个double类型的函数，返还这两个的调和平均数
//double tiaohe(double,double);
//int main()
//{
//	printf("请输两个数，我将返还他们的调和平均数:\n");
//	double x, y,sum;
//	scanf("%lf %lf", &x, &y);
//	sum=tiaohe(x, y);
//	printf("%lf和%lf的调和平均数为%lf\n", x, y, sum);
//	return 0;
//}
//double tiaohe(double x, double y)
//{
//	double a, b,sumth,sumd;
//	a = 1 / x;
//	b = 1 / y;
//	printf("a= %lf b=%lf\n", a, b);
//	sumth = (a + b) / 2;
//	printf("sum=%lf\n", sumth);
//	sumd = 1 / sumth;
//	printf("sumd=%lf\n", sumd);
//	return sumd;
//}

//5.编写并测试一个函数larger_of(),该函数把两个double类型变量的值替换为较大的值。
//例如，larger_of(x,y)会把x和y中较大值重新赋给两个变量
//void larger_of(double*, double*);
//int main()
//{
//	printf("请输入两个数，我会把两个数中较大值赋给他们两个\n");
//	double x, y;
//	scanf("%lf %lf", &x, &y);
//	larger_of(&x, &y);
//	printf("x=%lf y=%lf", x, y);
//	return 0;
//}
//void larger_of(double* x, double* y)
//{
//	
//	if (*x > *y)
//		*y = *x;
//	else
//		*x = *y;
//}


//6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第一个变量，
// 中间值放入第二个变量，最大值放入第三个变量

//void paixu(double*, double*, double*);
//int main()
//{
//	printf("请输入三个数，我会按照从小到大的顺序依次排序他们\n");
//	double x, y, z;
//	scanf("%lf %lf %lf", &x, &y, &z);
//	paixu(&x, &y, &z);
//	printf("换后的顺序为%lf<%lf<%lf", x, y, z);
//	return 0;
//}
//void paixu(double* x, double* y, double* z)
//{   
//	double a;
//	if (*x > *y)
//	{
//		a = *x;
//		*x = *y;
//		*y = a;
//	}
//	if (*x > *z)
//	{
//		a = *x;
//		*x = *z;
//		*z = a;
//	}
//	if (*y > *z)
//	{
//		a = *y;
//		*y = *z;
//		*z = a;
//	}
//
//}

//编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。如果是，还要
//报告该字母在字母表中的数值位置。例如，c和C在字母表中的位置都是3.合并一个函数，以一个字符为参数
//如果该字符是一个字母则返还一个数值位置，否则返还-1
//int position(char ch);//函数计算并返还字符在字母表中的位置
//void print(void);
//int main()
//{
//	print();
//}
//void print(void)
//{
//	char ch;
//	printf("输入你想输入的字符(EOF结束):\n");
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch  == '\n')
//			continue;
//		if (position(ch) != -1)
//			printf("字符%c的位置在26字母表为%d\n", ch, position(ch));
//		else
//			printf("%c不是一个字母\n", ch);
//	}
//}
//int position(char ch)
//{
//	if (ch >= 'A' && ch <= 'Z')
//		return ch - 'A' + 1;
//	if (ch >= 'a' && ch <= 'z')
//		return ch - 'a' + 1;
//	return -1;
//}

//8.写一个函数，可以算正负幂。另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1
//函数应报告0的0次幂未定义，因此把该值处理为1，要使用一个循环，并在程序中测试该函数


//double power(double n, int p);
//int main()
//{
//	double x, xpow;
//	int exp;
//	printf("输入一个数字的多少次幂我会把值告诉你，输入p结束程序\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g自动匹配
//		printf("输入下一个数字或者输入q退出\n");
//	}
//	printf("good！\n");
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//	if (p == 0)
//		return 1;
//	if (n == 0)
//		return 0;
//	if (p < 0)
//	{
//		for (i = 1;i <= -p;i++)
//		{
//			pow *= n;
//		}
//		return pow;
//	}
//
//	else
//	{
//		for (i = 1;i <= p;i++)
//			pow *= n;
//		return pow;
//	}
//}

//9.使用递归函数重写编程练习8
//double power(double n, int p);
//int main()
//{
//	double x, xpow;
//	int exp;
//	printf("输入一个数字的多少次幂我会把值告诉你，输入p结束程序\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g自动匹配
//		printf("输入下一个数字或者输入q退出\n");
//	}
//	printf("good！\n");
//	return 0;
//}
//double power(double n, int p)
//{   
//	if (p == 0)
//		return 1;
//	if (n == 0)
//		return 0;
//	if (p > 0)
//		return n * power(n, p - 1);
//	else
//		return n * power(n, p + 1);
//	
//	}
// 
// 
// 
//double nihao(double n, int p);
//int main()
//{
//	double sum;
//	int p;
//	double n;
//	printf("输入一个数的次幂我将为你返还他的值:");
//	scanf("%lf %d", &n, &p);
//	sum = nihao(n, p);
//	printf("%lf 的%d次幂为%lf", n, p, sum);
//
//}
//double nihao (double n, int p)
//{
//	if (p == 0)
//		return 1;
//	if (n == 0)
//		return 1;
//	if (p > 0)
//		return n * nihao(n, p - 1);
//	else
//		return n * nihao(n, p + 1);
//
//}

//10.编写一个to_base_n()函数接受两个参数，且第二个参数在2到10范围内，然后以第二个参数中指定的进制
//打印第一个参数的数值，例如，to_base-n(129,8)显示结果为201，也就是129的八进制数。
//void to_base_n(unsigned long n, int x);
//int main(void)
//{
//	unsigned long number;
//	int x;
//	printf("请输入一个整数以及你想显示的进制数:\n");
//	while (scanf("%lu %d", &number, &x) == 2)
//	{
//		printf("以%d进制的形式打印%lu为:",x,number);
//			to_base_n(number, x);
//			printf("\n");
//			printf("\n输入下一个整数和进制，q为退出\n");
//
//	}
//	printf("Done!\n");
//	return 0;
//}
//void to_base_n(unsigned long n, int x)
//{ 
//	int r;
//	r = n % x;
//	if (n >= x)
//		to_base_n(n / x,x);
//	printf("%d", r);
//	return;
//}

//11编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。
int Fibonacci(int);
int main()
{    
	printf("请输入你想知道的第几位斐波那契数:");
	int x;
	unsigned long fibo;
	scanf("%d", &x);
	fibo=Fibonacci(x);
	printf("第%d个斐波那契数为%lu", x, fibo);
	return 0;
}
int Fibonacci(int x)
{
	if (x <= 2)
		return 1;
	else
		return Fibonacci(x - 1) + Fibonacci(x - 2);
}