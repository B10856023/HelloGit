#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct data{
		int name;
		int eng;
		int chi;
		int avg;
	}student[51],change;
int main(int argc, char *argv[]) {
	int i,j;
	srand(time(NULL));
	for(i=1;i<=50;i++){
		student[i].name=i;
		student[i].eng=(rand()%100+1);
		student[i].chi=(rand()%100+1);
		student[i].avg=(student[i].eng+student[i].chi)/2.0;	
		printf("學號:%d 英文:%d 國文:%d 平均:%d\n",student[i].name,student[i].eng,student[i].chi,student[i].avg);
		}
			Sort();
			printf("前十名\n");
	for(i=1;i<=10;i++){
		printf("學號:%d 英文:%d 國文:%d 平均:%d\n",student[i].name,student[i].eng,student[i].chi,student[i].avg);
	}
	return 0;
}
	void Sort(){
		int i,j;
		for(i=1;i<=50;i++){
		for(j=i;j<=50;j++){
			if(student[j].avg>student[i].avg){
				change=student[j];
				student[j]=student[i];
				student[i]=change;
			}
		}
	}	
}


