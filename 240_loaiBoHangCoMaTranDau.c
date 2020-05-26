#include <stdio.h>

int a[100][100];
int sum_row[100], sum_collum[100];
int h,c;
int i = 0, j = 0, index1, index2;
int max1, max2;

void nhap(int a[100][100], int h, int c)
{
     for (i=0; i<h; i++)
     {
          for (j=0; j<c; j++)
               scanf("%d", &a[i][j]);
     }
}

int main()
{
     scanf("%d%d", &h, &c);
     nhap(a, h, c);

     
     // find sum hang
     for (i=0; i<h; i++)
     {
          sum_row[i] =  0;
          for (j=0; j<c; j++)
          {
               sum_row[i] += a[i][j];
          }
     }
 

     for (i=0; i<h; i++){      
         if (sum_row[i] > max1) {
              max1 = sum_row[i];
              index1 = i;
         }
     }

     //=====================================

     

     // find sum cot
     for (i=0; i<c; i++)
     {
          sum_collum[i] = 0;
          for (j=0; j<h; j++)
          {
               sum_collum[i] += a[j][i];
          }
     }
     
 
     
     max2 = sum_collum[0];
     for (i=0; i<c; i++){      
         if (sum_collum[i] > max2) {
              max2 = sum_collum[i];
              index2 = i;
         }
     }

     for (i=0; i<h; i++, putchar('\n'))
     {
          for (j=0; j<c; j++)
               if (i != index1 && j != index2){
                    printf("%d ", a[i][j]);
               }
     }
     
     return 0;
}