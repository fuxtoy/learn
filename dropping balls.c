#include<stdio.h>  
  
int main()  
{  
  int num_ball   , dep   ,height,pos,times  ;
  scanf("%d" , &times) ;
  while(times--) 
  {
    scanf("%d",&dep) ;  
    scanf("%d",&num_ball) ; 
    if (dep  == EOF || num_ball  == EOF )  
    {  
      return 0 ;   
    }  
    height = 1 ,pos = 1 ;   
    while (height < dep )  
    {  
      if (num_ball % 2 == 0 )  
      {  
        pos = pos *2+1 ;  
        num_ball = num_ball/2 ;   
        height ++ ;   
      }  
      else   
      {  
        pos = pos*2 ;   
        num_ball = (num_ball +1) /2 ;  
        height++ ;   
      }  
    }  
  printf("%d\n" , pos ) ; 
  } 
  
  
  return 0 ;   
}  
