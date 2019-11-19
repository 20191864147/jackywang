// zuoye2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{	
	int a,b;
	for(;;){
	scanf("%d",&a);
	if(a<1000){
		b=sqrt(a);
		break;}
	printf("Please input again\n");}
	printf("%d\n",b);
	return 0;
}

