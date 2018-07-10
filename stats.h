/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This program calculates mean,median,maximum and minimum values from a char data set
 *
 * Description of Functions:
 * 			print_array(): prints out the array on screen
 * 			print_statistics(): prints the array statistics including mean,median,maximum,minimum
 * 			sort_array: sorts the data set in ascending order
 * 			find_median(): calculates the median of the data set
 * 			find_mean(): calculates the mean of the data set
 * 			find_maximum(): calculates the largest value of the data set
 * 			find_minimum(): calculates the smallest value f the data set
 *
 * @author Robert Maina
 * @date 8-7-2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* 
	Functions:	
 * 			print_array(): prints out the array on screen
 * 			print_statistics(): prints the array statistics including mean,median,maximum,minimum
 * 			sort_array: sorts the data set in ascending order
 * 			find_median(): calculates the median of the data set
 * 			find_mean(): calculates the mean of the data set
 * 			find_maximum(): calculates the largest value of the data set
 * 			find_minimum(): calculates the smallest value f the data set
 * 			find_minimum(): calculates the smallest value f the data set
/**
 * @brief The program uses the data set to calculate median,mean,maximum and minimum values
 *
 * Description: This program calculates the above statistics from a data set of character elements
 *				It makes use of the following functions:-
 *				
 *				print_array():
 *							This outputs the array on the screen
 *						Parameters:
 *							unsigned char * b: Pointer to the data set
 *							unsigned int n: Number of items in the data set
 *						Return:
 *							Prints out the array
 *
 *				print_statistics():
 *							This prints the overall statistics to the screen.This includes mean,median,maximum and minimum values
 *						-Return:
 *							Prints out the statistics
 *
 *				sort_array():
 *							This re arranges the character data set from smallest to the largest element
 *						Parameters:
 *							unsigned char * s : Pointer to the data set
 *							unsigned int n : Number of elements in the data set
 *						Return:
 *							This prints out the array in order from smallest element to largest element  
 *				
 *				find_mean():
 *							This calculates the mean of the data set
 *						Parameters:
 *							unsigned char * min : Pointer to the data set
 *							unsigned int n : Number of elements in the data set
 *						Return:
 *							This prints out the mean of the data set
 *				
 *				find_median():
 *							This calculates the median of the sorted data set
 *						Parameters:
 *							unsigned char * med : Pointer to the data set
 *							unsigned int num : Number of elements in the data set
 *						Return:
 *							This prints out the median of the data set
 *
 *				find_maximum():
 *							This calculates the largest element in the data set
 *						Parameters:
 *							unsigned char * max: Pointer to the data set
 *							unsigned int n : Number of elements in the data set
 *						Return:
 *							This prints out the largest element in the data set
 *
 *				find_minimum():
 *							This calculates the smallest element in the data set
 *						Parameters:
 *							unsigned char * min: Pointer to the data set
 *							unsigned int n : Number of elements in the data set
 *						Return:
 *							This prints out the smallest element in the data set
 *
 * @param char * ptr points to the data set
 * @param int number number of elements in the data set
 * 
 *
 * @return the sorted array and its statistics
 */


#endif /* __STATS_H__ */
