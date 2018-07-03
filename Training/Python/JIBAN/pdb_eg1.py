""" pdb_eg1.py ----experiment with python debugger"""
import pdb

a = "aaa"
pdb.set_trace()
b = "bbb"
c = "ccc"
final = a + b + c
print final
