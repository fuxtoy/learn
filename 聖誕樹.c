#include<stdio.h>
#include<math.h>
int back(int,int) ;
int main(void)
{
        int L,N,H,R,Ws,Wm,We ;
        printf("enter a number between 1 to 15 = ") ;
        scanf("%d" , &L) ;
        int k,m ;
        k = 0;
        m = (L+1)/2;
        while (k<m+(3*L))//總行數
        {
                k++ ;
                back(L,k);
                printf("\n") ;
        }
}
int back(int a,int b)
{
        int  num1,m,num2,k,z,f,s,l  ;
        m = (a+1)*2+1 ; //總長度
        num1 = 0 ;
        num2 = m/2+1 ; //中間
        k = (a-1)/2 ;//樹幹中間左右兩側
        z = b/3+(b%3!=0); //分辨在哪一段
        f = (z*2-1)/2 ; //起始葉左右兩側
        s = (z*2+1)/2 ;
        l = (z*2+3)/2 ;
        //printf("%d" ,b );
        while (num1<m)
        {
                if ( b>a*3 && num2-k <= num1+1 && num1+1 <= num2+k  )//樹幹
                {
                        printf("*") ;
                          num1++ ;
                }
                else if (b%3 == 1 && b<=a*3 && num2-f <= num1+1 && num1+1 <= num2+f  )//起始葉
                {
                        printf("*") ;
                        num1++ ;
                }
                else if (b%3 == 2 && b<= a*3 && num2-s <= num1+1 && num1+1 <= num2+s) //中間葉
                {
                        printf("*") ;
                        num1++ ;
                }
                else if (b%3 == 0 && b<= a*3 && num2-l <= num1+1 && num1+1 <= num2+l) //最後葉
                {
                        printf("*") ;
                        num1++ ;
                }
                else
                {
                        printf("-") ;
                        num1++ ;
                }

        }

}
                                                                                                                                       