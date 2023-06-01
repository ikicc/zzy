//menu2_4.cpp
#include <stdio.h>
#include <iostream>
void m2_4_1(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  for语句   \n\n  ");
	printf("for(表达式1；表达式2；表达式3)\n");
	printf("  语句\n");
	printf("表达式1：初始化表达式\n");
	printf("表达式2：循环条件表达式\n");
	printf("表达式3：循环后的增量表达式\n");
	printf("\n\n  ");
	getchar();
}

void m2_4_2(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  while语句   \n\n  ");
	printf("while(条件表达式)\n");
	printf(" {\n");
	printf("   循环语句\n");
	printf(" 循环变量表达式\n");
	printf(" }\n");
	printf("\n\n  ");
	getchar();
}

void m2_4_3(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  do-while语句   \n\n  ");
	printf("do\n");
	printf(" {\n");
	printf("   循环语句\n");
	printf(" 循环变量表达式\n");
	printf(" }\n");
	printf("while(条件表达式)\n");
	printf("\n\n  ");
	getchar();
}

void m2_4_4(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  用于循环中的break语句和continue语句   \n\n  ");
	printf("break语句：\n");
	printf("一般形式为：break；\n");
	printf("break语句用于强行退出循环，不执行循环体中余下的语句，而转向执行循环体后面的语句。\n");
	printf("continue语句：\n");
	printf("一般形式为：continue；\n");
	printf("continue语句用于强行终止本次循环，但不会退出循环，而是继续执行循环体后面的语句。\n");
	printf("\n\n  ");
	getchar();
}

void m2_4_5(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  goto语句   \n\n  ");
	printf("一般形式为：goto 语句标号；\n");
	printf("goto语句用于无条件转向执行语句标号处的语句。\n");
	printf("\n\n  ");
	getchar();
}
