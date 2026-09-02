/**
 * Author : Athen Ho
 *
 * This prgram interactively prompts the user
 * for how much usd they want to convert into jpy and gbp
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    int USD = 0;
    printf("Please input the total amount of US Dollars: ");
    scanf("%d", &USD);

    double fee = USD * .10;
    printf("Fee (10%%): %.2f$\n", fee);

    printf("You get: \n");

    int JPY = USD * .90 / 2 * 128.16;
    printf("%d JPY\n", JPY);

    float GBP = USD * .90 / 2 * .7935;
    printf("%.2f GBP\n", GBP);

}
