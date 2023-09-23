#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#pragma pack(4)
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;//2
//        char d;//1 3
//        long b;//4 8
//        long c;//4 12
//    };
//    struct tagTest2
//    {
//        long b;//4
//        short c;//2 6
//        char d;//1 7
//        long a;//4 12
//    };
//    struct tagTest3
//    {
//        short c;//2
//        long b;//4 8
//        char d;//1 9
//        long a;//4 16
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}

//#include<stdlib.h>
//
//#define MAX_SIZE 5;
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);

//int main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 255,
//		A1,
//		B1,
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//
//	return 0;
//}

//int main()
//{
//#define MAX_SIZE 5
//	struct _Record_Struct
//	{
//		unsigned char Env_Alarm_ID : 4;
//		unsigned char Para1 : 2;
//		unsigned char state;
//		unsigned char avail : 1;
//	}*Env_Alarm_Record;
//	printf("%d",sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	return 0;
//}


//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

struct A
{
	int a;//4
	short b;//2 6
	int c;//4 12
	char d;//1 13
};

struct B
{
	int a;//4
	short b;//2 6
	char c;//1 7
	int d;//4 12
};