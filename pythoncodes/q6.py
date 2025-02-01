s = input("enter the fucking string :")
d = 0;
u = 0;
l = 0;

for i in s:
    if i.isupper():
        u += 1
    elif i.islower():
        l += 1
    elif i.isdigit():
        d += 1
        
        
        
print("{} digits , {} upper , {} lower".format(d,u,l))