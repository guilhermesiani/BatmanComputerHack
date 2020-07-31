#include "../catch.hpp"

#include "../../src/TDD/Score.cpp"

TEST_CASE("Installment") {
    SECTION("test total") {
        Score* score = new Score();
        score->sum(45);
        CHECK(score->value == 45);
    }
}
