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

void insertbyPos(Node *temp,int n){
    int i;
    Node *t1=head;
    if(head==NULL){
        head=temp;
    }else{
        for(i=2;i<n;i++){
            t1 = t1->next;
        }
        temp->next=t1->next;
        t1->next=temp;
    }
}

void insertEnd(Node *temp){
    if(head==NULL){
        head=temp;
    }else{
        Node *t1 = head;
        while(t1->next!=NULL)
            t1=t1->next;
        t1->next=temp;
    }
}

void deleteStart(){
    if(head==NULL)
        printf("No node present in list\n");
    else{
        head=head->next;
    }
}

void display(){
    Node *temp = head;
    if(head==NULL)
        printf("No node present to display\n");
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int ch,n;
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
                temp=create();
                printf("Enter a position : ");
                scanf("%d",&n);
                insertbyPos(temp,n);
            break;

            case 3:
                temp=create();
                insertEnd(temp);
            break;
            
            case 4:
                deleteStart();
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
