# Project 2.2

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula V = 4/3πr³. Write the fraction 4/3 as ```4.0f/3.0f```. (Try writing it as ```4/3```. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r³.

# Solution

See 2.c

Using ```4/3``` instead of ```4.0f/3.0f``` would result in ```1```, since C truncates values during division.
