
#include <iostream>
#include "BestFood.h"

using std::cout;
using std::endl;
using std::cerr;
using std::cin;

int main() {
    // create object type BestFood class
    BestFood foodOne;
    BestFood foodTwo;
    BestFood foodThree;

    // set name for each class' object
    foodOne.SetName("Italian Cuisine - Penne Pasta with Pesto");
    foodTwo.SetName("French Cuisine - Duck Confit with Shallots");
    foodThree.SetName("Indian Cuisine - Indian Pork Curry with Raisins and Tamarind");

    // set rating for each food
    foodOne.SetRating(4.4);
    foodTwo.SetRating(4.0);
    foodThree.SetRating(3.8);

    // print data
    cout << endl;
    foodOne.Print();
    foodTwo.Print();
    foodThree.Print();

    // set and output comment for each food
    cout << endl << " Would you like to see comment for each food? Y/N : ";
    char userChar;
    cin >> userChar;

    if (userChar == 'Y')
    {
        foodOne.SetComment("...mild flavours based on good quality, seasonal ingredients."
                           " Beauty, balance, simplicity and emotion, Italian food has it all.");
        foodTwo.SetComment("...French food IS fine dining and will always be. Even if they have been beaten to the top spot. "
                           "To explore this gastronomic universe, relish the richness..");
        foodThree.SetComment("...The ancient traditions and vast terrain of the subcontinent make for cuisine that hits every note on the culinary scale and is always full of surprises."
                             " Take a sensory voyage to India and fill your kitchen with the smell of spices");

        cout << endl;
        foodOne.Print();
        cout << endl;
        foodTwo.Print();
        cout << endl;
        foodThree.Print();
        cout << endl << "[ source: " << "https://www.finedininglovers.com/article/people-have-spoken-ten-countries-best-food ]" << endl;
        cout << endl << "Happy Exploring!"<< endl;
    } else if(userChar == 'N')
    {
        cout << "Happy Exploring!"<< endl;
    }else
    {
        cerr << "Invalid input " << endl;
        cout << "Happy Exploring!"<< endl;
    }

    return 0;
}
