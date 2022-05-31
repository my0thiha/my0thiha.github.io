# 5//4 = 1 1<1.25<2
# -5//4 = -2
# 3 ** 2
a= int (input("Enter first number: "))
b= int (input ("Enter second number: "))
c = a + b
d = a - b
e = a/b
f = a % b
g = a * b
h = a ** b
i = a // b
print (c,d,e,f,g,h,i)

#Comparison Operators
result = a==b
print (result)
if result == 0 :
    print ("Not equal")
else :
    print ("Equal")

#Assignment Operators
a += b
b *= a
print (a,b)

a += 1
b += 1
print (a,b)

#Bitwise Operators
a = 60
b = 13
c = a & b
d = a | b
e = a ^ b
f = ~a
g = a<<2
h = a>>2
print(a,b,c,d,e,f,g,h)