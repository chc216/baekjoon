#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    
    char realline[line.length()];
    line.copy(realline, line.length());

    

    char * token = strtok(realline, " ");
    int count = 0;
    while(token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }

    cout << count;
    return 0;
}