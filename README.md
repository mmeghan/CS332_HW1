# CS332_HW1
## Objective: 
Implement a C program that uses data structures, dynamic memory allocation, and string functions provided by the C libray. 

## Description: 
The goal of this project is to implement a C program that a variable number of keywords as command line argument, reads text from the standard input stream, searches the keywords in the input stream, and when the end of input stream is reached prints the number of times each keyword appears in the input text.

## Guideline & Hints 
- Design the program using seperate functions to preforem each of the key tasks:
    * Taks that reads the keywords provided as command line arguments and creates a table with the keyword and counts. Use a structure with two entries:one for the keyword and one for the count and then create an array of structures based on the number of keywords. Note: Should not use static declaration and hardcode the number of keywords. Initialize the count fields to zero to start. You can create a function to preform this task, init_table with appropritate arguments. 
    * read the text from standard input using the getline() method provided by the C library as shown in the example getline.c (you are free to use any other C library function that you prefer).
    * Since we have to compare the keywords with complete words (not partial matches) we have to break down the line we read into keywords. You can do this using a separate function or use one of the C library functions. 
    * After you read a line, search for the keywords in the input and update the table if a match is found. You can use one of the C string library functions to perform the search. You can create a function to perform the search and update the table, say, update_table with appropriate arguments.
    * When you reach the end of the input stream, print the table. You can use a separate function to print the table, say, display_table with appropriate arguments.
- Test the program wiht a simple input. Instead of typing the input text every time, you can save the sample text in a file and use I/O redirection 
- One tested on small case, test on the larger text files
- Add Comments to code and include in the header section a note on how to compile and run the program 