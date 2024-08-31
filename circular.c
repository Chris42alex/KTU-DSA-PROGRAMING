#include <stdio.h>
int front = -1 ;
int rear = -1;
int enqueue(int cq[15], int max,int item) {
   
    if(front==-1&&rear==-1)
    {
    front=0;
    rear=0;
    queue[rear]=item
    }
    else if(front==(rear+1)%max)
     {
     printf("Queue overflow");
     }
     else 
    {
        rear=(rear+1)%max;
        printf("Enter the element to be imserted: ");
        scanf("%d",&item);
        cq[rear]=item;
    }
   
}

int dequeue(int cq[15],int max,int item) {
    if (front ==-1 && rear==-1) {
        printf("Queue underflow\n");
    } 
     else if(rear==front)
     {
     front=rear=-1;
     }
    {
     item=cq[front];
     front=rear=-1;
    }    
    else {
        
        printf("Deleted element is %d\n", cq[front]);
        front=(front+1)%max;
    }
}

int display(int cq[15]) {
    printf("\nThe elements in the queue are: ");
    if (front==-1) {
        printf("Queue is empty\n");
    } 
   
    else {
        for (int i = front; i <= rear; i++) {
            printf(" %d\t", cq[rear]);
        }
        printf("\n");
    }
}

int main() {
    int max, option,item;
    int cq[15];
    int front = -1, rear = -1;
    char ch = 'y';

    printf("Enter the size of the queue: ");
    scanf("%d", &max);

    do {
        printf("\n*****QUEUE OPERATIONS*******\n");
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                enqueue( cq,max,item);
                break;
            case 2:
                dequeue(cq,max,item);
                break;
            case 3:
                display( cq);
                break;
            default:
                printf("\nInvalid option\n");
        }

        printf("\nDo you want to continue(Y/N)? ");
        getchar();
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');

    printf("\nExiting...\n");
    return 0;
}

