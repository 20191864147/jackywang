// zuoye3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x,y;
	printf("����x:");
	scanf("%d",&x);
	if(x<1){
		y=x;}
	else if(1<=x<10){
		y=2*x-1;}
	else if(x>=10){
		y=3*x-11;}
	printf("%d\n",y);
	return 0;
}

