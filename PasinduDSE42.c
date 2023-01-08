#include<stdio.h>
void main(){
	int c;
	int *p;
	c=5;
	p= &c;
	*p=15;
	printf("%d\n",c);
	printf("%d\n",*p);
}