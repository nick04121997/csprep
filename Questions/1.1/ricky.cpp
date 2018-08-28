#include <set>
#include <string>
#include <iostream>

// First try using hash table
bool is_unique(std::string str)
{
	std::set<char> char_map;
	for (auto c : str) {
		if (char_map.count(c))
			return false;
		char_map.insert(c);
	}
	return true;
}

// assuming standard text input
bool is_unique_2(std::string str)
{
	bool char_arr[256] = { 0 };
	for (auto c : str) {
		if (char_arr[c] == true)
			return false;
		char_arr[c] = true;
	}
	return true;
}

// without extra space
bool is_unique_3(std::string str)
{
	for (unsigned int i = 0; i < str.size(); ++i) {
		for (unsigned int j = i + 1; j < str.size(); ++j) {
			if (str[i] == str[j])
				return false;
		}
	}
	return true;
}
