#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

int Search_By_Name(Contact* pc,char*name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
		return -1;
}

int Check_Capacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + ADD_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("Check_Capacity");
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += ADD_SZ;
			printf("���ݳɹ�\n");
			return 1;
		}
	}
	return 1;
}

void Load_Contact(Contact* pc) 
{
	FILE* pf;
	pf = fopen("Contact.txt", "rb");
	if (pf == NULL)
	{
		perror("Load_Contact");
		return;
	}

	PeoInfo* tmp;
	while (fread(tmp, sizeof(PeoInfo), 1, pf) == 1)
	{
		if (0 == Check_Capacity(pc))
			return;
		pc->data[pc->sz] = *tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

//��̬
//void Init_Contact(Contact* pc)
//{
//	assert(pc);
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->sz=0;
//}

//��̬+�ļ�
void Init_Contact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("Init_Contact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	Load_Contact(pc);
}

//��̬
//void Add_Contact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	assert(pc);
//	printf("����\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����\n");
//	scanf("%d", &pc->data[pc->sz].age);
//	printf("�绰\n");
//	scanf("%s", pc->data[pc->sz].tel);
//	(pc->sz)++;
//	printf("��ӳɹ�\n");
//}

//��̬
void Add_Contact(Contact* pc)
{
	if (0 == Check_Capacity(pc))
		return;

	assert(pc);
	printf("����\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("����\n");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�绰\n");
	scanf("%s", pc->data[pc->sz].tel);
	(pc->sz)++;
	printf("��ӳɹ�\n");
}

void Del_Contact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("����ɾ����Ա����\n");
	scanf("%s", name);

	int i = Search_By_Name(pc, name);
	if (i != -1)
	{
		for (; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
	else
		printf("�޴���\n");
	return;
}

void Show_Contact(Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-10s\t%-20s\n","����","����","�绰");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-10d\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].tel);
	}
}

void Search_Contact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("���������Ա����\n");
	scanf("%s", name);
	int i = Search_By_Name(pc, name);
	if (i != -1)
	{
		printf("%-20s\t%-10s\t%-20s\n", "����", "����", "�绰");
		printf("%-20s\t%-10d\t%-20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].tel);
	}
	else
		printf("���޴���\n");
}

void Modify_Contact(Contact*pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("�����޸���Ա����\n");
	scanf("%s", name);
	int i = Search_By_Name(pc, name);
	if (i != -1)
	{
		printf("����\n");
		scanf("%s", pc->data[i].name);
		printf("����\n");
		scanf("%d", &pc->data[i].age);
		printf("�绰\n");
		scanf("%s", pc->data[i].tel);
		printf("�޸ĳɹ�\n");
	}
	else
		printf("���޴���\n");
}

int Cmp_Name(const void* p1, const void* p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}

void Sort_Contact_By_Name(Contact* pc)
{
	assert(pc);
	printf("����������\n");
	qsort(pc, pc->sz, sizeof(pc->data[0]), Cmp_Name);
	Show_Contact(pc);
}

void Destory_Contact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void Save_Contact(Contact* pc)
{
	FILE* pf = fopen("Contact.txt", "wb");
	if (pf == NULL)
	{
		perror("Save_Contact");
		return;
	}

	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}