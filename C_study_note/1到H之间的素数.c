//��1��n֮������� 
int m(int c);
int main(void)
{
    int h,i,j=0;
    scanf ("%d",&h); 
    
    for (i=2; i<=h; ++i)
    {
        if (m(i))
        {
          printf (" %d ",i);
          j++;
        }
    }
    printf ("\n\n1��%d֮��һ����%d��������\n\n",h ,j);

    system ("pause");
    return 0;
} 
int m(int c)
{
    int i;
    for (i=2; i<=c;++i)
        if (c % i == 0)
          break;
    if (i == c)
       return 1;
    else
       return 0;
}
