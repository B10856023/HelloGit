#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("�п�Jx,y�y�Э�:");
	scanf("%f,%f",&x,&y);
	if(x==0&&y!=0){
	printf("�y�Цby�b�W");	
	}
	else if (x!=0&&y==0){
	printf("�y�Цbx�b�W");	
	}
	else if(x==0&&y==0){
		printf("�y�Цb���I");
	}
	if(x>0&&y>0){
		printf("�y�Цb�Ĥ@�H�u");
	}
	else if (x>0&&y<0){
		printf("�y�Цb�ĥ|�H��");
	}
	else if(x<0&&y>0){
		printf("�y�Цb�ĤG�H��");
	}
	else if(x<0&&y<0){
		printf("�y�Цb�ĤT�H��");
	}
	return 0;
}
