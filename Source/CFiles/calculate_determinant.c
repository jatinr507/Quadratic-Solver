/*
	calculate_determinant takes in the 3 values for the Quadratic Formula,
	a,b and c and calculates the determinant and returns that value.
	Input: Three doubles, a,b and c
	Output: Returns the determinant
*/
double calculate_determinant(double a, double b, double c){
	double determinant = 0.0;
	determinant = (b*b)-(4*(a*c));
	return determinant;
}
