#include <stdio.h>                                                                                              
void main()
{
 int r,c,i,j,s[10][10],k=1,co[10][3];
 printf("Enter row and column");
 scanf("%d%d",&r,&c);
 printf("Enter elements to matrix");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d/t",&s[i][j]);
  }
 }
 printf("Orginal Matrix\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",s[i][j]);
  }
   printf("\n");
 }
 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    if(s[i][j]!=0)
    {
     co[k][0]=i;
     co[k][1]=j;
     co[k][2]=s[i][j];
     k++;
    }
   }
  }
  co[0][0]=r;
  co[0][1]=c;
  co[0][2]=k-1;
  printf("Sparse Matrix\n");
  for(i=0;i<k;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",co[i][j]);
  }
   printf("\n");
 }
  
}
   
   
 
 
 

   

 
  
  
