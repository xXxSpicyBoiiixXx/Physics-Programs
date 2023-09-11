/* Author: Md Ali 
 * Date: 09/10/2023
 *
 * Question: If you are driving 85km/h along a straight road and you 
 *           look to the side for 2.0 seconds, how far do you travel
 *           during this inattentive period?
 */

#include <stdio.h>

int main() { 
    
    const double km_to_m = 1000;
    const double h_to_s = 3600;

    double velocity = 85; // km/h
    double time = 2; // seconds
    
    double distance; 

    // converting km/h to m/s
    velocity = (velocity * km_to_m)/h_to_s; 

    distance = velocity * time; 

    printf("Your total distance you have traveled is %f meters.", distance);

}
