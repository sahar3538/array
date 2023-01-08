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
     for(i=pos-1;i<n-1;i++){
         arr[i]=arr[i+1];
     }
     printf("array after deletion is:");
     for(i=0;i<=n-2;i++){
        printf("%d",arr[i]);
     }
     return 0;
}
