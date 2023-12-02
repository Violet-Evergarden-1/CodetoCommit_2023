#  C/C++内存分布  
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1700117244673-33e363f8-8536-4e11-bcb5-5585286d7aa8.png#averageHue=%23edb84a&clientId=u57b132f3-02ca-4&from=paste&height=456&id=u3605ebcb&originHeight=684&originWidth=945&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=82967&status=done&style=none&taskId=u4d990ec6-4471-4ac8-9bd3-66b34bf05ac&title=&width=630)
> 1. 栈又叫堆栈--非静态局部变量/函数参数/返回值等等，栈是向下增长的。
> 2. 内存映射段是高效的I/O映射方式，用于装载一个共享的动态内存库。用户可使用系统接口创建共享共享内存，做进程间通信。（Linux课程如果没学到这块，现在只需要了解一下）
> 3. 堆用于程序运行时动态内存分配，堆是可以上增长的。
> 4. 数据段--存储全局数据和静态数据。
> 5. 代码段--可执行的代码/只读常量。

## 栈和堆的区别

- **管理方式：**对于栈来讲，是由编译器自动管理，无需我们手工控制；对于堆来说，释放工作由程序员控制，容易产生memory leak。
- **空间大小：**一般来讲在32位系统下，堆内存可以达到4G的空间，然而，实际可用的堆内存大小可能会小于4GB，因为操作系统还需要使用一部分内存来管理进程、线程和其他系统资源。另外，还有一些内存空间可能会被分配给其他用途，如显卡映射、设备驱动程序等。但是对于栈来讲，一般都是有一定的空间大小的。
- **碎片问题：**对于堆来讲，频繁的new/delete势必会造成内存空间的不连续，从而造成大量的碎片，使程序效率降低。对于栈来讲，则不会存在这个问题，因为栈是先进后出的，他们是如此的一一对应，以至于永远都不可能有一个内存块从栈中间弹出，在他弹出之前，在他上面的后进的栈内容已经被弹出，详细的可以参考数据结构，这里我们就不再一一讨论了。
- **生长方向：**对于栈来讲，它的生长方向是向下的，是向着内存地址减小的方向增长；对于堆来讲，生长方向是向上的，也就是向着内存地址增加的方向。
- **分配方式：**堆都是动态分配的，没有静态分配的堆。栈有2种分配方式：静态分配和动态分配。静态分配是编译器完成的，比如局部变量的分配。动态分配由alloca函数进行分配，但是栈的动态分配和堆是不同的，他的动态分配是由编译器进行释放，无需我们手工实现。
- **分配效率：**栈是机器系统提供的数据结构，计算机会在底层对栈提供支持：分配专门的寄存器存放栈的地址，压栈出栈都有专门的指令执行，这就决定了栈的效率比较高。堆则是C/C++函数库提供的，它的机制是很复杂的，例如为了分配一块内存，库函数会按照一定的算法（具体的算法可以参考数据结构/操作系统）在堆内存中搜索可用的足够大小的空间，如果没有足够大小的空间（可能是由于内存碎片太多），就有可能调用系统功能去增加程序数据段的内存空间，这样就有机会分到足够大小的内存，然后进行返回。显然，堆的效率比栈要低得多。

从这里我们可以看到，堆和栈相比，由于大量new/delete的使用，容易造成大量的内存碎片；由于没有专门的系统支持，效率很低；由于可能引发用户态和核心态的切换，内存的申请，代价变得更加昂贵。所以栈在程序中是应用最广泛的，就算是函数的调用也利用栈去完成，函数调用过程中的参数，返回地址，EBP和局部变量都采用栈的方式存放。所以，我们推荐大家尽量用栈，而不是用堆。
虽然栈有如此众多的好处，但是由于和堆相比不是那么灵活，有时候分配大量的内存空间，还是用堆好一些。
无论是堆还是栈，都要防止越界现象的发生（除非你是故意使其越界），因为越界的结果要么是程序崩溃，要么是摧毁程序的堆、栈结构，产生以想不到的结果,就算是在你的程序运行过程中，没有发生上面的问题，你还是要小心，说不定什么时候就崩掉，那时候debug可是相当困难的。
# C语言中动态内存管理方式
> malloc/calloc/realloc/free

malloc的实现原理？ [glibc中malloc实现原理](https://www.bilibili.com/video/BV117411w7o2/?spm_id_from=333.788.videocard.0&vd_source=342ea4b46c801a956dacf1818a0c4ea7)
# C++内存管理方式
malloc不方便解决动态申请的自定义类型对象的初始化问题，一般通过new和delete操作符进行动态内存管理。
## new/delete操作内置类型
```cpp
int main()
{
	// 动态申请一个int类型的空间
	int* p1 = new int;
	
	// 动态申请一个int类型的空间并初始化为10
	int* p3 = new int(10);
	
	// 动态申请10个int类型的空间
	int* p2 = new int[10];
	
	int* p4 = new int[10]{ 10 };//可以通过大括号初始化（类似数组）
	return 0;
}
```
> 申请和释放单个元素的空间，使用new和delete操作符，申请和释放连续的空间，使用new[ ]和delete[ ]，
> new/delete  new[ ]/delete[ ] malloc/free 一定要配对使用，否则结果是未定义

![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1700118575246-62c0f528-999e-45d0-9da9-9ef22c037e23.png#averageHue=%23fbf3e9&clientId=u57b132f3-02ca-4&from=paste&height=316&id=u45e2e6aa&originHeight=416&originWidth=564&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=46195&status=done&style=none&taskId=uf9ffc660-c478-431d-88e2-9154190d77d&title=&width=429)
## new和delete操作自定义类型
申请自定义类型的空间时，new会调用构造函数，delete会调用析构函数，而malloc与free不会
内置类型的对象申请释放，new和malloc除了用法上，没有区别

- new的本质：开空间+调用构造函数初始化
```cpp
class A
{
public:
	A(int a = 0)
	: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

int main()
{
	// new/delete 和 malloc/free最大区别是 new/delete对于【自定义类型】除了开空间还会调用构造函数和析构函数
	A* p1 = (A*)malloc(sizeof(A));
	A* p2 = new A(1);
	free(p1);
	delete p2;
	
	// 内置类型是几乎是一样的
	int* p3 = (int*)malloc(sizeof(int)); // C
	int* p4 = new int;
	free(p3);
	delete p4;
	
	A* p5 = (A*)malloc(sizeof(A)*10);
	A* p6 = new A[10];
	free(p5);
	delete[] p6;
	
	return 0;
}
```
# operator new与operator delete函数（重点）
## operator new与operator delete函数（重点）
> new和delete是用户进行动态内存申请和释放的操作符，operator new 和operator delete是系统提供的全局函数，new在底层调用operator new全局函数来申请空间，delete在底层通过operator delete全局函数来释放空间。

```cpp
/*
operator new：该函数实际通过malloc来申请空间，当malloc申请空间成功时直接返回；申请空间失败，
尝试执行空间不足应对措施，如果用户设置了该应对措施，则继续申请，否则抛异常。
*/
void *__CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
{
	// try to allocate size bytes
	void *p;
	while ((p = malloc(size)) == 0)
		if (_callnewh(size) == 0)
		{
			// report no memory
			// 如果申请内存失败了，这里会抛出bad_alloc 类型异常
			static const std::bad_alloc nomem;
			_RAISE(nomem);
		}
	return (p);
}

/*
operator delete: 该函数最终是通过free来释放空间的
*/
void operator delete(void *pUserData)
{
	_CrtMemBlockHeader * pHead;
	
	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
	
	if (pUserData == NULL)
		return;
	
	_mlock(_HEAP_LOCK); /* block other threads */
	__TRY
	
		/* get a pointer to memory block header */
		pHead = pHdr(pUserData);
	
		/* verify block type */
		_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
	
		_free_dbg( pUserData, pHead->nBlockUse );
	
	__FINALLY
		_munlock(_HEAP_LOCK); /* release other threads */
	__END_TRY_FINALLY
	
	return;
}

/*
free的实现
*/
#define free(p) _free_dbg(p, _NORMAL_BLOCK)
```
> 通过上述两个全局函数的实现知道，operator new 实际也是通过malloc来申请空间，如果malloc申请空间成功就直接返回，否则执行用户提供的空间不足应对措施，如果用户提供该措施就继续申请，否则就抛异常。operator delete 最终是通过free来释放空间的。

# new和delete的实现原理
## 内置类型
> 如果申请的是内置类型的空间，new和malloc，delete和free基本类似，不同的地方是：new/delete申请和释放的是单个元素的空间，new[]和delete[]申请的是连续空间，而且new在申请空间失败时会抛异常，malloc会返回NULL。

## 自定义类型
> - new
> 
调用operator new函数申请空间
> 在申请的空间上执行构造函数，完成对象的构造
> - delete
> 
在空间上执行析构函数，完成对象中资源的清理工作
> 调用operator delete函数释放对象的空间
> - new T[N]
> 
调用operator new[]函数，在operator new[]中实际调用operator new函数完成N个对象空间的申请
> 在申请的空间上执行N次构造函数
> - delete[ ]
> 
在释放的对象空间上执行N次析构函数，完成N个对象中资源的清理
> 调用operator delete[ ]释放空间，实际在operator delete[]中调用operator delete来释放空间

# 定位new表达式(placement-new) （了解）
定位new表达式是在已分配的原始内存空间中调用构造函数初始化一个对象。
**使用格式：**
new (place_address) type或者new (place_address) type(initializer-list)
place_address必须是一个指针，initializer-list是类型的初始化列表
**使用场景：**
定位new表达式在实际中一般是配合内存池使用。因为内存池分配出的内存没有初始化，所以如
果是自定义类型的对象，需要使用new的定义表达式进行显示调构造函数进行初始化。
```cpp
class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}

private:
	int _a;
};

// 定位new/replacement new
int main()
{
	// p1现在指向的只不过是与A对象相同大小的一段空间，还不能算是一个对象，因为构造函数没有执行
	A* p1 = (A*)malloc(sizeof(A));
	new(p1)A; // 注意：如果A类的构造函数有参数时，此处需要传参
	p1->~A();
	free(p1);
	
	A* p2 = (A*)operator new(sizeof(A));
	new(p2)A(10);
	p2->~A();
	operator delete(p2);
	return 0;
}
```
# 常见面试题
## malloc/free和new/delete的区别
malloc/free和new/delete的共同点是：都是从堆上申请空间，并且需要用户手动释放。
不同点是：

1. malloc和free是函数，new和delete是操作符
2. malloc申请的空间不会初始化，new可以初始化
3. malloc申请空间时，需要手动计算空间大小并传递，new只需在其后跟上空间的类型即可，如果是多个对象，[ ]中指定对象个数即可
4. malloc的返回值为void*, 在使用时必须强转，new不需要，因为new后跟的是空间的类型
5. malloc申请空间失败时，返回的是NULL，因此使用时必须判空，new不需要，但是new需要捕获异常
6. 申请自定义类型对象时，malloc/free只会开辟空间，不会调用构造函数与析构函数，而new在申请空间后会调用构造函数完成对象的初始化，delete在释放空间前会调用析构函数完成空间中资源的清理
## 内存泄漏
### 什么是内存泄漏，内存泄漏的危害
什么是内存泄漏：内存泄漏指因为疏忽或错误造成程序未能释放已经不再使用的内存的情况。内
存泄漏并不是指内存在物理上的消失，而是应用程序分配某段内存后，因为设计错误，失去了对
该段内存的控制，因而造成了内存的浪费。
内存泄漏的危害：长期运行的程序出现内存泄漏，影响很大，如操作系统、后台服务等等，出现
内存泄漏会导致响应越来越慢，最终卡死。
```cpp
void MemoryLeaks()
{
	// 1.内存申请了忘记释放
	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = new int;
	
	// 2.异常安全问题
	int* p3 = new int[10];
	
	Func(); // 这里Func函数抛异常导致 delete[] p3未执行，p3没被释放.
	
	delete[] p3;
}
```
### 内存泄漏分类（了解）
C/C++程序中一般我们关心两种方面的内存泄漏：

- 堆内存泄漏(Heap leak)

堆内存指的是程序执行中依据须要分配通过malloc / calloc / realloc / new等从堆中分配的一块内存，用完	后必须通过调用相应的 free或者delete 删掉。假设程序的设计错误导致这部分内存没有被释放，那么以后这部分空间将无法再被使用，就会产生Heap Leak。

- 系统资源泄漏

指程序使用系统分配的资源，比方套接字、文件描述符、管道等没有使用对应的函数释放掉，导致系统资源的浪费，严重可导致系统效能减少，系统执行不稳定。
### 如何检测内存泄漏（了解）
在vs下，可以使用windows操作系统提供的**_CrtDumpMemoryLeaks() **函数进行简单检测，该函数只报出了大概泄漏了多少个字节，没有其他更准确的位置信息。
```cpp
int main()
{
	int* p = new int[10];
	
	// 将该函数放在main函数之后，每次程序退出的时候就会检测是否存在内存泄漏
	_CrtDumpMemoryLeaks();
	return 0;
}

////////////////////////////////////////////////////////
// 程序退出后，在输出窗口中可以检测到泄漏了多少字节，但是没有具体的位置
Detected memory leaks!
Dumping objects ->
{79} normal block at 0x00EC5FB8, 40 bytes long.
Data: <         > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD
Object dump complete.
```
因此写代码时一定要小心，尤其是动态内存操作时，一定要记着释放。但有些情况下总是防不胜防，简单的可以采用上述方式快速定位下。如果工程比较大，内存泄漏位置比较多，不太好查时一般都是借助第三方内存泄漏检测工具处理的。

- 在linux下内存泄漏检测：[linux下几款内存泄漏检测工具](https://blog.csdn.net/gatieme/article/details/51959654)
- 在windows下使用第三方工具：[VLD工具说明](https://blog.csdn.net/GZrhaunt/article/details/56839765)
- 其他工具：[内存泄漏工具比较](https://www.cnblogs.com/liangxiaofeng/p/4318499.html)
### 如何避免内存泄漏

1. 工程前期良好的设计规范，养成良好的编码规范，申请的内存空间记着匹配的去释放。ps：这是理想状态。但是如果碰上异常时，就算注意释放了，还是可能会出问题。需要下一条智能指针来管理才有保证。
2. 采用RAII思想或者智能指针来管理资源。
3. 有些公司内部规范使用内部实现的私有内存管理库。这套库自带内存泄漏检测的功能选项。
4. 出问题了使用内存泄漏工具检测。ps：不过很多工具都不够靠谱，或者收费昂贵。

总结一下:
内存泄漏非常常见，解决方案分为两种：1、事前预防型。如智能指针等。2、事后查错型。如泄漏检测工具。


















