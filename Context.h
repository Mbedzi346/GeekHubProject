#ifndef CONTEXT_H
#define CONTEXT_H
#include <map>
#include <string>

using namespace std;
class Context{
	private:
		map<string, string> phrases;
	public:
		string lookup(string _key);
		void assign(string _key, string _value);
};
#endif