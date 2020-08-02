#include "../catch.hpp"
#include "../../src/TDD/Score.cpp"

TEST_CASE("Score") {
    SECTION("test sum") {
        Score score(10);
        score.sum(45);
        Score toCompare(55);
        CHECK(score == toCompare);
        score.sum(10);
        Score toCompare2(65);
        CHECK(score == toCompare2);
    }
}
