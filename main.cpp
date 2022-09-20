#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Division {
    string name;
    int quarter;
    double qSales;
};


int main()
{
    vector<Division*> quarter;
    string quarters[4] = { "East","West","North","South" };

    for (int i = 0;i < 4;i++) {
        Division* p = new Division;
        p->name = quarters[i];
        p->quarter = i+1;
        cout << "What is " << quarters[i] << "'s quarterly sale?\n";
        cin >> p->qSales;
        quarter.push_back(p);
    }

    for (int i = 0;i < 4;i++) {
        cout << "\nName: " << quarter.at(i)->name << endl;
        cout << "Quarter: " << quarter.at(i)->quarter << endl;
        cout << "Quarter Sales: " << quarter.at(i)->qSales << endl;
    }
}
