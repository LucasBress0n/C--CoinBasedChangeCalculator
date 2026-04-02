

int main() {
    // All Coins
    int Penny = 1;
    int Nickel = 5;
    int Dime = 10;
    int Quarter = 25;
    
    // Variables
    int UsersCoinAmount = 0;
    
    // Prompt for Coin Amount.
    printf("How much change do you owe: ");
    // Read user input
    scanf("%d", &UsersCoinAmount);

    // Keep Reasking the question till the amount enter by the user is above 1.
    while (UsersCoinAmount < 1) {
        printf("How much change do you owe: ");
        scanf("%d", &UsersCoinAmount);
    }

    // Calculate Minimum Coins.

    // NumQuarter Variable, equals UsersCoinAmount divided by Quarter.
    int numQuarters = UsersCoinAmount / Quarter;
    // UsersCoinAmount, Equals UsersCoinAmount 
    UsersCoinAmount = UsersCoinAmount % Quarter;

    int numDimes = UsersCoinAmount / Dime;
    UsersCoinAmount = UsersCoinAmount % Dime;

    int numNickels = UsersCoinAmount / Nickel;
    UsersCoinAmount = UsersCoinAmount % Nickel;

    int numPennies = UsersCoinAmount / Penny;

    // Print result
    printf("This is how much money you put in. The bare minimum change is:\n");
    printf("Quarter: %d, Dime: %d, Nickel: %d, Penny: %d\n",
           numQuarters, numDimes, numNickels, numPennies);


    return 0;
}



// Ask user for coin input.
// If Coin Input is not a number. ask Again.
// If Coin Input is a number calculate what the bare minimum amount of coins is.