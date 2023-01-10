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
     printf("reversed array:");
     for(i=n-1;i>=0;i--){
         printf("%d",arr[i]);
     }
     return 0;
     }    
