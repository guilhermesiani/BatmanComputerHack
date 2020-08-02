#include "../catch.hpp"
#include "../../src/TDD/Score.cpp"

TEST_CASE("Score") {
    SECTION("test sum") {
        Score score(10);
        Score newScore = score.sum(45);
        Score toCompare(55);
        CHECK(newScore == toCompare);
        Score newScore2 = score.sum(10);
        Score toCompare2(20);
        CHECK(newScore2 == toCompare2);
    }

    SECTION("test equality") {
        Score score(10);
        Score toCompare(10);
        CHECK(score.equal(toCompare));
    }
}
