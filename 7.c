#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=199,y;
	printf("�п�J�ʪ����q:");
	scanf("%d",&y);
	if(y<=5){
		printf("�B�O+���y�B�z�O=%d",x+y*50);
	}
	else{
		printf("�B�O+���y�B�z�O=%d",x+250+(y-5)*30);
	}
	return 0;
}
