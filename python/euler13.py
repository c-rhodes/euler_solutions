# Large sum
# Problem 13

num = open('euler13_num', 'r')
num = num.read()

x = [i for i in num]

s = ''
n = 0

for i in x:
	if i == '\n':
		n = n + int(s)
		s = ''
		continue
    s = s + i

print str(n)[:10]

