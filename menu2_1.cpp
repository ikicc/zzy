//menu2_1.cpp
#include <stdio.h>
#include <iostream>
void m2_1_1(void) {   

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C数据分类 \n\n  ");
	printf("分为 整形 int ,实型 float，字符型 char\n");
	printf("\t  int又分为 short、int、long \n");
	printf(" 每种整形又分为 signed和unsigned \n");
	printf("故整形细分有六种");


	getchar();
	rewind(stdin);
}

void m2_1_2(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C取值范围\n\n  ");	
	printf("signed short int ： %d ~ %d\n", -32768, 32767);
	printf("signed int ： %d ~ %d：\n", -32768, 32767);
	printf("signed long int ： %d ~ %d\n", -2147483648, 2147483647);
	printf("unsigned short int ： %d ~ %d\n", 0, 65535);
	printf("unsigned int ： %d ~ %u\n", 0, 65535);
	printf("unsigned long int ： %d ~ %u\n", 0, 4294967295);
	printf("float ： %e ~ %e\n", 1.175494351e-38, 3.402823466e+38);
	printf("double ： %e ~ %e\n", 2.2250738585072014e-308, 1.7976931348623158e+308);
	printf("long double ： %e ~ %e\n", 2.2250738585072014e-308, 1.7976931348623158e+308);
	printf("char ： %d ~ %d\n", -128, 127);
	printf("unsigned char ： %d ~ %d\n", 0, 255);
	printf("signed char ： %d ~ %d\n", -128, 127);




	getchar();
	rewind(stdin);
}
void m2_1_3(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C储存字节\n\n  ");
    printf("char：字符数据类型——1字节\n");
	printf("short：短整型数据类型——2字节\n");
	printf("int：整型数据类型——4字节\n");
	printf("long：长整型数据类型——4字节\n");
	printf("float：单精度浮点型数据类型——4字节\n");
	printf("double：双精度浮点型数据类型——8字节\n");
	printf("long double：长双精度浮点型数据类型——8字节\n");
	printf("unsigned：无符号数据类型——1字节\n");
	printf("signed：有符号数据类型——1字节\n");
	printf("void：空类型——1字节\n");


	getchar();
	rewind(stdin);
}

void m2_1_4(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C算术算符\n\n  ");
	printf("算术运算符：+、-、*、/、%、++、--\n");
	printf("++：自增1\n");
	printf("--：自减1\n");
	printf("+：加法\n");
	printf("-：减法\n");
	printf("*：乘法\n");
	printf("/：除法\n");
	printf("%：取余\n");
	printf("关系运算符：>、<、>=、<=、==、!=\n");
	printf(">：大于\n");
	printf("<：小于\n");
	printf(">=：大于等于\n");
	printf("<=：小于等于\n");
	printf("==：等于\n");
	printf("!=：不等于\n");
	printf("逻辑运算符：！、&&、||\n");
	printf("!：非\n");
	printf("&&：与\n");
	printf("||：或\n");
	printf("位运算符：&、|、^、~、<<、>>\n");
	printf("&：按位与\n");
	printf("|：按位或\n");
	printf("^：按位异或\n");
	printf("~：按位取反\n");
	printf("<<：左移\n");
	printf(">>：右移\n");

	getchar();
	rewind(stdin);
}

void m2_1_5(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C类型转换\n\n  ");	
	printf("类型自动转换：\n");
	printf("1.float型数据自动转换成double型；\n");
	printf("2.char与short型数据自动转换成int型；\n");
	printf("3.int型与double型数据运算，直接将int型转换成double型\n");
	printf("4.int型与unsigned型数据、直接将int型转换成unsigned型；\n");	
	printf("5.当int型与long型数据运算时，直接将int型转换成long型；\n");
	printf("赋值转换：\n");
	printf("1.将整型数据赋给单、双精度变量时，数值不变，但以浮点数形式存储到变量中\n");
	printf("2.将实型数据(包括单、双精度)赋给整型变量时，舍弃实数的小数部分。如x为整型变量，执行“x=4.25”时，取值为x=4。\n");
	printf("3.同类型的短数据赋值给长变量，自动转换是正确的，例如，char和short型数据给int型变量赋值。\n");
	printf("4.同类型的长数据给短变量赋值可能出错。例如，当unsigned int型的值超过了int变量的取值范围，赋值会出错\n");
	printf("例如：unsigned int 变量给int变量赋值出错\n");
	printf("强制转换：\n");
	printf("1.强制转换是指在变量前加上强制转换的类型，将变量转换成指定的类型。\n");
	printf("2.强制转换的格式为：(类型名)表达式\n");
	printf("3.强制转换的优先级高于算术运算符，低于自增、自减运算符。\n");
	printf("4.强制转换的结果是一个值，而不是一个变量。\n");



	getchar();
	rewind(stdin);
}

void m2_1_6(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n    I/O类型控制\n\n  ");
	printf("1.整型：\n");
	printf("%%d：以十进制形式输出带符号整数(正数不输出符号)\n");
	printf("%%o：以八进制形式输出无符号整数(不输出前缀0)\n");
	printf("%%x：以十六进制形式输出无符号整数(不输出前缀0x)\n");
	printf("%%u：以十进制形式输出无符号整数\n");
	printf("2.实型：\n");
	printf("%%f：以小数形式输出单、双精度实数\n");
	printf("%%e：以指数形式输出单、双精度实数\n");
	printf("%%g：以%%f或%%e中较短的输出宽度输出单、双精度实数\n");
	printf("%%c：输出单个字符\n");
	printf("%%s：输出字符串\n");
	printf("%%p：输出指针地址\n");
	printf("%%n：此项不输出，但把已输出字符的数目赋给%n前的指针变量\n");
	printf("%%m.n：m表示输出宽度，n表示小数位数\n");

	getchar();
	rewind(stdin);
}

void m2_1_7(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n printf（）函数\n\n  ");
	printf("1.printf 是C语言标准库函数，定义于头文件 <stdio.h>。\n");
	printf("2.printf函数的功能是：将格式化的数据输出到标准输出设备(屏幕)。\n");
	printf("3.printf函数的格式：\n");
	printf("  printf(输出格式，输出表列);\n");
	printf("4.输出格式：\n");
	printf("  %%：输出一个百分号\n");
	printf("  \\n：换行\n");
	printf("  \\t：制表符\n");
	



	getchar();
	rewind(stdin);
}

void m2_1_8(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n scanf（）函数\n\n  ");
	printf("1.scanf 是C语言标准库函数，定义于头文件 <stdio.h>。\n");
	printf("2.scanf函数的功能是：从标准输入设备(键盘)读取格式化的数据。\n");
	printf("3.scanf函数的格式：\n");
	printf("  scanf(输入格式，输入表列);\n");
	printf("4.输入格式：\n");
	printf("  %%：输入一个百分号\n");
	printf("  \\n：换行\n");
	printf("  \\t：制表符\n");

	getchar();
	rewind(stdin);
}

void m2_1_9(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n 字符I/O\n\n  ");
	printf("1.字符I/O函数：\n");
	printf("  getchar()：从标准输入设备(键盘)读取一个字符。\n");
	printf("  putchar()：向标准输出设备(屏幕)输出一个字符。\n");
	printf("  gets()：从标准输入设备(键盘)读取一个字符串。\n");
	printf("  puts()：向标准输出设备(屏幕)输出一个字符串。\n");
	printf("2.字符I/O函数的格式：\n");
	printf("  getchar()：\n");
	printf("  putchar(字符变量名)：\n");
	printf("  gets(字符串变量名)：\n");
	printf("  puts(字符串变量名)：\n");


	getchar();
	rewind(stdin);
}