// zuoye1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a;
	scanf("%d",&a);
	printf("ÄãµÄ³É¼¨:");
	switch(a/10)
	{
	case 10:printf("A\n");break;
    case 9:printf("A\n");break;
	case 8:printf("B\n");break;
	case 7:printf("C\n");break;
	case 6:printf("D\n");break;
	case 5:printf("E\n");break;
	case 4:printf("E\n");break;
	case 3:printf("E\n");break;
	case 2:printf("E\n");break;
	case 1:printf("E\n");break;
	case 0:printf("E\n");break;
	default:printf("enter data error");
	}
	return 0;
}

