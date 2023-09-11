/* Author: Md Ali 
 * Date: 09/10/2023
 *
 * Question: What must your car's average speed be in order to travel 
 *           235km in 2.85h? 
 */

#include <stdio.h>

int main() { 
    
    const double km_to_miles = 0.6213711922;

    double distance = 235; // km 
    double time = 2.85; // hours
    
    double speed_kmh;
    double speed_mph;

    speed_kmh = distance/time;
    speed_mph = (distance * km_to_miles)/time;

    printf("Your total speed you will need is  %f kilometers per hour or %f miles per hour", speed_kmh, speed_mph);

}
