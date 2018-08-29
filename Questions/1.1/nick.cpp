bool unique_characters(std::string s)
{
	std::unordered_set<std::string> lookup;
	for (char c : s) {
		if (lookup.count(c) > 0) {
			return false;
		}
		else {
			lookup.insert(c);
		}
	}
	return true;

}


// no additional space
bool unique_characters_2(std::string s)
{
	for (int i = 0; i < s.size(); i++) {
		for (int j = i + 1; j < s.sizo(); j++) {
			if (s[j] == s[i]) {
				return false;
			}
		}
	}
	return true;
}