//
// Created by anon on 03.02.2021.
//

#ifndef _TIME_HPP
#define _TIME_HPP

#include <chrono>

namespace Time
{
using std::chrono::microseconds;

class Timer final
{
  using clock_t = std::chrono::high_resolution_clock;

  std::chrono::time_point<clock_t> beg;

public:
  Timer() : beg(clock_t::now())
  {
  }

  void reset_time()
  {
    beg = clock_t::now();
  }

  double elapsed() const
  {
    return std::chrono::duration_cast<microseconds>(clock_t::now() - beg).count();
  }
};
} // namespace Time

#endif // TREE_PROBLEM_MY_TIME_HPP
