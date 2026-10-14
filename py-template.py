# ---------------------- BEGIN MY LIBRARY ----------------------
# This library is shared in https://github.com/michikusamichiya/atcoder-template, py-template.py
# ! DO NOT REMOVE THIS SENTENCE DUE TO THE RULE!
"""

このライブラリはコンテスト中、いくつか編集されることがあります(BEGIN MY LIBRARYからEND MY LIBRARYまで)が、

それらの変更はすべて人の手によって行われていることを保証します。GitHubにて公開されているライブラリと提出コードにdiffがあった場合、それらは生成AIを用いて変更されたものではありません。

"""

from collections import *
from itertools import *
from bisect import *
import heapq
from bisect import bisect_left, bisect_right
from sortedcontainers import SortedList, SortedSet, SortedDict
import math
from operator import itemgetter
import copy


# ****************************************************************************************************************

# Vulgate.
#
# +------------------+
# | 𝒲𝒽𝒶𝓉 𝓉𝒽ℯ 𝒻𝓊𝒸𝓀. |
# +------------------+
#
#  .　　 ∧_∧
# 　　 ( 'ω' )　殺す！
# 　　(m9 / 　　コイツ(michikusamichiya)は殺さないとダメだ！！！！
# 　　/　 /_つ
# 　 / /＼＼
# 　/ /　/ /
# （ノ　 ＼)
# ( ;∀;) < I changed my programming language from C++ to Python
#              ↑乗り換えたの意
# HOLY FUCK GO FUCK YOURSELF DO YOU WANNA DIE LET ME GRADUATE FROM GREEN CODER
# HOLY SHIT APOCALYPSE DIE DIE DIE DIE YOU SHOULD BE DEAD AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
# 
#
# 　__--‾\--
# /      |   ‾‾‾\‾
# /       /\  ||     \

# ****************************************************************************************************************
def yesno(b):
  if b:
    print("Yes")
  else:
    print("No")
def in_grid(h, w, H, W):
  return 0 <= h < H and 0 <= w < W
def combine(h, w, s, H, W):
  return s * H * W + h * W + w
def split(v, H, W):
  return (v // H // W, (v % (H * W)) // W, (v % (H * W)) % W)
def base_n(x, n):
  chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

  if x == 0:
    return "0"

  res = []
  while x:
    res.append(chars[x % n])
    x //= n

  return ''.join(reversed(res))

# ---------------------- END MY LIBRARY ----------------------
