# MergeSort Implementation in ANSI C

### Author: Arlen Feng

## Usage Notes: 
1. To build, run "make" or "make build" (or compile main.c and sorting.c manually). make generates "main.out" as the executable. 
2. The executable will be "main.out" if make was used. To run, there are two options: 
	a. Run "./main.out" to use generate pseudorandom numbers in an array of size 1000. 
	b. Run "./main.out [SIZE]" where [SIZE] is the size of the array to be generated. [SIZE] MUST be an integer!

## Important Notes: 
1. For simplicity's sake, this program only generates pseudorandom numbers between 1 AND 10000!
2. The program will measure time to the nearest SECOND. For 1000 elements, this time is usually around 0 seconds. 
3. The program will first print the unsorted array, then the sorted array, then the time taken to sort the array. 
4. For larger values, it may be possible to get a time more than 0 seconds. 

## Other Notes: 
1. This program is designed to be compiled using ANSI C. 

## Files: 
1. README.txt - This file. 
2. makefile - Makefile for the program. 
3. main.c - Main driver code. 
4. sorting.c - Implementation of mergesort. 
5. sorting.h - Header file for sorting.c and main.c
