課題3.

Q1. 何故256文字以上入力するとクラッシュするのか原因を教えて欲しい

A1. L6で確保した256バイト以上のメモリ書き込みが発生するから。

Q2. 256文字以上入力出来ないように制限を設けて欲しい

A2. フィールド幅を指定してオーバー分は改行コードまで読み飛ばす。実装はmain.c参照
