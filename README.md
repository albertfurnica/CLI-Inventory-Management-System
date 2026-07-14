# CLI Inventory Management System

This is a console-based application written in C++ designed to manage a basic product inventory. It was created as an educational project to practice Object-Oriented Programming (OOP) concepts and dynamic data management.

## Features
* **Interactive CLI Menu:** User-friendly command-line interface for navigating the app.
* **Data Entry:** Add new products specifying the name, unit of measure, unit price, and quantity.
* **Automated Calculations:** Automatically computes the total value for each product upon entry.
* **Tabular Display:** Views all inventory items in a clean, formatted table.
* **Statistics:** Calculates and displays the average unit price and average total value across all registered products.

## OOP & C++ Concepts Applied
* **Encapsulation:** Protected product data using `private` access modifiers, accessible only through `public` getter methods.
* **Classes and Objects:** Modeled the real-world entity of a product using a dedicated `Produs` class.
* **Dynamic Memory (STL):** Utilized `std::vector<Produs>` from the Standard Template Library for flexible, dynamic storage, avoiding the limitations of static C-style arrays.

## Technologies
* C++
* Standard Template Library (STL)
* Git & GitHub

## How to Run
1. Clone this repository to your local machine.
2. Compile the source code using any standard C++ compiler (e.g., GCC or MSVC).
   ```bash
   g++ main.cpp -o inventory
