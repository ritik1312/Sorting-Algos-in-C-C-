#include <iostream>
using namespace std;

int main() {

	int n;
	int LIMIT = 1000;
	cout << "Enter value of n : ";
	cin >> n;
	cout << "Enter "<< n << " numbers within 0 to " << LIMIT << endl;

	int arr[n];
	int count[LIMIT] = {0};
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		count[arr[i]]++;
	}

	for(int i = 1; i < LIMIT; i++)
		count[i] += count[i-1];

	int pos, res[n] = {-1};
	for(int i=0;i<n;i++)
	{
		pos = count[arr[i]] - 1;
		res[pos]=arr[i];
		count[arr[i]]--;
	}
	cout << "Output array : ";
	for(int i=0;i<n;i++)
		cout << res[i] << " ";
	cout << endl;
}
