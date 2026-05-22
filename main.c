#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE* filePtr = NULL;
    char notesDirectory[] = "Notes";
    char command[50];


    char text[] = "Amongus \nbe Sus as hell \n" ;
    
    snprintf(command,sizeof(command),"mkdir %s 2> ''",notesDirectory);
    int status = system(command);

    printf("Welcome to T-G-Notes\n\n\n");

    if (status == 0 || status == 256){
        filePtr = fopen("Notes/note1.md","w");

        if (filePtr == NULL)printf("Note not created\n");
        else{
            fputs(text,filePtr);
            fclose(filePtr);
            printf("Note succesfully created\n");
        }
    }
    else printf("Directory not created \n");
}