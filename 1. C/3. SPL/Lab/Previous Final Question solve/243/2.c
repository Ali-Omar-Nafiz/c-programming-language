#include<stdio.h>
struct Student{
	char name[50];
	int id;
	float marks[5];
	float average;
};
void addStudent(struct Student list[]);
void displayAll(struct Student list[]);
void findTopPerformer(struct Student list[]);
void findFailingStudent(struct Student list[]);
int numOfStudent=0;
int main(){
	struct Student list[100];
	do{
	int choice;
	printf("Student Performance Management System\n");
    printf("1. Add a new student\n");
    printf("2. Display all students\n");
    printf("3. Find top performer\n");
    printf("4. Find failing students\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:addStudent(list);
    	break;
    case 2:displayAll(list);
    	break;
    case 3:findTopPerformer(list);
    	break;
    case 4:findFailingStudent(list);
    	break;
    case 5:printf("Exiting...");break;
    }
	}while(1);
    return 0;
}
void addStudent(struct Student list[]){
	printf("Enter Student Name:\n");
	getchar();
	fgets(list[numOfStudent].name,50,stdin);
	printf("Enter Student ID:\n");
	scanf("%d",&list[numOfStudent].id);
	printf("Enter marks of five subjects:\n");
	float sum=0;
	for(int i=0;i<5;i++){
		scanf("%f",&list[numOfStudent].marks[i]);
		sum+=list[numOfStudent].marks[i];
	}
	list[numOfStudent].average=sum/5;
	printf("Student Added Successfully\n");
	numOfStudent++;
}
void displayAll(struct Student list[]){
	printf("Student Records:\n");
	for(int i=0;i<numOfStudent;i++){
		printf("ID: %d, Name: %s, Marks: [",list[i].id,list[i].name);
		for(int j=0;j<5;j++){
			printf("%.1f,",list[i].marks[j]);
		}
		printf("], Average: %f\n",list[i].average);
	}
}
void findTopPerformer(struct Student list[]){
    float max=list[0].average;
    int index=0;
	for(int i=0;i<numOfStudent;i++){
		if(list[i].average>max){
			max=list[i].average;
			index=i;
		}
	}
	printf("Top Performer: %s\n",list[index].name);
}
void findFailingStudent(struct Student list[]){
	printf("Failing Students: \n");
	for(int i=0;i<numOfStudent;i++){
		int count=0;
		for(int j=0;j<5;j++){
			if(list[i].marks[j]==0){
				count++;
			}
		}
		if(count){
			printf("ID: %d, Name: %s, Failed Subjects: %d\n",list[i].id,list[i].name,count);
		}
	}
}
