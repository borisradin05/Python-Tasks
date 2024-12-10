class NumberObject:
    def __init__(self, value):
        self.value = value

class NumberObjectList:
    def __init__(self):
        self.objects = []

    def create_objects(self, n):
        for i in range(n):
            obj = NumberObject(2 * i + 1)
            self.objects.append(obj)