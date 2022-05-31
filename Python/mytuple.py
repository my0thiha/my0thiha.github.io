tuple = ('abc',123,'hi',23,45)
print (type(tuple))
print (tuple[0])
print (tuple[:3])
#tuple[0] = 'def'
print (tuple[-1])
print (tuple *2)

for item in tuple:
    print (item)
for item in tuple:
    print (item,end = " ")