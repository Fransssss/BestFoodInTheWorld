// "BestFood.h class implementation

#include "BestFood.h"

using std::cout;
using std::endl;

// set data member of class _name = with name
void BestFood::SetName(const string &name)
{
    _name = name;
}

// set data member of class _rating with rating;
void BestFood::SetRating(const double &rating)
{
    _rating = rating;
}

//
void BestFood::SetComment(const string &comment)
{
    _name += "\", \"Commnent\": \"" + comment;
}

void BestFood::Print()
{
    cout << '[' << "\"Name of food\": \"" << _name << "\", Rating: " << _rating << ".]" << endl;
}
