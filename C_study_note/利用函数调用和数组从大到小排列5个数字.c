/*���ú������ú�����Ӵ�С����5�����֡�*/

# include <stdio.h>
# include <conio.h>

void daoxu (int b[5]);
int main (void)
{
     int i;
     int a[5];
     printf ("������Ҫ�����5����\n");
     for (i=0; i<5; ++i)
     {
       scanf ("%d", &a[i]);
       char ah;
       while ((ah = getchar()) != '\n')
         continue;
     }
     
     for(i=0; i<5; ++i) 
        printf ("%d ",a[i]);
         
     printf ("\n");
     
     daoxu(a); 
     
     printf ("\n");

     for(i=0; i<5; ++i) 
      printf ("%d\n",a[i]);
    
   /*  char ah;
     while ((ah = getchar()) != '\n')
       continue; */
     printf ("\n�������������������������");
     getchar ();
     return 0;
}
void daoxu (int b[5])
{
   int i,j,t;

   for (i=0; i<4; i++)
    {
        for (j=i+1; j<5; j++)
        { 
            if (b[i] < b[j])
            {
               t = b[i];
               b[i] = b[j];
               b[j] = t;
            }
        }
    }
    for(i=0; i<5; i++)
       printf ("%d  ",b[i]);   
}

