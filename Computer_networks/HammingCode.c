#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[8],send[12],rec[12];
void sender(){
    int t=0;
    for(int i=11;i>=0;i--){
        if(i!=0 && i!=1 &&  i!=3 && i!=7)
        send[i]=a[t++];
        
    }
    send[0]=send[2]^send[4]^send[6]^send[8]^send[10];
    send[1]=send[2]^send[5]^send[6]^send[9]^send[10];
    send[3]=send[4]^send[5]^send[6]^send[11];
    send[7]=send[8]^send[9]^send[10]^send[11];
    for(int i=11;i>=0;i--){
        printf("%d",send[i]);
    }
    printf("\n");
}
void rev(){
    int r1,r2,r3,r4;
    for(int i=11;i>=0;i--)
    scanf("%d",&rec[i]);
    r1=rec[0]^rec[2]^rec[4]^rec[6]^rec[8]^rec[10];
    r2=rec[1]^rec[2]^rec[5]^rec[6]^rec[9]^rec[10];
    r3=rec[3]^rec[4]^rec[5]^rec[6]^rec[11];
    r4=rec[7]^rec[8]^rec[9]^rec[10]^rec[11];
    int x = r1+r2*2+r3*4+r4*8;
    if(x==0)
    printf("no Error");
    else{
        if(rec[x-1]==0)
        rec[x-1]=1;
        else
        rec[x-1]=0;
    }

    for(int i=11;i>=0;i--)
    printf("%d ",rec[i]);
}
void main(){
    printf("Enter Data ");
    for(int i=0;i<8;i++)
    scanf("%d",&a[i]);
    sender();
    rev();
}
