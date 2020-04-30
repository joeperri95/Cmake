#ifndef __EXAMPLE_TEST_H__
#define __EXAMPLE_TEST_H__

#include "../libExample/libExample.hpp"
#include "gtest/gtest.h"

class ExampleTest : public ::testing::Test
{
protected:
    void SetUp() override;

public:
};

#endif