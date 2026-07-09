/*
------------------------------------------------------------------------
Program Name : Data Packet Validator
Author       : MrLogeshrt
Day          : 6
Program No   : 9
Description  : Validates data packets and checks for negative values.
------------------------------------------------------------------------

Concepts Used:
- Variables
- Arrays
- for Loop
- Relational Operators
- Conditional Statements
- Running Total
- Input Validation
- Input/Output Functions
------------------------------------------------------------------------

Constraints:

1. Packet count must be between 1 and 100.
2. Packet values may be positive or negative integers.
3. Negative packet values indicate corrupted data.
4. Checksum = Sum of all packet values.
5. If checksum is divisible by 7 and no negative packets exist,
   the packet transmission is considered Valid.
------------------------------------------------------------------------
*/


#include <stdio.h>

int main()
{
    int n, negative_value = 0, sum = 0;

    // Read packet data from the user
    do
    {
        printf("\nEnter number of packets : ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nPacket count must be greater than zero.\n");
        }

        else if (n > 100)
        {
            printf("\nPacket count must not exceed 100.\n");
        }

    } while(n <= 0 || n > 100);
    
    int data_packet[n];
    

    printf("Enter Packet data : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data_packet[i]);
        sum += data_packet[i];
        
        if (data_packet [i] < 0)
        {
            negative_value++;
        }
    }

    // Display the packet validation report
    printf("\n=======================================================\n");
    printf("\tData Packet Validation Report\n");
    printf("=======================================================\n");
    printf("Total Packets            : %d\n", n);
    printf("\nReceived Packet Data     : ");
    for(int i = 0; i < n; i ++)
    {
        printf("%d ", data_packet[i]);

        
    }

    if (negative_value == 0)
    {
        printf("\nChecksum        : %d", sum);
        printf("\nPacket Status   : %s\n", (sum % 7 == 0) ? "Valid" : "Not Valid");
    }

    else 
    {
        printf("Corrupted Packets        : %d\n", negative_value);
        printf("\nPacket Status   : Suspicious\n");
    }

    

    return 0;
}


/*
========================================================================

Sample Input 1 :
5
7
14
21
28
35

Sample Output 1 :

Enter number of packets : 5

Enter Packet data : 
7 14 21 28 35

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 5

Received Packet Data     : 7 14 21 28 35 
Checksum        : 105
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 2 :
4
10
20
30
40

Sample Output 2 :

Enter number of packets : 4

Enter Packet data : 
10 20 30 40

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 4

Received Packet Data     : 10 20 30 40 
Checksum        : 100
Packet Status   : Not Valid
=======================================================

========================================================================

Sample Input 3 :
3
-5
10
15

Sample Output 3 :

Enter number of packets : 3

Enter Packet data : 
-5 10 15

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 3

Received Packet Data     : -5 10 15 
Corrupted Packets        : 1

Packet Status   : Suspicious
=======================================================

========================================================================

Sample Input 4 :
1
7

Sample Output 4 :

Enter number of packets : 1

Enter Packet data : 
7

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 1

Received Packet Data     : 7 
Checksum        : 7
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 5 :
6
-10
-20
-30
10
20
30

Sample Output 5 :

Enter number of packets : 6

Enter Packet data : 
-10 -20 -30 10 20 30

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 6

Received Packet Data     : -10 -20 -30 10 20 30 
Corrupted Packets        : 3

Packet Status   : Suspicious
=======================================================

========================================================================

Sample Input 6 :
7
1
2
3
4
5
6
7

Sample Output 6 :

Enter number of packets : 7

Enter Packet data : 
1 2 3 4 5 6 7

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 7

Received Packet Data     : 1 2 3 4 5 6 7 
Checksum        : 28
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 7 :
2
-7
-14

Sample Output 7 :

Enter number of packets : 2

Enter Packet data : 
-7 -14

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 2

Received Packet Data     : -7 -14 
Corrupted Packets        : 2

Packet Status   : Suspicious
=======================================================

========================================================================

Sample Input 8 :
5
0
0
0
0
0

Sample Output 8 :

Enter number of packets : 5

Enter Packet data : 
0 0 0 0 0

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 5

Received Packet Data     : 0 0 0 0 0 
Checksum        : 0
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 9 :
4
100
200
300
400

Sample Output 9 :

Enter number of packets : 4

Enter Packet data : 
100 200 300 400

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 4

Received Packet Data     : 100 200 300 400 
Checksum        : 1000
Packet Status   : Not Valid
=======================================================

========================================================================

Sample Input 10 :
3
14
21
7

Sample Output 10 :

Enter number of packets : 3

Enter Packet data : 
14 21 7

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 3

Received Packet Data     : 14 21 7 
Checksum        : 42
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 11 :
5
-1
-2
-3
-4
-5

Sample Output 11 :

Enter number of packets : 5

Enter Packet data : 
-1 -2 -3 -4 -5

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 5

Received Packet Data     : -1 -2 -3 -4 -5 
Corrupted Packets        : 5

Packet Status   : Suspicious
=======================================================

========================================================================

Sample Input 12 :
1
0

Sample Output 12 :

Enter number of packets : 1

Enter Packet data : 
0

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 1

Received Packet Data     : 0 
Checksum        : 0
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 13 :
0

Sample Output 13 :

Enter number of packets : 0

Packet count must be greater than zero.

Enter number of packets : 3

Enter Packet data : 
7 14 21

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 3

Received Packet Data     : 7 14 21 
Checksum        : 42
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 14 :
101

Sample Output 14 :

Enter number of packets : 101

Packet count must not exceed 100.

Enter number of packets : 2

Enter Packet data : 
3 4

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 2

Received Packet Data     : 3 4 
Checksum        : 7
Packet Status   : Valid
=======================================================

========================================================================

Sample Input 15 :
4
10
-5
20
-2

Sample Output 15 :

Enter number of packets : 4

Enter Packet data : 
10 -5 20 -2

=======================================================
Data Packet Validation Report
=======================================================
Total Packets            : 4

Received Packet Data     : 10 -5 20 -2 
Corrupted Packets        : 2

Packet Status   : Suspicious
=======================================================

========================================================================
*/