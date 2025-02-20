def ReadFileAsString(file_name):
    try:
        with open(file_name, 'r') as file:
            return file.read()
    except FileNotFoundError:
        return "Error: File not found."
    
print(ReadFileAsString("file.txt"))