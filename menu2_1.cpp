//menu2_1.cpp
#include <stdio.h>
#include <iostream>
void m2_1_1(void) {   

	system("cls");     //����ϵͳ�������
	printf("\n\n    C���ݷ��� \n\n  ");
	printf("��Ϊ ���� int ,ʵ�� float���ַ��� char\n");
	printf("\t  int�ַ�Ϊ short��int��long \n");
	printf(" ÿ�������ַ�Ϊ signed��unsigned \n");
	printf("������ϸ��������");


	getchar();
	rewind(stdin);
}

void m2_1_2(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n    Cȡֵ��Χ\n\n  ");	
	printf("signed short int �� %d ~ %d\n", -32768, 32767);
	printf("signed int �� %d ~ %d��\n", -32768, 32767);
	printf("signed long int �� %d ~ %d\n", -2147483648, 2147483647);
	printf("unsigned short int �� %d ~ %d\n", 0, 65535);
	printf("unsigned int �� %d ~ %u\n", 0, 65535);
	printf("unsigned long int �� %d ~ %u\n", 0, 4294967295);
	printf("float �� %e ~ %e\n", 1.175494351e-38, 3.402823466e+38);
	printf("double �� %e ~ %e\n", 2.2250738585072014e-308, 1.7976931348623158e+308);
	printf("long double �� %e ~ %e\n", 2.2250738585072014e-308, 1.7976931348623158e+308);
	printf("char �� %d ~ %d\n", -128, 127);
	printf("unsigned char �� %d ~ %d\n", 0, 255);
	printf("signed char �� %d ~ %d\n", -128, 127);




	getchar();
	rewind(stdin);
}
void m2_1_3(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n    C�����ֽ�\n\n  ");
    printf("char���ַ��������͡���1�ֽ�\n");
	printf("short���������������͡���2�ֽ�\n");
	printf("int�������������͡���4�ֽ�\n");
	printf("long���������������͡���4�ֽ�\n");
	printf("float�������ȸ������������͡���4�ֽ�\n");
	printf("double��˫���ȸ������������͡���8�ֽ�\n");
	printf("long double����˫���ȸ������������͡���8�ֽ�\n");
	printf("unsigned���޷����������͡���1�ֽ�\n");
	printf("signed���з����������͡���1�ֽ�\n");
	printf("void�������͡���1�ֽ�\n");


	getchar();
	rewind(stdin);
}

void m2_1_4(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n    C�������\n\n  ");
	printf("�����������+��-��*��/��%��++��--\n");
	printf("++������1\n");
	printf("--���Լ�1\n");
	printf("+���ӷ�\n");
	printf("-������\n");
	printf("*���˷�\n");
	printf("/������\n");
	printf("%��ȡ��\n");
	printf("��ϵ�������>��<��>=��<=��==��!=\n");
	printf(">������\n");
	printf("<��С��\n");
	printf(">=�����ڵ���\n");
	printf("<=��С�ڵ���\n");
	printf("==������\n");
	printf("!=��������\n");
	printf("�߼������������&&��||\n");
	printf("!����\n");
	printf("&&����\n");
	printf("||����\n");
	printf("λ�������&��|��^��~��<<��>>\n");
	printf("&����λ��\n");
	printf("|����λ��\n");
	printf("^����λ���\n");
	printf("~����λȡ��\n");
	printf("<<������\n");
	printf(">>������\n");

	getchar();
	rewind(stdin);
}

void m2_1_5(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n    C����ת��\n\n  ");	
	printf("�����Զ�ת����\n");
	printf("1.float�������Զ�ת����double�ͣ�\n");
	printf("2.char��short�������Զ�ת����int�ͣ�\n");
	printf("3.int����double���������㣬ֱ�ӽ�int��ת����double��\n");
	printf("4.int����unsigned�����ݡ�ֱ�ӽ�int��ת����unsigned�ͣ�\n");	
	printf("5.��int����long����������ʱ��ֱ�ӽ�int��ת����long�ͣ�\n");
	printf("��ֵת����\n");
	printf("1.���������ݸ�������˫���ȱ���ʱ����ֵ���䣬���Ը�������ʽ�洢��������\n");
	printf("2.��ʵ������(��������˫����)�������ͱ���ʱ������ʵ����С�����֡���xΪ���ͱ�����ִ�С�x=4.25��ʱ��ȡֵΪx=4��\n");
	printf("3.ͬ���͵Ķ����ݸ�ֵ�����������Զ�ת������ȷ�ģ����磬char��short�����ݸ�int�ͱ�����ֵ��\n");
	printf("4.ͬ���͵ĳ����ݸ��̱�����ֵ���ܳ������磬��unsigned int�͵�ֵ������int������ȡֵ��Χ����ֵ�����\n");
	printf("���磺unsigned int ������int������ֵ����\n");
	printf("ǿ��ת����\n");
	printf("1.ǿ��ת����ָ�ڱ���ǰ����ǿ��ת�������ͣ�������ת����ָ�������͡�\n");
	printf("2.ǿ��ת���ĸ�ʽΪ��(������)���ʽ\n");
	printf("3.ǿ��ת�������ȼ���������������������������Լ��������\n");
	printf("4.ǿ��ת���Ľ����һ��ֵ��������һ��������\n");



	getchar();
	rewind(stdin);
}

void m2_1_6(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n    I/O���Ϳ���\n\n  ");
	printf("1.���ͣ�\n");
	printf("%%d����ʮ������ʽ�������������(�������������)\n");
	printf("%%o���԰˽�����ʽ����޷�������(�����ǰ׺0)\n");
	printf("%%x����ʮ��������ʽ����޷�������(�����ǰ׺0x)\n");
	printf("%%u����ʮ������ʽ����޷�������\n");
	printf("2.ʵ�ͣ�\n");
	printf("%%f����С����ʽ�������˫����ʵ��\n");
	printf("%%e����ָ����ʽ�������˫����ʵ��\n");
	printf("%%g����%%f��%%e�н϶̵��������������˫����ʵ��\n");
	printf("%%c����������ַ�\n");
	printf("%%s������ַ���\n");
	printf("%%p�����ָ���ַ\n");
	printf("%%n��������������������ַ�����Ŀ����%nǰ��ָ�����\n");
	printf("%%m.n��m��ʾ�����ȣ�n��ʾС��λ��\n");

	getchar();
	rewind(stdin);
}

void m2_1_7(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n printf��������\n\n  ");
	printf("1.printf ��C���Ա�׼�⺯����������ͷ�ļ� <stdio.h>��\n");
	printf("2.printf�����Ĺ����ǣ�����ʽ���������������׼����豸(��Ļ)��\n");
	printf("3.printf�����ĸ�ʽ��\n");
	printf("  printf(�����ʽ���������);\n");
	printf("4.�����ʽ��\n");
	printf("  %%�����һ���ٷֺ�\n");
	printf("  \\n������\n");
	printf("  \\t���Ʊ��\n");
	



	getchar();
	rewind(stdin);
}

void m2_1_8(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n scanf��������\n\n  ");
	printf("1.scanf ��C���Ա�׼�⺯����������ͷ�ļ� <stdio.h>��\n");
	printf("2.scanf�����Ĺ����ǣ��ӱ�׼�����豸(����)��ȡ��ʽ�������ݡ�\n");
	printf("3.scanf�����ĸ�ʽ��\n");
	printf("  scanf(�����ʽ���������);\n");
	printf("4.�����ʽ��\n");
	printf("  %%������һ���ٷֺ�\n");
	printf("  \\n������\n");
	printf("  \\t���Ʊ��\n");

	getchar();
	rewind(stdin);
}

void m2_1_9(void) {

	system("cls");     //����ϵͳ�������
	printf("\n\n �ַ�I/O\n\n  ");
	printf("1.�ַ�I/O������\n");
	printf("  getchar()���ӱ�׼�����豸(����)��ȡһ���ַ���\n");
	printf("  putchar()�����׼����豸(��Ļ)���һ���ַ���\n");
	printf("  gets()���ӱ�׼�����豸(����)��ȡһ���ַ�����\n");
	printf("  puts()�����׼����豸(��Ļ)���һ���ַ�����\n");
	printf("2.�ַ�I/O�����ĸ�ʽ��\n");
	printf("  getchar()��\n");
	printf("  putchar(�ַ�������)��\n");
	printf("  gets(�ַ���������)��\n");
	printf("  puts(�ַ���������)��\n");


	getchar();
	rewind(stdin);
}