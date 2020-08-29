#include <stdio.h>

void str_test()
{
	char ch_s[100];
	printf("请输入你的名字：\n");
	scanf("%s", &ch_s);
	printf("%s, 你已经被包围了", ch_s);

}