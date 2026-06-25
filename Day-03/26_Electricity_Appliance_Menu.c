/*
------------------------------------------------------------------------
Program Name : Electricity Appliance Menu
Author       : MrLogeshrt
Day          : 3
Program No   : 6
Description  : Calculates electrical energy consumption in Wh and kWh based on the selected appliance and usage duration.

Concepts Used:
- Variables
- Arithmetic Operators
- Switch Case Statements
- Input/Output Functions
- Menu-Driven Programming
- Decision Making
- Unit Conversion
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int choice;
    double hours, energyWh, energyKWh;

    /* display the appliance selection menu */
    printf("Electricity Appliance Menu\n");
    printf("1.Fan\n");
    printf("2.TV\n");
    printf("3.Refrigerator\n");
    printf("4.Washing Machine\n");
    printf("5.AC\n");
    printf("6.Exit\n")

    /* prompt the user for a choice */
    printf("\nChoice : ");
    scanf("%d", &choice);

    /* determine power consumption based on selected appliance */
    switch (choice)
    {
        case 1:
            printf("\nEnter usage hours : ");
            scanf("%lf", &hours);

            if(hours <= 0)
            {    
                printf("\nInvalid usage hours.\n");    
                break;
            }

            energyWh = 75.0 * hours;
            energyKWh = energyWh / 1000.0;

            printf("\nFan = 75W\n");
            printf("Usage = %.2f Hours\n", hours);
            printf("Energy Consumption = %.2f Wh (%.3f kWh)\n", energyWh, energyKWh);
            break;

        case 2:
            printf("\nEnter usage hours : ");
            scanf("%lf", &hours);

            if(hours <= 0)
            {    
                printf("\nInvalid usage hours.\n");    
                break;
            }

            energyWh = 100.0 * hours;
            energyKWh = energyWh / 1000.0;

            printf("\nTV = 100W\n");
            printf("Usage = %.2f Hours\n", hours);
            printf("Energy Consumption = %.2f Wh (%.3f kWh)\n", energyWh, energyKWh);
            break;
            
        case 3:
            printf("\nEnter usage hours : ");
            scanf("%lf", &hours);

            if(hours <= 0)
            {    
                printf("\nInvalid usage hours.\n");    
                break;
            }

            energyWh = 200.0 * hours;
            energyKWh = energyWh / 1000.0;

            printf("\nRefrigerator = 200W\n");
            printf("Usage = %.2f Hours\n", hours);
            printf("Energy Consumption = %.2f Wh (%.3f kWh)\n", energyWh, energyKWh);
            break;

        case 4:
            printf("\nEnter usage hours : ");
            scanf("%lf", &hours);

            if(hours <= 0)
            {    
                printf("\nInvalid usage hours.\n");    
                break;
            }


            energyWh = 500.0 * hours;
            energyKWh = energyWh / 1000.0;

            printf("\nWashing Machine = 500W\n");
            printf("Usage = %.2f Hours\n", hours);
            printf("Energy Consumption = %.2f Wh (%.3f kWh)\n", energyWh, energyKWh);
            break;

        case 5:
            printf("\nEnter usage hours : ");
            scanf("%lf", &hours);

            if(hours <= 0)
            {    
                printf("\nInvalid usage hours.\n");    
                break;
            }

            energyWh = 1500.0 * hours;
            energyKWh = energyWh / 1000.0;

            printf("\nAC = 1500W\n");
            printf("Usage = %.2f Hours\n", hours);
            printf("Energy Consumption = %.2f Wh (%.3f kWh)\n", energyWh, energyKWh);
            break;
        
        case 6 :
            printf("\nExit complete.\n");
            break;
            
        default:
            
            /* handle invalid menu selection */
            printf("\nInvalid choice\n");
            break;
    }

    return 0;
}


/*

Sample Input 1 :
1
8

Sample Output 1 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice: 1

Enter usage hours : 8 
Fan = 75W
Usage = 8.00 Hours
Energy Consumption = 600.00 Wh (0.600 kWh)

Sample Input 2 :
2
5

Sample Output 2 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 2

Enter usage hours : 5
TV = 100W
Usage = 5.00 Hours
Energy Consumption = 500.00 Wh (0.500 kWh)

Sample Input 3 :
3
10

Sample Output 3 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 3

Enter usage hours : 10
Refrigerator = 200W
Usage = 10.00 Hours
Energy Consumption = 2000.00 Wh (2.000 kWh)

Sample Input 4 :
4
3

Sample Output 4 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 4

Enter usage hours : 3
Washing Machine = 500W
Usage = 3.00 Hours
Energy Consumption = 1500.00 Wh (1.500 kWh)

Sample Input 5 :
5
2

Sample Output 5 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 5

Enter usage hours : 2
AC = 1500W
Usage = 2.00 Hours
Energy Consumption = 3000.00 Wh (3.000 kWh)

Sample Input 9 :
9

Sample Output 9 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 9

Invalid choice

Sample Input 10 :
6

Sample Output 9 :
Electricity Appliance Menu
1.Fan
2.TV
3.Refrigerator
4.Washing Machine
5.AC
6.Exit

Choice : 6

Exit complete.

*/