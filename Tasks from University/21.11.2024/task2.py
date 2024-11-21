class BookStore:
    def __init__(self):
        self.books = {}

    def add_book(self, book_title):
        self.books[book_title] = True

    def borrow(self, book_title):
        if book_title in self.books and self.books[book_title]:
            self.books[book_title] = False
        else:
            print("Book not available!")

    def return_book(self, book_title):
        if book_title in self.books:
            self.books[book_title] = True

    def list_available_books(self):
        available_books = []
        for book_title in self.books:
            if self.books[book_title]:
                available_books.append(book_title)
        for book in available_books:
            print(book)

store = BookStore()
store.add_book("Pod Igoto")
store.add_book("Data Science with C#")
store.list_available_books()
store.borrow("Pod Igoto")
store.list_available_books()
store.return_book("Pod Igoto")
store.list_available_books()