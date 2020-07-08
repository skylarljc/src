#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    double t = 0, x = 1;
    ofstream dx_file, dt_file;
    string nt_str, dt_str, line;

    ifstream myfile ("params.dat");
        if (myfile.is_open())
        {
            getline (myfile, line);
            dt_str = line;

            getline (myfile, line); 
            nt_str = line;
            myfile.close();

            cout << "dt = " << dt_str << "\n";
            cout << "nt = " << nt_str << "\n";
        }
        else cout << "Unable to open file";

    double dt = stod(dt_str);
    double nt = stod(nt_str);


    dt_file.open ("~/training/data/t.dat");
    dx_file.open ("~/training/data/x.dat");

    dt_file << t;
    dx_file << x;

    for (int i = 0; i < nt; ++i) {
        t = t + dt;
        dt_file << ", " << t;

        x = (1-3*dt)*x;
        dx_file << ", " << x;
    }

    dt_file.close();
    dx_file.close();


    return 0;

}