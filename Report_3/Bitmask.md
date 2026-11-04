1. Bitmask
1.1. Khái niệm
Bitmask là kỹ thuật sử dụng các phép toán bit để thao tác với từng bit riêng lẻ trong một biến.

Trong Embedded C, Bitmask thường được sử dụng để cấu hình thanh ghi (Register), bật/tắt các chức năng ngoại vi và kiểm tra trạng thái của các cờ (Flag).
1.2. Các phép toán cơ bản
Phép toán	Ký hiệu	Chức năng
- AND	(Ký hiệu: &) : Dùng để kiểm tra hoặc giữ lại bit
- OR	(Ký hiệu: |) : Thiết lập bit lên 1
- XOR	(Ký hiệu: ^) :	Đảo trạng thái bit
- NOT	(Ký hiệu: ~) : Đảo tất cả các bit
- Shift Left	(Ký hiệu: <<) :	Dịch bit sang trái
- Shift Right	(Ký hiệu: >>) :	Dịch bit sang phải

1.3. Các thao tác Bitmask
Giả sử cần thao tác với bit thứ 3:
#define BIT3 (1U << 3)

- Set bit: Đặt bit thành 1.
REG |= BIT3;

- Clear bit: Đặt bit thành 0.
REG &= ~BIT3;

- Toggle bit: Đảo trạng thái bit.
REG ^= BIT3;

- Check bit: Kiểm tra bit có đang bằng 1 hay không.
if (REG & BIT3)
{
    // Bit đang bằng 1
}


1.4. Ứng dụng trong Embedded
- Cấu hình các bit trong thanh ghi điều khiển GPIO.
- Bật/tắt các chức năng ngoại vi.
- Quản lý các cờ trạng thái (Status Flag).
- Giảm số lượng biến khi quản lý nhiều trạng thái khác nhau.
