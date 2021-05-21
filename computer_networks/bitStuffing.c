#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char a[50];
    int t,x=0;
    printf("Enter the data ");
    scanf("%s",a);
    t=strlen(a);
    printf("asner\n%d ",t);
    for(int i=0;i<t;i++){
        printf("%c",a[i]);
        if(a[i]=='1')
        x++;
        if(a[i]=='0')
        x=0;
        if(x==5){
            printf("0");
            x=0;
        }
       
    }
}
