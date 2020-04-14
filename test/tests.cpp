#include "factorial.h"

#include <gtest/gtest.h>

TEST(FactorialTest, Positive) {
	ASSERT_EQ(2, factorial(2));
	ASSERT_EQ(720, factorial(6));
}