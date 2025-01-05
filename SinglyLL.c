#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *create(){
    Node *node;
    node = (Node*)malloc(sizeof(Node));
    printf("Enter a data : ");
    scanf("%d",&node->data);
    node->next=NULL;
    return node;
}
Node *head=NULL;
void insertStart(Node *temp){
    if(head==NULL)
        head=temp;
    else{
        temp->next=head;
        head=temp;
    }
}

void display(){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}

int main(){
    int ch;
    Node *temp;
    printf("\n1.Insert from start : ");
    printf("\n2.Insert by position : ");
    printf("\n3.Insert from end : ");
    printf("\n4.Delete from start : ");
    printf("\n5.Delete by position : ");
    printf("\n6.Delete by value : ");
    printf("\n7.Delete from end : ");
    printf("\n8.Search : "); 
    printf("\n9.Display : ");
    printf("\n10.Exit : ");
    
    while(1){
        printf("\nEnter your choice : ");
    scanf("%d",&ch);

        switch(ch){
            case 1:
                temp = create();
                insertStart(temp);
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
            break;
            case 9:
                display();
            break;
            case 10:
                exit(0);
            break;
            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}
