#include <stdio.h>
#include "contact.h"

void menu()
{
	printf("*********************************\n");
	printf("************ 通讯录 *************\n");
	printf("****** 1.add     2.delete *******\n");
	printf("****** 3.search  4.modify *******\n");
	printf("****** 5.show    6.sort   *******\n");
	printf("****** 0.exit             *******\n");
	printf("*********************************\n");
}

int main()
{
	int input = 0;
	//创建动态版通讯录
	struct Contact con;
	//初始化通讯录，初始容量为30
	InitContact(&con);
	//实现通讯录功能
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case SORT:
				SortContact(&con);
				break;
			case EXIT:
        DestroyContact(&con); //释放动态内存空间
				printf("退出通讯录\n");
				break;
			default:
				printf("输入无效，请重新输入\n");
				break;
		}
	}while(input);
	return 0;
}