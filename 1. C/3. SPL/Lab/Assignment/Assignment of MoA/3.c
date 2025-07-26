#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    int age;
};
void addEmployee(struct Employee *EmployeeList, int *numEmployees);
void displayEmployee(struct Employee *Employee_ptr);
void updateEmployeeInfo(struct Employee *EmployeeList, int *numEmployees, char *EmployeeName);
int numEmployees;
int main(){
    struct Employee list[100];
    numEmployees=0;
    int choice;
    do{
    printf("1. Add Employee\n");
    printf("2. Update Employee Information\n");
    printf("3. Display All Employees\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        addEmployee(&list[numEmployees], &numEmployees);
        break;
    case 2:
    char name[20];
    printf("Enter the name of the employee to update: ");
    getchar();
    scanf("%s",name);
    updateEmployeeInfo(list, &numEmployees,name);
        break;
    case 3:
    displayEmployee(list);
        break;
    case 4:
    return 0;
        break;
    }

}while(1);

return 0;
}
void addEmployee(struct Employee *EmployeeList, int *numEmployees){
    printf("Enter details for the new employee: \n");
    printf("Employee ID: ");
    scanf("%d",&EmployeeList[*numEmployees].id);
    getchar();
    printf("Name: ");
    scanf("%s",EmployeeList[*numEmployees].name);
    printf("Age: ");
    scanf("%d",&EmployeeList[*numEmployees].age);
    printf("New employee added.\n");
    *numEmployees=(*numEmployees+1);
}
void updateEmployeeInfo(struct Employee *EmployeeList, int *numEmployees, char *EmployeeName){
    for(int i=0;i<(*numEmployees);i++){
        if(!strcmp(EmployeeList[i].name,EmployeeName)){
printf("Enter new age: ");
scanf("%d",&EmployeeList[i].age);
return;
        }
    }
    strcpy(EmployeeList[*numEmployees].name,EmployeeName);
    printf("Enter new age: ");
scanf("%d",&EmployeeList[*numEmployees].age);
printf("Employee information updated.\n");
*numEmployees=(*numEmployees+1);
}
void displayEmployee(struct Employee *Employee_ptr){
    printf("Employee List:\n");
    for(int i=0;i<numEmployees;i++){
        printf("Employee %d:\n",i+1);
        printf("Employee ID: %d\n",Employee_ptr[i].id);
        printf("Employee Name: %s\n",Employee_ptr[i].name);
        printf("Employee Age: %d\n",Employee_ptr[i].age);
    }
}