#!/usr/bin/env python
# coding: utf-8

# In[1]:


"""
  I encoded this program myself, did not copy or rewrite the code of others,
  and did not give or send it to anyone else.  

  Clerence Mashile
"""

# In[41]:


import math
import matplotlib.pyplot as plt
import numpy as np

N = 100

def log_table_eval(n):
    """
    Evaluate log(a) + log(b) where a and b run from 1 to n

    :param n: the upper limit for a and b
    :return:  an (n + 1) x (n + 1) matrix with the function values
    """
    log_table = np.zeros((n + 1, n + 1), float)
    for a in range(1, 1 + n):
        for b in range(1, 1 + n):
            log_table[a, b] = math.log(a,2) + math.log(b,2)

    return log_table

def log_table_draw(n):
    """
    Draw the values log(a) + log(b) where a and b run from 1 to n
    :param n:  the upper limit for a and b
    """
    log_table = log_table_eval(n)
    plt.title("log(a) + log(b)")
    plt.imshow(log_table, origin='lower')
    plt.colorbar(ax = None)

def gcd_draw(n):
    steps_table = np.zeros((n + 1, n + 1), float)
    gcd_table = np.zeros((n + 1, n + 1), float)
    for a in range(1, 1 + n):
        for b in range(1, 1 + n):
            g,s = gcd(a,b)
            gcd_table[a, b] = g
            steps_table[a, b] = s
    return gcd_table, steps_table

def gcd(a, b):
    tmp = 0
    counter = 0 
    while b > 0:
        counter += 1
        tmp = a%b
        a = b
        b = tmp
    return a,counter
    
if __name__ == '__main__':
    plt.figure(figsize=(12,4))
    plt.subplot(131)
    log_table_draw(N)
    
    plt.subplot(132)
    plt.title("Number of steps")
    steps_arr = gcd_draw(N)[1]
    plt.imshow(steps_arr, origin = "lower")
    plt.colorbar(ax = None)
    
    gcd_arr = gcd_draw(N)[0]
    plt.subplot(133)
    plt.title("gcd")
    plt.colorbar(ax = None)
    plt.imshow(gcd_arr, origin='lower')

    plt.tight_layout()
    plt.show()


# In[ ]:




