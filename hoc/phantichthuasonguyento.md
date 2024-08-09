# Phân tích một số ra thừa số nguyên tố
## 1. Khái niệm
Với một số nguyên dương N>1, tồn tại một cách phân tích duy nhất như sau:

$$N = p_1^{a_1} ×  p_2^{a_2} × ... ×  p_k^{a_k}$$

Trong đó, $p_1, p_2,..., p_k$ là các số nguyên tố khác nhau, $a_1, a_2,..., a_k$ là các số nguyên dương

VD: $300 = 2^2 . 3^1 . 5^2; 45 = 3^2 . 5^1$

## 2. Tính chất

Giả sử ta có: $N = p_1^{a_1} × p_2^{a_2} × ... × p_k^{a_k}$ và $M = p_1^{b_1} × p_2^{b_2} × ... × p_k^{b_k}$

Khi đó, ta có:

+ UCLN(N,M) = $p_1^{min(a_1,b_1)} × p_2^{min(a_2,b_2)} × ... × p_k^{min(a_k,b_k)}$
+ BCNN(N,M) = $p_1^{max(a_1,b_1)} × p_2^{max(a_2,b_2)} × ... × p_k^{max(a_k,b_k)}$
+ Số lượng các ước số của N là $(a_1 + 1).(a_2 + 1) ... (a_k + 1)$
+ Tổng các ước số của N là ${p_1^{a_1 + 1}-1}/(p_1 - 1) ×  {p_2^{a_2 + 1}-1}/(p_2 - 1) × ... ×  {p_k^{a_k + 1}-1}/(p_k - 1)$

VD: UCLN(300,45)=$2^0 . 3^1 . 5^1$ = 15; BCNN(300,45)=$2^2 . 3^2 . 5^2$ = 900.

Số ước của 300 là (2+1)(1+1)(2+1)=18; Tổng các ước của 300 là $(2^3-1)/(2 - 1) ×  (3^2-1)/(3 - 1) × (5^3-1)/(5 - 1)$ = 7.4.31 = 868.

## 3. Thuật toán phân tích số N ra thừa số nguyên tố
### Ý tưởng
Gọi p là số nguyên tố là ước của N, với số mũ a. Ta thấy 2 ≤ p ≤ N.

Vậy p sẽ chạy từ 2 đến N. Nếu N ⋮ p thì tăng biến a.

Chúng ta không cần kiểm tra số p là số nguyên tố.

### Thuật toán
```
B1: Nhập N;
B2: p=2; a=0;
B3: Trong khi N > 1:
	B3.1: Trong khi N ⋮ p:
		B3.1.1: Tăng a;
		B3.1.2: N = N div p;
	B3.2: Nếu a > 0:
		B3.2.1: Viết p^a;
		B3.2.1: Nếu N > 1 thì viết dấu *;
	B3.3: Tăng p; a = 0;
```
