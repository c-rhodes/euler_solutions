from math import sqrt
from sys import exit

p = lambda n: n*(3*n-1)//2

pentagonals = set([p(i) for i in range(1, 3000)])

for j in pentagonals:
    for k in pentagonals:
        if j+k in pentagonals and abs(k-j) in pentagonals:
            print(abs(k-j))
            exit(0)

