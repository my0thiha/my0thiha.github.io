def multiple() :
    operation = "sum"
    total = 10+5
    #return operation ,total #tuple
    return [operation , total] #list

values = multiple() #list
print(values) #list

#operation,total = multiple() #tuple
#print (operation , total) #tuple