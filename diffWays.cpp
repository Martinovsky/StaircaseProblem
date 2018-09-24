#include "diffWays.hpp"

std::size_t diffways(std::size_t staircase, std::vector<std::size_t> moves)
{
    if (moves.empty())
    {
        return 0;
    }
    if (staircase == 0) // Arguable... Depends if not moving is a movement or not.
    {
        return 1;
    }
    std::size_t leftLimit = 0;
    for (std::size_t value : moves)
    {
        if (leftLimit < value)
        {
            leftLimit = value;
        }
    }
    std::deque<std::size_t> previousResults(leftLimit, 1);
    for (std::size_t i = 1; i <= staircase; ++i)
    {
        std::size_t result = 0;
        for (std::size_t move : moves)
        {
            if (move <= i)
            {
                result += previousResults[move - 1];
            }
        }
        previousResults.push_front(result);
        previousResults.pop_back();
    }

    return previousResults[0];
}