def yfunc(t):
    g = 9.81
    return v0-t - 0.5*g*t**2
v0 = 10
t = 0.6
print(yfunc(t))