// Single File Programming Question

// Problem Statement




// Given an array of integers, implement the insertion sort algorithm that sorts elements at odd positions in descending order and elements at even positions in ascending order. Input consists of an integer n followed by n integers. Output the sorted array. Here, the position starts from 1.




// Example




// Input:

// array[] = {7, 10, 11, 3, 6, 9, 2, 13, 0}




// Output:      

// 11 3 7 9 6 10 2 13 0 




// Explanation:

// Even-positioned elements are 10 3 9 13. After sorting in ascending order: 3 9 10 13

// Odd-positioned elements are 7 11 6 2 0. After sorting in descending order: 11 7 6 2 0

// Final combined array: 11 3 7 9 6 10 2 13 0 

// Input format :

// The first line of input consists of an integer N, representing the number of elements.

// The second line consists of N space-separated integers representing the elements.

// Output format :

// The output displays the sorted array as described in the problem statement, separated by a space.




// ﻿Refer to the sample output for formatting specifications.

// Code constraints :

// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 30

// 0 ≤ elements ≤ 105

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// 5 2 3 4 1 
// Input 2 :
// 9
// 7 10 11 3 6 9 2 13 0
// Output 2 :
// 11 3 7 9 6 10 2 13 0 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.