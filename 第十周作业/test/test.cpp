// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int y,m,d,t,sum,leap;
	printf("请输入年月日:");
	scanf("%d%d%d",&y,&m,&d);

	switch(m){
	case 1: t=0;break;
	case 2: t=31;break;
	case 3: t=59;break;
	case 4: t=90;break;
	case 5: t=120;break;
	case 6: t=151;break;
	case 7: t=181;break;
	case 8: t=212;break;
	case 9: t=243;break;
	case 10: t=273;break;
	case 11: t=303;break;
	case 12: t=334;break;
	default:printf("输入数据有误");
	}
	sum=t+d;
	if(y%4==0&&y%100!=0||y%400==0)
		leap=1;
	else leap=0;
	if(leap=1&&m>=2)
	sum=t+d+1;
	printf("为一年中的第%d天\n",sum);


	return 0;
}

