def IsPalindorme(number):
    str_num = str(number)
    str_num_len = len(str_num)
    is_palindrome = True

    j = str_num_len - 1
    for i in range(str_num_len - 1):
        if str_num[i] != str_num[j]:
            is_palindrome = False
            break
        j -= 1

    if is_palindrome:
        return 1
    else:
        return 0

number = int(input("Enter a number: "))
result = IsPalindorme(number)
print(result)