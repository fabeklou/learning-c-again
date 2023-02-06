#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


// add sou mul div

double add(double num_a, double num_b) {
    return num_a + num_b;
}

double sou(double num_a, double num_b) {
    return num_a - num_b;
}

double mul(double num_a, double num_b) {
    return num_a * num_b;
}

double divi(double num_a, double num_b) {
    return (num_a / num_b);
}

// calculator

void calculator() {
    int ope;
    double num_a, num_b;


    do {
        printf("\nMake a choice of which operation you want to do :\n 1. for adding two numbers, \n 2. for subtraction, \n 3. for multiplication, \n 4. for division, \n\n");
        scanf("%d", &ope);
    } while(ope < 1 || ope > 4);


    printf("\nNow enter the two numbers : \n");
    scanf("%lf%lf", &num_a, &num_b);


    switch(ope) {
        case 1:
            printf("%f added to %f, equal : %f", num_a, num_b, add(num_a, num_b));
            break;
        case 2:
            printf("%f minus  %f, equal : %f", num_a, num_b, sou(num_a, num_b));
            break;
        case 3:
            printf("%f multiplied by %f, equal : %f", num_a, num_b, mul(num_a, num_b));
            break;
        case 4:
            printf("%f divided by %f, equal : %f", num_a, num_b, divi(num_a, num_b));
            break;
        default:
            printf("\nTry again with a number between 1 and 4 ! \n");
            return calculator();
    }

}

// ask for another section

int again() {

    int redo;

    printf("\n\nPlease Enter : \n1. to perform another operation, \n2. if you wanna leave,\n");
    scanf("%d", &redo);

    if (redo == 1) {
        printf("great choice my friend, nice to see you again ! \n\n");
        calculator();
    } else if(redo == 2) {
        printf("We are sade to see you leave ! \n\n");
        return 0;
    } else {
        printf("Oups your input was incorrect, try again ! \n\n");
        return again();
    }
    return 0;
}


// struct

struct Student {
    char name[20];
    int age;
    double gpa;
    char major[20];
};

// main function
int main() {


    // instance of Student
    struct Student student_01;
    student_01.age = 28;
    student_01.gpa = 3.7;
    strcpy(student_01.name, "Fabrice");
    strcpy(student_01.major, "Software Engineering");

    printf("name : %s", student_01.name);

    calculator();
    again();

   return 0;
}
