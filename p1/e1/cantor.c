/**
 	Cantor's pairing function listing.
 	Use: `cantor n` where n is the number of naturals pairs to be printed
*/
#include <stdio.h>
#include <math.h>

int n;

int w,t,y,x,z;

int main(int argc, char const *argv[])
{
	n = (argc>1)? atoi(argv[1]):0;
	printf("Printing the first %d pairs:\n",n );
	z=0;
	while(z<=n){
		w = floor((sqrt(8*z+1)-1)/2);
		t = (w*w+w)/2;
		y = z-t;
		x = w-y;
		printf("%d = (%d,%d)\n",z,x,y );
		z++;
	}
	return 0;
}