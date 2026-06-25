/*
------------------------------------------------------------------------
Program Name : Travel Ticket Booking System
Author       : MrLogeshrt
Day          : 3
Program No   : 9
Description  : Simulates a travel ticket booking system that displays transport details and calculates the
               total fare based on the selected transport mode and number of passengers.

Concepts Used:
- Variables
- Arithmetic Operators
- Switch Case Statements
- Input/Output Functions
- Menu-Driven Programming
- Decision Making
- Input Validation
------------------------------------------------------------------------
*/


#include <stdio.h>

int main() 
{
    int choice;
    int passengers;
    int fare_per_passenger;
    int total_fare;
    

    printf("\n===== Travel Ticket Booking System =====\n");
    printf("1. Bus\n");
    printf("2. Train\n");
    printf("3. Flight\n");
    printf("4. Metro\n");
    printf("5. Exit\n");
    printf("========================================\n");

    printf("\nEnter your choice (1-5) : ");
    scanf("%d", &choice);
    
    switch(choice) 
    {
        case 1:

            fare_per_passenger = 500; 

            printf("\nTransport Type : Bus\n");
            printf("Fare Per Passenger : Rs.%d\n", fare_per_passenger);
            printf("Travel Speed : 60 km/h\n");
            printf("Availability : Daily\n");

            printf("\nEnter number of passengers: ");
            scanf("%d", &passengers);
            
            if (passengers > 0) 
            {
                total_fare = fare_per_passenger * passengers;

                printf("Passengers : %d\n", passengers);
                printf("Total Fare : Rs.%d\n", total_fare);
            } 
            
            else 
            {
                printf("Passenger count must be greater than zero.\n");
            }

            break;

        case 2:

            fare_per_passenger = 800;

            printf("\nTransport Type : Train\n");
            printf("Fare Per Passenger : Rs.%d\n", fare_per_passenger);
            printf("Travel Speed : 80 km/h\n");
            printf("Availability : Daily\n");

            printf("\nEnter number of passengers: ");
            scanf("%d", &passengers);
            
            if (passengers > 0) 
            {
                total_fare = fare_per_passenger * passengers;

                printf("Passengers : %d\n", passengers);
                printf("Total Fare : Rs.%d\n", total_fare);
            } 
            
            else 
            {
                printf("Passenger count must be greater than zero.\n");
            }

            break;

        case 3:

            fare_per_passenger = 3000;

            printf("\nTransport Type : Flight\n");
            printf("Fare Per Passenger : Rs.%d\n", fare_per_passenger);
            printf("Travel Speed : 800 km/h\n");
            printf("Availability : Multiple\n");

            printf("\nEnter number of passengers: ");
            scanf("%d", &passengers);
            
            if (passengers > 0) 
            {
                total_fare = fare_per_passenger * passengers;

                printf("Passengers : %d\n", passengers);
                printf("Total Fare : Rs.%d\n", total_fare);
            } 
            
            else 
            {
                printf("Passenger count must be greater than zero.\n");
            }

            break;

        case 4:

            fare_per_passenger = 10;

            printf("\nTransport Type : Metro\n");
            printf("Fare Per Passenger : Rs.%d\n", fare_per_passenger);
            printf("Travel Speed : 40 km/h\n");
            printf("Availability : Every 5 min\n");

            printf("\nEnter number of passengers: ");
            scanf("%d", &passengers);
            
            if (passengers > 0) 
            {
                total_fare = fare_per_passenger * passengers;

                printf("Passengers : %d\n", passengers);
                printf("Total Fare : Rs.%d\n", total_fare);
            } 
            
            else 
            {
                printf("Passenger count must be greater than zero.\n");
            }

            break;

        case 5:

            printf("\nThank you for using Travel Ticket Booking System. Goodbye!\n");
            break;

        default:

            printf("\nInvalid choice! Please select from 1 to 5 only.\n");
            break;
    }
    
    return 0;
}


/*
========================================================================

Sample Input 1 :
1 2

Sample Output 1 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 1

Transport Type : Bus
Fare Per Passenger : Rs.500
Travel Speed : 60 km/h
Availability : Daily

Enter number of passengers: 2
Passengers : 2
Total Fare : Rs.1000

========================================================================

Sample Input 2 :
2 3

Sample Output 2 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 2

Transport Type : Train
Fare Per Passenger : Rs.800
Travel Speed : 80 km/h
Availability : Daily

Enter number of passengers: 3
Passengers : 3
Total Fare : Rs.2400

========================================================================

Sample Input 3 :
3 1

Sample Output 3 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 3

Transport Type : Flight
Fare Per Passenger : Rs.3000
Travel Speed : 800 km/h
Availability : Multiple

Enter number of passengers: 1
Passengers : 1
Total Fare : Rs.3000

========================================================================

Sample Input 4 :
4 5

Sample Output 4 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 4

Transport Type : Metro
Fare Per Passenger : Rs.10
Travel Speed : 40 km/h
Availability : Every 5 min

Enter number of passengers: 5
Passengers : 5
Total Fare : Rs.50

========================================================================

Sample Input 5 :
5

Sample Output 5 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 5

Thank you for using Travel Ticket Booking System. Goodbye!

========================================================================

Sample Input 6 :
0

Sample Output 6 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 0

Invalid choice! Please select from 1 to 5 only.

========================================================================

Sample Input 7 :
1 -2

Sample Output 7 :

===== Travel Ticket Booking System =====
1. Bus
2. Train
3. Flight
4. Metro
5. Exit
========================================

Enter your choice (1-5) : 1

Transport Type : Bus
Fare Per Passenger : Rs.500
Travel Speed : 60 km/h
Availability : Daily

Enter number of passengers: -2
Passenger count must be greater than zero.

========================================================================

*/