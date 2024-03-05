#include <stdio.h>
int main() 
{
	int a = 10; //所以a分配了四个字节
	printf("%p\n", &a);
	int* pa = &a;
	*pa = 20;//解引用
	printf("%d\n", a);
	return 0;
}
