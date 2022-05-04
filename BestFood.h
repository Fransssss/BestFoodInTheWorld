//BestFood class declaration

#ifndef BESTFOODINTHEWORLD_BESTFOOD_H
#define BESTFOODINTHEWORLD_BESTFOOD_H

#include <iostream>

using std::string;

class BestFood
{
private:
    string _name;
    double _rating;
public:
    void SetName(const string& name);
    void SetRating(const double& rating);
    void SetComment(const string& comment);
    void Print();
};

#endif //BESTFOODINTHEWORLD_BESTFOOD_H
