#include<stdio.h>

int main()
{
     float britishPound = 0.79;
     float japanniceYen = 127.65;

    double dollar, new_jappanieseYen = 0,new_britishPound = 0,exchange_rate = 0,remaning_USD =0;

    printf("Enter the total amount of US Dollars: ");
    scanf("%lf",&dollar);

    exchange_rate = (dollar/10);
    
    remaning_USD = dollar - exchange_rate;

    new_jappanieseYen = remaning_USD * 0.5  * japanniceYen;
    new_britishPound = remaning_USD * 0.5  * britishPound;

  
  printf("Fee (10%): %0.2f\n",exchange_rate);
    printf("You gets:\n");
    printf("%0.2lf britishPound\n",new_britishPound);
    printf("%.0f japanniceYen\n",new_jappanieseYen);



    return 0;
}