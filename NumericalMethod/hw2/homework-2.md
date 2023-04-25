homework-2（参仅供考）

---

[toc]

---

# ch2

---

## 第一次作业

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

## 第二次作业

因为本次作业有大量计算，为了方便检查与修正，用`python`的`jupyter-notebook`形式进行书写。计算用`numpy`进行，公式推导与展示自动用`sympy`输出，绘图采用 `matplotlib`。

参考答案参见`task2.ipynb`计算笔记本，因为是本人在批改作业中随时写的，可能会存在纰漏。你也可以直接查看`test2.pdf`计算文档。你可以直接在计算笔记本中调整数值进行实验以达到更好的学习效果。

---