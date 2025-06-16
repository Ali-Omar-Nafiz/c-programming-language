#include <stdio.h>
#include <string.h>

struct patient
{
    char Name[20];
    int Age;
    char Gender;
    int ID;
    char Condition[10000];
};

int add_new(struct patient list[], int total_patient);
void search_patient(struct patient list[], int total_patient);
void Update_Patient(struct patient list[], int total_patient);
void Display(struct patient list[], int total_patient);

int main()
{
    int total_patient = 0;
    struct patient list[100];

    do
    {
        printf("1. Add a New Patient\n2. Search for Patients by ID\n3. Update Patient Condition by ID\n4. Display the List of All Patients\n5. Exit\nEnter your choice: ");
        int c;
        scanf(" %d", &c);
        getchar();

        if (c == 1)
        {
            total_patient = add_new(list, total_patient);
        }
        else if (c == 2)
        {
            if (total_patient > 0) search_patient(list, total_patient);
            else
            {
                printf("No patient available!");
                break;
            }
        }
        else if (c == 3)
        {
            if (total_patient > 0) Update_Patient(list, total_patient);
            else
            {
                printf("No patient available!");
                break;
            }
        }
        else if (c == 4)
        {
            if (total_patient > 0) Display(list, total_patient);
            else
            {
                printf("No patient available!");
                break;
            }
        }
        else break;
    }
    while (1);

    return 0;
}

int add_new(struct patient list[], int total_patient)
{
    printf("Enter patient name: ");
    scanf(" %[^\n]s", list[total_patient].Name);
    getchar();

    printf("Enter patient age: ");
    scanf(" %d", &list[total_patient].Age);
    getchar();

    printf("Enter patient gender(M/F): ");
    scanf(" %c", &list[total_patient].Gender);
    getchar();

    printf("Enter patient ID: ");
    scanf(" %d", &list[total_patient].ID);
    getchar();

    printf("Enter patient condition: ");
    scanf(" %[^\n]s", list[total_patient].Condition);
    getchar();

    return total_patient + 1;
}

void search_patient(struct patient list[], int total_patient)
{
    int id;
    printf("Enter patient ID to search: ");
    scanf(" %d", &id);
    getchar();

    for (int i = 0; i < total_patient; i++)
    {
        if (list[i].ID == id)
        {
            printf("Patient name: %s\n", list[i].Name);
            printf("Patient age: %d\n", list[i].Age);
            printf("Patient gender: %c\n", list[i].Gender);
            printf("Patient condition: %s\n", list[i].Condition);
            break;
        }
    }
}

void Update_Patient(struct patient list[], int total_patient)
{
    int id;
    printf("Enter patient ID to update: ");
    scanf(" %d", &id);
    getchar();

    for (int i = 0; i < total_patient; i++)
    {
        if (list[i].ID == id)
        {
            char up[1000];
            printf("Enter new condition: ");
            scanf(" %[^\n]s", up);
            getchar();
            strcpy(list[i].Condition, up);
            break;
        }
    }
}

void Display(struct patient list[], int total_patient)
{
    printf("Patient Records: \n");
    for (int i = 0; i < total_patient; i++)
    {
        printf("ID: %d, Name:%s, Age:%d,Gender:%c,Condition:%s\n\n", list[i].ID, list[i].Name, list[i].Age, list[i].Gender, list[i].Condition);
    }
}
