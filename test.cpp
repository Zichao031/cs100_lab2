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

TEST(EchoTest, HaveANiceDay) {
        char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "have"; test_val[2] = "a"; test_val[3] = "nice"; test_val[4] = "day";
        EXPECT_EQ("have a nice day", echo(5,test_val));
}

TEST(EchoTest, GoodJob) {
        char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "good"; test_val[2] = "job";
        EXPECT_EQ("good job", echo(3,test_val));
}

TEST(EchoTest, TakeCare) {
        char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "take"; test_val[2] = "care";
        EXPECT_EQ("take care", echo(3,test_val));
}

TEST(Area, CanComputeOneArea) {
	Circle c1 = Circle(9);
	double res = c1.area();
	EXPECT_DOUBLE_EQ(res, 254.46900494077323);
}

TEST(Perimeter, CanComputeOnePerimeter) {
	Circle c2 = Circle(5);
	double res = c2.perimeter();
	EXPECT_DOUBLE_EQ(res, 31.415926535897931);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
