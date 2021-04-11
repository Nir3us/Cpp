#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deq;
    for (int count=0; count < 3; ++count)
    {
        deq.push_back(count);
        deq.push_front(10 - count);
    }

    for (int index=0; index < deq.size(); ++index)
        std::cout << deq[index] << ' ';

    std::cout << '\n';
}
