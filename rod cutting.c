int max_price(int n, int p[],int k ) {  
    int a[50000] , t;  
    a[0] = 0;  
    a[1] = p[1];  
    if (n == 1){  
        return a[1];  
    }  
    for(int j=2;j<=n;j++){  
        int MAX = -1e9;  
        for(int i=1;i<=j;i++)  
        {  
          if (i>k-1)  
          {  
            t = 0;  
            if(t>MAX)  
            {  
              MAX = t;  
            }  
          }  
          else  
          {  
            t = p[i]+a[j-i];  
            if(t>MAX)  
            {  
              MAX = t;  
            }  
          }  
        }  
        a[j] = MAX;  
    }  
    //printf("%d\n" , a[4]) ;   
    return a[n];    
}  
int main()   
{  
    int n ,price ,count,num,k=1;  
    int p[60000] = {-1} ; p[0] = 0 ;   
    scanf("%d" , &n) ;  
    scanf("%d",&num) ; scanf("%d",&p[k]) ;  
    k+=1;  
    //printf("%d\n" , p[1]) ;   
    while(1)  
    {  
      if (scanf("%d",&num) == scanf("%d",&p[k]) && num == 0 &&   
      p[k] == 0 )    
      {   
        break ;     
      }   
      else  
      {  
        k +=1  ;    
      }  
    }   
    int ret = max_price(n, p , k );  
    printf("%d\n", ret);  
    return 0;  
}  
