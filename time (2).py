from math import *
from sympy import *
import matplotlib.pyplot as plt
import numpy as np

n = symbols('n')

# Set your functions here as a list!
fns = [n**n+n*ln(n),n**2 + n,2**n,2**(2*n)]

fns_eval = [lambdify(n,expr, "numpy") for expr in fns]

# these are the values of x for which the graph will be plotted 
# np.arange(starting point, ending point, step size)
x = np.arange(1,3,0.1)

ys = np.array([y(x) for y in fns_eval])

i=1
for y in ys:
    l = str(fns[i-1])
    plt.plot(x,y, label=l)
    i=i+1

plt.legend()
plt.show()