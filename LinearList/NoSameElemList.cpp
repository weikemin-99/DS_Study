#include <iostream>
#include <stdlib.h>
#include <malloc.h>
using namespace std; 
//��������n��Ӣ����ĸ�������ʽΪN��C1��C2��....��Cn������N��ʾ��ĸ�ĸ�����
//��������Щ�������ݽ���һ����������Ҫ����ĸ���ظ��Ĵ�������

typedef struct LNode
{
	char data;
	struct LNode*next;
}LNode;

void creatNoSameElemLinkList(LNode *&head) 
{
	head = (LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	LNode *p;
	int n;	//����Ӣ����ĸ����Ŀ 
	char ch;//ÿ���������ĸ
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		while(p!=NULL)
		{
			cin>>ch;
			p=head->next;
			while(p!=NULL)
			{
				if(p->data == ch)
					break;
				p = p->next;	
			}
			if(p==NULL)
			{
				p=(LNode*)malloc(sizeof(LNode));
				p->data = ch;
				p->next = head->next;	
				head->next = p;			
			}			
		}
	} 
}



int main(int argc, char** argv) {
	LNode node;
	creatNoSameElemLinkList(LNode);
	return 0;
}
