//menu2_3.cpp
#include <stdio.h>
#include <iostream>
void m2_3_1(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  if分支结构   \n\n  ");
	printf("单分支：\n");
	printf("if(条件表达式)\n");
	printf("  语句\n");
	printf("双分支：\n");
	printf("if(条件表达式)\n");
	printf("  语句1\n");
	printf("else\n");
	printf("  语句2\n");
	printf("多分支：\n");
	printf("if(条件表达式1)\n");
	printf("  语句1\n");
	printf("else if(条件表达式2)\n");
	printf("  语句2\n");
	printf("else if(条件表达式3)\n");
	printf("  语句3\n");
	printf("else\n");
	printf("  语句4\n");
	printf("\n\n  ");
	getchar();
	rewind(stdin);

}

void m2_3_2(void) {

	system("cls");     //调用系统命令，清屏
	printf("\n\n  switch分支结构   \n\n  ");
	printf("switch(表达式)\n");
	printf("{\n");
	printf("  case 常量1：\n");
	printf("    语句1\n");
	printf("    break;\n");
	printf("  case 常量2：\n");
	printf("    语句2\n");
	printf("    break;\n");
	printf("  case 常量3：\n");
	printf("    语句3\n");
	printf("    break;\n");
	printf("  default：\n");
	printf("    语句4\n");
	printf("    break;\n");
	printf("}\n");
	printf("\n\n  ");
	getchar();
	rewind(stdin);
}