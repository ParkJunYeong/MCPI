#include <iostream>
#include <ctime>
#include <random>

int main()
{
    unsigned int count(0);
    const unsigned int total_count = 1000000;

    for (unsigned int i = 0; i < total_count; ++i)
    {
        std::uniform_real_distribution<float> dist(-1.f, 1.f);
        std::mt19937 rand((unsigned)time(NULL) + i);

        if ((powf(dist(rand), 2) + powf(dist(rand), 2)) <= 1)
            ++count;
    }

    std::cout << "Count: " << std::to_string(count) << std::endl
              << "PI: " << std::to_string(((float)count / total_count) * 4.f) << std::endl;
}
