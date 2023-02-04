#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// elemanları rastgele üretilen 5 x 5 boyutlu matrisin izini bul(trace of matrix)
// matrisin asal köşegen üzerindeki elemanlarının toplamı =  matrisin izi
/*
       1 3 0
  A =  2 7 4
       5 1 9
 iz(A) = 1 + 7 + 9 = 17
 */
int main() 

{
    
 int Matris[5][5];
 
 int i,j;
 
 int toplam = 0;
 
 srand(time(NULL)); 
 
  for(i = 0 ; i < 5 ; i++)
  {
   for(j = 0 ; j < 5 ; j++)  
   { 
    Matris[i][j] =  rand()%10;  
    
    printf("%d ",Matris[i][j]);  
   }  
   printf("\n"); 
  } 
  
  for(i = 0 ; i < 5 ; i++)
  {
   for(j = 0 ; j < 5 ; j++) 
   {
     if(i == j)
     {
       toplam += Matris[i][j]; 
     }
   }
  }
  
  printf("\n");
 
  printf("matrisin izi: %d",toplam); 
  
  return 0;
 
}