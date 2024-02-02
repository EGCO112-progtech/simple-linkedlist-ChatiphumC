//  main.c
//  simple linkedlist

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char *argv[]) {

    struct node *head, *temp;
    head = (struct node*)malloc(sizeof(struct node));
    temp = head;

    for(int i = 2; i <= 11; i+= 3)
    {
        temp->value = i;
        if(i == 11) temp->next = NULL;
        else{
            temp->next = (struct node*)malloc(sizeof(struct node));
        }
        temp = temp->next;
    }

    temp = head;

    printf("PrintList : ");

    while(temp != NULL){ 
        printf("%5d", temp->value);
        temp = temp->next;
    }
    printf("\n");
    
    temp = head;

    printf("Free      : ");
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        printf("%5d", temp->value);
        free(temp);
    }
    printf("\n");

    return 0;
}
