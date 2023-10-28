#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char list[][100]={"Fatma", "Celeste", "Hayriye", "Damlanur", "Taumatawhakatangihangakoauauotamateapokaiwhenuakitanatahu"}; //the last one is an actual name i found on google.
    char longest[50];
    strcpy(longest, list[0]);
    int i;
    for (i=1; i<5; i++){
        if (strlen(list[i])>strlen(longest)){
            strcpy(longest, list[i]);
        }
    }
    printf("The longest name is %s with the length of %lu .", longest, strlen(longest));
    return 0;
}
