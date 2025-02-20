def returnSumsOfMultiplicationOfNumbersInLists(list1, list2):
    sum = 0
    len1 = len(list1)
    len2 = len(list2)
    max_len = max(len1, len2)
    
    for i in range(max_len):
        if i < len1 and i < len2:
            sum += list1[i] * list2[i]
        elif i >= len1:
            sum += list1[i - 1] * list2[i]
        elif i >= len2:
            sum += list1[i] * list2[i - 1]
    return sum

list1 = [1, 2, 3, 4, 5]
list2 = [1, 2, 3]
print(returnSumsOfMultiplicationOfNumbersInLists(list1, list2)) 