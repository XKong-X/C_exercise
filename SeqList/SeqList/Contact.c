#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
#include "SeqList.h"

void menu() {
	printf("*************ͨѶ¼**************\n");
	printf("*********1.����  2.ɾ��**********\n");
	printf("*********3.����  4.�޸�**********\n");
	printf("*********5.չʾ  0.�˳�**********\n");
	printf("*********************************\n");
}

//��ʼ��ͨѶ¼��˳���
void ContactInit(Contact* con) {
	assert(con);
	SLInit(con);
}

//����ͨѶ¼��˳���
void ContactDestory(Contact* con) {
	assert(con);
	SLDestroy(con);
}

//��ȡ��ϵ����Ϣ(�������Ա����䣬�绰����ַ)
void AcquireInfo(Contact* con, peoInfo* info) {
	printf("������������");
	scanf("%s", info->name);

	printf("�������Ա�");
	scanf("%s", info->gender);

	printf("���������䣺");
	scanf("%d", &info->age);

	printf("������绰��");
	scanf("%s", info->tel);

	printf("�������ַ��");
	scanf("%s", info->addr);
}

//��
void ContactAdd(Contact* con) {
	assert(con);
	//��ȡ��ϵ����Ϣ
	peoInfo info;
	printf("������Ҫ���ӵ���ϵ�˵���Ϣ��\n");
	AcquireInfo(con, &info);

	//�ѻ�ȡ������Ϣ����ͨѶ¼
	SLPushBack(con, info);
	printf("���ӳɹ���\n");
}

int FindByName(Contact* con, char* name) {
	assert(con && name);
	for (int i = 0; i < con->size; ++i) {
		if (0 == strcmp(name, con->arr[i].name)) {
			return i;
		}
	}
	return -1;
}

//ɾ
void ContactDel(Contact* con) {
	assert(con);
	//��ȡҪɾ�����˵�����
	char name[NAME_MAX];
	printf("������Ҫɾ�����˵�������");
	scanf("%s", name);
	//�ж��Ƿ��ҵ�
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("δ�ҵ���ϵ�ˣ�ɾ��ʧ�ܣ�\n");
		return;
	}
	SLErase(con, findIndex);
	printf("ɾ���ɹ���\n");
}

//��
void ContactModify(Contact* con) {
	assert(con);
	//��ȡҪ�޸ĵ��˵�����
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��˵�������");
	scanf("%s", name);
	//�ж��Ƿ��ҵ�
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("δ�ҵ���ϵ�ˣ��޸�ʧ�ܣ�\n");
		return;
	}
	//��ȡ�޸ĺ����ϵ�˵���Ϣ
	peoInfo info;
	printf("�������޸ĺ����Ϣ��\n");
	AcquireInfo(con, &info);
	con->arr[findIndex] = info;
	printf("�޸ĳɹ���\n");
}

//��
void ContactFind(Contact* con) {
	assert(con);
	//��ȡҪ���ҵ��˵�����
	char name[NAME_MAX];
	printf("������Ҫ���ҵ��˵�������");
	scanf("%s", name);
	//�ж��Ƿ��ҵ�
	int findIndex = FindByName(con, name);
	if (-1 == findIndex) {
		printf("δ�ҵ���ϵ�ˣ�\n");
		return;
	}
	printf("�ҵ���ϵ��,��Ϣ���£�\n");
	printf("============================\n");
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%s %s %d %s %s\n", 
		con->arr[findIndex].name,
		con->arr[findIndex].gender,
		con->arr[findIndex].age,
		con->arr[findIndex].tel,
		con->arr[findIndex].addr);
	printf("============================\n");
}

//��ʾ����ͨѶ¼
void ContactShow(Contact* con) {
	assert(con);
	printf("============================\n");
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0; i < con->size; ++i) {
		printf("%s %s %d %s %s\n", 
			con->arr[i].name, 
			con->arr[i].gender,
			con->arr[i].age, 
			con->arr[i].tel, 
			con->arr[i].addr);
	}
	printf("============================\n");
}