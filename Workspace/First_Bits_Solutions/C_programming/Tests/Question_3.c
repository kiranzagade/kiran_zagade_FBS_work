// Create a program to manage a to-do list. Implement a structure to store
// task details (task ID, description, and status). Write a menu-driven
// program to add, update, and display tasks. Use functions for each
// operation.

#include<stdio.h>
typedef struct To_do_list{
    int Task_id;
    char Description[100];
    char status[100];
}To_do_list;

void Add_Task(To_do_list list[], int *count){
    printf("Enter a task Id");
    scanf("%d",&list[*count].Task_id);
    printf("Enter a description ");
    scanf(" %[^\n]",&list[*count].Description);
    printf("Enter a task status");
    scanf(" %[^\n]",&list[*count].status);
    (*count)++;
    printf("Task is added successfully");

};

void update_task(To_do_list list[],int* count){
    int task_id;
    int found = -1;
    printf("Enter a task id to update task id");
    scanf("%d",&task_id);
    for(int i=0;i<*count;i++){
        if(list[i].Task_id == task_id){
        
            printf("Enter a new Description ");
            scanf(" %[^\n]",&list[i].Description);
            printf("Enter a new task status");
            scanf(" %[^\n]",&list[i].status);
            printf("Task is updated successfully");
            break;
            found =1;
        }
        if(found ==-1){
            printf("Not found");
        }
        

          
    }
}


void display(To_do_list list[],int* count){
    for(int i = 0;i<*count;i++){
    printf("Task_Id%d \n",list[i].Task_id);
    printf("Task Description %s\n",list[i].Description);
    printf("Task Status %s\n",list[i].status);
    }
}
void main(){
    To_do_list* list;
    int count =0;
    list[count];
    
int choice;

    do{
    printf("To Do List\n");
    printf("1. Add task\n");
    printf("2. Update task\n");
    printf("3. Display all tasks\n");
    printf("Enter choice ");
    scanf("%d",&choice);
    switch(choice){
        case 0:
            printf("Exit");
        case 1 :{
            Add_Task(list,&count);
            break;
        }
        case 2:{
            update_task(list , &count);
            break;
        }
        case 3 :{
            display(list,&count);
        }

    }
}while(choice !=0);
    

}