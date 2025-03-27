#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compress(char * input,char * output){
    int i,count=1;
    for(i=1;input[i]!='\0';i++){
        if(input[i]==input[i-1])
        count++;
        else{
            printf("%s%c%d",output,input[i-1],count);
            count=1;
        }
    }
    printf("compressed : %s%c%d",output,input[i-1],count);
    
}
void decompress(char *input,char *output){
    int i,j,count;
    for(i=0,j=0;input[i]!='\0';i+=2){
        count=input[i+1]-'0';
        while(count--)
        output[j++]=input[i];
    }
    output[j]='\0';
   
}
void main(){
    char input[100],output[100];
    printf("enter a string");
    scanf("%s",input);
    compress(input,output);
   
}
