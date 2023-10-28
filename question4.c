#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
};

int main(){
    struct Student students[5]={
        {"Fiona",20},
        {"Yildiz",22},
        {"Beren",19},
        {"Lena",21},
        {"Enes",18},
    };

    char findname[50];
    printf("Enter the name of the student:");
    scanf("%s",findname);

    int found=0, i;
    for (i=0; i<5; i++){
        if(strcmp(findname, students[i].name)==0){
            printf("The student you're looking for:\n");
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            found=1;
            break;
        }
    }

    if (!found)
        printf("Couldn't find a student with the name you entered.\n");
    
    return 0;
}


