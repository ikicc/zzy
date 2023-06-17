//menu2_7.cpp
#include <stdio.h>
#include <iostream>
void m2_7_1(void) {

	system("cls");
	printf("\n\n  指针的定义与使用\n\n  ");
	printf("指针的定义形式：\n");
	printf("类型说明符 *指针变量名;\n");
	printf("例如：int *p;\n");
	printf("指针变量的值是一个地址，指针变量的类型必须与其指向的变量类型一致。\n");
	printf("指针变量的值可以是任何一个变量的地址，也可以是0或NULL。\n");
	printf("指针的使用：\n");
	printf("1.将变量的地址赋值给指针变量\n");
	printf("<指针变量名>=&<普通变量名>\n");
	printf("例如：p=&a;\n");
	printf("2.使用指针变量访问其指向的变量\n");
	printf("使用指针变量访问其指向的变量，需要使用间接访问运算符*。\n");
	printf("例如：int i，*p=&i;\n");
	printf("3.指针变量的值可以是0或NULL\n");






	getchar();
	rewind(stdin);
}

void m2_7_2(void) {

	system("cls");
	printf("\n\n  指针的运算\n\n  ");
	printf("1.指针的算术运算\n");
	printf("指针变量可以进行加减运算，但是不能进行乘除运算。\n");
	printf("指针变量加减一个整数，结果是指针变量指向的地址加上或减去整数乘以指针变量的类型所占的字节数。\n");
	printf("例如：int *p;\n");
	printf("p=p+1; //p的值加上4\n");
	printf("p=p-1; //p的值减去4\n");
	printf("2.指针的关系运算\n");
	printf("指针变量可以进行关系运算，但是只能进行==和!=运算。\n");
	printf("例如：int *p1,*p2;\n");
	printf("int a,*p1, *p2;");
	printf("p1=&a;\n");
    printf("则表达式p1==p2的值为0\n");
	printf("只有p1，p2指向同一元素时，表达式p1==p2的值为1\n");
	printf("3.指针的自增自减运算\n");
	printf("指针变量可以进行自增自减运算，但是只能进行++和--运算。\n");
	printf("例如：int *p;\n");
	printf("p++; //p的值加上4\n");
	printf("p--; //p的值减去4\n");







	getchar();
	rewind(stdin);
}

void m2_7_3(void) {

	system("cls");
	printf("\n\n  指针与数组\n\n  ");
	printf("1.指针与一维数组\n");
	printf("指针变量可以指向一维数组，指针变量指向一维数组时，指针变量的类型必须与数组元素的类型一致。\n");
	printf("例如：int a[10],*p;\n");
	printf("p=a; //p指向数组a的首元素\n");
	printf("2.指针与二维数组\n");
	printf("指针变量可以指向二维数组，指针变量指向二维数组时，指针变量的类型必须与数组元素的类型一致。\n");
	printf("例如：int a[10][10],*p;\n");
	printf("p=a; //p指向数组a的首元素\n");
	printf("3.指针与多维数组\n");
	printf("指针变量可以指向多维数组，指针变量指向多维数组时，指针变量的类型必须与数组元素的类型一致。\n");
	printf("例如：int a[10][10][10],*p;\n");
	printf("p=a; //p指向数组a的首元素\n");








	getchar();
	rewind(stdin);
}

void m2_7_4(void) {

	system("cls");
	printf("\n\n  指针与函数\n\n  ");
	printf("1.指针与函数的关系\n");
	printf("指针变量可以指向函数，指针变量指向函数时，指针变量的类型必须与函数的返回值类型一致。\n");
	printf("例如：int (*p)(int,int);\n");
	printf("2.指针与函数的使用\n");
	printf("使用指针变量调用函数，需要使用间接访问运算符*。\n");
	printf("例如：int (*p)(int,int);\n");
	printf("p=max;\n");
	printf("max是一个函数名，max函数的返回值类型是int，max函数的参数是两个int类型的变量。\n");
	printf("3.指针与函数的比较\n");
	printf("指针变量可以进行关系运算，但是只能进行==和!=运算。\n");	
	printf("例如：int (*p1)(int,int),(*p2)(int,int);\n");
	printf("int max(int,int);\n");
	printf("p1=max;\n");
	printf("p2=max;\n");
	printf("则表达式p1==p2的值为1\n");
	printf("只有p1，p2指向同一函数时，表达式p1==p2的值为1\n");


	getchar();
	rewind(stdin);
}

