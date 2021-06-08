"""
Challenge: Power Of Thor
Link: https://www.codingame.com/multiplayer/codegolf/power-of-thor
Achievements: 179 Code Size (current best is 51)
To use this solution, remove this comment lines
"""
import sys,math
a,b,c,d=[int(i) for i in input().split()]
while 1:
    g,d=((('',d),('N',d-1))[b<d],('S',d+1))[b>d]
    h,c=((('',c),('W',c-1))[a<c],('E',c+1))[a>c]
    print(g+h)
    
"""
Achievements: 166 Code Size (current best is 51)
""" 
import sys,math
a,b,c,d=[int(i) for i in input().split()]
while 1:g,d=((('',d),('N',d-1))[b<d],('S',d+1))[b>d];h,c=((('',c),('W',c-1))[a<c],('E',c+1))[a>c];print(g+h)

"""
Apparently we can remove the imports
Achievements: 150 Code Size (current best is 51)
"""
a,b,c,d=[int(i) for i in input().split()]
while 1:g,d=((('',d),('N',d-1))[b<d],('S',d+1))[b>d];h,c=((('',c),('W',c-1))[a<c],('E',c+1))[a>c];print(g+h)