#include <iostream>
#include <cmath>	//for sqrt, can make calculations so much faster
#include <vector>	//for prime list and factors for a number
using namespace std;


bool isPrime (int num, vector<int> &primes);

bool primeFactorization (int num, vector<int> &primes, vector<int> current_factorization);


int main (void)
{

	bool factorHasTwo = false;

	//using vectors so I don't have to have a theoretical max it can go over. Plus I like vectors
	vector<int> primes;
	vector<int> current_factorization;

	
	cout << "0 is even\n";	//0 has to be done manually as it's less then all primes therefore no prime factorization

	for (int i = 1; i <= 500000; i++)
	{
		factorHasTwo = primeFactorization(i, primes, current_factorization);


		if(factorHasTwo)	//if the prime factorization contains a 2 prints the number is even, else it's odd
		{
			cout << i << " is even" << endl;
		}
		else
		{
			cout << i << " is odd" << endl;
		}
	}



	return 0;
}




bool isPrime (int num, vector<int> &primes)
{

	int max_possible_prime = sqrt(num); //max possible prime of x is root(x)

	for (int check_num : primes)	//checks to see if the current number is already in list of primes
	{
		if (check_num == num)	//if the current number is already in the list of primes we don't need to do any calculations and can immedietly return true
		{
			return true;
		}
	}



	if (num <= 1)	//min prime is 2
	{
		return false;
	}


	
	if (num == 2) //special case for 2 as it's only even prime
	{
		primes.push_back(num);
		return true;
	}
	
	
	for (int i = 2; i <= max_possible_prime; i++) //this works by checking if num is divisible by any number other then 1
	{
		if (num % i == 0) //if a factor other then 1 exists then we know the number isn't a prime number
		{
			return false;
		}
	}


	primes.push_back(num);	//if we got here we know the number is a prime number so we add it to the prime vector
	return true;

}


bool primeFactorization (int num, vector<int> &primes, vector<int> current_factorization)
{
	bool hasTwo = false;

	for (int i = 2; i <= num; i++)
	{
		//while number we're factorizing is divisible by i
		while (num % i == 0) //while instead of if as we can have multiple of same factors
		{
			if (isPrime(i, primes)) //checks if i is prime or not
			{
				current_factorization.push_back(i); //if a number is prime we push it onto the factorization vector

				if (i == 2) //special case for testing if 2 is a prime factor
				{
					hasTwo = true; //flag is set to true if 2 is a factor
				}
			}

			num /= i;	//divides num by i as we know i is a factor.
		}
	}


	if (hasTwo)	//returns true or false depending if the prime factorization contains at least one 2
	{
		return true;
	}
	else
	{
		return false;
	}

}

