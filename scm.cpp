print(" WELCOME TO MY GENERAL KNOWLEDGE QUIZ!!! ")
playing=input("DO YOU WANT TO PLAY THE QUIZ? ")
if playing!="yes":
    quit()
print("OKAY LETS PLAY :)  !!!")
print(" ALWAYS TYPE ANSWER IN SMALL LETTERS ;) ")
score=0
print("LEVEL 1 ")
ANSWER=input("WHAT IS FULL FORM OF BRICS? ") #write name in small letter
if ANSWER=="brazil russia india china south africa":
    print("CORRECT :) ")
    score+=1
else:
    print("INCORRECT :( ")

print("LEVEL 2 ")

ANSWER=input("WHICH IS THE LONGEST RIVER OF THE WORLD? ") 
if ANSWER=="nile":
    print("CORRECT :) ")
    score+=1
else:
    print("INCORRECT :( ")
    
print("LEVEL 3 ")

ANSWER=input("WHich state is called dev bhoomi? ") #write name in small letter
if ANSWER=="himachal pradesh":
    print("CORRECT :) ")
    score+=1
else:
    print("INCORRECT :( ")

print("LEVEL 4")
    
ANSWER=input("WHAT IS CAPITAL OF ASSAM? ") #write name in small letter
if ANSWER=="dispur":
    print("CORRECT :) ")
    score+=1
else:
    print("INCORRECT :( ")
    
print("LEVEL 5 ")
    
ANSWER=input("WHICH IS THE LARGEST COUNTRY IN THE WORLD? ") #write name in small letter
if ANSWER=="russia":
    print("CORRECT :) ")
    score+=1
else:
    print("INCORRECT :( ")
    
print("YOU GOT" + str(score)+ " QUESTIONS CORRECT! ")
print("YOUR PERCENTAGE IN THE QUIZ=",score*100/5 ,"%")
