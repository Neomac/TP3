#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <numeric>

template <class T> T& min (T& a, T& b) {
	return (a < b ? a : b);
}

template <class T> void printOut (string msg, T& obj) {
	cout << msg << ": " << obj << endl;
}

template <class T> void printFront (vector<T> v) {
	for (vector<T>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << " ";
	cout << endl;

}

template <class T> void printBack(const vector<T>& v) {
	cout << "printback ";
	vector<T>::reverse_iterator rfirst (v.end());
    vector<T>::reverse_iterator rlast (v.begin());
	while (rfirst != rlast) 
		cout << *rfirst++ << " ";
	cout << endl;
}  

main(int argc, char *argv) {		

	vector<int> v(4);
	v[0] = 5;
	v[1] = 2;
	v[2] = 7;
	v.insert(v.end(),4);
	printFront(v);
//	printBack(v);

//	sort (v.begin(), v.end() );
	//print(v);
	
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ","));
	cout << endl;
	
	vector<int> v2(v);

	transform(v.begin(), v.end(), v2.begin(), negate<int>());
	printFront(v2);
	
	vector<int> v3(v);
	transform(v.begin(), v.end(), v2.begin(), v3.begin(), plus<int>());
	printFront(v3);

	int mlk;
    cin >> mlk;
}