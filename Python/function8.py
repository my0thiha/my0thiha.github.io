# factorial => 5! = 5*4*3*2*1 = 5 * 4!
# n! = n * (n-1)!

def factorial (n):
    if n == 0 :
        return 1
    else :
        print (n,end= ' * ') 
        return n * factorial(n-1) #recursive

result = factorial(5)
print("\nResult",result)