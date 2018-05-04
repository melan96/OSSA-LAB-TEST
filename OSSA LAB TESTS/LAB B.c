//OSSA lab test Version B 
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(){
    
    pid_t pid =fork();
    if(pid == 0){
        //child execution block
    }else{
        printf("Child id is :%d",pid);
        wait(NULL);
    }
    
    
    
}