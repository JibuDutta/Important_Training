#!/usr/bin/python

"""


	Script:trangle.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:To Check Triangle is right angle Triangle or Not
			using Pythogerous theorem


"""
side1 = int (raw_input("ENTER side1:"))
hype = int (raw_input("ENTER hype:"))
side2 = int (raw_input("ENTER side2:"))


if hype * hype == side1 * side1 + side2 * side2:
	print "Right Angle Triangle"
else:
	print "Not a Right Angle Triangle"

