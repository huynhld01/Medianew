#include <stdio.h>

int a[100][100], kq[100];
int sum_row[100], sum_collum[100];
int h,c;
int i = 0, j = 0, index1, index2, k;
int min1, min2;

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
 
     min1 = sum_row[0];
     for (i=0; i<h; i++){      
         if (sum_row[i] > min1) {
              min1 = sum_row[i];
              index1 = i;
         }
     }


     k=0;
     for (i=0; i<h; i++)
     {
          for (j=0; j<c; j++)
               if (i != index1){
                 kq[k] = a[i][j];
                 k+=1;                    
               }
     } 
     k=0;
     for (i=0; i<h-1; i++)
     {
          for (j=0; j<c; j++){
               a[i][j] = kq[k];
               k+=1;
          }
     }
     

     
     for (i=0; i<c; i++)
     {
          sum_collum[i] = 0;
          for (j=0; j<h-1; j++)
          {
               sum_collum[i] += a[j][i];
          }
     }
     
 
     
     min2 = sum_collum[0];
     for (i=0; i<c; i++){      
         if (sum_collum[i] > min2) {
              min2 = sum_collum[i];
              index2 = i;
         }
     }
     k=0;
     for (i=0; i<h-1; i++, putchar('\n'))
     {
          for (j=0; j<c; j++)
               if (j != index2){
                    printf("%d ", a[i][j]);
               }
     }
     
     return 0;
}