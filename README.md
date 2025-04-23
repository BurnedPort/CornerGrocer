# 🛒 Corner Grocer App

## 📌 Project Summary
The Corner Grocer App is a C++ program designed to help a small grocery store keep track of item purchase frequencies. It reads from a file of purchased items, counts each item using a `std::map`, and offers a menu interface for users to search for specific item frequencies, view a list of all items with their counts, or generate a histogram report.

## ✅ What I Did Well
I implemented a clean, functional interface that uses file I/O and maps effectively. My logic for populating the map and searching for item frequencies is accurate and efficient. I also maintained good separation between reading, processing, and displaying data.

## 🔧 Areas for Improvement
I could improve the code structure by breaking larger functions into smaller, reusable components, and by improving error handling when working with file streams. Adding support for case-insensitive item searches would also enhance usability. These improvements would make the app more robust and user-friendly.

## 🧠 Challenges & Solutions
The most challenging part was formatting the histogram output to align properly and making sure that item counts were consistently tracked, even with repeated entries. I overcame this by manually testing with small sample files and using debugger tools to trace map updates.

## 🧰 Transferable Skills
This project strengthened my understanding of:
- File handling in C++
- Using `std::map` to associate keys with values
- Loop and condition structure
- Formatting console output for clarity
These skills apply to almost any future software project involving data parsing, logging, or record keeping.

## 🛠️ Code Quality & Maintainability
I structured the code with consistent naming and a clean main menu loop, but one area for improvement is the lack of inline comments. While the logic is straightforward, I recognize that documenting key parts of the code — especially around file parsing and map usage — would improve readability for future developers or reviewers. I’ll prioritize including inline comments in future projects to better support maintainability and collaboration.
