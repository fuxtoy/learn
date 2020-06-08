#include<stdio.h>
#include<string.h>
#include<math.h>
int square (int a , int b )
{
        int ans=1,i ;
        for ( i= 0 ; i< b ; i ++ )
        {
                ans = ans * a ;
        }
        return ans ;
}
int play ( int a ,int b ,int count )
{
        int ans , i ;

        count ++ ;
        if (count = 1 )
        {
                ans = 10 - b + a ;
        }
        if (count >1 )
        {
                ans = 9 - b + a ;
        }




        return ans ;
}
int main()
{
        char num1[71] , num2[71] , num , new[71] ,swap[71] ,enter[71] , head[71] , body[71] , teil[1]   ;
        int i ,j,l, arr1[71],arr2[71],sum,ans=0, count = 0  , ans1 , ans2, fin[70]    ;
         printf("輸入小於70位的數字(被減數)") ;
        scanf("%s" , &num1) ;
        printf("輸入小於70位的數字(減數)") ;
        scanf(" %s" , &num2 ) ;
//      printf("%s\n%s\n" , num1 , num2 ) ;



        if (strlen(num1) < strlen(num2) )
        {
                strcpy(new, num1 ) ;
                strcpy(num1, num2 ) ;
                strcpy(num2 , new) ;
                for ( i = 0 ; i < strlen(num1) ; i++ )
                {
                        arr1[i] = num1[strlen(num1)-i-1]  ;
                }
                for ( i = 0 ; i< strlen(num2) ; i++ )
                {
                        arr2[i] = num2[strlen(num2)-i-1] ;
                }
                for (i=0 ; i<strlen(num1); i++ )
                {

                        sum = arr1[i] - arr2[i] ;


                        if (i > 0 && !( i > strlen(num2)-1))
                        {
                                if (sum <0 )
                                {
                                        ans1 = play(  arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                 if (sum <0 )
                                {
                                        ans1 = play(  arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                        ans1 = sum ;
                                }
                                fin[i] = ans1 ;
                        //      printf("%d\n" , fin[i] ) ;
                        }
                        if (i == 0 )
                        {
                                if (sum < 0 )
                                {
                                        ans2 = play (arr1[i] , arr2[i] ,count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                        ans2 = sum ;
                                }
                                fin[i] = ans2 ;
                        //      printf("%d\n" , fin[i] ) ;

                        }
                         if ( i > strlen(num2)-1 )
                        {

                                fin[i] = arr1[i] - 48 ;
                        //      printf("%d\n" , fin[i] ) ;
                        }

                }
                printf("-") ;
                for ( i = strlen(num1)-1 ; i >=0 ; i-- )
                {
                        printf( "%d",fin [i] )  ;
                }
        }
        else if ( strlen(num1) == strlen(num2) )
        {
                for ( i = 0 ; i < strlen(num1) ; i++ )
                {
                        arr1[i] = num1[strlen(num1)-i-1] ;
                }
                for ( i = 0 ; i < strlen(num2) ; i ++ )
                {
                        arr2[i] = num2[strlen(num2) - i -1] ;
                }
                for ( i = 0 ; i < strlen(num1) ; i ++ )
                {
                        sum = arr1[i]- arr2[i] ;

                        if  ( i >0 && arr1[strlen(num1)+1] < arr2[strlen(num2)+1] && i != strlen(num1)+1)
                        {
                                sum = arr2[i] - arr1[i] ;
                                if ( sum < 0 )
                                {

                                        ans1 = play(arr2[i] , arr1[i] , count ) ;
                                         arr2[i+1] -- ;
                                }
                                else
                                {
                                        ans1 = sum ;
                                }
                                fin [i] = ans1 ;
                        }
                        if ( i> 0 && i != strlen(num1)-1 )
                        {


                                if ( sum < 0 )
                                {
                                        ans1 = play(arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                        ans1 = sum  ;
                                }
                                fin[i] = ans1 ;
                        //      printf("%d\n", fin[i] )  ;
                                        //printf("%d\n" , arr1[strlen(num1)+1] )  ;
                                        //ans = ans + (sum * square(10 , i )) ;
                        }
                        else if ( i == 0 )
                        {
                                if (sum < 0 )
                                {
                                        ans2= play(arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                         ans2 = sum ;
                                }
                                fin [i] = ans2 ;
                        //      printf("%d\n" , fin[i] ) ;
                        }
                        if ( i == strlen(num1) -1 )
                        {
                                if (sum < 0 )
                                {
                                        fin[i] = arr2[i] - arr1[i] ;
                                }
                                else
                                {
                                        fin [i] = sum ;
                                }
                        //      printf("%d\n" ,fin[i] ) ;
                        }
                if ( arr1[strlen(num1)+1]   < arr2[strlen(num2)+1])
                {
                        printf("-") ;
                }
                for (l = strlen(num1)-1 ; l >= 0 ; l -- )
                {
                        printf("%d" , fin[l] ) ;
                }
                }
        }
        else if ( strlen(num1) > strlen(num2) )
        {
                for ( i = 0 ; i < strlen(num1) ; i++ )
                {
                        arr1[i] = num1[strlen(num1) - i - 1 ] ;
                }
                for (i = 0 ; i < strlen(num2) ; i ++)
                  {
                        arr2[i] = num2[strlen(num2) - i - 1 ] ;
                }
                for ( i = 0 ; i < strlen(num1) ; i ++ )
                {

                        if (i > 0 && !( i >  strlen(num2)-1  ))
                        {
                                sum = arr1[i] - arr2[i] ;
                                if (sum < 0 )
                                {
                                        ans1 = play(arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                        ans1 = sum ;
                                }
                                fin[i] = ans1 ;
                //              printf("%d\n" , fin[i] ) ;
                        }


                        if (i == 0 )
                        {
                                sum = arr1[i] - arr2[i] ;
                                if (sum < 0 )
                                {
                                        ans2 = play(arr1[i] , arr2[i] , count ) ;
                                        arr1[i+1]-- ;
                                }
                                else
                                {
                                        ans2 = sum ;
                                }
                                fin[i] = ans2 ;
                //              printf("%d\n",fin[i]  ) ;
                        }

                        if ( i > strlen(num2) -1 )
                        {
                                fin[i] = arr1[i] -48 ;
                //              printf("%d\n" , arr1[i] -48  ) ;
                        }
                for ( j = strlen(num1)-1 ; j>= 0 ; j -- )
                {
                        printf("%d" , fin[j] ) ;

                }

                }
        }
}
                                                                                                                                                                                                                                                                                                                                  