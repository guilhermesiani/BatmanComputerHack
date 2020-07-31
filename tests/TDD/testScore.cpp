#include "../catch.hpp"
#include "../../src/TDD/Score.cpp"

TEST_CASE("Score") {
    SECTION("test sum") {
        Score* score = new Score();
        score->sum(45);
        CHECK(score->value == 45);
        score->sum(10);
        CHECK(score->value == 55);
    }
}
