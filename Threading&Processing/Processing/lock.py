# -*- coding: utf-8 -*- 
# @Time : 2020/5/7 18:58 
# @Author : BaoBao
# @Mail : baobaotql@163.com 
# @File : lock.py 
# @Software: PyCharm

import multiprocessing as mp
import time

def job(v, num, l):
    l.acquire()
    for _ in range(10):
        time.sleep(0.1)
        v.value += num
        print(v.value)
    l.release()

def multicore():
    l = mp.Lock()
    v = mp.Value('i', 0)
    p1 = mp.Process(target=job, args=(v, 1, l))
    p2 = mp.Process(target=job, args=(v, 3, l))
    p1.start()
    p2.start()
    p1.join()
    p2.join()

if __name__ == '__main__':
    multicore()