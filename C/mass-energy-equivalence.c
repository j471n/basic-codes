#include <stdio.h>
#include <math.h>

int main()
{

      //intialazing the  variables
      float energy, mass;
      printf("this is the mass-energy equivalence.\n");
      //taking input
      printf("Input the value of mass (kgs) : ");
      scanf("%f", &mass);

      //logic
      energy = mass * 3 * pow(10, 8);
      printf("Energy = %2.f Jule", energy);
      return 0;
}