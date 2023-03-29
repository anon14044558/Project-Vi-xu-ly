# Project-Vi-xu-ly
Dự án này nhằm mục đích phát triển một thiết bị đo nhiệt độ, độ ẩm và chất lượng không khí để giúp người nông dân theo dõi và quản lý môi trường trồng nấm kim châm một cách hiệu quả. Thiết bị sử dụng các linh kiện như Arduino R3, DHT11, MQ135, màn hình LCD 16x2, đèn LED để đo các thông số và cảnh báo khi các thông số không đạt yêu cầu.

Các chức năng chính của thiết bị bao gồm đo nhiệt độ, độ ẩm và chất lượng không khí, hiển thị các giá trị đo được lên màn hình LCD 16x2 để người dùng có thể theo dõi các thông số, và cảnh báo người dùng bằng đèn LED khi các thông số vượt quá ngưỡng được thiết lập.

Dự án này có thể giúp người nông dân tăng năng suất trồng nấm kim châm bằng cách giám sát và quản lý môi trường trồng nấm một cách chính xác và kịp thời. Thiết bị có thể được sử dụng để giám sát và quản lý môi trường trồng nấm trong các trang trại nấm hoặc trong các nhà kính. Ngoài ra, dự án này cũng có thể được mở rộng để đo các thông số khác như ánh sáng, độ pH, độ dẫn điện, v.v.

Tổng quan dự án là phát triển một thiết bị đo nhiệt độ, độ ẩm và chất lượng không khí sử dụng Arduino R3, DHT11, MQ135, màn hình LCD 16x2, đèn LED để giúp người nông dân giám sát và quản lý môi trường trồng nấm kim châm một cách hiệu quả.

Tổng quan dự án bao gồm các bước chính như sau:

Tiếp nhận thông tin: Thiết bị sử dụng các cảm biến DHT11 và MQ135 để đo nhiệt độ, độ ẩm và chất lượng không khí tại vị trí được lắp đặt. Dữ liệu đo được sẽ được gửi đến Arduino R3 để xử lý.

Xử lý thông tin: Arduino R3 sẽ xử lý dữ liệu đo được từ các cảm biến và tính toán các thông số như nhiệt độ, độ ẩm và chất lượng không khí. Sau đó, Arduino R3 sẽ gửi các giá trị này đến màn hình LCD 16x2 để hiển thị.

Hiển thị thông tin: Các giá trị đo được sẽ được hiển thị lên màn hình LCD 16x2. Người dùng có thể xem các thông số này để đánh giá môi trường trồng nấm kim châm.

Phát hiện và cảnh báo: Nếu các thông số đo vượt quá ngưỡng được thiết lập, đèn LED sẽ bật lên để cảnh báo và đưa ra thông báo trên màn hình LCD 16x2. Người dùng có thể xử lý các vấn đề liên quan để đảm bảo môi trường trồng nấm kim châm đạt năng suất cao.

Tổng quan dự án là tiếp nhận thông tin từ các cảm biến, xử lý thông tin trên Arduino R3, hiển thị các giá trị đo được lên màn hình LCD 16x2 và phát hiện các vấn đề để cảnh báo cho người dùng.
