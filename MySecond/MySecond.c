#define AMOUNT  10
#define MINNUM  20
#include <stdio.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

void  str_test();
void getStu();
void getVar();
void swap2(int* a, int* b);
void swap1(int a, int b);
void var_test();
int add(int a,int b);
void input(int *a,int *b);

int main()
{
	
    //std::cout << "Hello World!\n";
	//str_test();
	//getStu();
	//getVar();
	/*int a = 10, b = 20;
	swap1(a, b);
	printf("a = %d,b = %d\n", a, b);
	swap2(&a,&b);
	printf("a = %d,b = %d", a, b);
	return (0);
	*/



	//var_test();
	
	int i, j;
	input(&i, &j);
	pirntf("i+j=%d\n", add(i, j));
	return 0;

}



void  str_test()
{
	char ch_s[100];
	printf("你喜欢计算机课程吗：\n");
	gets(ch_s);
    //scanf("%s", &ch_s);
	printf("你是这样想的,%s",ch_s);
	//puts(ch_s);
	

}

void getStu()
{
	int age[AMOUNT] = { 19,18,19,20,20,21,18,20,20,19};
	
	for (int i = 0; i < AMOUNT; i++)
	{
		if (age[i] >= 20)printf("第%d个人的年龄为%d\n", i+1, age[i]);
	}
}

void getVar()
{
	int i_p = 1;
	i_p = 10;
	printf("i_p的值%d\n", i_p);
	printf("i_p在内存占有%d个字节\n", sizeof(i_p));
	//printf("i_p的内存地址是:%#x\n", &i_p);
	int* p = &i_p;
	*p = 20;
	//printf("把20赋给内存地址%#x后,i_p的值为%d\n\n", &i_p,i_p);
}

void swap1(int i_a, int i_b)
{
	int c = i_a;
	i_a = i_b;
	i_b = c;
}

void swap2(int* a,int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void var_test()
{
	int i_a, * i_p;
	i_p = &i_a;//把变量的地址赋给指针
	//printf("i_p = %d\n", i_p);
    //printf("*p = %d\n", *i_p);
	*i_p = 10;//给指针指向的变量赋值
	printf("i_a = %d", i_a);
}

int add(int a, int b)
{
	return (a + b);
}

void input(int *a, int *b)
{
	printf("请输入a,b的值:\n");
	scanf_s("%d%d", a, b);
	
}