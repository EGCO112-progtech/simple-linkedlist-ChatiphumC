//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int k=5;
    struct node a,b,*head ;
    a.value = k;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    //printf("1st node : %d\n", head ->value ); //what value for 5
    //printf("2nd node : %d\n", head ->next->value); //what value for 8

/*  Exercise I
    1. Add 1 more node at the end
    2. Add value(11)
    3. Make next become NULL
    4. Print using head
 */

    struct node c;
    b.next = &c;
    c.value = 11;
    c.next = NULL;

    //printf("3rd node : %d\n", head->next->next->value);

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    struct node d;
    d.next = &a;
    d.value = 2;
    head = &d;

    // printf("before 1st node : %d\n", head ->value );
    // printf("1st node : %d\n", head ->next->value );
    // printf("2nd node : %d\n", head ->next->next->value );
    // printf("3rd node : %d\n", head ->next->next->next->value );

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
    
        
    /*  Exercise III Use loop to print everything */

    /*int i,n=4;
    for(i=0;i<n;i++){
        printf("%d\n", tmp->value);
        tmp = tmp->next;
        //if(tmp->next == NULL) break;
    }*/
    
    tmp = head; // reset temp to head

   /*  Exercise IV change to while loop!! (you can use NULL to help) */
       
    /*while(tmp != NULL){
        printf("%5d", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");*/
    
    /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
    
    */

    struct node *head1, *temp1;
    head1 = (struct node*)malloc(sizeof(struct node));
    temp1 = head1;

    for(int i = 2; i <= 11; i+= 3)
    {
        temp1->value = i;
        if(i == 11) temp1->next = NULL;
        else{
            temp1->next = (struct node*)malloc(sizeof(struct node));
        }
        temp1 = temp1->next;
    }

    /*                     
    struct node *head1, *temp1;
    head1 = (struct node*)malloc(sizeof(struct node));
    temp1 = head1;
    temp1->value = 2;
    
    temp1->next = (struct node*)malloc(sizeof(struct node));
    temp1 = temp1->next;
    temp1->value = 5;

    temp1->next = (struct node*)malloc(sizeof(struct node));
    temp1 = temp1->next;
    temp1->value = 8;

    temp1->next = (struct node*)malloc(sizeof(struct node));
    temp1 = temp1->next;
    temp1->value = 11;

    temp1->next = NULL;
 */
    temp1 = head1;
    
    //temp1->next = (struct node*)malloc(sizeof(struct node));

    //int i = 0;

    /*while(i < 3)
    {
        temp1->next = (struct node*)malloc(sizeof(struct node));
        temp1 = temp1->next;
        i++;
    }*/
    

    /*while(head1 != NULL){ 
        printf("%5d", head1->value);
        head1 = head1->next;
    }
    printf("\n");*/

    printf("PrintList : ");

    while(temp1 != NULL){ 
        printf("%5d", temp1->value);
        temp1 = temp1->next;
    }
    printf("\n");
    
    temp1 = head1;

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    printf("Free      : ");
    while(head1 != NULL)
    {
        temp1 = head1;
        head1 = head1->next;
        printf("%5d", temp1->value);
        free(temp1);
    }
    printf("\n");


    /*head1 = head1->next;
    free(temp1);
    temp1= head1;
    head1 = head1->next;
    free(temp1);
    temp1= head1;
    head1 = head1->next;
    free(temp1);
    temp1= head1;
    head1 = head1->next;
    free(temp1);
    temp1= head1;*/
    
    return 0;
}
