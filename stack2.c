#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int stack[256];
int count = 0;

void push(int x){
    stack[count] = x;
    count++;
}

int pop(){
    int res = stack[count - 1];
    count --;
    return res;
}

int main(){
    push(1);
    push(2);
    push(3);
    pop();

    printf("%d",count);
    return 0;
}
