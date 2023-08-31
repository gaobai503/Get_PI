这是一个简单的C程序. 借助蒲丰抛针实验, 它被设计来计算$\pi$的值. 这个程序
还需要大大提高精确度才能真正有用, 如你所见, 这只是一个尝试.

我发现尽管在很大的数据规模下(差不多10的6次幂), 从`rand()`得到的值依旧称
不上非常均匀. 具体的情况我放在了`test.c`里.

A Simple C program used to calculate the value of PI. Need to improve 
its accuracy. Use the model of Buffon's Needle Model.

I find even in a large scale(almost 10e6), The values got from `rand`
are still not so uniform. It can be seen in test.c.
