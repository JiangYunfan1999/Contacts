#include <stdio.h>
#include <string.h>
#include <stdlib.h> //动态内容管理对应的库
#include "contact.h"

//函数的定义
void InitContact(struct Contact* ps)
{
  ps->data = (struct PeoInfo*)malloc(DEFAULT_CAPACITY*sizeof(struct PeoInfo));
  if(ps->data != NULL)
  {
    ps->size = 0;
    ps->capacity = DEFAULT_CAPACITY;
  }
  else
    return;
}

void AddContact(struct Contact* ps)
{
	//检查是否需要扩容
  if(ps->size == ps->capacity)
  {
    struct PeoInfo* ptr = realloc(ps->data, (ps->capacity+DEFAULT_ADD)*sizeof(struct PeoInfo));
    if(ptr != Null)
    {
      ps->data = ptr;
      ps->capacity += DEFAULT_ADD;
      printf("通讯录已成功扩容！\n");
    }
    else
      printf("通讯录扩容失败。\n");
  }
	else
	{
		printf("请输入姓名:>");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入性别:>");
		scanf("%s",ps->data[ps->size].sex);
		printf("请输入年龄:>");
		scanf("%d",ps->data[ps->size].age);
		printf("请输入电话:>");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[ps->size].addr);
    
		ps->size++; //元素个数增加
		printf("添加成功！\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if(MAX == ps->size)
		printf("通讯录为空，请先添加\n");
	else
	{
		int i = 0;
		//打印标题
		printf("%-10s\t%-4s\t%-4s\t%-15s\t%-20s\n","姓名","性别","年龄","电话","地址");
		//打印信息
		for(i=0; i<ps->size; i++)
		{
			printf("%-10s\t%-4s\t%-4d\t%-15s\t%-20s\n",
				   ps->data[i].name,
				   ps->data[i].sex,
				   ps->data[i].age,
				   ps->data[i].tele,
				   ps->data[i].addr,
				  )
		}
	}
}

//实现根据姓名查找的功能，找到返回下标，找不到返回-1
int FindByName(const struct Contact* ps, char* name)
{
	int i = 0;
	for(i=0; i<ps->size; i++)
	{
		if(strcmp(ps->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除用户信息的姓名");
	scanf("%s",name);
	//1.查找信息
	int pos = FindByName(ps, name);
	//2.删除信息（每个元素前移一位，同时size-1）
	if(pos == -1)
		printf("该用户不存在\n");
	else
	{
		int j = 0;
		for(j=i; j<ps->size-1; j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		ps->size--; //元素个数减少
		printf("删除成功！\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找用户信息的姓名");
	scanf("%s",name);
	int pos = FindByName(ps, name);
	if(pos == -1)
		printf("该用户不存在\n");
	else
	{
		printf("%-10s\t%-4s\t%-4s\t%-15s\t%-20s\n","姓名","性别","年龄","电话","地址");
		printf("%-10s\t%-4s\t%-4d\t%-15s\t%-20s\n",
				   ps->data[pos].name,
				   ps->data[pos].sex,
				   ps->data[pos].age,
				   ps->data[pos].tele,
				   ps->data[pos].addr,
				  )
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改用户信息的姓名");
	scanf("%s",name);
	int pos = FindByName(ps, name);
	if(pos == -1)
		printf("该用户不存在\n");
	else
	{
		printf("请输入姓名:>");
		scanf("%s",ps->data[pos].name);
		printf("请输入性别:>");
		scanf("%s",ps->data[pos].sex);
		printf("请输入年龄:>");
		scanf("%d",ps->data[pos].age);
		printf("请输入电话:>");
		scanf("%s",ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[pos].addr);
		printf("修改成功！\n");
	}
}

void SortContact(struct Contact* ps)
{
	//根据姓名升序进行冒泡排序
	int i = 0;
	for(i=0; i<ps->size-1; i++)
	{
		int j = 0;
		for(j=0; j<size-1-i; j++)
		{
			if(strcmp(ps->data[i+j].name, ps->data[i+j+1].name) > 0)
			{
				struct PeoInfo tmp = ps->data[i+j];
				ps->data[i+j] = ps->data[i+j+1];
				ps->data[i+j+1] = tmp;
			}
		}
	}
	printf("排序完成！\n");
  
void DestroyContact(struct Contact* ps)
{
  free(ps->data);
  ps->data = NULL;
}
