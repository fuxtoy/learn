x = int(input('enter a number to slove '))
g = int(input('guess a number '))
delta = 0.0001

if g*g-x>delta:
    print (x)
else:
    g = g+g/2

print('end')
