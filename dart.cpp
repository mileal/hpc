#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#define realPI 3.1415926535897932384626433832795
using namespace std;

int main()
{
    double x; 		// x coordinate of needle's center
    double k; 		// angle between vertical position and needle
    double l; 		// lenght of the needle
    double n; 		// amount of trials
    double p = 0; 	// positive trials
    double y; 		// sin(angle) * l
    double pi;
    long i;   // loop counter
     clock_t start, end;

srand(time(NULL));

cout << "Number of iterations: ";
cin >> n;

l = 0.9;
start = clock();
ios_base::sync_with_stdio(false);


for (i=0; i<n; i++)
{
    k = (double)rand()/(RAND_MAX)*(2*realPI);       // random angle

    x = (double)rand()/(RAND_MAX);         			// random x (0 to 1)

    y = (l/2) * sin (k);


    if (x<=y)
    {
        p++;
    }

}

pi = (l*n)/(2*p);
end = clock();
 double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
cout << "Estimated pi: " << pi		 << endl;
cout << "FYI, real pi: " << realPI   << endl;


return 0;
}
