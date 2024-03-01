#pragma once
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2
//���͵�����
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ���˵ĸ���
//}Contact;
//ͨѶ¼��̬�汾
typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ���˵ĸ���
	int capacity;//��ǰͨѶ¼������
}Contact;

//��ʼ��ͨѶ¼
int InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����ͨѶ¼�е�����
//��������������
void SortContact(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* pc);

//����ͨѶ¼���ļ�
void SaveContact(Contact* pc);

//�����ļ�����Ϣ��ͨѶ¼
void LoadContact(Contact* pc);