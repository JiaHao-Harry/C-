//�Զ��ػ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "������") == 0)
// //�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
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
	//�ػ�
	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 60");//system - stdlib.h
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		//string.h
		if (strcmp(input, "������") == 0)
		//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}