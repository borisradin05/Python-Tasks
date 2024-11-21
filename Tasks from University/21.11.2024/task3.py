class BankAccount:
    def __init__(self, bank_account_id, owner):
        self.bank_account_id = bank_account_id
        self.owner = owner
        self.balance = 0

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount > self.balance:
            return "Not enough money!"
        else:
            self.balance -= amount

    def display_balance(self):
        return f"Balance: {self.balance}"

account = BankAccount(12345, "Boris Radin")
account.deposit(100)
print(account.display_balance()) 
print(account.withdraw(50))      
print(account.display_balance())  
print(account.withdraw(100))      