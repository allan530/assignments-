//

#include <stdio.h>

int main(){
     float radius;//%f
     float height;//&f
     float volume;//%f
     float surface_area;//%f
     double pi;//%lf


     //prompt the user for input
     printf("The radius of the cylinder is:");
     scanf("%f",&radius);
     printf("The height of the cylinder is:");
     scanf("%f",&height);
     printf("The pi is:");
     scanf("%lf",&pi);

     //calculate the volume and the surface area of the cylinder

     volume=pi*radius*radius*height;
     surface_area=(pi*radius*radius*2)+(pi*radius*height*2);

     //display results

     printf("The volume is %f\n",volume);
     printf("the surface_area is%f\n",surface_area);
     return 0;}
