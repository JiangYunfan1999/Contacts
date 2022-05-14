#define MAX 1000; //通讯录最大容量

#define MAX_NAME 10
#define MAX_SEX 2
#define MAX_TELE 12
#define MAX_ADDR 20

#include <stdio.h>
#include <string.h>

//选项的枚举类型
enum Option
{
	EXIT, //0
	ADD, // 1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//个人信息类型
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];
	int size; //当前已有的元素个数
};

//函数的声明
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps); //const保护内容不被修改
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
