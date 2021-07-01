#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char start,end,a[100];
    printf("\nEnter the starting delimiter ");
    scanf("%c",&start);
    printf("\n");
    printf("Enter the ending delimiter ");
    scanf(" %c",&end);
    printf("\nEnter data ");
    scanf("%s",a);
    int t=strlen(a);
    printf("%c",start);
    for(int i=0;i<t;i++){
        printf("%c",a[i]);
        if(a[i]==end)
        printf("%c",end);
        if(a[i]==start)
        printf("%c",start);
    }
    printf("%c",end);
    
}
