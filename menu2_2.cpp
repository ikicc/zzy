//menu2_2.cpp
#include <stdio.h>
#include <iostream>
void m2_2_1(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C格式符与格式串 \n\n  ");
	printf("%%o——将整型数据int以8进制输出\n");
	printf(" %%d——将整型数据int以10进制输出\n");
	printf(" %%x——将整型数据int以16进制输出 \n");
	printf(" %%f——单精度浮点型数据  float  的格式符。 \n");
	printf(" %%lf——双精度浮点型数据  double  的格式符 \n");
	printf(" %%e——将浮点型数据用科学计数法表示 \n");
	printf(" %%c——字符型数据  char  的格式符 \n");
	printf("  %%s——字符串型数据\n");
	printf("  %%p ——将数据的地址输出\n");
	printf(" %%2d——保证每个数据站2个空格的大小，不足则在前面补一个空格 \n");
	printf("%%-2d——保证每个数据站2个空格的大小，不足则在后面补一个空格\n");
	printf("%%.2f——保留小数点后两位\n");
	printf("");


	getchar();

}
void m2_2_2(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C键盘输入scanf() \n\n  ");
	printf("%%c读取一个单一的字符\n");
	printf("%%hd、%%d、%%ld读取一个十进制整数，并分别赋值给 short、int、long 类型 \n");
	printf(" %%ho、%%o、%%lo读取一个八进制整数（可带前缀也可不带），并分别赋值给 short、int、long 类型\n");
	printf(" %%hx、%%x、%%lx读取一个十六进制整数（可带前缀也可不带），并分别赋值给 short、int、long 类型\n");
	printf(" %%hu、%%u、%%lu读取一个无符号整数，并分别赋值给 unsigned short、unsigned int、unsigned long 类型\n");
	printf(" %%f、%%lf读取一个十进制形式的小数，并分别赋值给 float、double 类型\n");
	printf(" %%e、%%le读取一个指数形式的小数，并分别赋值给 float、double 类型\n");
	printf(" %%g、%%lg既可以读取一个十进制形式的小数，也可以读取一个指数形式的小数，并分别赋值给 float、double 类型\n");
	printf(" %%s读取一个字符串（以空白符为结束）\n");
	printf("");


	getchar();

}
void m2_2_3(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C键盘输出printf() \n\n  ");
	printf("输出整数：%%d\n");
	printf("输出无符号数：%%u\n");
	printf("输出十六进制数：%%x\n");
	printf("输出指针指向的地址：%%p\n");
	printf("输出字符串：%%s\n");
	printf("输出单个字符：%%c\n");
	printf("输出二进制格式\n");
	printf("输出二进制无符号格式\n");
	printf("");


	getchar();

}
void m2_2_4(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C表达式与语句 \n\n  ");
	printf("在表达式的尾部加上一个英文状态下的分号（;），就构成了表达式语句。比如，在赋值表达式的尾部加上一个分号（;），就构成了赋值语句。\n");
	printf("算术表达式 = 算术运算符 + 运算对象\n");
	printf("赋值表达式 = 赋值运算符 + 运算对象\n");
	printf("复合赋值表达式 = 复合赋值运算符 + 运算对象\n");
	printf("自增、自减表达式 = 自增、自减运算符 + 运算对象\n");
	printf("逗号表达式 = 逗号运算符 + 运算对象\n");
	printf("关系表达式 = 关系运算符 + 运算对象\n");
	printf("逻辑表达式 = 逻辑运算符 + 运算对象\n");
	printf("条件表达式 = 条件运算符 + 运算对象\n");
	printf("复合语句也称为”语句块“，用一对花括号作为开头和结尾的标志。一个复合语句在语法上视为一条语句。\n");
	printf("只有一个分号的语句，称为空语句。执行程序时不产生任何动作。\n");
	printf("");


	getchar();

}