rectLength = input("Please enter the length of the rectangle:")
rectWidth = input("Please enter the width of the rectangle:")

print(type(rectLength))
print(type(rectWidth))

rectLength = float(rectLength)
rectWidth = float(rectWidth)

print(type(rectLength))
print(type(rectWidth))

rectLength = rectLength ** 2
rectWidth = rectWidth ** 2
print(rectLength)
print(rectWidth)

rectDiagonal = (rectLength + rectWidth) ** (1/2)
print(rectDiagonal)
rectDiagonal = round(rectDiagonal, 2)
print(rectDiagonal)


#rectDiagonal = (rectLength ** 2 + rectWidth ** 2) ** 0.5

#print(rectDiagonal)


#print("The diagonal of the rectangle is:", rectDiagonal)