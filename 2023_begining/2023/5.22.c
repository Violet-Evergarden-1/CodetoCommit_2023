#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int i = 1;
//    int n = 0;
//    long long ret = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret += i;
//    }
//    printf("%lld\n", ret);
//
//    return 0;
//}
//�Ȳ�������͹�ʽ
//int main()
//{
//	int n = 0;
//	long long sum = 0;
//	scanf("%d", &n);
//	sum = (1 + n) * n / 2;
//	printf("%lld", sum);
//
//	return 0;
//}


//����
//С���ֻ��4������������������ҵ���������
//����������
//һ�У�4���������ÿո�ֿ���
//���������
//һ�У�һ��������Ϊ�����4������������������
//ʾ��1
//���룺
//5 8 2 5
//�����
//8
// 
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int arr[4] = {a, b, c, d };
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < 4; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//    }
//    printf("%d", max);
//
//    return 0;
//}


//int main()
//{
//	char str[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}
 
 
//����
//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
//����������
//�������룬ÿһ������һ���ַ���
//���������
//���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
//ʾ��1
//���룺
//A
//6
//�����
//A is an alphabet.
//6 is not an alphabet.
// 
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		int b = getchar();
//		if (a >= 65 && a <= 122)
//			printf(" is an alphabet.\n", putchar(a));
//		else
//			printf(" is not an alphabet.\n", putchar(a));
//	}
//	return 0;
//}

//int main()
//{
//    char a;
//    while ((a = getchar()) != EOF)
//    {
//        if (a != '\n')    //��Ҫ�ж��ǲ��ǻس�
//        {
//            if (a >= 'A' && a <= 'z') printf("%c is an alphabet.\n", a);
//            else printf("%c is not an alphabet.\n", a);
//        }
//    }
//    return 0;
//}

//����
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
//
//���ݷ�Χ���·��۸�����
//1��val��100000
//����������
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12����
//���������
//һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
//ʾ��1
//���룺
//1000.0 11 11 1

//�����
//650.00
//ʾ��2
//���룺
//999.8 12 12 
//�����
//799.84
//ʾ��3
//���룺
//66.6 11 11 1
//�����
//0.00

//int main()
//{
//	float price = 0;
//	int month = 0;
//	int day = 0;
//	int a = 0;
//	float cost = 0;
//	scanf("%f %d %d %d", &price, &month, &day, &a);
//	if (month == 11 && day == 11)
//		cost = price * 0.7;
//	else if (month == 12 && day == 12)
//		cost = price * 0.8;
//	if (a)
//		cost = cost - 50;
//	cost = (cost > 0 ? cost : 0.00);
//	printf("%0.2f", cost);
//
//	return 0;
//}

//void C9X9()
//{
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			ret = x * y;
//			printf("%d*%d=%02d ", x, y, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void C12X12()
//{
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	for (x = 1; x <= 12; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			ret = x * y;
//			printf("%02d*%02d=%02d ", x, y, ret);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 9)
//		C9X9();
//	else if (a == 12)
//		C12X12();
//	
//	return 0;
//}