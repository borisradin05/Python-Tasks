def scrambleStringFromIntList(input, intList):
    output = ''
    for i in range(len(intList)):
        index = intList[i]
        output += input[index]
    return output

input = input()
intList = input().split()
print(scrambleStringFromIntList(input, intList))
