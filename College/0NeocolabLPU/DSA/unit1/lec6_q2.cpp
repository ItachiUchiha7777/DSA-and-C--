// Single File Programming Question

// Problem Statement




// On the first day of school, students randomly seat themselves. Shorter students at the back can't see the board because they're behind taller students. To fix this, the teacher decides to arrange the students in height order.




// The teacher asks the students to stand in a line. She repeatedly compares the height of the first student with each of the others. If the first student is taller, they swap places. This process continues for all students, sorting them by height.




// Write a program to perform this selection sort on N students.

// Input format :

// The first line of input consists of an integer N, representing the number of students.

// The second line consists of N space-separated integers representing the height of N students.

// Output format :

// The output displays the height order of students before sorting and after sorting. Also, print after each iteration.




// Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 2 ≤ N ≤ 50

// 100 ≤ height of the students ≤ 200

// Sample test cases :
// Input 1 :
// 6
// 130 123 134 145 132 111
// Output 1 :
// Student's height order before sorting: 130 123 134 145 132 111 
// Height order of students after iteration 1: 111 123 134 145 132 130 
// Height order of students after iteration 2: 111 123 134 145 132 130 
// Height order of students after iteration 3: 111 123 130 145 132 134 
// Height order of students after iteration 4: 111 123 130 132 145 134 
// Height order of students after iteration 5: 111 123 130 132 134 145 
// After final comparison of all students, the height order becomes: 111 123 130 132 134 145 
// Input 2 :
// 5
// 106 205 101 102 104
// Output 2 :
// Student's height order before sorting: 106 205 101 102 104 
// Height order of students after iteration 1: 101 205 106 102 104 
// Height order of students after iteration 2: 101 102 106 205 104 
// Height order of students after iteration 3: 101 102 104 205 106 
// Height order of students after iteration 4: 101 102 104 106 205 
// After final comparison of all students, the height order becomes: 101 102 104 106 205 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// Function to perform selection sort and print the state after each iteration
void selectionSortAndPrint(std::vector<int>& heights) {
    int n = heights.size(); // Get the number of students
    
    // Print the initial state of the list
    std::cout << "Student's height order before sorting: ";
    for (int height : heights) {
        std::cout << height << " "; // Print each height
    }
    std::cout << std::endl;
    
    // Perform selection sort
    for (int i = 0; i < n; ++i) {
        int minIndex = i; // Assume the current position has the minimum element
        
        // Find the minimum element in the unsorted portion
        for (int j = i + 1; j < n; ++j) {
            if (heights[j] < heights[minIndex]) {
                minIndex = j; // Update the minimum index if a smaller element is found
            }
        }
        
        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            std::swap(heights[i], heights[minIndex]);
        }
        
        // Print the list after each iteration
        std::cout << "Height order of students after iteration " << (i + 1) << ": ";
        for (int height : heights) {
            std::cout << height << " "; // Print each height in the current state
        }
        std::cout << std::endl;
    }
    
    // Print the final sorted list
    std::cout << "After final comparison of all students, the height order becomes: ";
    for (int height : heights) {
        std::cout << height << " "; // Print each height in the final sorted state
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cin >> N; // Read the number of students
    
    // Ensure valid input constraints
    if (N < 2 || N > 50) {
        std::cerr << "Number of students must be between 2 and 50 inclusive." << std::endl;
        return 1; // Exit with error code
    }
    
    std::vector<int> heights(N); // Create a vector to store the heights
    
   
    // Call the sorting function
    selectionSortAndPrint(heights);
    
    return 0; // Exit successfully
}
