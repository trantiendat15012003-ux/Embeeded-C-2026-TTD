4.1. Khái niệm Stdarg.h
stdarg.h là thư viện chuẩn của C, hỗ trợ xây dựng các hàm có số lượng tham số đầu vào không cố định (Variadic Functions).
Thư viện này thường được sử dụng khi muốn một hàm nhận nhiều tham số khác nhau mà không cần khai báo trước số lượng tham số.
4.2. Các thành phần chính
Thành phần	Chức năng
- va_list	Khai báo biến quản lý danh sách tham số
- va_start()	Bắt đầu truy cập danh sách tham số
- va_arg()	Lấy từng tham số trong danh sách
- va_end()	Kết thúc quá trình truy cập

4.4. Ứng dụng trong Embedded
- Xây dựng hàm ghi log (Logging).
- Tạo hàm Debug nhận nhiều tham số.
- Xây dựng các hàm xử lý dữ liệu linh hoạt.
