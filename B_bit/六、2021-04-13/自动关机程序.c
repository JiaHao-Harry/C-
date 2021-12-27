//自动关机程序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()- 执行系统命令的
//
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "我是猪") == 0)
// //两个字符串比较是不能使用==的，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


int main()
{
	//关机
	//C语言提供了一个函数：system()- 执行系统命令的
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");//system - stdlib.h
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		//string.h
		if (strcmp(input, "我是猪") == 0)
		//两个字符串比较是不能使用==的，应该使用strcmp() string compare
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}