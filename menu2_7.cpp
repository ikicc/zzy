//menu2_7.cpp
#include <stdio.h>
#include <iostream>
void m2_7_1(void) {

	system("cls");
	printf("\n\n  ָ��Ķ�����ʹ��\n\n  ");
	printf("ָ��Ķ�����ʽ��\n");
	printf("����˵���� *ָ�������;\n");
	printf("���磺int *p;\n");
	printf("ָ�������ֵ��һ����ַ��ָ����������ͱ�������ָ��ı�������һ�¡�\n");
	printf("ָ�������ֵ�������κ�һ�������ĵ�ַ��Ҳ������0��NULL��\n");
	printf("ָ���ʹ�ã�\n");
	printf("1.�������ĵ�ַ��ֵ��ָ�����\n");
	printf("<ָ�������>=&<��ͨ������>\n");
	printf("���磺p=&a;\n");
	printf("2.ʹ��ָ�����������ָ��ı���\n");
	printf("ʹ��ָ�����������ָ��ı�������Ҫʹ�ü�ӷ��������*��\n");
	printf("���磺int i��*p=&i;\n");
	printf("3.ָ�������ֵ������0��NULL\n");






	getchar();
	rewind(stdin);
}

void m2_7_2(void) {

	system("cls");
	printf("\n\n  ָ�������\n\n  ");
	printf("1.ָ�����������\n");
	printf("ָ��������Խ��мӼ����㣬���ǲ��ܽ��г˳����㡣\n");
	printf("ָ������Ӽ�һ�������������ָ�����ָ��ĵ�ַ���ϻ��ȥ��������ָ�������������ռ���ֽ�����\n");
	printf("���磺int *p;\n");
	printf("p=p+1; //p��ֵ����4\n");
	printf("p=p-1; //p��ֵ��ȥ4\n");
	printf("2.ָ��Ĺ�ϵ����\n");
	printf("ָ��������Խ��й�ϵ���㣬����ֻ�ܽ���==��!=���㡣\n");
	printf("���磺int *p1,*p2;\n");
	printf("int a,*p1, *p2;");
	printf("p1=&a;\n");
    printf("����ʽp1==p2��ֵΪ0\n");
	printf("ֻ��p1��p2ָ��ͬһԪ��ʱ�����ʽp1==p2��ֵΪ1\n");
	printf("3.ָ��������Լ�����\n");
	printf("ָ��������Խ��������Լ����㣬����ֻ�ܽ���++��--���㡣\n");
	printf("���磺int *p;\n");
	printf("p++; //p��ֵ����4\n");
	printf("p--; //p��ֵ��ȥ4\n");







	getchar();
	rewind(stdin);
}

void m2_7_3(void) {

	system("cls");
	printf("\n\n  ָ��������\n\n  ");
	printf("1.ָ����һά����\n");
	printf("ָ���������ָ��һά���飬ָ�����ָ��һά����ʱ��ָ����������ͱ���������Ԫ�ص�����һ�¡�\n");
	printf("���磺int a[10],*p;\n");
	printf("p=a; //pָ������a����Ԫ��\n");
	printf("2.ָ�����ά����\n");
	printf("ָ���������ָ���ά���飬ָ�����ָ���ά����ʱ��ָ����������ͱ���������Ԫ�ص�����һ�¡�\n");
	printf("���磺int a[10][10],*p;\n");
	printf("p=a; //pָ������a����Ԫ��\n");
	printf("3.ָ�����ά����\n");
	printf("ָ���������ָ���ά���飬ָ�����ָ���ά����ʱ��ָ����������ͱ���������Ԫ�ص�����һ�¡�\n");
	printf("���磺int a[10][10][10],*p;\n");
	printf("p=a; //pָ������a����Ԫ��\n");








	getchar();
	rewind(stdin);
}

void m2_7_4(void) {

	system("cls");
	printf("\n\n  ָ���뺯��\n\n  ");
	printf("1.ָ���뺯���Ĺ�ϵ\n");
	printf("ָ���������ָ������ָ�����ָ����ʱ��ָ����������ͱ����뺯���ķ���ֵ����һ�¡�\n");
	printf("���磺int (*p)(int,int);\n");
	printf("2.ָ���뺯����ʹ��\n");
	printf("ʹ��ָ��������ú�������Ҫʹ�ü�ӷ��������*��\n");
	printf("���磺int (*p)(int,int);\n");
	printf("p=max;\n");
	printf("max��һ����������max�����ķ���ֵ������int��max�����Ĳ���������int���͵ı�����\n");
	printf("3.ָ���뺯���ıȽ�\n");
	printf("ָ��������Խ��й�ϵ���㣬����ֻ�ܽ���==��!=���㡣\n");	
	printf("���磺int (*p1)(int,int),(*p2)(int,int);\n");
	printf("int max(int,int);\n");
	printf("p1=max;\n");
	printf("p2=max;\n");
	printf("����ʽp1==p2��ֵΪ1\n");
	printf("ֻ��p1��p2ָ��ͬһ����ʱ�����ʽp1==p2��ֵΪ1\n");


	getchar();
	rewind(stdin);
}

