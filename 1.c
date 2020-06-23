#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("請輸入一個整數:");
	scanf("%d",&x);
	printf("f(%d)=2f(%d-1)-5=%d",x,x,f(x));
	return 0;
}
int f(int x){
	if(x==0){
		return 3;
	}	
		else{
			return 2*f(x-1)-5;
		}
	
}
