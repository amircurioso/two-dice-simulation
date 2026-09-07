 Two Dice Simulation

A simple C program that simulates rolling two dice over multiple rounds.

The program:

- Generates random values for two dice
- Calculates the sum of the dice
- Counts the frequency of each possible sum
- Calculates the experimental percentage
- Compares the simulation results with theoretical probability

## Possible Sums

The possible sums range from 2 to 12.

With a sufficiently large number of rounds, the experimental percentages tend to approach the theoretical probabilities.

## How to Compile
```bash
gcc two_dice_simulation.c -o two_dice_simulation

## How to Run

bash
./two_dice_simulation

## Example Output

text
Sum  2 | Frequency:    278 | Percentage:  2.78%
Sum  3 | Frequency:    553 | Percentage:  5.53%
Sum  4 | Frequency:    840 | Percentage:  8.40%
Sum  5 | Frequency:   1112 | Percentage: 11.12%
Sum  6 | Frequency:   1407 | Percentage: 14.07%
Sum  7 | Frequency:   1661 | Percentage: 16.61%
Sum  8 | Frequency:   1384 | Percentage: 13.84%
Sum  9 | Frequency:   1118 | Percentage: 11.18%
Sum 10 | Frequency:    830 | Percentage:  8.30%
Sum 11 | Frequency:    548 | Percentage:  5.48%
Sum 12 | Frequency:    269 | Percentage:  2.69%

## Concepts Practiced

- Functions
- Arrays
- Loops
