#include<stdio.h>
int main(){
  int a[5],i,count;
   for(i=0;i<5;i++){
     scanf("%d",&a[i]);
  }
   for(i=0;i<5;i++){
        if(a[i]%2==0)
       count++;

   }
printf("The count of even value:%d",count);
  return 0;
}
