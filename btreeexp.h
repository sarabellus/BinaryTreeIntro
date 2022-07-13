#include <string>

using namespace std;

class person{
public:
	person();
	void lName(string ln);
	string lName();
	person *left; //the left and right pointers need to be instantiated for the b tree to work.
	person *right;
protected:
	string p_lName;
	
};

person::person()
{
	p_lName = "ZZZZZ";
	left = NULL;
	right = NULL;
}
void person::lName(string ln)
{
	p_lName = ln;
}
string person::lName()
{
	return p_lName;
}
