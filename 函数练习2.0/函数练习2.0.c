#include <stdio.h>
//���һ�������������������ĺ�
//int main()
//{
//	int x, y;
//	printf("�����������������һὫ���ǵĺ͸�����\n");
//	scanf("%d %d", &x, &y);
//	printf("%d��%d�ĺ�Ϊ%d", x, y, x+y);
//	return 0;
//}


//�������Ϊ��������double���͵�ֵ֮�ͣ�Ӧ������޸ĺ�����
//int main()
//{
//	double x, y;
//	printf("���������������һ�������ĺ͸�����\n");
//	scanf("%lf %lf", &x, &y);
//	printf("%lf��%lf�ĺ�Ϊ%lf", x, y, x + y);
//	return 0;
//}

//���һ����Ϊalter�����ĺ�������������int���͵ı���x��y�������ǵ�ֵ�ֱ�ĳ���������֮���Լ�������֮�
//void alter(int x, int y);
//int main()
//{
//	int x, y;
//	printf("��������������\n");
//	scanf("%d %d", &x, &y);
//	alter(x, y);
//	return 0;
//}
//void alter(int x, int y)
//{
//	int sum = x;
//	x = x + y;
//	y = sum - y;
//	printf("����֮��Ϊ%d ����֮��Ϊ%d", x, y);
//
//}

//��дһ�������������������������е����ֵ

//int max(int x, int y, int z);
//int main()
//{
//	int x, y, z,MAX;
//	printf("�����������������һ᷵�������������Ǹ�ֵ\n");
//	scanf("%d %d %d", &x, &y, &z);
//	MAX=max(x, y, z);
//	printf("���ֵΪ%d", MAX);
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
//		printf("%d ���� �������룡\n",c);
//		menu();
//		scanf("%d", &c);
//	}
//	if (d != 1)
//	{
//		printf("�����쳣��\n");
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

//4.�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ�����ȡ�������ĵ�����
//��дһ����������������double���͵ĺ����������������ĵ���ƽ����
//double tiaohe(double,double);
//int main()
//{
//	printf("�������������ҽ��������ǵĵ���ƽ����:\n");
//	double x, y,sum;
//	scanf("%lf %lf", &x, &y);
//	sum=tiaohe(x, y);
//	printf("%lf��%lf�ĵ���ƽ����Ϊ%lf\n", x, y, sum);
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

//5.��д������һ������larger_of(),�ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ��
//���磬larger_of(x,y)���x��y�нϴ�ֵ���¸�����������
//void larger_of(double*, double*);
//int main()
//{
//	printf("���������������һ���������нϴ�ֵ������������\n");
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


//6.��д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������Сֵ�����һ��������
// �м�ֵ����ڶ������������ֵ�������������

//void paixu(double*, double*, double*);
//int main()
//{
//	printf("���������������һᰴ�մ�С�����˳��������������\n");
//	double x, y, z;
//	scanf("%lf %lf %lf", &x, &y, &z);
//	paixu(&x, &y, &z);
//	printf("�����˳��Ϊ%lf<%lf<%lf", x, y, z);
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

//��дһ���������ӱ�׼�����ж�ȡ�ַ���ֱ�������ļ���β������Ҫ����ÿ���ַ��Ƿ�����ĸ������ǣ���Ҫ
//�������ĸ����ĸ���е���ֵλ�á����磬c��C����ĸ���е�λ�ö���3.�ϲ�һ����������һ���ַ�Ϊ����
//������ַ���һ����ĸ�򷵻�һ����ֵλ�ã����򷵻�-1
//int position(char ch);//�������㲢�����ַ�����ĸ���е�λ��
//void print(void);
//int main()
//{
//	print();
//}
//void print(void)
//{
//	char ch;
//	printf("��������������ַ�(EOF����):\n");
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch  == '\n')
//			continue;
//		if (position(ch) != -1)
//			printf("�ַ�%c��λ����26��ĸ��Ϊ%d\n", ch, position(ch));
//		else
//			printf("%c����һ����ĸ\n", ch);
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

//8.дһ�������������������ݡ����⣬����Ҫ����0���κδ��ݶ�Ϊ0���κ�����0���ݶ�Ϊ1
//����Ӧ����0��0����δ���壬��˰Ѹ�ֵ����Ϊ1��Ҫʹ��һ��ѭ�������ڳ����в��Ըú���


//double power(double n, int p);
//int main()
//{
//	double x, xpow;
//	int exp;
//	printf("����һ�����ֵĶ��ٴ����һ��ֵ�����㣬����p��������\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g�Զ�ƥ��
//		printf("������һ�����ֻ�������q�˳�\n");
//	}
//	printf("good��\n");
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

//9.ʹ�õݹ麯����д�����ϰ8
//double power(double n, int p);
//int main()
//{
//	double x, xpow;
//	int exp;
//	printf("����һ�����ֵĶ��ٴ����һ��ֵ�����㣬����p��������\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);//%g�Զ�ƥ��
//		printf("������һ�����ֻ�������q�˳�\n");
//	}
//	printf("good��\n");
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
//	printf("����һ�����Ĵ����ҽ�Ϊ�㷵������ֵ:");
//	scanf("%lf %d", &n, &p);
//	sum = nihao(n, p);
//	printf("%lf ��%d����Ϊ%lf", n, p, sum);
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

//10.��дһ��to_base_n()�������������������ҵڶ���������2��10��Χ�ڣ�Ȼ���Եڶ���������ָ���Ľ���
//��ӡ��һ����������ֵ�����磬to_base-n(129,8)��ʾ���Ϊ201��Ҳ����129�İ˽�������
//void to_base_n(unsigned long n, int x);
//int main(void)
//{
//	unsigned long number;
//	int x;
//	printf("������һ�������Լ�������ʾ�Ľ�����:\n");
//	while (scanf("%lu %d", &number, &x) == 2)
//	{
//		printf("��%d���Ƶ���ʽ��ӡ%luΪ:",x,number);
//			to_base_n(number, x);
//			printf("\n");
//			printf("\n������һ�������ͽ��ƣ�qΪ�˳�\n");
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

//11��д������Fibonacci()�������ú�����ѭ������ݹ����쳲���������
int Fibonacci(int);
int main()
{    
	printf("����������֪���ĵڼ�λ쳲�������:");
	int x;
	unsigned long fibo;
	scanf("%d", &x);
	fibo=Fibonacci(x);
	printf("��%d��쳲�������Ϊ%lu", x, fibo);
	return 0;
}
int Fibonacci(int x)
{
	if (x <= 2)
		return 1;
	else
		return Fibonacci(x - 1) + Fibonacci(x - 2);
}