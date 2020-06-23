#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,c;
	do{
	printf("請輸入兩個整數:");
	scanf("%d,%d",&x,&y);
	printf("%d/%d=%d\n",x,y,c);
	if(y==0){
		printf("結束");
	}
		c=mod(x,y);
	}while(y!=0);
	return 0;
}
int mod(int x,int y){
int c;
	c=x%y;
	return c;
}
