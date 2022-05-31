#(1) accept input
val = input ("Enter F degree: ")
#(2) process => C = 5/9(F-32)
try:
    degreeF= float (val)
    degreeC=5/9*(degreeF-32)
#(3) output result
    print (degreeC)
except:
    print("Error value!")
