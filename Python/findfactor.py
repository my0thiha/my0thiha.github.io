max = 20 
n = 1
while n < max :
    factor = 1
    print (end = str(n)+ ' : ') #20 : 1 2 4 5 10 20
    while factor <= n :
        if n%factor == 0 :
            print (factor ,end= ' ')
        factor += 1
    print ()
    n+=1