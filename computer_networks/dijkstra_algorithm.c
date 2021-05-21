#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int val[10],x,start,a[10][10],n,visited[10]={0},path[10]={0};
int st;
void dijik(){
    for(int sdfd=0;sdfd<n;sdfd++){
        x=start;
        
        int min =99999;
        for(int i=0;i<n;i++){
            if(val[start]+a[start][i]<val[i]){
                val[i]=val[start]+a[start][i];
                //int pr=path[i]*10+start;
                if(start==st){
                    path[i]=start+1;
                }
                else{
                    path[i]=path[start]*10+start+1;
                    
                }
                //int pr=path[i]*10+path[start]+start;
                printf("xx%dxx%dxx%d\n",start,i,path[i]);
                
            }
        }
        visited[start]=1;
        for(int i=0;i<n;i++){
            if(val[i]<min && visited[i]==0){
            start=i;
            min = val[i];}
        }
            
        
        
    }
    // printf("\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",val[i]);
    // }
    // printf("\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",path[i]);
    // }
    printf("\n");
    for(int i=0;i<n;i++){
        if(val[i]!=999999 && i!=st){
            printf("%d",i);
            while(path[i]>0){
                int tr=path[i]%10;
                printf("<-%d",tr-1);
                path[i]=path[i]/10;
            }
            printf("  %d\n",val[i]);
        }
        
    }
    
}

void main(){
    printf("Enter the No of Elements: ");
    scanf("%d",&n);
    printf("Enter the Values: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){    
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            a[i][j]=999999;
        }
    }
   
    
    printf("Enter Staring Vertex(From 0 to n-1): ");
    scanf("%d",&start);
    st=start;
    
    for(int i=0;i<n;i++){
        if(i!=start)
        val[i]=999999;
        else
        val[i]=0;
    }
    dijik();
}
