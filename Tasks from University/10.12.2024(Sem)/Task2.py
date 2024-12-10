class NumberObject:
    def __init__(self, value):
        self.value = value

def create_objects(n):
    for i in range(n):
        obj = NumberObject(2 * i + 1)
        objects = []
        objects.append(obj)
    return objects

objectsGlobal = create_objects(5)
for i in range(len(objectsGlobal)):
    print(objectsGlobal[i].value)

