#include <cassert> // assert
#include <cmath> // std::pow
#include <cstdint> // std::uint64_t

// requires: x >= 0 && y >= 0
constexpr std::uint64_t const_pow(std::uint64_t x, std::uint64_t y) {
    std::uint64_t z = 1;
    while (y > 0) {
        if (y % 2 == 0) {
            y /= 2;
            x *= x;
        } else {
            z *= x;
            y -= 1;
        }
    }
    return z;
}

void test() {
    static_assert(const_pow(0, 0) == 1);
    assert(const_pow(0, 0) == std::pow(0, 0));

    static_assert(const_pow(0, 1) == 0);
    assert(const_pow(0, 1) == std::pow(0, 1));

    static_assert(const_pow(1, 0) == 1);
    assert(const_pow(1, 0) == std::pow(1, 0));

    static_assert(const_pow(1, 1) == 1);
    assert(const_pow(1, 1) == std::pow(1, 1));

    static_assert(const_pow(1, 2) == 1);
    assert(const_pow(1, 2) == std::pow(1, 2));

    static_assert(const_pow(2, 1) == 2);
    assert(const_pow(2, 1) == std::pow(2, 1));

    static_assert(const_pow(2, 2) == 4);
    assert(const_pow(2, 2) == std::pow(2, 2));

    static_assert(const_pow(2, 3) == 8);
    assert(const_pow(2, 3) == std::pow(2, 3));

    static_assert(const_pow(3, 2) == 9);
    assert(const_pow(3, 2) == std::pow(3, 2));

    static_assert(const_pow(3, 3) == 27);
    assert(const_pow(3, 3) == std::pow(3, 3));

    static_assert(const_pow(3, 4) == 81);
    assert(const_pow(3, 4) == std::pow(3, 4));

    static_assert(const_pow(4, 3) == 64);
    assert(const_pow(4, 3) == std::pow(4, 3));

    static_assert(const_pow(4, 4) == 256);
    assert(const_pow(4, 4) == std::pow(4, 4));

    static_assert(const_pow(4, 5) == 1024);
    assert(const_pow(4, 5) == std::pow(4, 5));

    static_assert(const_pow(5, 4) == 625);
    assert(const_pow(5, 4) == std::pow(5, 4));

    static_assert(const_pow(5, 5) == 3125);
    assert(const_pow(5, 5) == std::pow(5, 5));

    static_assert(const_pow(5, 6) == 15625);
    assert(const_pow(5, 6) == std::pow(5, 6));

    static_assert(const_pow(6, 5) == 7776);
    assert(const_pow(6, 5) == std::pow(6, 5));

    static_assert(const_pow(6, 6) == 46656);
    assert(const_pow(6, 6) == std::pow(6, 6));

    static_assert(const_pow(6, 7) == 279936);
    assert(const_pow(6, 7) == std::pow(6, 7));

    static_assert(const_pow(7, 6) == 117649);
    assert(const_pow(7, 6) == std::pow(7, 6));

    static_assert(const_pow(7, 7) == 823543);
    assert(const_pow(7, 7) == std::pow(7, 7));

    static_assert(const_pow(7, 8) == 5764801);
    assert(const_pow(7, 8) == std::pow(7, 8));

    static_assert(const_pow(8, 7) == 2097152);
    assert(const_pow(8, 7) == std::pow(8, 7));

    static_assert(const_pow(8, 8) == 16777216);
    assert(const_pow(8, 8) == std::pow(8, 8));

    static_assert(const_pow(8, 9) == 134217728);
    assert(const_pow(8, 9) == std::pow(8, 9));

    static_assert(const_pow(9, 8) == 43046721);
    assert(const_pow(9, 8) == std::pow(9, 8));

    static_assert(const_pow(9, 9) == 387420489);
    assert(const_pow(9, 9) == std::pow(9, 9));

    static_assert(const_pow(9, 10) == 3486784401);
    assert(const_pow(9, 10) == std::pow(9, 10));

    static_assert(const_pow(10, 9) == 1000000000);
    assert(const_pow(10, 9) == std::pow(10, 9));

    static_assert(const_pow(10, 10) == 10000000000);
    assert(const_pow(10, 10) == std::pow(10, 10));

    static_assert(const_pow(10, 11) == 100000000000);
    assert(const_pow(10, 11) == std::pow(10, 11));

    static_assert(const_pow(11, 10) == 25937424601);
    assert(const_pow(11, 10) == std::pow(11, 10));

    static_assert(const_pow(11, 11) == 285311670611);
    assert(const_pow(11, 11) == std::pow(11, 11));

    static_assert(const_pow(11, 12) == 3138428376721);
    assert(const_pow(11, 12) == std::pow(11, 12));

    static_assert(const_pow(12, 11) == 743008370688);
    assert(const_pow(12, 11) == std::pow(12, 11));

    static_assert(const_pow(12, 12) == 8916100448256);
    assert(const_pow(12, 12) == std::pow(12, 12));

    static_assert(const_pow(12, 13) == 106993205379072);
    assert(const_pow(12, 13) == std::pow(12, 13));

    static_assert(const_pow(13, 12) == 23298085122481);
    assert(const_pow(13, 12) == std::pow(13, 12));

    static_assert(const_pow(13, 13) == 302875106592253);
    assert(const_pow(13, 13) == std::pow(13, 13));
}

int main(int argc, char** argv) {
    test();
}
