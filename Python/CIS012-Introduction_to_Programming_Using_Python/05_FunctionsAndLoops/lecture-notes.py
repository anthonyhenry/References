# Use the def keyword followed by optional parameters to create a function
    # Indent the body of your function
    # You must call your function somewhere in your code in order for it to run

def print_lyrics():
    print("I'm a lumberjack, and I'm okay.")
    print("I sleep all night and I work all day")

print("Function has not run yet")
print("Function will run now")
print_lyrics() # Function call
print("Let's run the function again!")
print_lyrics()

print("\n")

# Void (non-fruitful) Functions
    # When a function does not return a value, we call it a void function
def newLine():
    print("\n")

# Parameters
def greet(lang):
    if lang == "es":
        print("Hola")
    elif lang == "fr":
        print("Bonjour")
    else:
        print("Hello")

greet("es")
greet("fr")
greet("en")

newLine()

# While Loop
    # Always remember to alter your variable so that you do not create an infinite loop
n = 5
while n > 0:
    print(n)
    n = n - 1
print("Blastoff!")

# Breaking out of a loop
    # Use the break statment to end the current loop and jump to the statement immediately following the loop

#Finishing an iteration with continue
    # The continue statement ends the current iteration and jumps to the top of the loop and starts the next iteraction

newLine()

# For Loops

for i in [5, 4, 3, 2, 1]:
    print(i)
print("Blastoff")

newLine()

# Find the largest number
largestSoFar = None # None is a keyword meaning the variable has no value
for i in [9, 41, 12, 3, 74, 15]:
    print(i)
    if largestSoFar == None:
        largestSoFar = i
    elif i > largestSoFar:
        largestSoFar = i
print("Largest number in the set is", largestSoFar)

# newLine()

# # The range() function will 
# for i in range(0,5):
#     print(i)