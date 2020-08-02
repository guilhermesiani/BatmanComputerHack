#include "../catch.hpp"
#include "../../src/TDD/Score.cpp"

TEST_CASE("Score") {
    SECTION("test sum") {
        Score score(10);
        Score newScore = score.sum(45);
        Score toCompare(55);
        CHECK(newScore == toCompare);
    }

    SECTION("test equality") {
        Score score(10);
        Score toCompare(10);
        CHECK(score.equal(toCompare));
    }

    SECTION("test subtract") {
        Score score(100);
        Score newScore = score.subtract(45);
        Score toCompare(55);
        CHECK(newScore == toCompare);
    }
}
