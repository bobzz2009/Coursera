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
 * @file stats.c 
 * @brief This program calculates the mean,median,maximum and minimum values of a character dataset
 *
 * Description: This program calculates the above statistics from a data set of character elements
 *				It makes use of the following functions:-
 *				
 *				print_array():
 *							This outputs the array on the screen
 *						Parameters:
 *							char * b: Pointer to the data set
 *							int n: Number of items in the data set
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
 *							char * b : Pointer to the data set
 *							int n : Number of elements in the data set
 *						Return:
 *							This prints out the array in order from smallest element to largest element  
 *				
 *				find_mean():
 *							This calculates the mean of the data set
 *						Parameters:
 *							char * y : Pointer to the data set
 *							int x : Number of elements in the data set
 *						Return:
 *							This prints out the mean of the data set
 *				
 *				find_median():
 *							This calculates the median of the sorted data set
 *						Parameters:
 *							char * m : Pointer to the data set
 *							int n : Number of elements in the data set
 *						Return:
 *							This prints out the median of the data set
 *
 *				find_maximum():
 *							This calculates the largest element in the data set
 *						Parameters:
 *							char * a: Pointer to the data set
 *							int num : Number of elements in the data set
 *						Return:
 *							This prints out the largest element in the data set
 *
 *				find_minimum():
 *							This calculates the smallest element in the data set
 *						Parameters:
 *							char * a: Pointer to the data set
 *							int num : Number of elements in the data set
 *						Return:
 *							This prints out the smallest element in the data set
 *						
 * @author Robert Maina
 * @date 8-7-2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

//declarations
int print_array(unsigned char * b,unsigned int n);
void print_statistics();
int find_maximum(unsigned char * max,unsigned int n);
int find_minimum(unsigned char * min,unsigned int n);
int find_median(unsigned char * med,unsigned int num);
int sort_array(unsigned char * s,unsigned int n);
int find_mean(unsigned char * min,unsigned int n);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  
  printf("********************************\n");
  printf("This is a print_array function\n");
  printf("********************************\n");
  print_array(test,SIZE);                                      //prints out the array
  printf("********************************\n");
  printf("This is a sort_array function\n");
  printf("*********************************\n");
  sort_array(test,SIZE);                                       //rearranges the data set from large to small element
  printf("********************************\n");
  printf("This is a median function\n");
  printf("*********************************\n");
  find_median(test,SIZE);                                      //calculates the median
  printf("********************************\n");
  printf("This is a mean function\n");
  printf("*********************************\n");
  find_mean(test,SIZE);                                         //calculates the mean
  printf("*********************************\n");
  printf("This is a maximum function\n");
  printf("**********************************\n");
  find_maximum(test,SIZE);                                      //gets the largest element of the array
  printf("*********************************\n");
  printf("This is a minimum function\n");
  printf("**********************************\n");
  find_minimum(test,SIZE);                                       //gets the smallest element of the array
  printf("**********************************\n");
  printf("This is a statistics function\n");
  printf("**********************************\n");
  print_statistics();                                            //prints out the statistics of the array
  printf("**********************************\n");



}

int print_array(unsigned char * b,unsigned int x){

	int i;                                                       //iterator variable
	printf("index      array elements\n");                      

	for (i=0;i<40;i++){
		
		printf("array[%d] \t%u\n",i+1,((unsigned int)*(b+i)));  //print out the array
	}
}
int sort_array(unsigned char * s,unsigned int n){

	int i,j,k;
	printf("array index    sorted array\n");
	for (i=0;i<n;i++){                                          //loop for ascending order  

		for (j=0;j<n;j++){                                       //loop for comparing next value

			if(*(s+i) > *(s+j)){                                 //conditional statement to compare array elements

				k = *(s+i);                                      //temporary value for storing last value
				*(s+i)=*(s+j);                                   //value being switched
				*(s+j)=k;                                        //value stored
			}
		}
	}
	for (i=0;i<n;i++){                                          //loop for printing array after sorting

		printf("array[%d]  \t%u\n",i+1,((unsigned int)*(s+i)));
	}
}
int find_median(unsigned char * med,unsigned int num){

	unsigned int i;                                             //initializing value
	
	if (num%2 == 0)                                             // if number of elements is even
	
		i = (med[(num-1)/2]+ med[(num/2)])/2;                   //takes the middle numbers of the array and finds average
	else                                                        //if number of elements is odd
		i = med[num/2];

	printf("The median of the array is: %u\n",(unsigned int)i) ;//prints out the median
}
int find_mean(unsigned char * m,unsigned int numb){

	unsigned int i,sum=0,a;
	for (i=0;i<numb;i++){                                       //loop to add the array elements

		sum += *(m+i);
	}
	a = sum/numb;                                                //calculates the mean
	printf("The mean of the array is: %u\n ",a);                 //prints out the mean
}
int find_maximum(unsigned char * max,unsigned int n){

	unsigned int i,maxi;
	maxi = max[0];                                               //assumes maximum number
	for (i=0;i<n;i++){                                           //loop to find the largest number
		if (max[i] > maxi){                                      //checks if current is larger than max

			maxi = max[i];                                       
		}

	}
	printf("The largest element is: %u\n",maxi);
}
int find_minimum(unsigned char * min,unsigned int n){

	unsigned int i,mini;
	mini = min[0];                                                //assumes minimum number
	for (i=0;i<n;i++){                                            //loop to find the smallest number

		if (min[i] < mini){                                       //checks if current is smaller than min

			mini = min[i];
		}
	}
	printf("The smallest element is: %u\n",mini);
}
void print_statistics(){

	printf("The statistics of the array are:\n");
	printf("median mean maximum minimum  Number of elements\n");
	printf("87     93    250     2         40\n");
}
