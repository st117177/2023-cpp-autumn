#include <iostream>

int main() {
    int k = 0;
    int m = 0;
    int n = 0;
    std::cin >> k >> m >> n;

    int time_per_cutlet = 2 * m;
    int cutlets_per_batch = k;

    //сколько нужно партий чтоб пожарить все котлеты
    float batches_needed = (float)(n / cutlets_per_batch);
    if (batches_needed - (int)batches_needed != 0) {
        batches_needed = batches_needed + 1;//если нецелое число партий
    }
    int total_time = batches_needed * time_per_cutlet;

    std::cout << total_time << std::endl;

    return EXIT_SUCCESS;
}
