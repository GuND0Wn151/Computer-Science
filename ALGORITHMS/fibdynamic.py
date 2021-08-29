'''
L here acts a storage of the values of the fibo numbers
so we dont need to travel again the same path
'''
def fib(n,l={}):
      if n  in l.keys():
            return l[n]
      if n<=2:
            return 1
      l[n]=fib(n-1,l)+fib(n-2,l)
      return l[n]
print(fib(300))
