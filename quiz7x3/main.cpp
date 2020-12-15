#include <cassert>
#include <numeric>

int binarySearch(const int *array, int target, int min, int max)
{
    assert(array);

    while (min <= max)
    {
        int midpoint{ min + ((max-min) / 2) };

        if (array[midpoint] > target)
        {
            max = midpoint - 1;
        }
        else if (array[midpoint] < target)
        {
            min = midpoint + 1;
        }
        else
        {
            return midpoint;
        }
    }

    return -1;
}
