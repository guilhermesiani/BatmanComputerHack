#include "../catch.hpp"

#include "../../src/TDD/Installment.cpp"

TEST_CASE("Installment") {
    SECTION("test total") {
        Installment* installment = new Installment(95.00);
        CHECK(installment->getTotal() == 95.00);
    }
}
