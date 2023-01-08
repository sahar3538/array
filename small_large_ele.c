#include<stdio.h>
int main() {
     int n,large,small;
     scanf("%d",&n);
     int arr[n];
     printf("enter elemnets in array:");
     int i;
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     large=small=arr[0];
     for(int i=1;i<n;i++){
         if(arr[i]>large)
            large=arr[i];
         if(arr[i]<small)
            small=arr[i];
     }
     printf("smallest element:%d\n",small);
     printf("largest element:%d",large);
     return 0;
}
