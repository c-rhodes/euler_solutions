from math import log

numbers = open("base_exp.txt").read().split("\n")

greatest = 0
for i in numbers:
    x = [int(y) for y in i.split(",")]
    p = x[1] * log(x[0])
    if p > greatest:
        greatest = p
        line = numbers.index(i) + 1

print(line)
