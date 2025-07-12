#include<stdio.h>
#include<string.h>
struct player{
	int id;
	char name[50];
	int scores[5];
	char status[15];
};
int calculateTotal(struct player p);
void displayAll(struct player players[],int n);
void displayPrizeAndAlive(struct player players[],int n);
int main(){
	int n;
	printf("---Squid Game,UIU---\n");
	printf("Enter number of players: ");
	scanf("%d",&n);
	struct player list[n];
	for(int i=0;i<n;i++){
		printf("Enter the details of player: %d\n",i+1);
		printf("Enter ID : ");
		scanf("%d",&list[i].id);
		printf("Enter name: ");
		getchar();
		fgets(list[i].name,50,stdin);
		printf("Enter scores for five games separated by space: ");
		for(int j=0;j<5;j++){
			scanf("%d",&list[i].scores[j]);
		}
	}
	printf("---Squid Game,UIU---\n");
	int choice;
	printf("1. Update player status based on Total Scores.\n");
	printf("2. Search player by ID\n");
	printf("3. Display All Players\n");
	printf("4. Display Total Prize money and Alive Players\n");
	printf("5. Exit\n");
	do{
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:printf("Choice {%d}\n",choice);
		for(int i=0;i<n;i++){
		int sum=0;
		sum=calculateTotal(list[i]);
		if(sum>249)strcpy(list[i].status,"Alive");
	    else strcpy(list[i].status,"Eleminated");
	}
		break;
	case 2:printf("Choice {%d}\n",choice);
		int searchId;
		printf("Enter the ID: ");
		scanf("%d",&searchId);
		for(int i=0;i<n;i++){
			if(list[i].id==searchId){
				printf("Name: %s, Status: %s\n",list[i].name,list[i].status);
			}
		}
		break;
	case 3:printf("Choice {%d}\n",choice);
		displayAll(list, n);
		break;
	case 4:printf("Choice {%d}\n",choice);
		displayPrizeAndAlive(list, n);
		break;
	case 5:printf("Choice {%d}\n",choice);
		printf("Exiting...");
		break;
	}
}while(choice!=5);
return 0;
}
int calculateTotal(struct player p){
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=p.scores[i];
	}
	return sum;
}
void displayAll(struct player players[],int n){
	printf("ID    Name    Total Scores     Status\n");
	printf("-------------------------------------\n");
	for(int i=0;i<n;i++){
		printf("%d    %s    %d    %s\n",players[i].id,players[i].name,calculateTotal(players[i]),players[i].status);
	}
}
void displayPrizeAndAlive(struct player players[],int n){
	int totalEli=0;
	for(int i=0;i<n;i++){
		if(!(strcmp(players[i].status,"Eleminated")))totalEli++;
	}
	printf("Total prize money from eliminated players: %d units\n",(totalEli*5000));
	printf("Alive Players: ");
	for(int i=0;i<n;i++){
		if(!(strcmp(players[i].status,"Alive"))){
			printf("-(%d) %s\n",players[i].id,players[i].name);
		}
	}
}
