//cProgrammSys.cpp
#include <iostream>
#include <stdio.h>

void local(int, int);

void lines_m(int);
void colum_n(int);

void mainMenu(void) {
	local(4, 20);  printf("C�����ʾϵͳ\n");
	local(1, 24);  printf("1. C��������\n");
	colum_n(24);  printf("2. ˳��ṹ\n");
	colum_n(24);  printf("3. ��֧�ṹ\n");
	colum_n(24);  printf("4. ѭ���ṹ\n");
	colum_n(24);  printf("5. �����ṹ\n");
	colum_n(24);  printf("6. ����ṹ\n");
	colum_n(24);  printf("7. ָ��ṹ\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");
}
void local(int m, int n) {
	for (int i = 0; i < m; i++)  printf("\n");
	for (int i = 0; i < n; i++)  printf(" ");
}
void lines_m(int m) {
	for (int i = 0; i < m; i++)  printf("\n");
}
void colum_n(int n) {
	for (int i = 0; i < n; i++)  printf(" ");
}
//=============================
void dispMenu2_1(void) {
	local(2, 20);  printf("C�������ݹ���\n");
	local(1, 24);  printf("1. ���ݷ���\n");
	colum_n(24);  printf("2. ȡֵ��Χ\n");
	colum_n(24);  printf("3. �洢�ֽ�\n");
	colum_n(24);  printf("4. �������\n");
	colum_n(24);  printf("5. ����ת��\n");
	colum_n(24);  printf("6. I/O���Ϳ���\n");
	colum_n(24);  printf("7. printf()����\n");
	colum_n(24);  printf("8. scanf()����\n");
	colum_n(24);  printf("9. �ַ�I/O\n");

	local(2, 24);  printf("0. ����\n"); 
	local(2, 20);  printf("��ѡ��");
}

#include "menu2_1.h" 
#include "menu2_2.h" 
#include "menu2_3.h" 
#include "menu2_4.h" 
#include "menu2_5.h"
#include "menu2_6.h"
#include "menu2_7.h"
void menu2_1(void) {
	char cho2_1;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_1();
		cho2_1 = getchar();     getchar();//??
		if (cho2_1 == '0') break;
		switch (cho2_1)
		{
		case '1': m2_1_1();     break;
		case '2': m2_1_2();    break;
		case '3': m2_1_3();    break;
		case '4': m2_1_4();    break;
		case '5': m2_1_5();    break;
		case '6': m2_1_6();    break;
		case '7': m2_1_7();    break;
		case '8': m2_1_8();    break;
		case '9': m2_1_9();    break;



		default:       break;
		}
	}
}
//================================ 
void dispMenu2_2() {
	local(4, 20);  printf("C˳��ṹ���\n");
	local(1, 24);  printf("1. ��ʽ�����ʽ��\n");
	colum_n(24);  printf("2. ��������scanf()\n");
	colum_n(24);  printf("3. �������printf()\n");
	colum_n(24);  printf("4. ���ʽ�����\n");

	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}



void menu2_2(void) {
	char cho2_2;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_2();
		cho2_2 = getchar();     getchar();//??
		if (cho2_2 == '0') break;
		switch (cho2_2)
		{
		case '1':  m2_2_1();      break;
		case '2':   m2_2_1();    break;
		case '3':   m2_2_3();    break;
		case '4':   m2_2_4();    break;

		default:   break;
		}
	}
}


void dispMenu2_3() {
	local(4, 20);  printf("C��֧�ṹ\n");
	local(1, 24);  printf("1. if��֧�ṹ\n");
	colum_n(24);  printf("2.switch��֧�ṹ\n");
	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}


void menu2_3(void) {
	char cho2_3;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_3();
		cho2_3 = getchar();    getchar();//??
		if (cho2_3 == '0') break;
		switch (cho2_3)
		{
		case '1':  m2_3_1();      break;
		case '2':  m2_3_2();      break;
		

		default:   break;
		}
	}
}


void dispMenu2_4() {
	local(4, 20);  printf("Cѭ���ṹ���\n");
	local(1, 24);  printf("1.for��� \n");
	colum_n(24);  printf("2.while���\n");
	colum_n(24);  printf("3.do-while���\n");
	colum_n(24);  printf("4.����ѭ���е�break����continue���\n");
	colum_n(24);  printf("5.goto���\n");


	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}

void menu2_4(void) {
	char cho2_4;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_4();
		cho2_4 = getchar();    getchar();//??
		if (cho2_4 == '0') break;
		switch (cho2_4)
		{
		case '1':  m2_4_1();      break;
		case '2':  m2_4_2();      break;
		case '3':  m2_4_3();      break;
		case '4':  m2_4_4();      break;
		case '5':  m2_4_5();      break;
	


		default:   break;
		}
	}
}

void dispMenu2_5() {
	local(4, 20);  printf("C�����ṹ���\n");
	local(1, 24);  printf("1.�����Ķ���\n");
	colum_n(24);  printf("2.�����������͵���\n");
	colum_n(24);  printf("3.�����Ĵ�ֵ��ʽ\n");
	colum_n(24);  printf("4.�����ĵݹ����\n");
	colum_n(24);  printf("5.������Ԥ����\n");
	colum_n(24);  printf("6.�����Ľṹ�ͱ���\n");
	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}

void menu2_5(void) {
	char cho2_5;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_5();
		cho2_5 = getchar();    getchar();//??
		if (cho2_5 == '0') break;
		switch (cho2_5)
		{
		case '1':  m2_5_1();      break;
		case '2':  m2_5_2();      break;
		case '3':  m2_5_3();      break;
		case '4':  m2_5_4();      break;
		case '5':  m2_5_5();      break;
		case '6':  m2_5_6();      break;

		default:   break;
		}
	}
}

void dispMenu2_6() {
	local(4, 20);  printf("C����ṹ���\n");
	local(1, 24);  printf("1.һά����\n");	
	colum_n(24);  printf("2.��ά����\n");
	colum_n(24);  printf("3.�ַ�����\n");
	colum_n(24);  printf("4.������Ϊ�����Ĳ���\n");



	
	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}



void menu2_6(void) {
	char cho2_6;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_6();
		cho2_6 = getchar();     getchar();//??
		if (cho2_6 == '0') break;
		switch (cho2_6)
		{
		case '1':  m2_6_1();      break;
		case '2':  m2_6_2();      break;
        case '3':  m2_6_3();      break;
		case '4':  m2_6_4();      break;
	

		default:   break;
		}
	}
}

void dispMenu2_7() {
	local(4, 20);  printf("Cָ��ṹ���\n");	
	local(1, 24);  printf("1.ָ��ĵĶ����ʹ��\n");
	colum_n(24);  printf("2.ָ�������\n");
	colum_n(24);  printf("3.ָ��������\n");
	colum_n(24);  printf("4.ָ���뺯��\n");







	//���� 
	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}



void menu2_7(void) {
	char cho2_7;
	while (1) {
		system("cls");     //����ϵͳ�������
		dispMenu2_7();
		cho2_7 = getchar();     getchar();//??
		if (cho2_7 == '0') break;
		switch (cho2_7)
		{
		case '1':  m2_7_1();      break;
		case '2':  m2_7_2();      break;
		case '3':  m2_7_3();      break;
		case '4':  m2_7_4();      break;

	

		default:   break;
		}
	}
}