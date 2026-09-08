// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University
// Admissions Board has approved your application for admission to the
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic
// institution dedicated to academic excellence and innovation. Please ensure
// that you report to the Academic Registrar's office with your original
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,

// John Doe
// Registra
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);
    tm *localTime = localtime(&now);
    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;    // tm_mon is 0-11, so we add 1
    int year = localTime->tm_year + 1900; // tm_year is years since 1900, so we add 1900
    char monthName[20];
    strftime(monthName, sizeof(monthName), "%B", localTime); // Get the full month name
    string suffix = "th";
    if (day == 1 || day == 21 || day == 31)
    {
        suffix = "st";
    }
    else if (day == 2 || day == 22)
    {
        suffix = "nd";
    }
    else if (day == 3 || day == 23)
    {
        suffix = "rd";
    }
    // Prompt the user to enter their details
    string firstName, lastName, studyProgram, academicYear;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your study program: ";
    cin >> studyProgram;
    cout << "Enter your academic year: ";
    cin >> academicYear;

    // Display the acceptance letter
    cout << "\nDate: " << day << "/" << month << "/" << year << "\n\n";
    cout << "To: " << firstName << " " << lastName << ",\n\n";
    cout << "Dear " << firstName << ",\n\n";
    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University "
         << "Admissions Board has approved your application for admission to the "
         << academicYear << " academic year.\n\n";
    cout << "You have been offered a place for the following course:\n";
    cout << "PROGRAM: " << studyProgram << "\n\n";
    cout << "As a student of Makerere University, you will be part of a historic "
         << "institution dedicated to academic excellence and innovation. Please ensure "
         << "that you report to the Academic Registrar's office with your original "
         << "academic documents for verification during the orientation week.\n\n";
    cout << "We look forward to welcoming you to the Makerere University.\n\n";
    cout << "Yours sincerely,\n\n";
    cout << "John Doe\n";
    cout << "Registrar\n";

    return 0;
}