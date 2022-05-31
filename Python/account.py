class Account:
    def __init__(self,name,account_no,initial_amount):
        self.__name = name
        self.__no = account_no
        self.__balance = initial_amount
    def deposit (self,amount):
        self.__balance += amount
    def withdraw(self,amount):
        if self.__balance>amount:
            self.__balnce -= amount
        else:
            print ("Insufficient withdraw money!")
    def dump(self):
        print("%s %s Balance: %s" % (self.__name,self.__no,self.__balance))
    
    def __str__(self):
        return 'Account holder name: ' + str(self.__name) + '\nAccount No: '+ str(self.__no)+'\nBalance: '+str(self.__balance)

a1 = Account("Mg Mg","0123",10000) # create an account object
a1.deposit(5000)
a1.deposit(2000)
print(a1.__dict__)
# print(a1.name,a1.no,a1.balance)
a1.dump()
a2 = Account("Aye Aye","0124",12000)
a2.dump()
print (a1)
a1.__name = "Aung Aung"
a1.__no = "0321"
a1.__balance = 25000
