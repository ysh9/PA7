#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient {
        char name[20];
        int age;
        int arrivalTime;
        struct patient *left;
        struct patient *right;
};

struct stack_t {
        char name[20];
        int age;
        int arrivalTime;
};

struct stack_t *stack[100];


void newArrival (char name[], int age);
struct patient getNextPatient();
