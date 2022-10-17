/* praisel.c -- 使用不同类型的字符串 */
#include <stdio.h>
#define PRAISE "You are an extrordinary being."
int main(void) {
	char name[40];

	printf("What's your name?");
	scanf_s("%s", name, 40);	//scanf_s,传入一个和参数有关的大小值，避免引用到不存在的元素。否则会报错。
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}

//输出结果：
//What's your name?Angela plains（scanf_s()遇到空格、制表符、换行符时就不再读取输入。）
//Hello, Angela.You are an extrordinary being.