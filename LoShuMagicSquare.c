#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printSquare(int square[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d", square[i][j]);
        }
        printf("\n");
    }
}
 int isMagicSquare(int square[3][3])
 {
     int val=0, tempVal=0;
     //check first row
     for(int i=0; i<3; i++)
     {
         val = val+square[0][i];
     }
     //check second and third row
     for(int i=1; i<3; i++)
     {
         tempVal=0;
         for(int j=0; j<3; j++)
         {
             tempVal=tempVal+square[i][j];
         }
         if(tempVal!=val)
         {
             return 0;
         }
     }
     //check columns
     for(int i=0; i<3; i++)
     {
         tempVal=0;
         for(int j=0; j<3; j++)
         {
             tempVal=tempVal+square[j][i];
         }
         if(tempVal!=val)
         {
             return 0;
         }
     }
     //check diagonals
     tempVal=0;
     for(int i=0; i<3;i++)
     {
         tempVal=tempVal+square[i][i];
     }
     if(tempVal!=val)
     {
         return 0;
     }
     tempVal=square[0][2]+square[1][1]+square[2][0];
     if(tempVal!=val)
     {
         return 0;
     }
     return 1;
 }
 int main()
 {
     int square[3][3];
     int count=0;
     while(1)
     {
         count++;
         int used[10]={0};
         srand(time(0)+count);
         for(int i=0; i<3; i++)
         {
             for(int j=0; j<3; j++)
             {
                 int n=rand()%9+1;
                 while(used[n])
                 {
                     n=rand()%9+1;
                 }
                 square[i][j]=n;
                 used[n]=1;
             }
         }
         //breaks loop when square is found
         if(isMagicSquare(square)==1)
         {
             break;
         }
     }
     printf("No. of Squares Generated: %d\n", count);
     printSquare(square);
     return 0;
 }