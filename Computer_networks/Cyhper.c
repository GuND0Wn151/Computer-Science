#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[20];
void Decrypt(int n,int f){
    int t=0;
    for(int i=0;i<n;i++){
        t=0;
        int x=(int)a[i]-f;
        if(x>90 && x<97)
        x=122-(97-x)+1;
        else if (x<65)
        x=90-(65-x)+1;
        printf("%c",(char)x);
    }
    
}
void Encrypt(int n,int f){
    int t=0,x;

    for(int i=0;i<n;i++){
        t=0;
        int x=(int)a[i]+f;
        if(x>90 && x<=97)
        x=x-91+65;
        else if (x>122)
        x=x-123+97;
        printf("%c",(char)x);
        a[i]=(char)x;
    }
    printf("\n");
    Decrypt(n,f);
}


int main(){
    int n;
    printf("Enter the data: ");
    scanf("%s",a);
    printf("ENter Value: ");
    scanf("%d",&n);
    for(int i=0;i<strlen(a);i++){
        printf("%c",a[i]);
    }
    printf("\n");
    Encrypt(strlen(a),n);
    return 0;
}
