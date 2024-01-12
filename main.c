#include <stdio.h>
int convertbinary(int);
int main(){
    
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    convertbinary(num);
    
}
int convertbinary(int num){
    if(num>0){
        convertbinary(num/2);
        printf("%d",num%2);
    }
}
