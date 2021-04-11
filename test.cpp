
#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(ShwenaTest, ShwenaKak) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "shwena"; test_val[2] = "kak";
    EXPECT_EQ("shwena kak", echo(3,test_val));
}

TEST(NumberTest, 12) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2";
    EXPECT_EQ("1 2", echo(3,test_val));
}

TEST(helloTest, HelloHi) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "hi";
    EXPECT_EQ("hello hi", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


