homework-2（参仅供考）

---

[toc]

---

# ch2

---

第二章的题目看了一下感觉比较简单，想来大家也能在构造完合适的迭代格式后，按计算器的`ANS`键不停地迭代计算得到想要的结果。所以这一章的题目就先不写了。发一下写的一个简单的程序。其求解的是作业第二题：

$$
\begin{equation}
  \begin{aligned}
    x^3-x^2-1=0\quad x\in(1,2)
  \end{aligned}
\end{equation}
$$

运行 `main` 文件可以得到如下结果：


```bash
x^3-x^2-1=0 's root in (0, 1) is:

iteration step is:  34
binary search method:  1.465571

iteration step is:  5
classic Newton iteration:  1.465571

iteration step is:  8
Newton secant method:  1.465571
```

当然你可以调整程序里面设置的一些参数达到你想要的效果。

---