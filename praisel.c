/* praisel.c -- ʹ�ò�ͬ���͵��ַ��� */
#include <stdio.h>
#define PRAISE "You are an extrordinary being."
int main(void) {
	char name[40];

	printf("What's your name?");
	scanf_s("%s", name, 40);	//scanf_s,����һ���Ͳ����йصĴ�Сֵ���������õ������ڵ�Ԫ�ء�����ᱨ��
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}

//��������
//What's your name?Angela plains��scanf_s()�����ո��Ʊ�������з�ʱ�Ͳ��ٶ�ȡ���롣��
//Hello, Angela.You are an extrordinary being.