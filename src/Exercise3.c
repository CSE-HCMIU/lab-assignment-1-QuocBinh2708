/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int i, prime, n;
    for(n=1; n<testcase; n++)
    {
        prime = 0;
        for(i=1; i<=testcase; i++)
		{
			if (n%i == 0)
				prime++;
		}
		if (prime == 2)
			printf("%d ", n);
    }
	return 0;
} 
