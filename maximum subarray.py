def max_through_sum(arr , first , mid , last ):#conquer
  summ = 0 #初始化
  left_sum = 0 
  for i in range(mid , first-1 , -1 ):#從中間往回加
    summ = summ + arr[i]
    if summ >= left_sum :
      left_sum = summ #更新左邊最大的和
  summ = 0 #初始化
  right_sum = 0 
  for i in range(mid+1 , last +1  ):#從中間往後加
    summ = summ +arr[i]
    if summ >= right_sum :
      right_sum = summ   
  return max(left_sum + right_sum , left_sum , right_sum )
def max_sub_sum(arr , first , last ):#divide
  if (first == last) :
    return arr[first]
  mid = (first + last) // 2
  return max(max_sub_sum(arr , first , mid ) , max_sub_sum(arr , mid + 1 , last ) , max_through_sum(arr , first , mid , last ) )
try :
  num = input()
except EOFError :
  pass 
arr = [int(n) for n in num.split()]
len_arr = len(arr)
if len_arr > 50000 :
  print("error")
else :
  ans = max_sub_sum(arr , 0 , len_arr - 1  )
print(ans)
