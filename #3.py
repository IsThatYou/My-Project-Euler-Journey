__author__ = 'Wangj1'
# Written by Junlin Wang
#The prime factors of 13195 are 5, 7, 13 and 29.
#What is the largest prime factor of the number 600851475143 ?
import mathhelp
primelist = []
for i in range (3, int(600851475143**(1/2.0)), 2):
    if 600851475143 % i == 0:
        primelist.append(i)

print primelist
print mathhelp.isprime(primelist)




