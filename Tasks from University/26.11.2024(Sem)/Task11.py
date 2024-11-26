def sum_multiplication(list1, list2):
    total_sum = 0
    len1, len2 = len(list1), len(list2)
    for i in range(max(len1, len2)):
        total_sum += list1[i % len1] * list2[i % len2]
    return total_sum

# Example usage:
list1 = [1, 2, 3]
list2 = [4, 5]
result = sum_multiplication(list1, list2)
print(result)  # Output will be 26