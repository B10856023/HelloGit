#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int data[5],i;
	srand(time(NULL));
	for(i=0;i<5;i++){
		data[i]=(rand()%1000)+1;
	}
	printf("排序前\n");
	show(data);
	Sort(data);
	printf("排序後\n");
	show(data);
	system("pause");
	return 0;
}
void show(int a[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d",a[i]);
		printf("\n");
	}
}
void Sort(int a[]){
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=i;j<4;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

