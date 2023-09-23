#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	char arr[30] = { 0 };
//	struct S s = { 100, 3.14f, "hehe" };
//	struct S tmp = { 0 };
//
//	sprintf(arr, "%d %f %s", s.a, s.s, s.str);
//	//printf("%s\n", arr);
//	sscanf(arr, "%d %f %s", &(tmp.a), &(tmp.s), tmp.str);
//
//	printf("%d %f %s\n", tmp.a, tmp.s, tmp.str);
//
//	return 0;
//}

//struct S
//{
//	int a;
//	float s;
//};
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	struct S s = { 0 };
//	fscanf(pf, "%d %f", &(s.a), &(s.s));
//
//	fprintf(stdout, "%d %f", s.a, s.s);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 99, 6.18f, "bit" };
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	} 
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %f %s\n", s.a, s.s, s.str);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//定位文件指针到f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//定位文件指针到f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("data.txt", "w");
//	fprintf(pf, "%d", a);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		ferror(fopen);
//		return 1;
//	}
//	int b = 0;
//	fscanf(pf, "%d", &b);
//	fprintf(stdout, "%d", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("data.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

