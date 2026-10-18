# Glossary

## Terminal & Linux
- **terminal / shell** — terminal / kabuk: komut yazdığın program (Ubuntu'da shell'in adı bash)
- **command** — komut: shell'e verdiğin talimat (ör. `ls`, `cd`)
- **argument** — argüman: komuta verilen girdi (ör. `cd notes` içindeki `notes`)
- **flag / option** — bayrak / seçenek: komutun davranışını değiştiren ek (ör. `ls -a` içindeki `-a`)
- **directory** — dizin / klasör
- **home directory (`~`)** — ev dizini: `/home/<kullanıcı-adı>`
- **working directory** — çalışma dizini: o an içinde bulunduğun klasör (`pwd` ile görülür)
- **absolute path** — mutlak yol: `/` veya `~` ile başlar, her yerden aynı yeri gösterir
- **relative path** — göreli yol: o anki klasöre göre yorumlanır (ör. `hello.c`)
- **package manager** — paket yöneticisi: program kurup güncelleyen araç (Ubuntu'da `apt`)
- **sudo** — "superuser do": komutu yönetici yetkisiyle çalıştırır
- **pager** — sayfalayıcı: uzun çıktıyı sayfa sayfa gösterir, `q` ile çıkılır
- **Ctrl+C** — çalışan ya da yarım kalmış komutu iptal eder

## C & Compiling
- **source code / source file** — kaynak kod / kaynak dosya: insanın yazdığı kod (ör. `hello.c`)
- **compiler** — derleyici: kaynak kodu makine koduna çevirir (`gcc`)
- **compile** — derlemek
- **executable / binary** — çalıştırılabilir dosya / ikili dosya: derleme sonucu oluşan program (`hello`)
- **warning** — uyarı: derleyicinin "bu muhtemelen hata" dediği yer; program yine derlenir
- **error** — hata: derlemeyi durduran sorun
- **standard (C17)** — dil standardı: C dilinin resmi kuralları ve sürümü
- **debugger** — hata ayıklayıcı: programı satır satır çalıştırıp incelemeyi sağlar (`gdb`)
- **debug information (`-g`)** — debug bilgisi: debugger'ın satırları ve değişkenleri tanıması için eklenen bilgi
- **header file** — başlık dosyası: fonksiyon tanımlarını içeri alan `.h` dosyası (ör. `stdio.h`)
- **standard library** — standart kütüphane: C ile gelen hazır fonksiyonlar (`printf` vb.)
- **function** — fonksiyon: belirli bir işi yapan, isimli kod bloğu
- **`main` function** — programın başladığı fonksiyon
- **return value** — dönüş değeri: fonksiyonun geri verdiği sonuç; `main` için 0 = başarılı
- **escape sequence** — kaçış dizisi: özel karakter yazma yolu (ör. `\n` = yeni satır)

## Git & GitHub
- **Git** — bilgisayarında çalışan sürüm kontrol (version control) programı
- **GitHub** — Git repolarının internette saklandığı site
- **repository (repo)** — depo: Git'in takip ettiği proje klasörü ve tüm geçmişi
- **local repository** — yerel repo: senin bilgisayarındaki `.git` klasörü
- **remote repository** — uzak repo: GitHub'daki kopya
- **origin** — remote'un varsayılan adı
- **working directory (git)** — dosyaları düzenlediğin normal klasör
- **untracked** — takip edilmeyen: Git'in henüz bilmediği dosya
- **staging area** — hazırlık alanı: bir sonraki commit'e girecek değişiklikler (`git add`)
- **staged** — commit'e hazırlanmış
- **commit** — değişikliklerin mesajla kaydedilmiş anlık görüntüsü (snapshot)
- **commit message** — commit mesajı: İngilizce, emir kipinde yazılır (ör. "Add README")
- **hash** — her commit'in benzersiz kimliği (ör. `a1b2c3d`)
- **branch** — dal: bağımsız geliştirme hattı; varsayılanı `main`
- **push** — yerel commit'leri remote'a göndermek
- **pull** — remote'daki değişiklikleri bilgisayara çekmek
- **clone** — uzak bir reponun tam kopyasını indirmek
- **.gitignore** — Git'in görmezden geleceği dosyaların listesi
- **wildcard (`*`)** — joker karakter: "herhangi bir şey" anlamına gelir (ör. `*.o`)