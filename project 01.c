#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient {
    char name[50];
    int age;
    char gender[10];
    char contact[20];
    char medical_history[100];
};

int main() {

 struct patient p;
 int i;
  int num_patients = 0;
  char a[50];
printf("Welcome to ABC Hospital \n ");
       while (1) {
        printf("\nMenu:\n");
        printf("1. Add patient\n");
        printf("2. Edit patient\n");
        printf("3. Exit\n");

        int choice;
        printf("\nEnter choice: ");
        scanf("%d", &choice);

    if(choice==1){

    printf("Enter patient name: ");
    scanf("%s",p.name);
    printf("Enter patient age: ");
    scanf("%d", &p.age);
    printf("Enter patient gender: ");
    scanf("%s", p.gender);
    printf("Enter patient contact information: ");
    scanf("%s", p.contact);
    printf("Enter patient medical history: ");
    scanf("%s", p.medical_history);
    printf("\nPatient Details:\n");
    printf("Name: %s", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", p.gender);
    printf("Contact: %s\n", p.contact);
    printf("Medical history: %s\n", p.medical_history);}

     if (choice == 2) {
            printf("Enter patient name: ");
            scanf("%s", a);
            int i =strcmp(&p.name,a);


if(i==0){
     printf("Enter patient's new age: ");
    scanf("%d", &p.age);
     printf("Enter patient's contact information: ");
    scanf("%s", p.contact);
     printf("Enter patient gender: ");
    scanf("%s", p.gender);
      printf("Enter patient's new medical history: ");
    scanf("%s", p.medical_history);
     printf("Patient's information was  edited.\n");

                }








   }
    else if (choice == 3) {
            printf("Thank you for visiting our website \n");
             break;
        }
}
return 0;}
