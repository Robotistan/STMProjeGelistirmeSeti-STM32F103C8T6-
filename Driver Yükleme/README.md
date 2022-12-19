### FTDI Driver Yükleme

Bootloader yüklemek için USB - TTlL dönüşütürücü gerekiyor. Bu işlemi FTDI modeli ile yapacağız.

![image](https://user-images.githubusercontent.com/111511331/208373836-80e1c3c9-4905-4039-ac76-59b43ae9cd94.png)

* Bootloaderı yüklemeden önce FTDI kartını kullanbilmek için driver yüklüyoruz. Driver'ı [buraya](https://drive.google.com/file/d/1rH9gMJV47ezAf3CQIiyOi-a_-wlCDtBp/view) tıklayarak indirebilirsiniz.
FTDI Driverları hakkında detaylı bilgilere [buradan](https://ftdichip.com/drivers/) ulaşabilirsiniz.


* 1. Adım: Extract butonuna basarak kuruluma başlıyoruz.

![image](https://user-images.githubusercontent.com/111511331/208374168-c22a2fa9-bc43-4b2c-b761-f6f736a8420f.png)

* 2. Adım: İleri diyerek kuruluma devam ediyoruz.

![image](https://user-images.githubusercontent.com/111511331/208374351-66b496fd-3171-48b4-ac82-a36e83155fe5.png)

* 3. Adım:  Gerekli şartları kabul ediyoruz.

![image](https://user-images.githubusercontent.com/111511331/208374520-a186b1b9-90fc-4851-a3af-6fa065eff117.png)

* 4. Adım: : Son butonunabasarak kurulum işlemini bitiriyoruz.

![image](https://user-images.githubusercontent.com/111511331/208374608-ed341bb8-ff06-4062-b657-323aea654904.png)

### Bootloader

Drıverı yükledikten sonra bootloaderı yüklemeye geçebiliriz.

* 1. Adım: 

Bağlantı Şekli: VCC ve GND'yi bağladıktan sonra dönüştürücünün RX ucunu A9 pinine, TX ucunu A10 pinine bağlıyoruz.
VCC ve GND bağlandığı zaman karttaki power ledi (yeşil) ve user ledi (kırmızı) yanmaya başlayacak.
Üst üste BOOT0 ve BOOT1 olarak iki jumper var. BOOT0 'ı 1 konumuza almamız gerekiyor yani jumperı diğer tarafa takıyoruz.
Bu değişikliği yaptıktan sonra reset butonuna bastığınızda user ledin sönmesi gerekli. Eğer led söndü ise 2. adıma geçebiliriz.
Anlattığım bağlantıların hepsini alt tarafta bulunan devre şemasında bulabilirsiniz.

![image](https://user-images.githubusercontent.com/111511331/208375355-967ae375-7b55-4d29-a9f7-a28c9063024a.png)

* 2. Adım:

 Flashlama işlemi için kullanacağımız programı indirmemiz gerek. Kısa linkten veya [buraya](https://drive.google.com/file/d/1ZsYjYk7DqLrYJffja0JJjsQ6FVKB-rBV/view) tıklayarak FLASHER-STM32 adlı programı indirip kuruyoruz.
 
 Hps://www.kisa.link/Ou34
