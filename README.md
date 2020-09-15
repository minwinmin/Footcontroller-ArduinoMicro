# Footcontroller-ArduinoMicro
パチモンのDDR用フットコントローラをArduino Microを通して、キーボード入力におきかえるためのプログラムです。
check_foot_controller : ボタン位置の確認用のプログラム
keyboard_fool_controller　：　キーボード入力用のプログラム


# はじめに
[本記事](https://qiita.com/minwinmin/items/f2c363883f7ee8959631)はDDR（Dance Dance Revolution）のフットコントローラをArduino Microを介してパソコンに認識させるための改造メモです。

Amazonでは下記のようなDDRのパチモンが、よくわからないメーカーから販売されています。
USBでPCと接続・認識しますが、Mac catalinaでいまいち認識しなかったので、仕組みを理解する・分解を楽しむために改造してみました。

有料ソフトでこういったコントローラを認識するソフトがあるので、改造が手間という場合はそちらを使った方が良さそうです。

![image.png](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/212276/629ab5b2-5992-0915-26e5-12e54ec84da9.png)

# 必要なもの
- フットコントローラ
- Arduino Micro (もしくはArduino Leonardo、Arduino Due)
　→　HID機能をつかって入力をキーボードのボタンに割り当てるためHID機能がついているボードを使います。 

# 分解
基板部分を分解すると、下記のようになっていました。
フットコントローラ部分の接続は薄いフィルムとなっていて、基板部分と接触することでつながっています。
真ん中の少し太い線がGNDで、それ以外がフットコントローラのそれぞれの入力ピンとなっています。

![配線.jpg](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/212276/22faf04d-ad77-8485-c87b-f0e3a1da9a5a.jpeg)

そこから配線を適当に伸ばします。
そしてこれらをマイコンにつなぎます。
GNDはGND、入力ピンはデジタルピンに繋ぎます。
これで回路の準備は終わりです。

![footcontroller10.jpg](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/212276/62948058-ff25-c380-555f-f6083165cf3c.jpeg)

