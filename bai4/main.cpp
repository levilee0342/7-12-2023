#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;
int CountWord(char *str)
{
	int count = 0;
	int length = strlen(str);
	int i;
	bool isSpace = false;
	for (i = 0; i < length; i++)
	{
		if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			count++;
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			isSpace = true;
		}
		else if (isSpace)
		{
			count++;
			isSpace = false;
		}
	}
	return count;
}

int main(){
    char result[200];
    cin.getline(result,200);
    cout<<CountWord(result);
}
