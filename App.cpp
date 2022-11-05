#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        // find the size of the string s
        int size_of_s = s.size();

        // mapping char to char
        map<char, char> map_for_char;
        set<char> set_for_char;

        // iterating through s
        for (int i = 0; i < size_of_s; i++) 
        {
            // get the current char from s and t
            char s_char = s[i];
            char c_char = t[i];

            // see if the map already contains the character
            if (map_for_char.find(s_char) != map_for_char.end())
            {

                // if the character is already mapped and does not
                // map to the current char, return false
                if (c_char != map_for_char[s_char]) 
                {
                    return false;
                }
            }

            // if the char has not already been mapped
            else
            {
                // check set before adding to map
                if (set_for_char.find(c_char) != set_for_char.end()) 
                {
                    return false;
                }

                // add to map
                map_for_char[s_char] = c_char;
                set_for_char.insert(c_char);
            }
        }
        return true;
    }
};

int main()
{
    Solution solution;
    string egg = "egg";
    string add = "add";

    cout << "Example One : " << solution.isIsomorphic(egg, add) << endl;

	return 0;
}
