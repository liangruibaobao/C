#include"LinkList.h"
Node *list;
void test()
{
	InitLinkList(&list);
	ListPushBack(&list, 1);
	ListPushBack(&list, 2);
	ListPushBack(&list, 3);
	ListPushBack(&list, 4);
	ListPushBack(&list, 5);
	ListPushBack(&list, 6);
	ListPushBack(&list, 3);
	PrintLinkList(&list);
	/*ListPopBack(&list);
	PrintLinkList(&list);
	ListPopFront(&list);
	PrintLinkList(&list);*/
	
	/*ListInsert(&list, p, 7);
	PrintLinkList(&list);*/
	/*Node *p = ListFind(&list,4);
	ListErase(&list, p);
	PrintLinkList(&list); */
	/*ListRemove(&list, 3);
	PrintLinkList(&list);*/
	ListRemoveAll(&list, 3);
	PrintLinkList(&list);


}
void test1()
{
	InitLinkList(&list);
	ListPushFront(&list, 1);
	ListPushFront(&list, 2);
	ListPushFront(&list, 3);
	ListPushFront(&list, 4);
	ListPushFront(&list, 5);
	ListPushFront(&list, 6);
	PrintLinkList(&list);

}

int main()
{
	
	test();
	return 0;
}