#include <bits/stdc++.h>

using namespace std;

const int inf = 1000000000;

int main() {
	string fname;
	cout << "Enter the file name: ";
	cin >> fname;

	vector<vector<string>> content;
	vector<string> row;
	string line, word;

	fstream file(fname, ios::in);
	ofstream fout("test.txt");
	if (file.is_open()) {
		while (getline(file, line)) {
			row.clear();

			stringstream str(line);

			while (getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	} else
		fout << "Could not open the file\n";

	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			fout << content[i][j] << " ";
		}
		fout << "\n";
	}

	return 0;
}