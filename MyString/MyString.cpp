#include <cstring>
#include <algorithm>
#include <iostream>

class String {

public:

	String() = default;

	String(size_t size, const char* str) : size(size), string(new char[size]) {

		memcpy(string, str, size);

	}

	String(const char* str) : size(strlen(str) + 1), string(new char[size]) {

		memcpy(string, str, size);
	}

	String(const String& s) : size(s.size), string(new char[s.size]) {

		memcpy(this->string, s.string, size);
	}

	String& operator=(String s) {

		std::swap(size, s.size);
		std::swap(string, s.string);

		return *this;
	}

	~String() {
		delete[] string;
	}

	String& operator+=(String s) {

		size_t _size = s.size;
		OperatorPlusEquality(s.string, _size);

		return *this;
	}

	String& operator+=(const char* str) {

		size_t _size = strlen(str) + 1;
		OperatorPlusEquality(str, _size);

		return *this;
	}

	char& operator[](size_t index) {

		return string[index];
	}

	const char& operator[](size_t index) const {

		return string[index];
	}

	char* getString() const {

		return string;
	}

	size_t getSize() const {

		return size;
	}

private:

	size_t size = 0;
	char* string = nullptr;

	void OperatorPlusEquality(const char* str, size_t _size) {

		char* _tempString = new char[size];
		memcpy(_tempString, string, size);
		size += _size - 1;
		delete[] string;
		string = new char[size];
		memcpy(string, _tempString, size - _size);
		memcpy(string + (size - _size), str, _size);
		delete[] _tempString;

	}

};

std::ostream& operator<<(std::ostream& out, const String& s) {

	for (size_t i = 0; i < s.getSize(); ++i) {

		out << s[i];
	}

	return out;
}

String operator+(const String& s1, const String& s2) {

	String copy = s1;
	copy += s2;
	
	return copy;
}

String operator+(const String& s, const char* str) {

	String copy = s;
	copy += str;

	return copy;
}

bool operator<(const String& s1, const String& s2) {

	return strlen(s1.getString()) < strlen(s2.getString());
}

bool operator>(const String& s1, const String& s2) {

	return s2 < s1;
}

bool operator==(const String& s1, const String& s2) {

	return !(s1 > s2) && !(s1 < s2);
}

bool operator!=(const String& s1, const String& s2) {

	return !(s1 == s2);
}
