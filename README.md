# DSE 501 CYBERMACS Assignment 2
This is the solution to my second assignment as a cyberMACS scholar in Istanbul Turkey.

## Instructor: Prof. Hasan Dag

Here is the control flow of the program from top to bottom:

1. The program starts by defining a `struct Instructor` that contains the personal data and address data for each instructor.
2. The program defines a `compare` function that is used to sort the array of instructors based on their age.
3. The program defines a `read_data` function that reads the data from the file `DSE501_Hwk2_Instructors.txt` and stores it in an array of `struct Instructor`.
4. The program defines a `sort_data` function that sorts the array of instructors based on their age using the `qsort()` function.
5. The program defines a `print_data` function that prints the sorted data to the console.
6. The program defines the `main` function that calls the `read_data`, `sort_data`, and `print_data` functions to read the data from the file, sort it, and print it to the console.

Here is a flow diagram of the project:

```mermaid
+-----------------+
| Start the program|
+-----------------+
         |
         v
+-----------------+
| Read the data    |
+-----------------+
         |
         v
+-----------------+
| Sort the data    |
+-----------------+
         |
         v
+-----------------+
| Print the data   |
+-----------------+
         |
         v
+-----------------+
| End the program  |
+-----------------+

```

The program starts by reading the data from the file `DSE501_Hwk2_Instructors.txt` and storing it in an array of `struct Instructor`. It then sorts the array based on the age of the instructors using the `qsort()` function. Finally, it prints the sorted data to the console. The program ends after the data has been printed to the console.
