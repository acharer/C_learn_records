#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���


//�����ṹ��
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p3,p4;
//ֱ�Ӵ����������ṹ�� p3��p4 �����ǵ������� struct Peo����ȫ�ֽṹ�����

struct Peo p5, p6;
struct St
{
	struct Peo p;
	int num;
	float f;
};
void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
}
void print2(struct Peo* p)
{
	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->high);//�ṹ��ָ��->��Ա����
}
//��ѡprint2

int main()
{
	//��ʼ���ṹ�������������ȫ��ʼ��Ҳ���Բ���ȫ��ʼ��
	struct Peo p1 = { "����","15596668862","��",181 };
	struct St s = { {"����","15596688888","Ů",166},100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);


	return 0;
}