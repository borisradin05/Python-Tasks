class NumsSum:
    def __init__(self, list):
        self.list = list

def SumLists(obj1, obj2):
    if len(obj1.list) != len(obj2.list):
        raise ValueError("Lists must be of the same length")
    for i in range(obj1):
        for j in range(obj2):
            result_lst = []
            for i in range(len(obj1.lst)):
                result_lst.append(obj1.list[i] + obj2.list[i])
    return NumsSum(result_lst)

obj1 = NumsSum([1, 2, 3])
obj2 = NumsSum([4, 5, 6])
result = SumLists(obj1, obj2)
print(result.list)  