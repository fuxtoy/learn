#include <stdio.h>
#include<limits.h>
void merge(int arr[] , int first ,int mid ,int last )
{ 
  int len_n1 = mid - first+1  ; //計算左邊陣列長度
  int len_n2 = last - mid  ;  //計算右邊陣列長度
  //printf("%d\n",len_n1) ; 
  int n1[len_n1] ; //配置子陣列
  int n2[len_n2] ; 
  int l , r , k ;
  for (l = 0 ; l<len_n1 ; l++) //複製陣列
  {
    n1[l] = arr[first+l] ; 
  }
  for (r = 0 ; r<len_n2 ; r++)
  {
    n2[r] = arr[mid+r+1] ; 
  }
  //n1[l+1] = INT_MAX ; //邊界條件
  //n2[r+1] = INT_MAX ; 
  l = 0 , r = 0 , k = first; // k = first = 從第一個開始排
  while (l<len_n1 && r<len_n2)
  {
    if (n1[l]<n2[r])
    {
      arr[k] = n1[l] ; 
      l++ ; 
    }
    else if (n1[l]==n2[r])
    {
      if (l>r)
      {
        arr[k] = n1[l] ; 
        l++ ; 
      }
      else 
      {
        arr[k] = n2[r] ;
        r++ ;  
      }
    }
    else 
    {
      arr[k] = n2[r] ; 
      r++ ;
    }
    k++ ; 
  }
  while (l<len_n1)
  {
    arr[k] = n1[l] ; 
    l++ ; 
    k++ ; 
  }
  while (r<len_n2)
  {
    arr[k] = n2[r] ; 
    r++ ; 
    k++ ; 
  }
}

void mergesort(int arr[], int first , int last )
{
  if (first < last )
  {
      int mid = (first+last)/2 ;
      mergesort(arr , mid+1 , last ) ; 
      mergesort(arr , first , mid );
      merge(arr , first , mid , last) ; 
  }
}
int main()
{
  int n,i=0 ;
  int list[50000]  ; 
  while (scanf("%d",&list[i])!=EOF) 
  {
    i = i+1 ;
  }
  mergesort(list,0,i-1) ; 
  for( n = 0 ; n< i ; n++)
  {
    printf("%d " , list[n])  ; 
  }
  printf("\n" ) ; 

  return 0 ; 
}
