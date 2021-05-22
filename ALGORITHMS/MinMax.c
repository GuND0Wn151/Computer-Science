#include<stdio.h>
#include<stdlib.h>
void MinMax(int a[],int n){
    int min=a[0],max=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("\nMin:= %d, Max:= %d",min,max);
}
void main(){
    int a[10],n;
    printf("Enter the size:= ");
    scanf("%d",&n);
    printf("Enter the Values:= ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The Entered matrix is ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    MinMax(a,n);
