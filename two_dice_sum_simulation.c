#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumberOfRounds() {
    int numberOfRounds = 0 ;
    printf("Enter number of rounds: ");
    scanf("%d", &numberOfRounds);
    return numberOfRounds;
}

int rollDie() {
    return rand() % 6 + 1 ;
}

int main()
{
    int sumFrequencies[13]={0};
    srand(time(NULL));
    int numberOfRounds = getNumberOfRounds();
    if(numberOfRounds <= 0 ){
        printf("Invalid Input.\n");
        return 1 ;
    }
    for(int round = 0 ; round < numberOfRounds ; round++){
        int firstDieValue = rollDie();
        int secondDieValue = rollDie();

        int diceSum = firstDieValue + secondDieValue ;

        sumFrequencies[diceSum]++;
    }

    printf("\nResults: \n\n");
    for(int possibleSum = 2 ; possibleSum <=12 ; possibleSum++){
        double occurrencePercentage = (double)sumFrequencies[possibleSum]/ numberOfRounds * 100 ;
        printf("Sum %2d | Frequency: %6d | Percentage: %6.2f%%\n",
        possibleSum,
        sumFrequencies[possibleSum],
        occurrencePercentage);
    }
}
