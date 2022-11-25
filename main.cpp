template<std::size_t size>
struct fizz_struct_T {
  static constexpr auto get_replacement_word() {
    if constexpr (number % 3==0 && number != 0) {
      return StrLit("Fizz");
    } else {
      return StrLit("");
    }
  }
};
