#include "quantity.h"
#include <gtest/gtest.h>

struct QuantityTest : testing::Test {
};

TEST_F(QuantityTest, 3_mile_not_equals_4_mile)
{
    Length mile3 = {.amount = 3, .unit = MILE};
    Length mile4 = {.amount = 4, .unit = MILE};

    ASSERT_FALSE(length_equals(&mile3, &mile4));
}