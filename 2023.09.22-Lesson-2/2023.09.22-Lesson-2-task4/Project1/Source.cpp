#include <iostream>
int main() {
	int n = 0;
	int price = 0;
	int tickets60 = 0;
	int tickets20 = 0;
	int tickets10 = 0;
	int tickets5 = 0;
	int tickets1 = 0;
	std::cin >> n;
	while (n > 0) {
		if (n > 60) {
			n -= 60;
			price += 440;
			tickets60 += 1;
		}
		else if (n > 20) {
			n -= 20;
			price += 230;
			price += 440;
			tickets20 += 1;
		}
		else if (n > 10) {
			n -= 10;
			price += 125;
			price += 440;
			tickets10 += 1;
		}
		else if (n > 5) {
			n -= 5;
			price += 70;
			price += 440;
			tickets5 += 1;
		}
		else {
			n -= 1;
			price += 15;
			price += 440;
			tickets1 += 1;
		}
	}
	std::cout << tickets1 << " " << tickets5 << " " << tickets10 << " " << tickets20 << " " << tickets60 << std::endl;


	return EXIT_SUCCESS;
}