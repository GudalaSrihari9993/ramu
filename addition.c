#include<stdio.h>
//#define row 3
//#define col 3
void read1 (int col, int row,int (*dst1)[col]);
void read2 (int col, int row,int (*dst2)[col]);
void addition (int col, int row,int (*dst1)[col],int (*dst2)[col],int (*add)[col]);
main()
{
    int row1=3,col1=3;
    int row2=3,col2=3;
    int (*ptr1)[col1]=(int (*) [col1])malloc(row1*col1*sizeof(int));
    int (*ptr2)[col2]=(int (*) [col2])malloc(row2*col2*sizeof(int));
    int (*ptr3)[col2]=(int (*) [col2])malloc(row2*col2*sizeof(int));
    read1(col1,row1,ptr1);
    read2(col2,row2,ptr2);
    addition(col2,row2,ptr1,ptr2,ptr3);
}
void read1 (int col,int row,int (*dst1)[col])
{
   printf("enter the elements of array1:\n");
   int i,j;
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
         scanf("%d",&dst1[i][j]);
         printf("ramu naidu\n");
     }
   }

}
void read2 (int col,int row,int (*dst2)[col])
{
   printf("enter the elements of array2:\n");
   int i,j;
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
         scanf("%d",&dst2[i][j]);
     }
   }

}
void addition (int col, int row,int (*dst1)[col],int (*dst2)[col],int (*add)[col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           add[i][j]=dst1[i][j]+dst2[i][j];
       }
    
    }
    
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
           printf("%d\t",add[i][j]);
       }
       printf("\n");
    }



}

