/////////////////////////////////////////////////////////////////////
// Name: Kimberly Harlow
// Date: 09/30/2026
// Class: CSCI 1470.0X
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description:This program simulates a public library system.
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;
int totalBooks = 0;

// The Function prototypes
int generateUserID();
void borrowBook(int& bookCount);
void log(int uid, int bookCount);
void report();

int main()
{
    int uid, bookCount;

    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Reporting end-of-day transactions
    report();

    return 0;
}

int generateUserID()
{
    static int id = 1001;
    return id++;
}

void borrowBook(int& bookCount)
{
    bookCount++;
    totalBooks++;
}

void log(int uid, int bookCount)
{
    ofstream file("library.txt", ios::app);

    if (file.is_open())
    {
        file << "User Id ............" << uid << endl;
        file << "Books Borrowed ........" << bookCount << endl;
        file << endl;
        file.close();
    }
}

void report()
{
    cout << "A total of " << totalBooks
        << " items were checked out today." << endl;

    ofstream file("library.txt", ios::app);

    if (file.is_open())
    {
        file << endl << "A total of " << totalBooks
            << " items were checked out today." << endl;
        file.close();
    }
}