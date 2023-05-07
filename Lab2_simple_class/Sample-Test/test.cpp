#include "gtest/gtest.h"
#include "..\Class.h"
#include "..\Class.cpp"
//����� - ����������� ������

TEST(TriangleTest, getZ) {
/*
* �������� ������� ������ ������� ������������, �� �������
* ���� ���������� ������������ �� ��������� 3, 4, 5.
*/
	ASSERT_EQ(Triangle(3,4).getZ(), 5);
	EXPECT_EQ(Triangle(6, 8).getZ(), 10);
}

TEST(TriangleTest, Constructor) {
	Triangle a;
	try 
	{
		a = Triangle(1, -3);
		FAIL();//���� ������ ���� ������� ��������� �� ������
	}
	catch (std::invalid_argument& err) {
		//����� ������ ���� ��� ��� ����� ����� �� �� ������� ������
		//� ������ ������
	}
	//�������� ��� ���� � ������������� ����������
	//������ ������ ����� ����� �������� ������������ �� ���������
	EXPECT_EQ(a.getX(), 0);
	EXPECT_EQ(a.getX(), 0);
	EXPECT_EQ(a.getZ(), 0);
	EXPECT_EQ(a.getName(), "������c���");
}

TEST(TriangleTest, SetTest) {
	//���� ������� � �������� �������� �� ������ �����
	//����� ������ ������
	Triangle a;
	try 
	{
		a = Triangle(0.1, 0.1);
	}
	catch (const invalid_argument& expected) 
	{
		FAIL();
	}
}
