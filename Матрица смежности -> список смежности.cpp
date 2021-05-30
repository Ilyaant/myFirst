// https://site.ada.edu.az/~medv/acm/Docs%20e-olimp/Volume%2040/3981.htm
#include<iostream>
#include<vector>

int main() {
	int n, val;
	std::cin >> n;
	std::vector<std::vector<int>> adj_list(n + 1);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			std::cin >> val;
			if (val) adj_list[i].push_back(j);
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (adj_list[i].size() == 0) std::cout << '0';
		for (int j = 0; j < adj_list[i].size(); ++j) {
			std::cout << adj_list[i][j] << ' ';
		}
		std::cout << '\n';
	}
}
