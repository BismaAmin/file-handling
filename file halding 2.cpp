#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream outfile("output.txt");
    if(!outfile) 
	{
        cout<<"Error opening file!"<<endl;
        return 1;
    }
    outfile<<"output file"<<endl;
    outfile<<"Writing to a file in C++."<<endl;
    outfile<<"File handling is essential for data manipulation."<<endl;
    outfile.close();
    cout<<"Content written to output.txt successfully!"<<endl;
    return 0;
}
