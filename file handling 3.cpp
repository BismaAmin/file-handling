#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile("UserLog.txt",ios::app);
    if (!outFile)
	{
        cout<<"Error opening log file!"<<endl;
        return 1;
    }
    outFile<<"User John logged in"<<endl;
    outFile<<"User james accesed the dashboard"<<endl;
    outFile<<"User bob performed a file operation"<<endl;
    outFile.close();
    if (outFile.fail())
	 {
        cout<<"Error closing the log file!"<<endl;
        return 1;
    }
    ifstream inFile("UserLog.txt");
    if (!inFile)
	{
        cout<<"Error opening log file for reading!"<<endl;
        return 1;
    }
    string line;
    cout<<"User activities log:"<<endl;
    while (getline(inFile, line))
	{
        cout<<line<<endl;
    }
    inFile.close();
    return 0;
}
