#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef int ElementType;
typedef struct LNode List;
struct LNode{
	ElementType Data[MAXSIZE];
	int Last;
};
struct LNode L;
//List *Ptrl;

List MakeEmpty()
{
	List *Ptrl;
	Ptrl = (List*)malloc(sizeof(struct LNode));
	Ptrl->Last = -1;
	return *Ptrl;	
}
void f(int x)
{
	return;	
}


int main(){
	int a = 10;
	f(a);
	
	return 0;
}
