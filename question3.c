#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int stnumber;
    char name[50];
    int age;
    struct Student *next;
};

struct Student *addnewstudent(int stnumber, char name[], int age){
    struct Student *newstudent = (struct Student*)malloc(sizeof(struct Student));
    newstudent->stnumber=stnumber;
    strcpy(newstudent->name, name);
    newstudent->age=age;
    newstudent->next=NULL;
    return newstudent;
}

int main(){
    struct Student *head=NULL;
    struct Student *current=NULL;
    struct Student *st1=addnewstudent(7628, "Lena", 19);
    struct Student *st2=addnewstudent(1396, "Mary", 17);
    struct Student *st3=addnewstudent(3254, "Jasmine", 23);
    struct Student *st4=addnewstudent(7456, "Mikey", 18);
    struct Student *st5=addnewstudent(5780, "Finger", 21);
    head=st1;
    st1->next=st2;
    st2->next=st3;
    st3->next=st4;
    st4->next=st5;
    int countstudent=0;
    current=head;
    printf("   Name Age Student Number\n");
    while(current!=NULL){
        printf("%d - %s %d %d\n",countstudent+1, current->name, current->age, current->stnumber);
        current=current->next;
        countstudent++;
    }

    return 0;
}

