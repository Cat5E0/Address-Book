#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"header.h"
#define  _CRT_SECURE_NO_WARNINGS
/*
 *
 *
 *
 */

int main()																		//������������main
{
	printf("\t\t************************************************\n");
	printf("\t\t***************��ӭ����ͨѶ¼*******************\n");
	printf("\t\t*************************************************\n");
	printf("��������������˵�\n");
	_getch();																	//�ȴ��û�������������
	readfile();																	// ����readfile()������ȡ�����ͨѶ¼��Ϣ
	int selectnum;
	while (1)																	//������ѭ������ʾ���˵��������û���ѡ�������Ӧ�Ĳ�����
	{
		selectnum = menu_select();												// ��ʾ���˵������ȴ��û�����ѡ��
		switch (selectnum)														//�����û���ѡ����в�ͬ�Ĳ���
		{
		case 0:
		{
			adduser();															// ����û���Ϣ
			break;
		}
		case 1:
		{
			list();																// ��ʾ�û���Ϣ�б�
			break;
		}
		case 2:
		{
			searchbyname();														// �����������û���Ϣ
			break;
		}
		case 3:
		{
			searchbyphone();													// ���绰��������û���Ϣ
			break;
		}
		case 4:
		{
			adduser();															// �޸��û���Ϣ
			break;
		}
		case 5:
		{
			sortbyname();														// �����������û���Ϣ
			break;
		}
		case 6:
		{
			dele();																// ɾ���û���Ϣ
			break;
		}
		case 7:
		{
			writefile();														// ���浱ǰͨѶ¼��Ϣ�������BYE BYE!��Ȼ���������
			printf("BYE BYE!\n");
			system("pause");													// ��ͣ��������У��ȴ��û��ڿ���̨����������������
			getchar();
			exit(0);															// ֱ����������
		}
		}
	}
	getchar();
	return 0;
}

