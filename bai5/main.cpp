
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;

void replowcase(char *str)
{
	int length = strlen(str);
	int i;
	bool isSpace = false;
	for (i = 0; i < length; i++)
	{
		if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			isSpace = true;
		}
		else if (isSpace)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
			str[i] = str[i] - 32;
			}
			isSpace = false;
		}
	}
}

int main(){
    char result[200];
    cin.getline(result,200);
    replowcase(result);
    cout<<result;
}
