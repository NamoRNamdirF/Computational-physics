#include <iostream>
#include "num_methods.h"
#include <cmath>
#include <vector>
using namespace std;

double x1, x2, x3, y11, y2, y3, z1, z2, z3;
double vx1, vx2, vx3 ,vy1, vy2, vy3, vz1, vz2, vz3;

double const G = 1;
double m1, m2, m3;
int n = 100;
double r[3][3] = {{0, 0, 0},
                  {1, 1, 1},
                  {2, 2, 2}};

using namespace std;
void show_vector( vector<double >&a)
{
    for (auto it = a.begin() ; it != a.end() ; ++it)
        cout<<*it<<" ";
}

int main(){
    vector <double>  e;
    for (int i=0;i<=3;++i){
        for (int j=0;j<=3;++j){
            r[i][j] = sqrt((r[j] - r[i]) * (r[j] - r[i])+(r[j+1] - r[i]) * (r[j+1] - r[i]));
            e.push_back(r[i][j]);
            show_vector(e);
        }
}
   return 0;
}
