#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node{
    char val;
    struct node *next;
};
struct node *root,*head=NULL,*tail=NULL;
void append(char a){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->val=a;
    if(head==NULL)
    head=tail=newnode;
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
int lenthg(){
    int t=0;
    struct node *temp;
    if(head==NULL)
    return t;
    else if(head->next==NULL)
    return 1;
    else{
        temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
            t++;
        }
    }
    return t+1;
}
void addfront(int a){
    struct node *newnode; 			
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->val=a;
    newnode->next=NULL;
    if(head==NULL)
    head=tail=newnode;
    else{
        newnode->next=head;
        head=newnode;
        
    }
}
void frontdelete(){
    struct node *temp;
    if(head!=NULL){
            temp=head;
            head=head->next;
            free(temp);
    }
}
void display(){
    struct node *temp;

    if(head!=NULL){
        temp=head;
        while(temp->next!=NULL){
            printf("%c",temp->val);
            temp=temp->next;
        }
        printf("%c\n",temp->val);
    }
}
char xorfind(char a,char b){
    if(a==b)
        return '0';
    else
        return '1';
}
void dividin(char a[],int t){
    int f=0;

    for(int i=0;i<t;i++)
    frontdelete();

    for(int i=0;i<strlen(a);i++){
        if(a[i]=='1'){
        f=i;
        break;}
    }
    
    for(int i=t-1;i>=f;i--){
        addfront(a[i]);
        
    }
}
void cal(char a[],int b){
    struct node *temp;
    int t=b;
    char buff[b];
   
    while(lenthg()>=b){
        
        
        temp=head;
        for(int i=0;i<b;i++){
            buff[i]=xorfind(temp->val,a[i]);
            temp=temp->next;
        } 
        dividin(buff,t);
        
    }
    printf("\n\n");
    display();
    
}

void main(){
    
    char a[100],b[100];
    printf("Enter the polynomial in bits ");
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){	
        append(a[i]);
    }
    display();
    printf("Enter the Generator in bits");
    scanf("%s",b);
    cal(b,strlen(b));
}
