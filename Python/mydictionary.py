dict = {'name':"Mg Mg"}
print (type(dict))
print (dict['name'])
dict['age'] = 21
dict['city'] = 'Yangon'
print (dict)
print (dict.keys())
print (dict.values())

for key in dict:
    print (key,dict[key])