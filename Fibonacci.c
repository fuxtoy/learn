#include<stdio.h>
#include<string.h>
int main()
{
        char fans, faa[70]  ;
        int  arr1[105] = {0} , arr2[105] = {0} ,fin[105] ;
        int ans,i,sum ,j , k ,z ,d ;
        arr1[0] = 1 ;
        arr2[0] = 1 ;
        fin[0] = 0 ;
        scanf("%d" , j) ;
        for ( k = 3 ; k < j ; k++ )
        {
                if ( k%2 == 0 )
                {
                        for (i = 0 ; i < 16  ; i++)
                        {
                                sum = arr1[i]  + arr2[i] ;
                                if ( sum >=10 )
                                {
                                        arr1[i] = sum - 10 ;
                                        arr1[i+1]++ ;
                                }
                                if (sum < 10 )
                                {
                                  arr1[i] = sum ;
                                }
                              }
                            }
                            if ( k%2 == 1 )
                              {
                              for ( i = 0 ; i <16 ; i++ )
                              {
                                sum = arr1[i] + arr2[i] ;
                          if (sum >= 10 )
                          {
                                  arr2[i] = sum -10 ;
                                  arr2[i+1]++ ;
                          }
                          if ( sum < 10 )
                          {
                                  arr2[i] = sum ;
                          }
                  }
                  for ( z = 104 ; z >= 0 ; z-- )
                  {
                          if ( arr2[z] != 0 )
                          {
                                  for ( d = z ; d >= 0 ; d-- )
                                  {

                                          printf("%d" , arr2[d]) ;
                                  }
                                  break ;
                          }
                  }
          }


  }
