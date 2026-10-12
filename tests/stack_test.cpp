#include<iostream>
#include<stdexcept>
#include<gtest/gtest.h>
#include<string>
#include "../include/stack.h"



TEST(StackTest, NewStackIsEmpty) {
    Stack<int> s;

    EXPECT_TRUE(s.isEmpty());
    EXPECT_EQ(s.size(), 0);
}

TEST(StackTest, PushMakesStackNonEmpty) {
    Stack<int> s;

    s.push(10);

    EXPECT_FALSE(s.isEmpty());
    EXPECT_EQ(s.size(), 1);
}

TEST(StackTest, PopReturnsLastPushedElement) {
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    EXPECT_EQ(s.pop(), 30);
    EXPECT_EQ(s.pop(), 20);
    EXPECT_EQ(s.pop(), 10);
    EXPECT_TRUE(s.isEmpty());
}

TEST(StackTest, PeekReturnsTopWithoutRemovingIt) {
    Stack<int> s;

    s.push(10);
    s.push(20);

    EXPECT_EQ(s.peek(), 20);
    EXPECT_EQ(s.peek(), 20);
    EXPECT_EQ(s.size(), 2);
}

TEST(StackTest, PopFromEmptyStackThrowsException) {
    Stack<int> s;

    EXPECT_THROW(s.pop(), std::underflow_error);
}

TEST(StackTest, PeekOnEmptyStackThrowsException) {
    Stack<int> s;

    EXPECT_THROW(s.peek(), std::underflow_error);
}

TEST(StackTest, ClearRemovesAllElements) {
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.clear();

    EXPECT_TRUE(s.isEmpty());
    EXPECT_EQ(s.size(), 0);
}

TEST(StackTest, WorksWithStrings) {
    Stack<std::string> s;

    s.push("Hello");
    s.push("GoogleTest");

    EXPECT_EQ(s.pop(), "GoogleTest");
    EXPECT_EQ(s.pop(), "Hello");
}