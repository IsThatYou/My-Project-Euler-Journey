__author__ = 'Wangj1'
# Written by Junlin Wang
import mathhelp

# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
suum = 1
for i in range(1, 21):
    suum = mathhelp.lcm(suum, i)

print suum