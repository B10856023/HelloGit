#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("輸入兩個數字:");
	scanf("%d,%d",&x,&y);
	int sum=x*y;
	printf("\nA=%d,B=%d",x,y);
	while(x>0&&y>0){
		if(x>y){
			x=x%y;
		}
		else{
			y=y%x;
		}
	}
	if(x==0){
		printf("\nlcd:%d",y);
		printf("\ngcd:%d",sum/y);
	}
	else{
		printf("\nlcd:%d",x);
		printf("\ngcd:%d",sum/x);
	}
	return 0;
}
