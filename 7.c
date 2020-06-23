#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=199,y;
	printf("請輸入購物重量:");
	scanf("%d",&y);
	if(y<=5){
		printf("運費+物流處理費=%d",x+y*50);
	}
	else{
		printf("運費+物流處理費=%d",x+250+(y-5)*30);
	}
	return 0;
}
