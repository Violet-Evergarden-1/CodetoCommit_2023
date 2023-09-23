#pragma once

//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供方法：
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_TEL 20

#define DEFAULT_SZ 3
#define ADD_SZ 2

//结构体声明
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char tel[MAX_TEL];
}PeoInfo;

//静态
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

//动态
typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;

enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EMPTY
};

void Init_Contact(Contact* pc);//初始化
void Add_Contact(Contact* pc);//增
void Del_Contact(Contact* pc);//删
void Show_Contact(Contact* pc);//显示
void Search_Contact(Contact* pc);//查
void Modify_Contact(Contact* pc);//改
void Sort_Contact_By_Name(Contact* pc);//排序
void Destory_Contact(Contact* pc);//释放
