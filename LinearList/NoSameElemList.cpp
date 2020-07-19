#include <iostream>
#include <stdlib.h>
#include <malloc.h>
using namespace std; 
//键盘输入n个英文字母，输入格式为N、C1、C2、....、Cn，其中N表示字母的个数。
//请编程以这些输入数据建立一个单链表，并要求将字母不重复的存入链表。

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
	int n;	//输入英文字母的数目 
	char ch;//每次输入的字母
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
