# 关键字
>  C++总计63个关键字，C语言32个关键字  

![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697367937048-d71210a3-d28d-4237-b48b-bd2aa00424dc.png#averageHue=%23f6f6f6&clientId=u9c4e405f-4bb1-4&from=paste&height=503&id=u6b71e031&originHeight=754&originWidth=1348&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=123536&status=done&style=none&taskId=uc9ac52ae-c710-48aa-9032-967212aa9a0&title=&width=898.6666666666666)
# 命名空间
> 在C/C++中，变量、函数和后面要学到的类都是大量存在的，这些变量、函数和类的名称将都存 在于全局作用域中，可能会导致很多冲突。使用命名空间的目的是**对标识符的名称进行本地化**， 以**避免命名冲突或名字污染**，namespace关键字的出现就是针对这种问题的。  

## 2.1. 定义
> 定义命名空间，需要使用到**namespace**关键字，后面跟**命名空间的名字**，然后**接一对{}**即可，{} 中即为命名空间的成员。  

```cpp
namespace bit
{
    // 命名空间中可以定义变量/函数/类型
    int a = 0;
    int b = 1;
    int Add(int left, int right)
    {
        return left + right;
    }
    struct Node
    {
    struct Node* next;
    int val;
};
}
```
## 2.2. 使用
命名空间的使用有三种方式：  

- 加命名空间名称及作用域限定符  
```cpp
int main()
{
    printf("%d\n", bit::a);
    return 0;    
}
```

- 使用using将命名空间中某个成员引入  
```cpp
using bit::b;
int main()
{
    printf("%d\n", bit::a);
    printf("%d\n", b);
    return 0;    
}
```

-  使用using namespace 命名空间名称 引入  
```cpp
using namespce bit;
int main()
{
    printf("%d\n", N::a);
    printf("%d\n", b);
    Add(10, 20);
    return 0;
}
```
**std命名空间的使用惯例：**
> std是C++标准库的命名空间，如何展开std使用更合理呢？
> 1. 在日常练习中，建议直接using namespace std即可，这样就很方便。
> 2. using namespace std展开，标准库就全部暴露出来了，如果我们定义跟库重名的类型/对
象/函数，就存在冲突问题。该问题在日常练习中很少出现，但是项目开发中代码较多、规模
大，就很容易出现。所以建议在项目开发中使用，像std::cout这样使用时指定命名空间 +
using std::cout展开常用的库对象/类型等方式。

 
# C++输入&输出  
```cpp
#include<iostream>
// std是C++标准库的命名空间名，C++将标准库的定义实现都放到这个命名空间中
using namespace std;
int main()
{
    cout<<"Hello world!!!"<<endl;
    return 0;
}
```
说明：

1. 使用**cout标准输出对象(控制台)**和**cin标准输入对象(键盘)**时，必须**包含< iostream >**头文件
以及按命名空间使用方法**使用std**。
2. cout和cin是全局的流对象，endl是特殊的C++符号，表示换行输出，他们都包含在包含<
iostream >头文件中。
3. **<<是流插入运算符，>>是流提取运算符**。
4. 使用C++输入输出更方便，不需要像printf/scanf输入输出时那样，需要手动控制格式。
C的输入输出可以自动识别变量类型。
5. 实际上cout和cin分别是ostream和istream类型的对象，>>和<<也涉及运算符重载等知识，
这些知识我们我们后续才会学习，所以我们这里只是简单学习他们的使用。后面我们还有有
一个章节更深入的学习IO流用法及原理。

注意：早期标准库将所有功能在全局域中实现，声明在.h后缀的头文件中，使用时只需包含对应
头文件即可，后来将其实现在std命名空间下，为了和C头文件区分，也为了正确使用命名空间，
规定C++头文件不带.h；旧编译器(vc 6.0)中还支持<iostream.h>格式，后续编译器已不支持，因
此推荐使用**<iostream>+std**的方式。
# 缺省参数
## 4.1. 缺省参数概念 
> 缺省参数是**声明或定义函数时**为函数的**参数指定一个缺省值**。在调用该函数时，如果没有指定实 参则采用该形参的缺省值，否则使用指定的实参。  

```cpp
void Func(int a = 0)
 {
    cout<<a<<endl;
 }
 int main()
 {
    Func();     // 没有传参时，使用参数的默认值
    Func(10);   // 传参时，使用指定的实参
 
 return 0;
 }
```
## 4.2. 缺省参数分类

- 全缺省参数
```cpp
 void Func(int a = 10, int b = 20, int c = 30)
 {
     cout<<"a = "<<a<<endl;
     cout<<"b = "<<b<<endl;
     cout<<"c = "<<c<<endl;
 }
```

-  半缺省参数  
```cpp
 void Func(int a, int b = 10, int c = 20)
 {
     cout<<"a = "<<a<<endl;
     cout<<"b = "<<b<<endl;
     cout<<"c = "<<c<<endl;
 }
```
** 注意：  **

1. 半缺省参数必须**从右往左依次**来给出，不能间隔着给
2. 缺省参数不能在函数声明和定义中同时出现（尽量写在声明中）
3. 缺省值必须是常量或者全局变量
4. C语言不支持（编译器不支持）
# 函数重载
##  函数重载概念  
> 函数重载：是函数的一种特殊情况，C++允许在同一作用域中声明几个功能类似的同名函数，这 些同名函数的形参列表(参数个数 或 类型 或 类型顺序)不同，常用来处理实现功能类似数据类型 不同的问题。  

```cpp
#include<iostream>
using namespace std;

 // 1、参数类型不同
int Add(int left, int right)
 {
    cout << "int Add(int left, int right)" << endl;
    return left + right;
 }

 double Add(double left, double right)
 {
    cout << "double Add(double left, double right)" << endl;
    return left + right;
 }

 // 2、参数个数不同
void f()
{
    cout << "f()" << endl;
}
void f(int a)
{
    cout << "f(int a)" << endl;
}

 // 3、参数类型顺序不同
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
    cout << "f(char b, int a)" << endl;
}
 int main()
{
    Add(10, 20);
    Add(10.1, 20.2);
    
    f();
    f(10);
    
    f(10, 'a');
    f('a', 10);
    return 0;
}
```
##  C++支持函数重载的原理--名字修饰(name Mangling)  
> **为什么C++支持函数重载，而C语言不支持函数重载呢？** 
> 在C/C++中，一个程序要运行起来，需要经历以下几个阶段：**预处理、编译、汇编、链接**。  

![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697416485476-560b159e-a1fc-45eb-96c0-4a39d975c407.png#averageHue=%23fafafa&clientId=u72d7ea57-5819-4&from=paste&height=521&id=u617b28f7&originHeight=781&originWidth=1159&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=214847&status=done&style=none&taskId=u784460f4-844e-4831-aab9-3fb202a5c6b&title=&width=772.6666666666666)
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697416601145-f4c93e26-6634-4f4a-9b10-e7281d566861.png#averageHue=%23fdfdfc&clientId=u72d7ea57-5819-4&from=paste&height=451&id=u79b0c372&originHeight=676&originWidth=1214&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=277958&status=done&style=none&taskId=ufe736bb1-4cf6-4c4e-947a-9b81bb7c42c&title=&width=809.3333333333334)
> 1. 实际项目通常是由多个头文件和多个源文件构成，而通过C语言阶段学习的编译链接，我们
可以知道，【当前a.cpp中调用了b.cpp中定义的Add函数时】，编译后链接前，a.o的目标
文件中没有Add的函数地址，因为Add是在b.cpp中定义的，所以Add的地址在b.o中。那么
怎么办呢？
> 2. 所以链接阶段就是专门处理这种问题，**链接器看到a.o调用Add，但是没有Add的地址，就
会到b.o的符号表中找Add的地址，然后链接到一起**。
> 3. 那么链接时，面对Add函数，链接接器会使用哪个名字去找呢？这里每个编译器都有自己的
函数名修饰规则。
> 4. 由于Windows下vs的修饰规则过于复杂，而Linux下g++的修饰规则简单易懂，下面我们使
用了g++演示了这个修饰后的名字。
> 5. **通过下面我们可以看出gcc的函数修饰后名字不变。而g++的函数修饰后变成【_Z+函数长度
+函数名+类型首字母】。**
> - **采用C语言编译器编译后结果**
> 
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697416667428-8721c3bb-2104-49fc-848d-ae36c82182d3.png#averageHue=%23f8f7f6&clientId=u72d7ea57-5819-4&from=paste&height=499&id=uaa83f145&originHeight=749&originWidth=1480&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=79791&status=done&style=none&taskId=uba0a90d1-9920-4db5-875b-3f363e1ca62&title=&width=986.6666666666666)
> 结论：在linux下，采用gcc编译完成后，函数名字的修饰没有发生改变。
> - **采用C++编译器编译后结果**
> 
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697416719529-444a6a28-529c-454a-b010-fd18adabbde2.png#averageHue=%23f8f7f6&clientId=u72d7ea57-5819-4&from=paste&height=493&id=u5ce4ecb6&originHeight=739&originWidth=1492&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=82338&status=done&style=none&taskId=u596defed-e09e-4980-98b8-b43b1e47204&title=&width=994.6666666666666)
> 结论：在linux下，采用g++编译完成后，函数名字的修饰发生改变，编译器将函数参
> 数类型信息添加到修改后的名字中。
> - **Windows下名字修饰规则**
> 
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697416779929-54ab8e5b-7002-4d12-a38c-faac26c3f14b.png#averageHue=%23e0dede&clientId=u72d7ea57-5819-4&from=paste&height=341&id=ud8619bb3&originHeight=512&originWidth=900&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=314263&status=done&style=none&taskId=ub913fd5c-aa7a-45d6-91df-19769f0c946&title=&width=600)
> 对比Linux会发现，windows下vs编译器对函数名字修饰规则相对复杂难懂，但道理都
> 是类似的，我们就不做细致的研究了。
> **【扩展学习：C/C++函数调用约定和名字修饰规则--有兴趣好奇的同学可以看看，里面**
> **有对vs下函数名修饰规则讲解】**
> [**C/C++ 函数调用约定**](https://blog.csdn.net/lioncolumn/article/details/10376891)

# 引用
## 引用的概念
> 引用不是新定义一个变量，而是给已存在变量取了一个别名，编译器不会为引用变量开辟内存空间，它和它引用的变量共用同一块内存空间。

**使用方法：类型& 引用变量名(对象名) = 引用实体；**
```cpp
void TestRef()
{
    int a = 10;
    int& ra = a;//<====定义引用类型
    
    printf("%p\n", &a);
    printf("%p\n", &ra);
}
```
引用类型必须和引用实体是同种类型的
## 引用特性
> 1. 引用在**定义时必须初始化**
> 2. 一个对象可以有多个别名，可以别名继续取别名
> 3. 引用一旦引用一个实体，再不能引用其他实体

## 常饮用
```cpp
void TestConstRef()
{
    // 权限不能放大
    const int a = 10;
    //int& ra = a; // 该语句编译时会出错，a为常量
    
	// 权限可以缩小
	int c = 20;
	const int& d = c;
	const int& e = 10;
    
	int i = 1;
	//double& rj = i;// 该语句编译时会出错
	//过程中发生类型转换，产生了临时变量，临时变量具有常性
	const double& rj = i;
}
```
## 使用场景

1. 做参数
```cpp
void Swap(int& left, int& right)
{
    int temp = left;
    left = right;
    right = temp;
}
```

2. 做返回值
```cpp
int& Count()
{
    static int n = 0;
    n++;
    // ...
    return n;
}
```
**如果函数返回时，出了函数作用域，如果返回对象还在(还没还给系统)，则可以使用引用返回，如果已经还给系统了，则必须使用传值返回。**
```cpp
//出了函数作用域，返回对象就销毁了，不能用引用返回，否则结果是不确定
int& Add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	cout << ret << endl;//3或者随机值

	Add(3, 4);

	cout << ret << endl;//7或者随机值
	return 0;
}
```
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697419560299-3f2f0501-9568-4030-9aa7-aae9b3dce858.png#averageHue=%23faf3f3&clientId=u72d7ea57-5819-4&from=paste&height=494&id=ubc81a2cf&originHeight=741&originWidth=1640&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=191372&status=done&style=none&taskId=uf9eab558-9d3e-4e36-9b9e-7e62e75da14&title=&width=1093.3333333333333)
## 传值、传引用效率比较
> 以值作为参数或者返回值类型，在传参和返回期间，函数不会直接传递实参或者将变量本身直接返回，而是传递实参或者返回变量的一份临时的拷贝，因此用值作为参数或者返回值类型，效率是非常低下的，尤其是当参数或者返回值类型非常大时，效率就更低。

```cpp
#include <time.h>
struct A { int a[10000]; };

void TestFunc1(A aa) {}

void TestFunc2(A& aa) {}

void TestRefAndValue()
{
	A a;
	// 以值作为函数参数
	size_t begin1 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc1(a);
	size_t end1 = clock();

	// 以引用作为函数参数
	size_t begin2 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc2(a);
	size_t end2 = clock();

	// 分别计算两个函数运行结束后的时间
	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;//7
	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;//0
}


A a;
// 值返回
A TestFunc1() { return a; }
// 引用返回
A& TestFunc2() { return a; }

void TestReturnByRefOrValue()
{
	// 以值作为函数的返回值类型
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();

	// 以引用作为函数的返回值类型
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();

	// 计算两个函数运算完成之后的时间
	cout << "TestFunc1 time:" << end1 - begin1 << endl;//154
	cout << "TestFunc2 time:" << end2 - begin2 << endl;//0
}

int main()
{
	TestRefAndValue();
	TestReturnByRefOrValue();

	return 0;
}
```
通过上述代码的比较，发现**传指针（引用）在作为传参以及返回值类型上效率比传值高很多。**
## 引用和指针的区别
> 在**语法概念**上引用就是一个别名，没有独立空间，和其引用实体共用同一块空间。

```cpp
int main()
{
    int a = 10;
    int& ra = a;
    cout<<"&a = "<<&a<<endl;//0000009F480FF564
    cout<<"&ra = "<<&ra<<endl;//一样
    return 0;
}
```
> 在底层实现上实际是有空间的，因为**引用是按照指针方式来实现的**。

```cpp
int main()
{
    int a = 10;
    int& ra = a;
    ra = 20;
    int* pa = &a;
    *pa = 20;
    return 0;
}
```
引用和指针的汇编代码对比
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697441194647-27b8457e-7a46-4bc4-bd0d-ab3f34775337.png#averageHue=%23faf9f8&clientId=u72d7ea57-5819-4&from=paste&height=215&id=u6b2dfc78&originHeight=298&originWidth=824&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=16563&status=done&style=none&taskId=u1d761e78-2ee2-4f8c-a43e-6b0acdd72b8&title=&width=595.3333740234375)

- 引用底层是用汇编实现的
> 引用和指针的不同点:
> 1. 引用概念上定义一个变量的别名，指针存储一个变量地址。
> 2. **引用**在定义时**必须初始化**，指针没有要求
> 3. **引用**在初始化时引用一个实体后，就**不能再引用其他实体**，而指针可以在任何时候指向任何
一个同类型实体
> 4. **没有NULL引用**，但有NULL指针
> 5. **在sizeof中含义不同**：**引用结果为引用类型的大小**，但**指针**始终是**地址空间所占字节个数**(32
位平台下占4个字节)
> 6. 引用自加即引用的实体增加1，指针自加即指针向后偏移一个类型的大小
> 7. **有多级指针，但是没有多级引用**
> 8. 访问实体方式不同，**指针需要显式解引用，引用编译器自己处理**
> 9. **引用比指针使用起来相对更安全**

# 内联函数
## 概念
> 以**inline修饰的函数**叫做内联函数，**编译时**C++编译器会在**调用内联函数的地方展开**，没有函数调
> 用建立栈帧的开销，内联函数提升程序运行的效率。

![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697441386518-34dd2dd7-e278-484b-92b5-74472a673ecf.png#averageHue=%23fbf9f8&clientId=u72d7ea57-5819-4&from=paste&height=218&id=u144c392d&originHeight=327&originWidth=826&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=22612&status=done&style=none&taskId=u9672fdef-807e-4e16-bf7c-1d81b06e2d1&title=&width=550.6666666666666)
如果在上述函数前增加inline关键字将其改成内联函数，在编译期间编译器会用函数体替换函数的
调用。
> 查看方式：
> 1. 在release模式下，查看编译器生成的汇编代码中是否存在call Add
> 2. 在debug模式下，需要对编译器进行设置，否则不会展开(因为debug模式下，编译器默认不
会对代码进行优化，以下给出vs2013的设置方式)

![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697441431548-14faf9e6-354c-4141-9e2e-bf306021b6d7.png#averageHue=%23f4f2f0&clientId=u72d7ea57-5819-4&from=paste&height=335&id=u9232471b&originHeight=503&originWidth=915&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=70454&status=done&style=none&taskId=u484eb386-99e7-44b7-b021-b0d8c28dd2e&title=&width=610)
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697441433677-61125fb7-77c3-42da-afb0-6e84d9101cdc.png#averageHue=%23fbf9f9&clientId=u72d7ea57-5819-4&from=paste&height=215&id=u66d01263&originHeight=322&originWidth=809&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=19829&status=done&style=none&taskId=ue459b648-d7a7-43b7-bb03-13ab3d0f131&title=&width=539.3333333333334)

- 内联函数与宏相比：
> 宏的缺点：代码可读性差，可维护性差（针对宏函数）；没有类型的安全检查；不方便调试；
> 宏的优点：代码的可维护性高，增强复用性（针对宏常量）；提高效率，减少栈帧建立（针对宏函数）

inline解决了宏函数的全部缺点，也具备宏函数的优点。
其实在C++中，有很多设计都可以替代宏：
enum const inline 替代宏
enum const 替代宏常量 
inline 替代宏函数
## 特性
> 1. inline是一种**以空间换时间**的做法，如果编译器将函数当成内联函数处理，在**编译阶段，会
用函数体替换函数调用**，缺陷：可能会使目标文件变大，优势：少了调用开销，提高程序运
行效率。
> 2. **inline对于编译器而言只是一个建议**，**不同编译器关于inline实现机制可能不同**，一般建
议：将**函数规模较小**(即函数不是很长，具体没有准确的说法，取决于编译器内部实现)、**不
是递归、且频繁调用的函数**采用inline修饰，否则编译器会忽略inline特性。下图为
《C++prime》第五版关于inline的建议：
> 
![image.png](https://cdn.nlark.com/yuque/0/2023/png/35478967/1697441527234-80bbcc04-21c3-4efb-b675-5f6b78958e9a.png#averageHue=%23e4e4e4&clientId=u72d7ea57-5819-4&from=paste&height=149&id=uca7f2216&originHeight=223&originWidth=1119&originalType=binary&ratio=1.5&rotation=0&showTitle=false&size=180656&status=done&style=none&taskId=u274ca241-a272-4480-b978-f74823f3ebc&title=&width=746)
> 3. inline不建议声明和定义分离，分离会导致链接错误。因为在定义中inline被展开，就没有函数地址了，链接时inline函数的地址没有在符号表中，就会找不到。
> 4. 可以在同一个项目的不同源文件内定义函数名相同但实现不同的inline函数，inline函数会在调用的地方展开，所以符号表中不会有inline函数的符号名，不存在链接冲突。

# auto关键字(c++11)
```cpp
// F.h
#include <iostream>
using namespace std;
inline void f(int i);

// F.cpp
#include "F.h"
void f(int i)
{
	cout << i << endl;
}

// main.cpp
#include "F.h"
int main()
{
    f(10);
    return 0;
}

// 链接错误：main.obj : error LNK2019: 无法解析的外部符号 "void __cdeclf(int)" (?f@@YAXH@Z)
//该符号在函数 _main 中被引用
```
##  类型别名思考  
随着程序越来越复杂，程序中用到的类型也越来越复杂，经常体现在： 
1. 类型难于拼写 2. 含义不明确导致容易出错  
```cpp
#include <string>
#include <map>
int main()
{
	std::map<std::string, std::string> m{ { "apple", "苹果" }, { "orange", "橙子" }, {"pear","梨"} };
    std::map<std::string, std::string>::iterator it = m.begin();
    while (it != m.end())
    {
    	//....
    }
    	return 0;
}
```
std::map::iterator 是一个类型，但是该类型太长了，容易写错。 
使用typedef给类型取别名确实可以简化代码，要求在声明变量的时候清楚地知道表达式的类型，因此C++11给auto赋予了新的含义。  
## auto含义
在早期C/C++中auto的含义是：**使用auto修饰的变量，是具有自动存储器的局部变量。** C++11中，标准委员会赋予了auto全新的含义即: auto不再是一个存储类型指示符，而是作为一个**新的类型指示符来指示编译器**，**auto声明的变量必须由编译器在编译时期推导而得。**（简单来说就是自动类型推导）
```cpp
 int TestAuto()
 {
 	return 10;
 }

 int main()
 {
     int a = 10;
     auto b = a;
     auto c = 'a';
     auto d = TestAuto();
     
     cout << typeid(b).name() << endl;//int
     cout << typeid(c).name() << endl;//char
     cout << typeid(d).name() << endl;//int
     
     //auto e; 无法通过编译，使用auto定义变量时必须对其进行初始化
     return 0;
 }
```
注意：

- typeid(变量).name() 可以得出变量的类型
- **使用auto定义变量时必须对其进行初始化，在编译阶段编译器需要根据初始化表达式来推导auto的实际类型。因此auto并非是一种“类型”的声明，而是一个类型声明时的“占位符”，编译器在编译期会将auto替换为变量实际的类型。  **
- auto的实际使用场景：自动推导（类型较长）；范围for循环
## auto的使用细则

1. auto与指针和引用结合使用

**用auto声明指针类型时，用auto和auto*没有任何区别，但用auto声明引用类型时则必须加&  **
```cpp
int main()
 {
     int x = 10;
     auto a = &x;
     auto* b = &x;
     auto& c = x;
     
     cout << typeid(a).name() << endl;//int * __ptr64
     cout << typeid(b).name() << endl;//int * __ptr64
     cout << typeid(c).name() << endl;//int
 }
```

2.  在同一行定义多个变量 

当在同一行声明多个变量时，这些变量必须是相同的类型，否则编译器将会报错，因为编译 器实际只对第一个类型进行推导，然后用推导出来的类型定义其他变量。  
```cpp
void TestAuto()
{
    auto a = 1, b = 2; 
    auto c = 3, d = 4.0;  // 该行代码会编译失败，因为c和d的初始化表达式类型不同
}
```
## auto不能推导的场景

1. **auto不能做为函数的参数**
```cpp
void TestAuto(auto a)
 {
	//...
 }
```

2. ** auto不能直接用来声明数组  **
3. 为了避免与C++98中的auto发生混淆，C++11只保留了auto作为类型指示符的用法
4. auto在实际中最常见的优势用法就是跟以后会讲到的C++11提供的新式for循环，还有lambda表达式等进行配合使用
# 基于范围的for循环(c++11)
## 范围for的语法
>  在C++98中如果要遍历一个数组，可以按照以下方式进行  

```cpp
void TestFor()
 {
     int array[] = { 1, 2, 3, 4, 5 };
     for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
     	array[i] *= 2;
     
    for (int* p = array; p < array + sizeof(array)/ sizeof(array[0]); ++p)
 		cout << *p << endl;
 }
```
 对于一个**有范围的集合**而言，由程序员来说明循环的范围是多余的，有时候还会容易犯错误。因 此C++11中引入了基于范围的for循环。**for循环后的括号由冒号“ ：”分为两部分：第一部分是范 围内用于迭代的变量，第二部分则表示被迭代的范围。**  
```cpp
void TestFor()
 {
     int array[] = { 1, 2, 3, 4, 5 };
     for(auto& e : array)
    	e *= 2;
     
     for(auto e : array)
     	cout << e << " ";
     
     return;
 }
```
**注意：与普通循环类似，可以用continue来结束本次循环，也可以用break来跳出整个循环**
## 范围for的使用条件

1. ** for循环迭代的范围必须是确定的  **

**对于数组而言，就是数组中第一个元素和最后一个元素的范围；**
对于类而言，应该提供 begin和end的方法，begin和end就是for循环迭代的范围。 
注意：以下代码就有问题，因为for的范围不确定  
```cpp
void TestFor()
 {
     int array[] = { 1, 2, 3, 4, 5 };
     for(auto& e : array)
     	e *= 2;
     
     for(auto e : array)
     	cout << e << " ";
     
     return 0;
 }
```

2. **迭代的对象要实现++和==的操作**。(关于迭代器这个问题，以后会讲，现在提一下，没办法
讲清楚，现在大家了解一下就可以了)
# 指针空值nullptr(c++11)
## C++98中的指针空值  
在良好的C/C++编程习惯中，声明一个变量时最好给该变量一个合适的初始值，否则可能会出现 不可预料的错误，比如未初始化的指针。如果一个指针没有合法的指向，我们基本都是按照如下 方式对其进行初始化：  
```cpp
void TestPtr()
 {
     int* p1 = NULL;
     int* p2 = 0;
     // ……
 }
```
 NULL实际是一个宏，在传统的C头文件(stddef.h)中，可以看到如下代码：  
```cpp
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif
```
可以看到，**NULL可能被定义为字面常量0，或者被定义为无类型指针(void*)的常量**。不论采取何 种定义，在使用空值的指针时，都不可避免的会遇到一些麻烦，比如：  
```cpp
void f(int)
 {
 	cout<<"f(int)"<<endl;
 }

 void f(int*)
 {
 	cout<<"f(int*)"<<endl;
 }
 int main()
 {
     f(0);
     f(NULL);		//f(int)
     f((int*)NULL); //f(int)
     return 0;		//f(int*)
 }
```
在C++98中，字面常量0既可以是一个整形数字，也可以是无类型的指针(void*)常量，但是编译器默认情况下将其看成是一个整形常量，如果要将其按照指针方式来使用，必须对其进行强转(void *)0
**注意：**
> 1. **在使用nullptr表示指针空值时，不需要包含头文件，因为nullptr是C++11作为新关键字引入的。**
> 2. **在C++11中，sizeof(nullptr) 与 sizeof((void*)0)所占的字节数相同。**
> 3. **为了提高代码的健壮性，在后续表示指针空值时建议最好使用nullptr。**



















