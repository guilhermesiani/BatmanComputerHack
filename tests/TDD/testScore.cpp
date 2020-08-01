#include "../catch.hpp"
#include "../../src/TDD/Score.cpp"
#include "typeinfo"

TEST_CASE("Score") {
    SECTION("test sum") {
        Score* score = new Score(10);
        score->sum(45);
        CHECK(score == new Score(55));
        score->sum(10);
        CHECK(score == new Score(65));
    }
}
