#include <string>

int findInString(std::string string, std::string target)
{
  int strLength = string.length();
  int tarLength = target.length();
  char *tarPtr = &target[0];
  char *strPtr = &string[0];


  for (int i = 0; i < strLength; i++)
  {
    if (*strPtr == *tarPtr)
    {
      for (int k = 0; k < tarLength; k++)
      {
        if (*strPtr != *tarPtr)
        {
          break;
        }
        else if (k == tarLength - 1)
        {
          return i;
        }
        else
        {
          strPtr++;
          tarPtr++;
          continue;
        }
      }
    }
    else
    {
      strPtr++;
    }
  }

  return -1;
}


int findInString(std::string string, char target)
{
  int length = string.length();

  for (int i = 0; i < length; i++)
  {
    if (string[i] == target)
      return i;
  }

  return -1;
}
