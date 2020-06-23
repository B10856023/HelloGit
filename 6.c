#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("請輸入x,y座標值:");
	scanf("%f,%f",&x,&y);
	if(x==0&&y!=0){
	printf("座標在y軸上");	
	}
	else if (x!=0&&y==0){
	printf("座標在x軸上");	
	}
	else if(x==0&&y==0){
		printf("座標在原點");
	}
	if(x>0&&y>0){
		printf("座標在第一象線");
	}
	else if (x>0&&y<0){
		printf("座標在第四象限");
	}
	else if(x<0&&y>0){
		printf("座標在第二象限");
	}
	else if(x<0&&y<0){
		printf("座標在第三象限");
	}
	return 0;
}
