#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream outFile("filename.txt");
    if(!outFile) 
	{
        cerr<<"Error opening file!"<<endl;
        return 1;
    }
    outFile<<"this is sample file"<<endl;
    outFile<<"hello, world!"<<endl;
    outFile<<"file handling in c++"<<endl;
    outFile.close();
    cout<<"Content written to filename.txt successfully!"<<endl;
    return 0;
}
