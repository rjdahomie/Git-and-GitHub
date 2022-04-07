#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, AllCapitals){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "HELLO"; test_val[2] = "WORLD";
    EXPECT_EQ("HELLO WORLD", echo(3, test_val));
}

TEST(EchoTest, RandomWord) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "noggin";
    EXPECT_EQ("noggin", echo(2,test_val));
}

TEST(EchoTest, OneWordHello) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "HELLOWORLD";
    EXPECT_EQ("HELLOWORLD", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
