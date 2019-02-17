//============================================================================
// Name        : Juliette Rocco
// Date        : October 9th 2018
// Description : Pascals Triangle
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

long row{0},column{0}, num1{1}; //variables for the recursive function
int count{0};
int pascal_triangle(int n);
int pascal_triangle_recursive(int n);

//main function receives a number and sends it to the pascal triangle function
#ifndef MARMOSET_TESTING
int main() {
								long n;
								std::cout<<"Please enter a number" <<std::endl;
								std::cin >> n;
//prints the number of integers in the triangle
								std::cout<< pascal_triangle(n)<<std::endl;
								std::cout<< pascal_triangle_recursive(n)<< std::endl;
								return 0;
}
#endif

int pascal_triangle(int n){
								long num1;
								int counter{0};
								//column counter
								for (long k{0}; k <= n; k++)
								{
																//resets num1 to 1 every time so there is a 1 on the outside and on the inside
																num1 = 1;
																//row counter
																for (long i{0}; i <= k; i++)
																{
																								std::cout<<num1 <<" "; //prints the numbers in a row followed by a space
																								num1 = num1 * (k-i) / (i + 1); //calculates all the numbers in between the outside and inside 1's
																								counter += 1; //adds a counter to how many variables
																}
																std::cout<<std::endl; //ends the line
								}
								return counter; //returns the counter variable
}

int pascal_triangle_recursive(int n)
{
// loop that resets the variables after it is finished the loop
								if (row > n && count != 0)
								{
																int tempcount;
																tempcount = count;
																count = 0;
																column = 0;
																num1 =1;
																row = 0;
																return tempcount;
								}

								else if (row <= n)
								{
																for (long column{0}; column <= row; column++)
																{ //prints the first number
																								if (column == 0)
																								{
																																std::cout<<num1 <<" ";
																																count += 1;
																								}
																								else
																								{
																																//prints the numbers in between
																																num1 = num1 * (row + 1 - column) / (column); //calculates all the numbers in between the outside and inside 1's
																																std::cout<<num1 <<" "; //prints the numbers in a row followed by a space
																																count += 1; //adds a counter to how many variables
																								}
																}

																row += 1; //counter for 1
																std::cout << std::endl; //ends the line
																pascal_triangle_recursive(n);

								}


}
