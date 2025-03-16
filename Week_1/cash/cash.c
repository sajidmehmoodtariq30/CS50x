#include <cs50.h>
#include <stdio.h>

int main()
{
    int money, dimes = 0, quarters = 0, nickels = 0, pennies = 0, sum = 0;

    // Prompt the user for change owed, in cents.
    do
    {
        money = get_int("Change owed: ");
    }
    while (money <= 0);

    // Calculate how many quarters you should give customer
    while (money >= 25)
    {
        money -= 25;
        quarters++;
    }

    // Calculate how many dimes you should give customer
    while (money >= 10)
    {
        money -= 10;
        dimes++;
    }

    // Calculate how many nickels you should give customer
    while (money >= 5)
    {
        money -= 5;
        nickels++;
    }

    // Calculate how many pennies you should give customer
    while (money >= 1)
    {
        money -= 1;
        pennies++;
    }

    sum = quarters + dimes + nickels + pennies;
    printf("%d\n", sum);
    return 0;
}
