# Contacts
Contacts/ Information List

## 通讯录的搭建
用通讯录保存个人信息，包括姓名、性别、年龄、电话、地址，最多存储1000条信息。

实现个人信息的增、删、查、改。

能够根据姓名排序，并显示通讯录信息。

##【新增】动态版通讯录
通讯录初始化存储30个用户信息，若空间不够则每次扩容20个。

## C语言实现
- 动态内存管理：
  - malloc() / free()
  - realloc()
- 结构体类型：
  - struct PeoInfo
  - struct Contact
- 枚举类型：
  - enum Option
- 自定义函数：
  - AddContact()
  - DelContact()
  - SearchContact()
  - ModifyContact()
  - ShowContact()
  - SortContact()

## 文件目录
- 头文件
  - contact.h 包含全局常量的定义、结构体类型的定义、枚举类型的定义、函数的声明
- 源文件 
  - contact.c 功能实现函数的定义
  - test.c 测试整体程序
