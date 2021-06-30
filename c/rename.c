#include<stdio.h>
int main()
{
	rename("fred.text", "new.text");
	//printf("%d\n",rename("fred.text", 'new.text'));
	return 0;
}