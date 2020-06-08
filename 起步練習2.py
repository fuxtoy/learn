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
for i in range(0, len(lst)):
    sum  = sum(int(lst[i]))
print(sum)
