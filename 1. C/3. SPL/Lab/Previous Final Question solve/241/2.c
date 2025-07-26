#include <stdio.h>

struct Train {
    char name[100];
    int total_tickets;
    float ratings;
};

int addTrain(struct Train listOfTrains[], int numOfTrains);
void mostPopularTrain(struct Train listOfTrains[], int numOfTrains);
void displayAllTrains(struct Train listOfTrains[], int numOfTrains);

int main() {
    struct Train list[1000];
    int total = 0;

    while (1) {
        int c;
        printf("1. Add a train \n2. Most Popular Train \n3. List of the trains \n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        if (c == 1) {
            total = addTrain(list, total);
        } else if (c == 2) {
            if (total > 0)
                mostPopularTrain(list, total);
            else
                printf("No trains available.\n");
        } else if (c == 3) {
            if (total > 0)
                displayAllTrains(list, total);
            else
                printf("No trains available.\n");
        } else {
            break;
        }
    }

    return 0;
}

int addTrain(struct Train listOfTrains[], int numOfTrains) {
    printf("Name of the train: ");
    scanf(" %[^\n]", listOfTrains[numOfTrains].name);
    printf("Total tickets: ");
    scanf("%d", &listOfTrains[numOfTrains].total_tickets);
    printf("Ratings: ");
    scanf("%f", &listOfTrains[numOfTrains].ratings);

    return numOfTrains + 1;
}

void mostPopularTrain(struct Train listOfTrains[], int numOfTrains) {
    int max = listOfTrains[0].total_tickets;
    int index = 0;

    for (int i = 1; i < numOfTrains; i++) {
        if (listOfTrains[i].total_tickets > max) {
            max = listOfTrains[i].total_tickets;
            index = i;
        }
    }

    printf("Name of the Most Popular Train: %s\n", listOfTrains[index].name);
}

void displayAllTrains(struct Train listOfTrains[], int numOfTrains) {
    for (int i = 0; i < numOfTrains; i++) {
        printf("Name of the train: %s\n", listOfTrains[i].name);
        printf("Total tickets: %d\n", listOfTrains[i].total_tickets);
        printf("Ratings: %.1f\n\n", listOfTrains[i].ratings);
    }
}
