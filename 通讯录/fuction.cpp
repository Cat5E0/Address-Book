#define  _CRT_SECURE_NO_WARNINGS
/*
 *
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"header.h"


struct record							// ����һ����Ϊrecord�Ľṹ�����ͣ������洢ѧ������Ϣ
{
	char name[20];						// ���������20���ַ�
	char phone[12];						// �绰�����12���ַ�
	char adress[50];					// ��ַ�����50���ַ�
	char postcode[8];					// �ʱ࣬���8���ַ�
	char e_mail[20];					// �������䣬���20���ַ�
}student[100];							// ����һ���ṹ�����飬�����洢���ѧ������Ϣ�������СΪ100�������洢100��ѧ������Ϣ


void encrypt(char* pwd)					//����һ����Ϊencrypt�ĺ��������ڶԴ�����ַ������м򵥵ļ��ܴ���
{
	int pwdlen = strlen(pwd);			// ��ȡ�ַ����ĳ��ȣ�����ѭ������ÿ���ַ���
	for (int i = 0; i < pwdlen; i++)	//�����ַ����е�ÿ���ַ���
	{
		pwd[i] ^= 15;					// ����ÿ���ַ���ʹ��������������м��ܴ���
	}
}


int  get_record_count()					// ֱ�ӷ���0����ʾ��ǰͨѶ¼��û���κμ�¼
{
	return 0;
}

int num = 0;															// ����һ����Ϊnum�����ͱ���


int menu_select()													// ����һ����Ϊmenu_select�ĺ�����������ʾ�˵�����ȡ����ѡ��
{
	char s[80];														// ����һ���ַ�����s�������洢�û�������ַ���
	int a;															// ����һ�����ͱ���a�������洢�û����������ѡ��
	system("cls");													// �������������̨��֮ǰ������
	printf("\t\t***********��ӭ����ͨѶ�������********\n\n");
	printf("\t\t\t0. �����¼\n");
	printf("\t\t\t1. ��ʾ��¼\n");
	printf("\t\t\t2. ����������\n");
	printf("\t\t\t3. ���绰�������\n");
	printf("\t\t\t4. �����¼ \n");
	printf("\t\t\t5. ����������\n");
	printf("\t\t\t6. ɾ����¼\n");
	printf("\t\t\t7. ���沢�˳�\n");
	printf("\t\t***********************************************\n\n");
	do {															// ʹ��do-whileѭ����ȷ���û����������ѡ����0~7֮��
		printf("Enter you choice(0~7):");
		scanf("%s", s);												// ��ȡ�û�������ַ��������洢���ַ�����s��
		a = atoi(s);										// ���ַ�����s�е��ַ���ת����������ֵ�����洢������a��
	} while (a < 0 || a>7);											// ���û����������ѡ���0~7֮�䣬�ͼ�����ʾ�û�����
	return a;														// �����û����������ѡ��
}


int adduser()														// ����һ����Ϊadduser�ĺ������������ѧ����Ϣ
{
	printf("\n\t\t\t**************** �������û���Ϣ ****************\n");
	printf("\t\t\t��������:");
	scanf("%s", student[num].name);									// ��ȡ�û���������������洢���ṹ��������
	printf("\n\t\t\t����绰����:");
	scanf("%s", student[num].phone);								// ��ȡ�û�����ĵ绰���룬���洢���ṹ��������
	printf("\n\t\t\t�����ַ:");
	scanf("%s", student[num].adress);								// ��ȡ�û�����ĵ�ַ�����洢���ṹ��������
	printf("\n\t\t\t�����ʱ�:");
	scanf("%s", student[num].postcode);								//��ȡ�û�������ʱ࣬���洢���ṹ��������
	printf("\n\t\t\t����e-mail:");
	scanf("%s", student[num].e_mail);								// ��ȡ�û�����ĵ����ʼ���ַ�����洢���ṹ��������
	num++;															// ѧ����Ϣ������1
	printf("\n\t\t\t�Ƿ�������?(Y/N):");							// ��ʾ�û��Ƿ�������
	if (_getch() == 'y' || _getch() == 'Y')							// ����û�������ǡ�y����Y������ݹ����adduser�������ѧ����Ϣ
		adduser();
	return(0);														// ����0,��������
}


void list()											// ����һ����Ϊlist�ĺ�����������ʾ����ѧ����Ϣ
{
	int i;
	system("cls");									// �������������̨��֮ǰ������
	if (num != 0)									// �����ѧ����Ϣ������ʾ����ѧ����Ϣ
	{
		printf("\t\t\t*************** ����ΪͨѶ¼������Ϣ************\n");
		for (i = 0; i < num; i++)					// ��������ѧ����Ϣ������һ��ʾ
		{
			printf("\t\t\t����:%s\n", student[i].name);
			printf("\t\t\t�绰:%s\n", student[i].phone);
			printf("\t\t\t��ַ:%s\n", student[i].adress);
			printf("\t\t\t�ʱ�:%s\n", student[i].postcode);
			printf("\t\t\tEmail:%s\n", student[i].e_mail);
			if (i + 1 < num)						// ����������һ��ѧ����Ϣ����ʾ�û������������
			{
				system("pause");					// ������̨��ͣ���ȴ��û������������
			}
		}
		printf("\t\t\t************************************************\n");
	}
	else											// ���û��ѧ����Ϣ������ʾ�û�
		printf("\t\t\tͨѶ¼�����κμ�¼\n");
	printf("\t\t\t��������������˵�:\n");
	_getch();										// �ȴ��û��������
	return;											// ���أ���������
}


int searchbyname()											// ����һ����Ϊsearchbyname�ĺ�������������������ѧ����Ϣ
{
	int mark = 0;											// ����һ�����ͱ���mark����������Ƿ���ҵ��˷���������ѧ����Ϣ
	int i;													// ����һ�����ͱ���i��������������ѧ����Ϣ
	printf("\t\t\t***************** ���������� *******************\n");
	char name[20];											// ����һ���ַ�����name�������洢�û����������
	printf("\t\t\t����������:");
	scanf("%s", name);										// ��ȡ�û����������
	for (i = 0; i < num; i++)								// ��������ѧ����Ϣ�����ҷ���������ѧ����Ϣ
	{
		if (strcmp(student[i].name, name) == 0)				// ����ҵ��˷���������ѧ����Ϣ���������Ϣ������mark��ֵ
		{
			printf("\t\t\t************* �����������ҵ��û���Ϣ ***********\n");
			printf("\t\t\t����: %s\n", student[i].name);
			printf("\t\t\t�绰: %s\n", student[i].phone);
			printf("\t\t\t��ַ: %s\n", student[i].adress);
			printf("\t\t\te-mail:%s\n", student[i].e_mail);
			printf("\t\t\t************************************************\n");
			mark++;											//ѧ����Ϣ+1
			if ((i + 1) < num)								// ����ҵ���ѧ����Ϣ�������һ������ѯ���û��Ƿ��������
			{
				printf("\t\t\t�Ƿ����������ͬ���ֵ��û���Ϣ:(y/n)");
				if (_getch() == 'y' || _getch() == 'Y')
				{
					continue;								// ����û��������ң������ѭ������
				}
				else
					return(0);								// ����û����������ң��򷵻�0����������
			}
			else											// ����ҵ��������һ��ѧ����Ϣ������ʾ�û���������������˵�
			{
				printf("\t\t\t��������������˵�");
				_getch();
				return(0);									// ����0����������
			}
		}
	}
	if (mark == 0)											// ���û���ҵ�����������ѧ����Ϣ������ʾ�û�
	{
		printf("\t\t\tû����ͬ�������û���¼\n");
		printf("\t\t\t��������������˵�\n");
		_getch();
		return(0);											// ����0����������
	}
	return 0;												// ����з���������ѧ����Ϣ���򷵻�0����������
}


int searchbyphone()											//����һ����Ϊsearchbyphone�ĺ������������绰�������ѧ����Ϣ
{
	int mark = 0;											// ����һ�����ͱ���mark����������Ƿ���ҵ��˷���������ѧ����Ϣ
	int i;													// ����һ�����ͱ���i��������������ѧ����Ϣ
	printf("\t\t\t****************** ���绰���� ******************\n");
	char phone[10];											// ����һ���ַ�����phone�������洢�û�����ĵ绰����
	printf("\t\t\t������绰����:");
	scanf("%s", phone);										// ��ȡ�û�����ĵ绰����
	for (i = 0; i < num; i++)								// ��������ѧ����Ϣ�����ҷ���������ѧ����Ϣ
	{
		if (strcmp(student[i].phone, phone) == 0)			// ����ҵ��˷���������ѧ����Ϣ���������Ϣ������mark��ֵ
		{
			printf("\t\t\t************** �����������ҵ��û���Ϣ **********\n");
			printf("\t\t\t����: %s\n", student[i].name);
			printf("\t\t\t�绰: %s\n", student[i].phone);
			printf("\t\t\t��ַ: %s\n", student[i].adress);
			printf("\t\t\te-mail:%s\n", student[i].e_mail);
			printf("\t\t\t************************************************\n");
			printf("\t\t\t��������������˵�\n");
			mark++;											//ѧ����Ϣ+1
			_getch();										// �ȴ��û��������
			return(0);										// ����0����������
		}
	}
	if (mark == 0)											// ���û���ҵ�����������ѧ����Ϣ������ʾ�û�
	{
		printf("\t\t\tû�и��û�����Ϣ\n");
		printf("\t\t\t��������������˵�\n");
		_getch();											// �ȴ��û��������
		return(0);											// ����0����������
	}
	return(0);												// ����0����������
}


void deletebyphone()												//������һ����Ϊdeletebyphone�ĺ��������ڸ����û�����ĵ绰����ɾ��ͨѶ¼�ж�Ӧ�ļ�¼��
{
	int i, j;														// ����ѭ��������i��j
	int deletemark = 0;												// ����ɾ����Ǳ���deletemark
	char phone[20];													// ����绰�������phone
	printf("\t\t\t������Ҫɾ���û��绰����:");
	scanf("%s", phone);												//�����û�����ĵ绰����


	if (num == 0)													// ����¼����Ϊ�գ��������ʾ��Ϣ������
	{
		printf("\t\t\t�Բ����ļ������κμ�¼\n");
		printf("\t\t\t��������������˵�\n");
		_getch();
		return;
	}
	for (i = 0; i < num; i++)										// ��������ѧ����Ϣ���ҵ����û�����ĵ绰������ͬ��ѧ����Ϣ
	{
		if (strcmp(student[i].phone, phone) == 0)					// �����ѧ����Ϣ��ѯ���û��Ƿ�ɾ����ѧ����Ϣ
		{
			printf("\t\t\t��������Ҫɾ�����û���¼:\n");
			printf("\t\t\t����: %s\n", student[i].name);
			printf("\t\t\t�绰: %s\n", student[i].phone);
			printf("\t\t\t��ַ: %s\n", student[i].adress);
			printf("\t\t\te-mail:%s\n", student[i].e_mail);
			printf("\t\t\t�Ƿ�ɾ��?(y/n)");
			if (_getch() == 'y' || _getch() == 'Y')					// ���û�ѡ��ɾ�����򽫸�ѧ����Ϣ�Ӽ�¼������ɾ��
			{
				for (j = i; j < num - 1; j++)						// ��������ѧ����Ϣ���ҵ����û�����ĵ绰������ͬ��ѧ����Ϣ
					student[j] = student[j + 1];
				num--;												// ѧ����Ϣ������1
				deletemark++;										// ɾ����Ǳ�����1
				printf("\t\t\tɾ���ɹ�");
				printf("\t\t\t�Ƿ����ɾ��?(y/n)");
				if (_getch() == 'y' || _getch() == 'Y')				// ���û�ѡ�����ɾ������ѧ����Ϣ����ݹ����deletebyphone����
					deletebyphone();
				return;												//ɾ���󷵻�
			}
			else
				return;												// ����ֱ�ӷ��ء�
		}
		continue;													//continue�����������ѭ����������ǰ������������ʼ��һ�ֵ���
	}
	if (deletemark == 0)											// ���Ҳ�����Ӧ��ѧ����Ϣ���������ʾ��Ϣ������
	{
		printf("\t\t\tû�и��û��ļ�¼");
		printf("\t\t\t�Ƿ����ɾ��?(y/n)");
		if (_getch() == 'y' || _getch() == 'Y')						// ���û�ѡ�����ɾ������ѧ����Ϣ����ݹ����deletebyphone����
			deletebyphone();
		return;														//ɾ���󷵻�
	}
	return;															//���غ���
}


void deletebyname()
{
	int a = 0;											// ������ʼλ��
	int findmark = 0;									// ������ҳɹ����
	int j;												// ����ѭ��������j
	int deletemark = 0;									// ����ɾ���ɹ����
	int i;												// ����ѭ��������i
	char name[20];										// ������������name
	printf("\t\t\t������Ҫɾ���û�����:\n");
	scanf("%s", name);									// �����û����������
	for (i = a; i < num; i++)							// ��������ѧ����Ϣ
	{
		if (strcmp(student[i].name, name) == 0)			// �ҵ���Ӧ������ѧ����Ϣ
		{
			printf("\t\t\t��������Ҫɾ�����û���¼:");	// �����ѧ����Ϣ
			findmark++;// ���ҳɹ���Ǽ�1
			printf("\t\t\t________________________________");
			printf("\t\t\t����: %s", student[i].name);
			printf("\t\t\t�绰: %s", student[i].phone);
			printf("\t\t\t��ַ: %s", student[i].adress);
			printf("\t\t\te-mail:%s", student[i].e_mail);
			printf("\t\t\t________________________________");
			printf("\t\t\t�Ƿ�ɾ��?(y/n)");
			if (_getch() == 'y' || _getch() == 'Y')		// ���û�ѡ��ɾ�����򽫸�ѧ����Ϣ�Ӽ�¼������ɾ��
			{
				for (j = i; j < num - 1; j++)			//����ѧ����Ϣ���ҵ���ɾ��
					student[j] = student[j + 1];
				num--;									// ѧ����Ϣ������1
				deletemark++;							// ɾ����Ǳ�����1
				printf("\t\t\tɾ���ɹ�");
				if ((i + 1) < num)						// �ж��Ƿ������ͬ������ѧ����Ϣ
				{
					printf("\t\t\t�Ƿ����ɾ����ͬ�������û���Ϣ?(y/n)");
					if (_getch() == 'y')				// �����ڣ������ɾ��
					{
						a = i;							// ������ʼλ��
						continue;						// ��������
					}
				}
				printf("\t\t\t�Ƿ����ɾ��?(y/n)");
				if (_getch() == 'y')					// ����û�ѡ���������ݹ����deletebyname����ִ��ɾ������
					deletebyname();
				return;
			}
			if ((i + 1) < num)							// �����ѧ����Ϣ�������ж����Ϣ�������ѯ���Ƿ�ɾ����ͬ������ѧ����Ϣ
			{
				printf("\t\t\t�Ƿ����ɾ����ͬ�������û���Ϣ?(y/n)");
				if (_getch() == 'y' || _getch() == 'Y')	// ���û�ѡ�����ɾ���������������ͬ������ѧ����Ϣ
				{
					a = i;								// ������ʼλ��
					continue;							// ����������ͬ������ѧ����Ϣ
				}
			}
		}
		else
			continue;									// ������������ѧ����Ϣ
	}
	if ((deletemark == 0) && (findmark == 0))			//����޷��ҵ���Ӧ��ѧ����Ϣ���������ʾ��Ϣ��������һ������
	{
		printf("\t\t\tû�и��û��ļ�¼");
		printf("\t\t\t�Ƿ����ɾ��?(y/n)");
		if (_getch() == 'y' || _getch() == 'Y')
			deletebyphone();
		return;
	}
	else if (findmark != 0)								//����ҵ�����ͬ������ѧ����Ϣ����û��ɾ���ɹ����������ʾ��Ϣ��������һ������
	{
		printf("\t\t\tû��������Ϣ");
		printf("\t\t\tû�и��û��ļ�¼");
		printf("\t\t\t�Ƿ����ɾ��?(y/n)");
		if (_getch() == 'y' || _getch() == 'Y')			// ����û�ѡ�����ɾ������ݹ����deletebyphone����
			deletebyphone();
		return;
	}
}


int dele()									//����һ����Ϊdele�ĺ��������ڴ�ͨѶ¼��ɾ����ϵ�˵���Ϣ��
{
	char choic;								//����˵������û�ѡ��ɾ����ʽ
	printf("\t\t\t1-���绰����ɾ�� 2-������ɾ��");
	printf("\t\t\t��ѡ��:");
	choic = _getch();						// ��ȡ�û����������ѡ��
	switch (choic)							// �ж��û���ѡ��
	{
	case '1':deletebyphone(); break;		// ����û�ѡ�񰴵绰����ɾ��������� deletebyphone() ����
	case '2':deletebyname(); break;			// ����û�ѡ������ɾ��������� deletebyname() ����
	}
	return(0);								// ����0����ʾɾ���ɹ�
}


int sortbyname()															//����һ����Ϊsortbyname�ĺ��������ڽ�ͨѶ¼�е�ѧ����¼�����������ֵ��������������
{
	int i, j;
	struct record tmp;
	for (i = 1; i < num; i++)												// ð�������㷨������������������
	{
		if (strcmp(student[i].name, student[i - 1].name) < 0)				// ����ÿ��i���жϵ�ǰѧ�������Ƿ��ǰһ��ѧ������С�����ж��Ƿ���Ҫ������λ��
		{
			tmp = student[i];												// ����ǰѧ����Ϣ���浽tmp��
			j = i - 1;														// ����һ��ָ��jָ��ǰһ��ѧ��
			do																// ִ��do-whileѭ������ָ��j��ָ���ѧ���Ƶ�j+1��λ��
			{
				student[j + 1] = student[j];								// ��ָ��j��ָ���ѧ���Ƶ�j+1��λ��
				j--;														// ��jָ����ǰ�ƶ�һ��λ��
			} while ((strcmp(tmp.name, student[j].name) < 0 && j >= 0));	// ֱ������һ��ѧ��������tmp������С��j�Ѿ����˵�һ��ѧ��Ϊֹ
			student[j + 1] = tmp;											// ��tmp���뵽ָ��j��ָ���ѧ��֮���λ�ã��������
		}
	}
	printf("\t\t\t����ɹ�,�Ƿ���ʾ?(y/n)");								// �������������ѯ���û��Ƿ�Ҫ��ʾ�����Ľ��
	if (_getch() == 'y')													// ����û�ѡ����ʾ������������� list() ���������ͨѶ¼������ѧ���ļ�¼
		list();
	return(0);																// ����0����ʾ�������
}


void readfile()															//������һ������readfile�����ڶ�ȡѧ��ͨѶ¼�ļ�������ÿ����¼���н��ܴ���ʹ�ӡ��
{
	FILE* fp = fopen("student_address_book.dat", "rb");					// ��ѧ��ͨѶ¼�ļ����Զ����Ƹ�ʽд��ķ�ʽ�򿪣������ļ�ָ�븳ֵ��fp������

	if (fp == NULL) {
		printf("Failed to open file.\n");   							// ����ļ���ʧ�ܣ������������ʾ��Ϣ������
		return;
	}

	//	struct record rec;												// ��ʼ������
	num = 0;

	while (fread(&student[num], sizeof(struct record), 1, fp) == 1)		// ѭ����ȡÿ����¼
	{
		encrypt(student[num].postcode);
		encrypt(student[num].name);
		encrypt(student[num].adress);
		encrypt(student[num].phone);
		encrypt(student[num].e_mail);									// �Լ�¼���н��ܴ���
		// ͳ�Ƽ�¼����
		printf("����: %s\n", student[num].name);						// ��ӡ��¼��Ϣ
		printf("��ַ: %s\n", student[num].adress);
		printf("�ʱ�: %s\n", student[num].postcode);
		printf("�绰: %s\n", student[num].phone);
		printf("Email: %s\n", student[num].e_mail);
		num++;
		printf("-----------------------------\n");
	}
	fclose(fp);															// �ر��ļ�
	printf("Total number of records: %d\n", num);						// ��ӡ��¼����
	system("pause");
}


void writefile()														//������һ������writefile������д��ѧ��ͨѶ¼�ļ�����ѧ��ͨѶ¼�еļ�¼�Զ����Ƹ�ʽд���ļ��С�
{

	FILE* fp = fopen("student_address_book.dat", "wb");					// ��ѧ��ͨѶ¼�ļ����Զ����Ƹ�ʽд��ķ�ʽ�򿪣������ļ�ָ�븳ֵ��fp����
	if (fp == NULL)														// ����ļ���ʧ�ܣ������������ʾ��Ϣ�����ء�
	{
		printf("Failed to open file.\n");
		return;
	}
	struct record rec;													// ��ʼ������
	//	int num = 0;
	//	num = get_record_count();											// ͳ�Ƽ�¼����

	for (int i = 0; i < num; i++)										// д���¼
	{
		rec = student[i];
		// ��ȡ��¼
		encrypt(rec.postcode);

		encrypt(rec.name);
		encrypt(rec.adress);
		encrypt(rec.phone);
		encrypt(rec.e_mail);
		// �Լ�¼���м��ܴ���
		fwrite(&rec, sizeof(struct record), 1, fp);						// ����¼д���ļ�
	}

	fclose(fp);															// �ر��ļ�

	printf("Write file success.\n");
}



