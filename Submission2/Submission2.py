Array = ["!", "D", "L", "R", "O", "W", " ", "O", "L", "L", "E", "H"]

Word = ""
for x in range (len(Array) - 1, -1, -1):
    Word = Word + Array[x]

print (Word)
