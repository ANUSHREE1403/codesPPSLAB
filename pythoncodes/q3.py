#iterator

l = ['o','t','f']
for i in l:
    print(i)
    
#recursion

def factorial(n):
    if n==0:
        return(1)
    else:
        return(n * factorial(n-1))


print(factorial(5))