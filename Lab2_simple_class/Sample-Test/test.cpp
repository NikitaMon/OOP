#include "gtest/gtest.h"
#include "..\Class.h"
#include "..\Class.cpp"
//Автор - Монастыршин Никита

TEST(TriangleTest, getZ) {
/*
* проверка расчёта третей стороны треугольника, на примере
* всем известного треугольника со сторонами 3, 4, 5.
*/
	ASSERT_EQ(Triangle(3,4).getZ(), 5);
	EXPECT_EQ(Triangle(6, 8).getZ(), 10);
}

TEST(TriangleTest, Constructor) {
	Triangle a;
	try 
	{
		a = Triangle(1, -3);
		FAIL();//если данные выше заданны корректно то ошибка
	}
	catch (std::invalid_argument& err) {
		//здесь ничего нету так как нужно чтобы он не получил ошибку
		//а прошёл дальше
	}
	//проверка что даже с некорректными значениями
	//объект класса будет иметь значения конструктора по умолчанию
	EXPECT_EQ(a.getX(), 0);
	EXPECT_EQ(a.getX(), 0);
	EXPECT_EQ(a.getZ(), 0);
	EXPECT_EQ(a.getName(), "Неизвеcтно");
}

TEST(TriangleTest, SetTest) {
	//если условия в сеттерах менялись то скорее всего
	//здесь выдаст ошибку
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
