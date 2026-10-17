# C Dersleri

C programlama dersinden kalan notlarım ve derste yazdığım örnek kodlar. Arkadaşlarım da faydalanabilsin diye topluca buraya koydum — çalışan, derlenebilir örnekler.

## İçerik

| Klasör | Ne var |
|---|---|
| [`notlar/`](notlar/) | Teorik ders notları (Word dosyası): escape sequence'lar, veri tipleri, format specifier'lar, değişken isimlendirme kuralları |
| [`kodlar/`](kodlar/) | 57 adet `.c` örnek dosyası, konu konu aşağıda listeli |

## Kodlar — konu başlıklarına göre

### Temeller ve giriş/çıkış
- [`HelloWorld.c`](kodlar/HelloWorld.c) — ilk program
- [`girdi.c`](kodlar/girdi.c) — `scanf` ile kullanıcıdan veri alma
- [`metinsel.c`](kodlar/metinsel.c) — metinsel ifadeler (string)

### Operatörler
- [`operators.c`](kodlar/operators.c) — genel bakış
- [`aritmetik.c`](kodlar/aritmetik.c) — aritmetik operatörler
- [`atama.c`](kodlar/atama.c), [`atamaornek.c`](kodlar/atamaornek.c) — atama operatörleri
- [`karsilastirmaop.c`](kodlar/karsilastirmaop.c) — karşılaştırma operatörleri
- [`mantiksalop.c`](kodlar/mantiksalop.c) — mantıksal operatörler
- [`arttirmaazaltma.c`](kodlar/arttirmaazaltma.c) — `++` ve `--`
- [`opornek1.c`](kodlar/opornek1.c), [`opornek2.c`](kodlar/opornek2.c) — alıştırmalar

### Koşullu ifadeler
- [`ifelse.c`](kodlar/ifelse.c) — `if` / `else`
- [`kosullar.c`](kodlar/kosullar.c) — koşul örnekleri
- [`switch.c`](kodlar/switch.c), [`switchorn1.c`](kodlar/switchorn1.c) — `switch-case`

### Döngüler
- [`for.c`](kodlar/for.c) — `for` döngüsü
- [`while.c`](kodlar/while.c) — `while` döngüsü
- [`dowhileandfor.c`](kodlar/dowhileandfor.c), [`dowhileorn.c`](kodlar/dowhileorn.c) — `do-while`
- [`iciceloop.c`](kodlar/iciceloop.c), [`icloopornek.c`](kodlar/icloopornek.c) — iç içe döngüler
- [`break.c`](kodlar/break.c), [`continue.c`](kodlar/continue.c) — `break` ve `continue`
- `loopornek.c` → [1](kodlar/loopornek.c) · [2](kodlar/loopornek2.c) · [3](kodlar/loopornek3.c) · [4](kodlar/loopornek4.c) · [5](kodlar/loopornek5.c) · [6](kodlar/loopornek6.c) — döngü alıştırmaları

### Fonksiyonlar
- [`fonksiyon1.c`](kodlar/fonksiyon1.c), [`fonksiyon2.c`](kodlar/fonksiyon2.c), [`fonksiyon3.c`](kodlar/fonksiyon3.c) — temel fonksiyon tanımlama
- Örnekler: [1](kodlar/fonksiyonlarornek.c) · [2](kodlar/fonksiyonlarornek2.c) · [3](kodlar/fonksiyonlarornek3.c) · [4](kodlar/fonksiyonlaronek4.c) · [5](kodlar/fonksiyonlarorneek5.c) · [6](kodlar/fonksiyonlarornek6.c) · [7](kodlar/fonksiyonlarornek7.c) · [8](kodlar/fonksiyonlarornek8.c)
- [`fonksiyonusalma.c`](kodlar/fonksiyonusalma.c), [`kupalma.c`](kodlar/kupalma.c) — üs ve küp alma
- [`localveglobaldegiskenler.c`](kodlar/localveglobaldegiskenler.c) — local / global değişkenler
- [`recursionfonksiyonlari.c`](kodlar/recursionfonksiyonlari.c), [`fonksiyonrecursion4.c`](kodlar/fonksiyonrecursion4.c) — özyineleme (recursion)

### Diziler
- [`diziler1.c`](kodlar/diziler1.c), [`diziler2.c`](kodlar/diziler2.c) — dizi tanımlama ve kullanma
- [`fonksiyonvediziler1.c`](kodlar/fonksiyonvediziler1.c) — fonksiyonlara dizi gönderme

### Genel alıştırmalar
- [`okul1.c`](kodlar/okul1.c) · [`okul2.c`](kodlar/okul2.c) · [`okul3.c`](kodlar/okul3.c) · [`okul4.c`](kodlar/okul4.c)
- [`test1.c`](kodlar/test1.c) · [`test2.c`](kodlar/test2.c) · [`test3.c`](kodlar/test3.c) · [`test4.c`](kodlar/test4.c)

## Kodları nasıl çalıştırırım?

`gcc` kuruluysa, dosyanın bulunduğu klasörde:

```bash
gcc kodlar/for.c -o for
./for
```

Windows'ta derleyici yoksa en kolayı [MinGW-w64](https://www.mingw-w64.org/) veya VS Code + C/C++ eklentisi kurmak.

## Not

Bu notlar Fehmi UYAR Youtube Kanalının C dersleri Playlisti takip edilerek tutulmuştur.
