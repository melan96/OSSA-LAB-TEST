//OSSA lab test Version H
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
int value;
int main(){
    
    
    printf("Enter an Integer  : \n");
    scanf("%d",&value);

    int pid = fork();
    if(pid == 0){
        value = value *10;
        printf("[CHILD] multply by 10   value :  %d \n",value);
    }else{
        value = value / 5;
        printf("[PARENT] Divided  value :  %d \n",value);
        
    }
    
    
    
}
