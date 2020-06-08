import re
lst = list()

handle = open("ex.txt")
for line in handle :
    line = line.strip()
    list = re.findall('[0-9]+',line)
    #print(list)
    for w in list:
           if w not in lst:
               final = lst.append(w)
           else :
               print(w)
lst = [int(i)for i in lst]
lst.sort()

#print(lst)
sum = sum(lst)
tot = sum+7763+7681+4
print(tot)
