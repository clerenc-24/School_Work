import time
import sys

ef_cache = dict()

def expensive_func(num):
    if num in ef_cache:
        return ef_cache[num]  
    print("Computing {}...".format(num))
    time.sleep(1)
    result = num*num
    ef_cache[num] = result 
    return result

cache = dict()
def fibonacci(n):

    if n in cache:
        return cache[n]
    elif n <= 2:
        return 1
    else:        
        result =  fibonacci(n-1)+fibonacci(n-2)
        cache[n] = result
        return result
if __name__ == '__main__':
    
    num = int(input('Enter integer number: '))
    #print("The square of your number is = ",expensive_func(num))
    
    #print(expensive_func(4))
    #print(expensive_func(10))
    #print(expensive_func(4))
    #print(expensive_func(10))
    for i in range(15):
        print(i,':',fibonacci(i))
