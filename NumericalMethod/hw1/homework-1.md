homework-1（仅供参考）

---

[toc]

---

# ch1

---

## ch1.1

已知圆周率 $\pi=3.141592654\cdots$ ，问：

1. 若其近似值取5位有效数字，则该近似值是多少?其误差限是多少?
2. 若其近似值精确到小数点后面4位，则该近似值是什么?其误差限是什么?
3. 若其近似值的绝对误差限为 $0.5\times 10^{-5}$?,则该近似值是什么?

### 第一问

取 $x^*=0.31416\times 10^{1}$ ，取 $m=1$ ，因此：

$$
\begin{equation}
  \begin{aligned}
    \lvert \pi - x^*\rvert  &<
  0.7346\times 10^{-5}\\
  &<0.5\times 10^{-4}
  \\ &=
  0.5\times 10^{1-5}
  \end{aligned}
\end{equation}
$$

### 第二问

取 $x^*=3.1416$ ，考虑其误差：

$$
\begin{equation}
  \begin{aligned}
    \lvert e^*\rvert &=\lvert \pi-x^*\rvert\\
    &=\lvert \pi-3.1416\rvert\\
    &<0.7346\times 10^{-5}\\
    &< 0.5\times 10^{-4}
  \end{aligned}
\end{equation}
$$



取误差限为 $\varepsilon^*=0.5\times 10^{-4}$ 。

### 第三问

$\lvert e^*\rvert =0.5\times 10^{-5}$ ，取 $x^*=3.14159$ 时检验其绝对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \lvert e^*\rvert &=\lvert \pi - x^*\rvert\\
    &<2.654\times 10^{-6}\\
    &< 0.5\times 10^{-5}
  \end{aligned}
\end{equation}
$$

因此近似值取 $3.14159$ 即可。

---

## ch1.2

下列各数都是经过四舍五入得到的近似值，求各数的绝对误差限、相对误差限和有效数字的位数。

1. $3580$
2. $0.0746$
3. $30.120$
4. $0.3012\times 10^{-5}$

### 第一问

$$
\begin{equation}
  \begin{aligned}
    x^*=3580=0.3580\times 10^{4}
  \end{aligned}
\end{equation}
$$

取 $m=4$ ，$\lvert e^*\rvert \leq 0.5\times 10^0$ ，有 $m-n=0$ ，因此 $n=4$ ，所以取 $\varepsilon^*=0.5$ ，有相对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*=\frac{0.5}{3580}\times 100\%
    \approx 0.01397\%
  \end{aligned}
\end{equation}
$$

有效数字位数为 $4$ 。

### 第二问

$$
\begin{equation}
  \begin{aligned}
    x^*=0.0476=0.476\times 10^{-1}
  \end{aligned}
\end{equation}
$$

取 $m=-1$ ，$\lvert e^*\rvert \leq 0.5\times 10^{-4}$ ，有：$m-n=4$ ，因此有 $n=3$ 。所以取 $\varepsilon^*=0.5\times 10^{-4}$ ，相对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=\frac{0.5\times10^{-4}}{0.0476}\times 100\%\\
    &=0.105\%
  \end{aligned}
\end{equation}
$$

有效数字位数为 $3$ 。

### 第三问

$$
\begin{equation}
  \begin{aligned}
    x^*=30.120=0.30120\times 10^2
  \end{aligned}
\end{equation}
$$

取 $m=2$ ，$\lvert e^*\rvert \leq 0.5\times 10^{-3}$ ，有 $m-n=-3$ ，因此有 $n=5$ ，所以取 $\varepsilon^{*}=0.5\times 10^{-3}$ ，相对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=\frac{0.5\times 10^{-3}}{30.120}\times 100\%
    \\ &\approx 0.0017\times 100\%
  \end{aligned}
\end{equation}
$$

有效数字位数为 $5$ 。

### 第四问

$$
\begin{equation}
  \begin{aligned}
    x^*=0.3012\times 10^{-5}
  \end{aligned}
\end{equation}
$$

取 $m=-5$ ， $\lvert e^*\rvert \leq 0.5\times 10^{-9}$ ，有：$m-n=-9$ ，因此有 $n=4$ ，故 $\varepsilon^*=0.5\times 10^{-9}$ ，相对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=
    \frac{0.5\times 10^{-9}}{0.3012\times10^{-5}}\times 100\%\\
    &\approx0.017\%
  \end{aligned}
\end{equation}
$$

有效数字位数为 $4$ 。

---

## ch1.3

确定圆周率 $\pi$ 如下近似值的绝对误差限、相对误差限、并求其有效数字的位数。

1. $\frac{22}{7}$
2. $\frac{223}{71}$
3. $\frac{335}{113}$

### 第一问

$$
\begin{equation}
  \begin{aligned}
    \lvert e^* \rvert&=
    \lvert \pi -\frac{22}{7}\rvert\\
    &\approx 0.13\times 10^{-2}\\
    &<0.5\times 10^{-2}
  \end{aligned}
\end{equation}
$$

因此 $\varepsilon^*=0.0013$ ，相对误差限：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=\frac{0.0013}{\frac{22}{7}}\times 100\%\\
    &=0.0417\times 100\%
  \end{aligned}
\end{equation}
$$

且 $m=1, m-n=-2\to n=3$ ，因此有 $3$ 位有效数字。

### 第二问

$$
\begin{equation}
  \begin{aligned}
    \lvert e^* \rvert&=
    \lvert \pi-\frac{223}{71} \rvert\\
    &\approx 0.00075\\
    &< 0.5\times 10^{-2}
  \end{aligned}
\end{equation}
$$

因此绝对误差限 $\varepsilon^*=0.75\times 10^{-3}$ ，相对误差：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=\frac{0.75\times 10^{-3}}{\frac{223}{71}}\times 100\%\\
    &=0.024\%
  \end{aligned}
\end{equation}
$$

同第一问，有效数字位数为 $3$ 。

### 第三问

$$
\begin{equation}
  \begin{aligned}
    \lvert e^*\rvert&=\
    \lvert \pi-\frac{335}{113}\rvert\\
    &=0.177<0.5\times 10^{0}
  \end{aligned}
\end{equation}
$$

因此绝对误差限 $\varepsilon^*=0.177$ ，相对误差如下：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=\frac{0.177}{\frac{335}{113}}\times 100\%\\
    &=5.97\%
  \end{aligned}
\end{equation}
$$

此时 $m=1,m-n=0\to n=1$ ，仅有 $1$ 位有效数字。

---

## ch1.5

要使 $\sqrt{6}$ 的的近似值的相对误差限小于 $0.1\%$ 要取几位有效数字?

$$
\begin{equation}
  \begin{aligned}
    \sqrt{6}\approx
    0.24494897\times 10^1
  \end{aligned}
\end{equation}
$$

有 $m=1$ ， $x_1=2$ 则此时要求：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*&=
    \frac{\lvert e^*\rvert}{\sqrt{6}}\\
    &=\frac{\frac{1}{2x_1}\times 10^{-(n-1)}}{\sqrt{6}}\\
    &=\frac{10^{1-n}}{2\sqrt{6}x_1}<0.1\%
  \end{aligned}
\end{equation}
$$

因此要求 $n>3.0089$ ，取 $n=4$ 即可，也即取 $4$ 位有效数字即可。

---

## ch1.6

已知近似数 $x^*$ 的相对误差限为 $0.3\%$ 问 $x^*$ 至少有几位有效数字?

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r^*=\frac{1}{2x_1}\times 10^{1-n}\geq 0.3\%
  \end{aligned}
\end{equation}
$$

取 $x_1=9$ 时，有 $2.27\geq n$ ，因此至少有 $2$ 位有效数字。

---

## ch1.7

设 $x>0$ ， $x^*$ 的相对误差限为 $\delta$ ，求 $\ln x^*$ 的绝对误差限和相对误差限。

$$
\begin{equation}
  \begin{aligned}
    e^*_r=\frac{\lvert x-x^*\rvert}{\lvert x^*\rvert}\leq \delta\to 
    \lvert e^*\rvert \leq \delta\lvert e^* \rvert
  \end{aligned}
\end{equation}
$$

$$
\begin{equation}
  \begin{aligned}
    \lvert e(\ln x^*)\rvert&=\lvert \ln x - \ln x^*\rvert\\
    &=\left\lvert\ln
    \frac{x}{x^*}\right\rvert\\
    &=
    \left\lvert
      \ln \left(1+\frac{x-x^*}{x^*}\right)
    \right\rvert
  \end{aligned}
\end{equation}
$$

根据公式 $x>\ln(x+1)$ （这点可以用导数求得），因此：

$$
\begin{equation}
  \begin{aligned}
    \lvert e(\ln x^*)\rvert \leq \left\lvert
      \frac{x-x^*}{x^*}
    \right\rvert \leq \delta
  \end{aligned}
\end{equation}
$$

因此 $\varepsilon(\ln x^*)=\delta$ ，因此相对误差：

$$
\begin{equation}
  \begin{aligned}
    \varepsilon_r(\ln x^*)=\frac{\delta}{\ln x^*}
  \end{aligned}
\end{equation}
$$

或者此题也可以直接用公式导出：

$$
\begin{equation}
  \begin{aligned}
    \ln x -\ln x^*= (\ln x)^\prime|_{x=x^*} e^*=\frac{e^*}{x^*}
  \end{aligned}
\end{equation}
$$

---

## ch1.8

$$
\begin{equation}
  \begin{aligned}
    e_r(V^*)&=
    \frac{V-V^*}{V^*}\\
    &=
    \frac{r^3 - r^{*3}}{r^{*3}}\\
    &=
    \frac{\frac{dr^3}{dr}\large|_{r=r^*} e^*}{r^{*3}}\\
    &=\frac{3e^*}{r^*}\\
    &=3e_r^*
  \end{aligned}
\end{equation}
$$

因此要求半径的相对误差应有：

$$
\begin{equation}
  \begin{aligned}
    \lvert e_r^*\rvert\leq 0.1\%
  \end{aligned}
\end{equation}
$$

---

## ch1.9

真空中自由落体运动距离 $s$ 和时间 $t$ 的关系是 $s=\frac{1}{2}gt^2$ ，设重力加速度 $g$ 是准确的，而 $t$ 的测量有 $\pm{0.1}s$ 的误差，证明当 $t$ 增加时，距离 $s$ 的绝对误差增加，而相对误差减小。

$$
\begin{equation}
  \begin{aligned}
    e_r^*(s)&=\frac{s-s^*}{s^*}\\
    &=\frac{t^2-t^{*2}}{t^{*2}}\\
    &=\frac{2t^* e^*}{t^{*2}}\\
    &=\frac{2 e^*}{t^*}
  \end{aligned}
\end{equation}
$$

其中 $e^*(s)=2t^* e^*$ 。且 $\lvert e^*\rvert\leq 0.1s$ ，因此 $e^*(s)$ 随时间 $t^*$ 增加而增加，$e_r^*(s)$ 随 $t^*$ 增加而减小。

---

## ch1.10

$$
\begin{equation}
  \begin{aligned}
    I_n&=\int_0^1\frac{x}{x+5}x^{n-1}dx\\
    &=\int_0^1 x^{n-1}dx - 5\int_{0}^1\frac{x_{n-1}}{x+5}dx\\
    &=\frac{1}{n}-5I_{n-1}
  \end{aligned}
\end{equation}
$$

上述递推关系会放大误差，计算不稳定，而改写作：

$$
\begin{equation}
  \begin{aligned}
    I_{n-1}=\frac{1}{5n}-\frac{1}{5}I_n
  \end{aligned}
\end{equation}
$$

则会缩小递推误差，计算稳定。

---

## ch1.11

设 $a=1000$ ，取 $4$ 位有效数字用如下两个等价的式子

$$
\begin{equation}
  \begin{aligned}
    x=\sqrt{a+1}-\sqrt{a}\quad
    x=\frac{1}{\sqrt{a+1}+\sqrt{a}}
  \end{aligned}
\end{equation}
$$

进行计算，求 $x$ 的近似值 $x^*$ 并将结果与准确值 $x=0.015807437\cdots $ 进行比较，各有多少位有效数字。

选择 1 式子：

$$
\begin{equation}
  \begin{aligned}
    x_1^*&=\sqrt{1001}-\sqrt{1000}\\
    &\approx 31.64-31.62\\
    &=0.02=0.2\times 10^{-1}
  \end{aligned}
\end{equation}
$$

误差：

$$
\begin{equation}
  \begin{aligned}
    \lvert x-x_1^* \rvert \approx
    0.0042<0.5\times 10^{-2}
  \end{aligned}
\end{equation}
$$

所以 $m-n=-2,n=1$，仅有一位有效数字。

选择 2 式子：

$$
\begin{equation}
  \begin{aligned}
    x_2^*\approx
    &\frac{1}{31.64+31.62}\\
    &\approx 0.01581=0.1581\times 10^{-1}
  \end{aligned}
\end{equation}
$$

$m=-1$，误差：

$$
\begin{equation}
  \begin{aligned}
    \lvert x-x_2^*\rvert\approx 0.257\times 10^{-5}<0.5\times 10^{-5}
  \end{aligned}
\end{equation}
$$

因此 $m-n=-5,n=4$ ，此时具有 $4$ 位有效数字。


---

---
