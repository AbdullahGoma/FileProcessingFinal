#include <iostream>
#include <regex>

using std::cout;
using std::endl;
using std::string;
using std::regex;
using std::smatch;
using std::regex_search;

int main(void)
{
	string str = "random txt do_.e@exampl rand text";
    //[a-z A-Z 0-9 -_ \.]
	//\S+@\S+
	regex regexp(R"(\[A-Z a-z 0-9 _\-\.]+[@][a-z]+[\.][a-z]{2,3})");

	smatch match;

	regex_search(str, match, regexp);

	cout << "Matched URLs are : " << endl;

	for (auto x : match)
		cout << x << endl;

	return 0;
}