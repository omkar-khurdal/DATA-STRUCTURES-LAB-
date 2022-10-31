//heapsort


#include<stdio.h>
#include <string.h>
#define MAX 126
void heapify(int a[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;  
    while(left<n && a[left]>a[largest])
        largest = left;
    while(right<n && a[right]>a[largest])
        largest = right;
    if(i!=largest){
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2;i>=0;i--)
        heapify(a,n,i);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);        
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a,i,0);
    }
}
void main(){
    int n;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers of matrix\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);        
    }
    // printf("Minimum cost = %d",min_cost);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);        
    }
    printf("\n");
    heapsort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);        
    }
    printf("\n");
    
}
