// Single File Programming Question

// Problem Statement




// You are developing a student grading system for a school. As part of the system, you need to implement a feature that sorts the student names in alphabetical order based on their names.




// Write a program that prompts the user to enter the number of students and their respective names. The program should then use the selection sort algorithm to sort the student names in alphabetical order. After each iteration of the selection sort, the program should display the updated student names to reflect the current state of the sorting process.




// Company Tags: Capgemini

// Input format :

// The first line of input consists of an integer n, representing the number of students.

// The second line of input consists of n space-separated strings, representing the names of the students.

// Output format :

// The first line of output prints "Initial order: " followed by the names in the given order, separated by space.

// The following lines print "After Iteration X: Y" where X is the iteration number and Y is the result after each iteration separated by a space.

// The last line of output prints "Sorted order: " followed by the names in sorted order, separated by space.




// Refer to the sample output for formatting specifications.

// Code constraints :

// The string contains both uppercase and lowercase letters, with 50 characters at most.

// Sample test cases :
// Input 1 :
// 4
// Ashok Prakash Bharani Chandru
// Output 1 :
// Initial order: Ashok Prakash Bharani Chandru 
// After Iteration 1: Ashok Prakash Bharani Chandru 
// After Iteration 2: Ashok Bharani Prakash Chandru 
// After Iteration 3: Ashok Bharani Chandru Prakash 
// Sorted order: Ashok Bharani Chandru Prakash 

// Input 2 :
// 6
// Hi Hello Welcome to DataStructures Course
// Output 2 :
// Initial order: Hi Hello Welcome to DataStructures Course 
// After Iteration 1: Course Hello Welcome to DataStructures Hi 
// After Iteration 2: Course DataStructures Welcome to Hello Hi 
// After Iteration 3: Course DataStructures Hello to Welcome Hi 
// After Iteration 4: Course DataStructures Hello Hi Welcome to 
// After Iteration 5: Course DataStructures Hello Hi Welcome to 
// Sorted order: Course DataStructures Hello Hi Welcome to 

// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to print the names in the vector
void printNames(const vector<string>& names) {
    for (const string& name : names) {
        cout << name << " "; // Print each name followed by a space
    }
    cout << endl; // Print a newline at the end
}

// Function to perform selection sort and print the vector after each iteration
void selection_sort(vector<string>& names) {
    int n = names.size(); // Get the number of names

    // Print the initial order of names
    cout << "Initial order: ";
    printNames(names);

    // Iterate over each position in the vector
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i; // Assume the current position is the minimum

        // Find the index of the smallest element in the remaining unsorted portion
        for (int j = i + 1; j < n; ++j) {
            // If the current element is smaller than the element at minIndex, update minIndex
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the smallest element found with the element at the current position
        swap(names[i], names[minIndex]);

        // Print the vector after the current iteration
        cout << "After Iteration " << i + 1 << ": "; // Display iteration number
        printNames(names);
    }
}

int main() {
    int n;
    cin >> n; // Read the number of names from user input

    vector<string> names(n); // Initialize vector with size n

    // Read names from user input
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    // Perform selection sort and print the vector after each iteration
    selection_sort(names);

    return 0; // Return 0 to indicate successful completion
}
