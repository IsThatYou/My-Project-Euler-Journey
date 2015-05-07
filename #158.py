# Problem 158
# Junlin Wang


def isOK(str_list):
    #determine if a type fits the requirement
    bigger = 0
    for i in range(len(str_list), 1):
        if (str_list[i] > str_list[i-1]):
            bigger += 1
    if (bigger == 1): return True
    else: return False

def getLetters():
    a = [i for i in range(97, 123)]
    a = map(lambda x: chr(x), a)
    return a

letters = getLetters()

def calculate(num):
    # a list of 26 letters
    num_of_letters = num
    # initial list
    combo = [i for i in letters[0:num_of_letters]]

    helper(combo, num_of_letters - 1)


calculate(3)











#Equation when length is 3
'''
def getone(num):
    #num is a number between 0 and 25 inclusively
    first_part = 24*num-(num*(num-1))/2.0
    second_part = (num + 24) * (25-num)/2.0
    result = first_part + second_part
    return result
number = 0
result = 0
for i in range(0, 26):
    result += getone(i)
    print("%d:%d" % (i,getone(i)))
print(result)
'''
