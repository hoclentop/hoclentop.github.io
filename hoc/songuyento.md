# SỐ NGUYÊN TỐ

## 1. Khái niệm
Số nguyên n > 2 được gọi là số nguyên tố nếu n chỉ có 2 ước là 1 và chính nó.

Ví dụ các số 2, 3, 5, 7, 11, 13, 17 là các số nguyên tố.

## 2. Kiểm tra số nguyên tố
### a. Bài toán:
Kiểm tra số nguyên n có phải là số nguyên tố không.

### b. Ý tưởng: 
Nếu x là ước của n thì x = 1..n. Hai số đầu và cuối hiển nhiên là ước của n. Như vậy từ 2 đến n-1 sẽ không còn ước của n.

### c. Thuật toán:

* Nhập n;
* Nếu n < 2 thì viết NO và kết thúc thuật toán;
* Với mỗi x chạy từ 2 đến n-1:
  * Nếu n ⋮ x thì viết NO và kết thúc thuật toán;
* Viết YES;

Ta có giảm giới hạn của x xuống $[\frac{n}{2}]$ hoặc $[\sqrt{n}]$.
