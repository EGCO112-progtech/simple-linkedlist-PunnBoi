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
    int c=5;
    struct node a,b,d,z,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    b.next = &d;

    d.value=head->next->value+3;
    d.next = NULL;

    a.prev=&z;
    z.value=head->value-3;
    z.next=&a;

    z.prev=NULL;
    b.prev=&a;
    d.prev=&b;

    printf("%d ", head ->prev->value );
    printf("%d ", head ->value ); //what value for 5
    printf("%d ", head ->next->value ); //what value for 8
    printf("%d\n", head->next->next->value);
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    head=&z;
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%-d ", tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
        printf("\n");
    tmp=head;
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
        while(1)
        {
            printf("%-d ", tmp->value);
            if(tmp->next==NULL) break;
            tmp=tmp->next;
           // What is missing???
        }
        printf("\n");
    //
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
     typedef struct node* nodePtr;
     nodePtr heed, temp;
     heed= (nodePtr)malloc(sizeof(struct node));
     temp=heed;
     heed->value=2;
     int m=4;
     for(i=0;i<m;i++)
     {
        printf("%d ",temp->value);
        if(i==m-1)break;
        temp->next=(nodePtr)malloc(sizeof(struct node));
        temp->next->value=temp->value+3;
        temp=temp->next;
     }
     printf("\n");
     


    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
     temp=heed;
     for(i=0;i<4;i++)
     {
        temp=heed;
        heed=heed->next;
        free(temp);
        printf("%-2d ",temp->value);
     }
     printf("\n");
    
    return 0;
}
