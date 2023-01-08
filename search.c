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
     int ele;
     printf("enter element");
     scanf("%d",&ele);
     for(i=0;i<n;i++){
         if(arr[i]==ele){
            printf("%d found",ele);
         }
     }
     return 0;
}
