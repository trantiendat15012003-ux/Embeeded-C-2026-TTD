6.1. Khái niệm
Trong lập trình C, chương trình thường được chia thành nhiều file để quản lý mã nguồn dễ dàng hơn.

Hai loại file phổ biến:
- File .h (Header File): Chứa khai báo hàm, kiểu dữ liệu, Macro và các định nghĩa dùng chung.
- File .c (Source File): Chứa phần triển khai nội dung các hàm đã khai báo trong file .h.
6.2. Cách chia
Khi xây dựng chương trình C, nên chia mã nguồn thành hai loại file chính là .h và .c.
- File .h (Header File): Dùng để khai báo các hàm, biến, kiểu dữ liệu và Macro mà các file khác cần sử dụng. File này giúp các module có thể giao tiếp với nhau.
- File .c (Source File): Dùng để triển khai nội dung các hàm đã được khai báo trong file .h. Đây là nơi chứa phần xử lý chính của chương trình.
6.3. Tại sao cần chia file .h và .c?
- Dễ quản lý: Mỗi module đảm nhiệm một chức năng riêng.
- Tái sử dụng: Có thể sử dụng lại module trong nhiều chương trình khác nhau.
- Dễ bảo trì: Khi cần sửa chức năng, chỉ cần chỉnh sửa file liên quan.
- Tổ chức mã nguồn: Tách biệt phần khai báo và phần triển khai.
- Hỗ trợ làm việc nhóm: Nhiều người có thể phát triển các module độc lập.
6.4. Ứng dụng trong Embedded
- Trong lập trình Embedded, việc chia file .h và .c giúp tổ chức chương trình theo từng module chức năng hoặc từng ngoại vi của vi điều khiển.
- Ví dụ, khi xây dựng một hệ thống sử dụng STM32, có thể chia chương trình thành các module như GPIO, UART, SPI, I2C và Timer. 
  Mỗi module có một file .h để khai báo các hàm và một file .c để triển khai chức năng tương ứng.

- Cách tổ chức này giúp mã nguồn dễ đọc, dễ kiểm tra lỗi, thuận tiện bảo trì và tái sử dụng trong các dự án khác. 
  Đồng thời, khi cần thay đổi một chức năng, lập trình viên có thể chỉnh sửa module liên quan mà không ảnh hưởng nhiều đến các phần còn lại của chương trình.
