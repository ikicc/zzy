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
	colum_n(24);  printf("3. ��֦�ṹ\n");
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
		case '2':      break;
		case '3':      break;
		case '4':      break;
		case '5':      break;
		case '6':      break;
		case '7':      break;
		case '8':      break;
		case '9':      break;


		default:       break;
		}
	}
}
//================================ 
void dispMenu2_2() {
	local(4, 20);  printf("C˳��ṹ���\n");
	local(1, 24);  printf("1. ��ʽ�����ʽ��\n");
	colum_n(24);  printf("2. ��������scanf()\n");

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
		case '1':      break;
		case '2':      break;

		default:   break;
		}
	}
}

//=================
void menu2_3(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_4(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_5(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_6(void) { printf("���ڱ�д��\n");  getchar(); }
void menu2_7(void) { printf("���ڱ�д��\n");  getchar(); }
