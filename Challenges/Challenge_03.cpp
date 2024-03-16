/*Ramadan is coming, and Mohammed wants to calculate how much money he needs to provide iftar for people in the mosque.
He wants to give everyone a drink (milk or juice) where every glass is 240ml, and 3 dates where every date weighs 7.4 grams.
Help Mohammed calculate the total expenses as the prices are changing every day.

The input
a,b,c are date, milk ,drink price for one kilo or liter (300>a>b>c)
N is number of Mosques. (100>n≥0)
Then the numbers of people in every Mosque
(Note that if number of people in Mosque is even or more than or equal 50 they wil drink juice )

Input
120 25  20  5
20 30 50 30 10
Output the total expenses
_______________
Fix code  for last problem
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int date_price_per_kg, milk_price_per_liter, drink_price_per_liter;

    cin >> date_price_per_kg >> milk_price_per_liter >> drink_price_per_liter;

    int N;
    cin >> N;

    vector<int> mosques_people(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> mosques_people[i];
    }

    int total_expenses = 0;

    for (int i = 0; i < N; ++i)
    {
        if (mosques_people[i] % 2 == 0 || mosques_people[i] >= 50)
        {
            total_expenses += (mosques_people[i] * 240) / 1000.0 * drink_price_per_liter;
        }
        else
        {
            total_expenses += (mosques_people[i] * 240) / 1000.0 * milk_price_per_liter;
        }

        total_expenses += (mosques_people[i] * 3 * 7.4) / 1000.0 * date_price_per_kg;
    }

    cout << total_expenses << endl;
    return 0;
}
