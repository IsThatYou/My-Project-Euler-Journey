__author__ = 'Wangj1'
# Written by Junlin Wang
pocket = []
for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        if (i*j == int(str(i*j)[::-1])):
            pocket.append(i*j)
print max(pocket)
