import random	
def main():
	coder = 0
	ownership = 1
	f = 0.25
	heads = 0
	tails = 0
	while coder < 1000 :
		floating_money = ownership * f
		hand = random.randrange(0, 2)	
		if hand:
			ownership = 2 * floating_money + ownership
			heads +=1
			
		else:
			ownership = ownership - floating_money
			tails +=1
		coder += 1
	print (ownership,heads, tails)

main()

