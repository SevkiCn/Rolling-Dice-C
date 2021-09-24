#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Initializing global variables to be used in functions for rolling one dice.
int Frequency_of_1 = 0;
int Frequency_of_2 = 0;
int Frequency_of_3 = 0;
int Frequency_of_4 = 0;
int Frequency_of_5 = 0;
int Frequency_of_6 = 0;

// Initializing global variables to be used in functions for rolling two dice.
int frequency_of_2 = 0;
int frequency_of_3 = 0;
int frequency_of_4 = 0;
int frequency_of_5 = 0;
int frequency_of_6 = 0;
int frequency_of_7 = 0;
int frequency_of_8 = 0;
int frequency_of_9 = 0;
int frequency_of_10 = 0;
int frequency_of_11 = 0;
int frequency_of_12 = 0;

void rolling_one_dice( void ); // function prototype
void rolling_two_dice( void ); //function prototype
void histogram_one_dice( void ); // function prototype
void histogram_two_dice( void ); // function prototype

/* Enterance to the program with main function */
int main( void )
{
    int preference; // Variable that represents the preference of the user.
    while (1 != 2) { // Creating an endless while loop in order to provide the chance of using the program repeatedly.
        printf("Please type '1' in order to roll one dice and type '2' for two dices: ");
        scanf("%d", &preference);

        if ( preference == 1 ) { // Calling necessary functions in case of user decides to roll one dice.
            rolling_one_dice();
            histogram_one_dice();

        }
        else if ( preference == 2 ) { // Calling necessary functions in case of user decides to roll two dice.
            rolling_two_dice();
            histogram_two_dice();
        }
        else // Error message in case of user enters a different value other than '1' and '2'.
            printf(" You can type only '1' or '2' in order to process. Please try again.\n ");
    }
    printf("\n\n");

    return 0;
}

/* Beginning of the rolling function for one dice. */
void rolling_one_dice( void )
{


    int number_of_rolls; // Number of rolling one dice.
    int face; // Value of one face of a dice.

    /* Calling an srand() function in order to prevent having same random numbers in each execution. */
    unsigned seed;

    printf("Please enter a random number:");
    scanf("%u", &seed);
    printf("\n\n");

    srand( seed );


/* Beginning of the for loop in order to roll 10000 times. */
    for ( number_of_rolls = 1; number_of_rolls <= 10000; number_of_rolls++ ) {
        face = 1 + rand() % 6; // Arranging the scale of random numbers between 1 and 6.

        switch ( face ) { // Counting up the frequencies of each face occurrance for one dice.

        case 1:
            ++Frequency_of_1;
            break;
        case 2:
            ++Frequency_of_2;
            break;

        case 3:
            ++Frequency_of_3;
            break;

        case 4:
            ++Frequency_of_4;
            break;

        case 5:
            ++Frequency_of_5;
            break;

        case 6:
            ++Frequency_of_6;
            break;


        }





    }

    /* Declaring the number of each frequencies to the user. */
    printf("The frequency of 1 is %d\n", Frequency_of_1);
    printf("The frequency of 2 is %d\n", Frequency_of_2);
    printf("The frequency of 3 is %d\n", Frequency_of_3);
    printf("The frequency of 4 is %d\n", Frequency_of_4);
    printf("The frequency of 5 is %d\n", Frequency_of_5);
    printf("The frequency of 6 is %d\n", Frequency_of_6);
    printf("\n\n");
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n\n");
    printf("###### The Histogram of Rolling One Dice ###### "); // Title for upcoming histogram.
    printf("\n\n");
    return;




}

/* Beginning of the histogram function for one dice. */
void histogram_one_dice( void )
{   /* The value of scaling factor for histogram is determined as 281 */
    Frequency_of_1 = Frequency_of_1 / 281;
    Frequency_of_2 = Frequency_of_2 / 281;
    Frequency_of_3 = Frequency_of_3 / 281;
    Frequency_of_4 = Frequency_of_4 / 281;
    Frequency_of_5 = Frequency_of_5 / 281;
    Frequency_of_6 = Frequency_of_6 / 281;

    int Frequency_array[6] = {Frequency_of_1, Frequency_of_2, Frequency_of_3, Frequency_of_4, Frequency_of_5, Frequency_of_6}; //Creating an array for frequencies.

    for( int i = 7; i > 0; i-- ){ // Creating an outer loop for 7 units of height.
      for( int j = 0; j < 6; j++ ){
        if( Frequency_array[j] >= i )
          printf("* "); // Filling the histogram with '*' horizontally if it's frequency value corresponds with the height of loop.
        else
          printf("  "); // Filling the histogram with ' ' horizontally if it's frequency value does not correspond with the height of loop.
      }
      printf("\n");
    }
        for( int i = 1; i <= 6; i++) printf("%d ",i ); // Creating an horizontal axis with face values of one dice.
        printf("\n\n");
        return;
}












/* Beginning of the rolling function for two dice. */
void rolling_two_dice(void)
{




    int number_of_rolls; // Number of rolling one dice.
    int face1; // Value of one face of the first dice.
    int face2; // Value of one face of the second dice.

/* Calling an srand() function in order to prevent having same random numbers in each execution. */
    unsigned seed;

    printf("Please enter a random number: ");
    scanf("%u", &seed);
    printf("\n\n");

    srand( seed );


/* Beginning of the for loop in order to roll 10000 times. */
    for ( number_of_rolls = 1; number_of_rolls <= 10000; number_of_rolls++ ) {
        face1 = 1 + rand() % 6; // Arranging the scale of random numbers between 1 and 6.
        face2 = 1 + rand() % 6; // Arranging the scale of random numbers between 1 and 6.

        switch ( face1 + face2 ) { // Counting up the frequencies for the sums of face values of two dices.


        case 2:
            ++frequency_of_2;
            break;

        case 3:
            ++frequency_of_3;
            break;

        case 4:
            ++frequency_of_4;
            break;

        case 5:
            ++frequency_of_5;
            break;

        case 6:
            ++frequency_of_6;
            break;

        case 7:
            ++frequency_of_7;
            break;

        case 8:
            ++frequency_of_8;
            break;

        case 9:
            ++frequency_of_9;
            break;

        case 10:
            ++frequency_of_10;
            break;

        case 11:
            ++frequency_of_11;
            break;

        case 12:
            ++frequency_of_12;
            break;


        }





    }
    /* Declaring the number of each frequencies to the user. */
    printf("The frequency of sums equal to 2 is %d\n", frequency_of_2);
    printf("The frequency of sums equal to 3 is %d\n", frequency_of_3);
    printf("The frequency of sums equal to 4 is %d\n", frequency_of_4);
    printf("The frequency of sums equal to 5 is %d\n", frequency_of_5);
    printf("The frequency of sums equal to 6 is %d\n", frequency_of_6);
    printf("The frequency of sums equal to 7 is %d\n", frequency_of_7);
    printf("The frequency of sums equal to 8 is %d\n", frequency_of_8);
    printf("The frequency of sums equal to 9 is %d\n", frequency_of_9);
    printf("The frequency of sums equal to 10 is %d\n", frequency_of_10);
    printf("The frequency of sums equal to 11 is %d\n", frequency_of_11);
    printf("The frequency of sums equal to 12 is %d\n", frequency_of_12);
    printf("\n\n");
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n\n");
    printf("###### The Histogram of Rolling Two Dices ###### "); // Title for upcoming histogram.
    printf("\n\n");

    return;
}

/* Beginning of the histogram function for two dices. */

void histogram_two_dice(void)
{
/* The value of scaling factor for histogram is determined as 115 */
    frequency_of_2 = frequency_of_2 / 115;
    frequency_of_3 = frequency_of_3 / 115;
    frequency_of_4 = frequency_of_4 / 115;
    frequency_of_5 = frequency_of_5 / 115;
    frequency_of_6 = frequency_of_6 / 115;
    frequency_of_7 = frequency_of_7 / 115;
    frequency_of_8 = frequency_of_8 / 115;
    frequency_of_9 = frequency_of_9 / 115;
    frequency_of_10 = frequency_of_10 / 115;
    frequency_of_11 = frequency_of_11 / 115;
    frequency_of_12 = frequency_of_12 / 115;

    //Creating an array for frequencies.
    int frequency_array[11] = {frequency_of_2, frequency_of_3, frequency_of_4, frequency_of_5, frequency_of_6, frequency_of_7 , frequency_of_8 , frequency_of_9 , frequency_of_10, frequency_of_11, frequency_of_12};

    for( int i = 15; i > 0; i-- ){ // Creating an outer loop for 18 units of height.
      for( int k = 0; k < 12; k++ ){
        if( frequency_array[k] >= i )
          printf("* "); // Filling the histogram with '*' horizontally if it's frequency value corresponds with the height of loop.
        else
          printf("  "); // Filling the histogram with ' ' horizontally if it's frequency value does not correspond with the height of loop.
      }
      printf("\n");
    }
        for( int i = 2; i <= 12; i++ ) // Creating an horizontal axis with sums of face values of two dices.
            printf("%d ",i);
        printf("\n\n");
        return;
}
