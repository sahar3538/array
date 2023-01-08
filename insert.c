#include<stdio.h>
int main() {
     int n;
     scanf("%d",&n);
     int arr[n];
     printf("enter elemnets in array:");
     int i;
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     int pos;
     printf("enter position");
     scanf("%d",&pos);
     int ele;
     printf("enter element");
     scanf("%d",&ele);
     for(i=n-1;i>=pos-1;i--){
         arr[i]=arr[i-1];
         arr[pos-1]=ele;
     }
     printf("array after insertion:");
     for(i=0;i<=n;i++){
        printf("%d",arr[i]);
     }
     return 0;
}
