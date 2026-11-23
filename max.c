#include<stdio.h>
int main(){
  int a[5],i,max;
  float avg;
   for(i=0;i<5;i++){
     scanf("%d",&a[i]);
  }
  max=0;
   for(i=0;i<5;i++){
        if(a[i]>max)

          max=a[i];

   }
printf("The Max of value:%d",max);
  return 0;
}
