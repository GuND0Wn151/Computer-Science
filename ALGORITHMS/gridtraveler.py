"""
if we are allowed to travel only right or down in a grid
how many ways we can reach the end of the grid
dic L stores the data of the lower solutions and acts as memory
"""
def gridtravel(m,n,l={}):
      if str([m,n]) in l.keys():
            return l[str([m,n])]
      if m==1 and n==1:
            return 1
      if m==0 or n==0 :
            return 0
      l[str([m,n])]=gridtravel(m-1,n,l)+gridtravel(m,n-1,l)
      return l[str([m,n])]

print(gridtravel(18,18))