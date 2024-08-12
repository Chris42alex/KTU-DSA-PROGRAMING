#include <stdio.h>
void main()
{
 int n,a[100],search,i,count=0,time=0;
 time=time+2;
 printf("Enter no.of elements");
 time++;
 scanf("%d",&n);
 time++;
 printf("Enter the elements");
 time++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  time++;
 }
 time++;
 printf("Enter number to be searched");
 time++;
 scanf("%d",&search);
 time++;
 for(i=0;i<n;i++)
 {
  time++;
  if(search==a[i])
  {
   printf("Number %d found at position %d\n",search,i+1);
   count++;
   time++;
   time++;
    }
  }
  time++;
  if(count>0)
  {
   printf("Number is found at %d times \n",count);
  } 
  else
  printf("Number not found");
  time++;
  time++;

printf("Space complexity=%d\n",(5*4)+(n*4));
time++;
time++;
printf("time complexity=%d",time+1);
}
 
  
   
