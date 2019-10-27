#include <string>
#include <map>
#include "Context.h"

using namespace std;

string Context::lookup(string _key){
	return phrases.find(_key)->second;
}

void Context::assign(string _key, string _value){
    phrases.insert(pair<string,string>(_key, _value));
}