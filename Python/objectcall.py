# call function using object
class Product:
    def __init__(self):
        print("Instace Created")
    def __call__(self,a,b):
        print(a*b)
    
p1 = Product()
p1(10,20)

class Example:
    def __init__(self):
        print ("Instance created")
    def __call__(self):
        print("Working Call Function!")
e = Example()
e()