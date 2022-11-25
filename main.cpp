#include <iostream>

template<size_t arg1, size_t arg2>
struct meta_compare{
  static constexpr auto smallerthan()
  {
    if constexpr(arg1 < arg2) return true;
    return false;
  };
  static constexpr auto greaterthan()
  {
    if constexpr(arg1 > arg2) return true;
    return false;
  };
};

int main()
{
  auto constexpr sml = meta_compare<5,3>::smallerthan();
  auto constexpr big = meta_compare<7,1>::greaterthan();

  std::cout << sml << " " << big << " oh my god\n";
  return 0;
};
