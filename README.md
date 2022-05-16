# Contacts
Contacts/ Information List

## 通讯录的搭建
用通讯录保存个人信息，包括姓名、性别、年龄、电话、地址，最多存储1000条信息。

实现个人信息的增、删、查、改。

能够根据姓名排序，并显示通讯录信息。

## 【V2.0】动态通讯录
通讯录初始化存储30个用户信息，若空间不够则每次扩容20个。
- 动态内存管理：
  - malloc() / free()
  - realloc()

## 【V3.0】文件保存通讯录
通讯录在初始化时可从文件中读入用户信息，在退出时可写入到文件。
- 文件操作：
  - fopen()/fclose() 打开/关闭文件管理单元
  - fwrite()/fread() 二进制写入/读取

## C语言实现
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
