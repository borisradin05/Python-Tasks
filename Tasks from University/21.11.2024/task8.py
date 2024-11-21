def find_median(sorted_list):
    n = len(sorted_list)
    if n % 2 == 1:
        positionOfmedian = n // 2
        median = sorted_list[positionOfmedian]
    else:
        positionOfmedianOne = n // 2 - 1
        positionOfmedianTwo = n // 2
        median = (sorted_list[positionOfmedianOne] + sorted_list[positionOfmedianTwo]) / 2
    return round(median)

sorted_list = [1, 2, 3, 4, 5]
print(find_median(sorted_list))