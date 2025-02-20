class SameValuesClass:
    def __init__(self, param1, param2):
        if isinstance(param1, str) and isinstance(param2, str):
            self.text = param1 + param2
        elif isinstance(param1, int) and isinstance(param2, int):
            self.number = param1 + param2

