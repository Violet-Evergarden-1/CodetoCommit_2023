#pragma once

//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ������
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_TEL 20

#define DEFAULT_SZ 3
#define ADD_SZ 2

//�ṹ������
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char tel[MAX_TEL];
}PeoInfo;

//��̬
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

//��̬
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

void Init_Contact(Contact* pc);//��ʼ��
void Add_Contact(Contact* pc);//��
void Del_Contact(Contact* pc);//ɾ
void Show_Contact(Contact* pc);//��ʾ
void Search_Contact(Contact* pc);//��
void Modify_Contact(Contact* pc);//��
void Sort_Contact_By_Name(Contact* pc);//����
void Destory_Contact(Contact* pc);//�ͷ�
