#include <iostream>
#include <cstdint>
#include <string>

namespace BookDetails {
    enum class Book_status {
        ISSUED,
        RETURNED,
        READING
    };

    struct Book {
        std::uint16_t bookId;
        std::string title;
        Book_status book_status;        
    };
}

int main() {
    auto book = BookDetails::Book {
        .bookId = 450,
        .title = "Super funny tales",
        .book_status = BookDetails::Book_status::ISSUED
    };    

    std::cout << book.bookId << std::endl << book.title << std::endl << 
    static_cast<uint16_t>(book.book_status);    

    return 0;
}
