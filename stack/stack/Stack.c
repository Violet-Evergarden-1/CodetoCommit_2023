#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void STInit(ST* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STDestory(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void STPop(ST* ps)
{
	assert(ps);
	//验证栈不为空
	assert(ps->top != 0);

	ps->top--;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	//验证栈不为空
	assert(ps->top != 0);

	return ps->a[ps->top-1];
}

int STSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool STEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

