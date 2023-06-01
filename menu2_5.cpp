//menu2_5.cpp
#include <stdio.h>
#include <iostream>
void m2_5_1(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的定义   \n\n  ");
	printf("函数的定义：\n");
	printf("自定义函数的形式为：\n");
	printf("[存储类型符] [返回值类型] 函数名[形式说明表]\n");
	printf("{\n");
	printf("  函数语句体\n");
	printf("}\n");
	printf("\n");
	printf("函数的返回语句有两种形式：有返回值类型和无返回值\n");
	printf("有返回值类型的函数，其返回语句形式为：return 表达式；\n");
	printf("无返回值类型的函数，其返回语句形式为：return；\n");
	printf("\n\n  ");
	getchar();
}

void m2_5_2(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的声明和调用   \n\n  ");
	printf("函数的声明：\n");
	printf("函数的声明形式为：\n");
	printf("[存储类型符] [返回值类型] 函数名[形式说明表]\n");
	printf("\n");
	printf("函数的调用：\n");
	printf("函数的调用形式为：有返回值和无返回值\n");
	printf("有返回值类型的函数，其调用形式为：\n");
	printf("变量名=函数名([实参表])；\n");
	printf("无返回值类型的函数，其调用形式为：\n");
	printf("函数名([实参表])；\n");



	printf("\n\n  ");
	getchar();
}

void m2_5_3(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的传值方式   \n\n  ");
	printf("函数的传值方式：\n");
	printf("函数的传值方式有两种：值传递和地址传递\n");
	printf("值传递：\n");
	printf("值传递是指在调用函数时，将实参的值传递给形参，此时形参和实参是两个不同的变量，它们在内存中的存储单元是不同的。\n");
	printf("地址传递：\n");
	printf("地址传递是指在调用函数时，将实参的地址传递给形参，此时形参和实参是同一个变量，它们在内存中的存储单元是同一个。\n");
	printf("\n\n  ");
	getchar();
}

void m2_5_4(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的递归调用   \n\n  ");
	printf("函数的递归调用：\n");
	printf("函数的递归调用是指在函数的定义中，调用了函数本身。\n");
	printf("函数的递归调用分为两种：直接递归调用和间接递归调用。\n");
	printf("直接递归调用：\n");
	printf("直接递归调用是指在函数的定义中，调用了函数本身。\n");
	printf("间接递归调用：\n");
	printf("间接递归调用是指在函数的定义中，调用了其他函数，而这些函数又调用了函数本身。\n");
	printf("\n\n  ");
	getchar();
}

void m2_5_5(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的预处理   \n\n  ");
	printf("函数的预处理：\n");
	printf("函数的预处理是指在函数的定义之前，先对函数进行预处理。\n");
	printf("函数的预处理分为两种：宏定义和函数声明。\n");
	printf("宏定义：\n");
	printf("宏定义是指用#define命令对函数进行预处理。\n");
	printf("函数声明：\n");
	printf("函数声明是指用函数原型对函数进行预处理。\n");
	printf("\n\n  ");
	getchar();
}

void m2_5_6(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  函数的结构型变量   \n\n  ");
	printf("函数的结构型变量：\n");
    printf("1.函数的形参和实参为结构体\n");
	printf("2.函数的返回值为结构体\n");
	printf("3.函数的局部变量为结构体\n");
	printf("4.函数的形参和实参为结构体指针\n");
	printf("5.函数的返回值为结构体指针\n");
	printf("6.函数的局部变量为结构体指针\n");


	printf("\n\n  ");
	getchar();
}