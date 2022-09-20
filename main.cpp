#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

struct Division {
    string name;
    int quarter[4] = {1,2,3,4};
    double qSales[4];
};

int main()
{
    ofstream out; //Storing to this file
    out.open("D:\\CodingProjects\\text\\test.txt");

    vector<Division*> quarter; //Saving each division pointer so I can reaccess 
    string quarters[4] = { "East","West","North","South" };

    for (int i = 0;i < 4;i++) { //For each division
        Division* p = new Division;
        p->name = quarters[i];
        out << p->name << endl; //Save name to file
        for (int j = 0;j < 4;j++) { //For each quarter
            do {
                cout << "\nWhat is " << quarters[i] << "'s quarter " << j+1 << " sale ? \n";
                cin >> p->qSales[j];
            } while (p->qSales[j] < 0);
            out << quarters[i] << "'s quarterly sale for quarter " << j+1 << ": " << p->qSales[j] << endl;
        }
        quarter.push_back(p);
    }
}
