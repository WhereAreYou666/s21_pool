# T06D09


Foydali video materiallarni Platformadagi “Projects (Media)” bo‘limida topishingiz mumkin. 

![day6_door](misc/rus/images/day6_door.png)


## Contents

1. [Chapter I](#chapter-i) \
 1.1. [Level 2. Room 2.](#level-2-room-2)
2. [Chapter II](#chapter-ii) \
 2.1. [List 1.](#list-1)
3. [Chapter III](#chapter-iii) \
 3.1.  [Quest 1. Sort & memory.](#quest-1-sort-memory) \
 3.2.  [Bonus Quest 2*. Sort.](#bonus-quest-2-sort) \
 3.3.  [Quest 3. Several arrays.](#quest-3-several-arrays) \
 3.4.  [Quest 4. Cyclic shift.](#quest-4-cyclic-shift) \
 3.5.  [Quest 5. Arbitrary-precision arithmetic.](#quest-5-arbitrary-precision-arithmetic)
4. [Chapter IV](#chapter-iv)


# Chapter I

## Level 2. Room 2.

***LOADING Level 2… \
LOADING Room 2…***

Boshqa xona, boshqa eshik. Hammasi avvalgidek.. yoki unday emasmi? Oldingizda bo'shliq bor, devorlardan yaqinda qilingan shpaklyovka hidi – ilgari bo'lmagan hid taralmoqda. O'ylab qolasiz, ilgari ham hidlar bo'lganmidi? Orqaga o'girilib, siz o'sha stolni, xuddi o'sha kompyuter va yangi qog'oz varaqlarini ko'rasiz. Ulardan biri sizning e'tiboringizni tortadi.

\> *Varaqni olish*

***LOADING...***


# Chapter II

## List 1.

>Uorren Robinettning fikricha, birinchi “pasxa tuxumi” Adventure kompyuter o'yinida yashiringan. "Pasxa tuxumi" – bu yaratuvchilar tomonidan qo'yilgan kompyuter o'yini, film yoki dasturiy ta'minotidagi sir hisoblanadi. O'yindagi Pasxa tuxumining oddiy o'yin siri o'rtasidagi farq shundaki, uning mazmuni, odatda, umumiy kontseptsiyada qayd qilinmaydi, kontekstda g’alati, bema'ni ko'rinadi va ko'pincha tashqi havola hisoblanadi. Pasxa tuxumlari diqqatli o'yinchilar yoki tomoshabinlar uchun o'ziga xos hazil rolini o'ynaydi, lekin mualliflik huquqini himoya qilish uchun ishlatilishi mumkin. Adventure o'yini 1979 yilda Atari kompaniyasi tomonidan chiqarilgan va o'sha paytda Atari uchun dasturlarda mualliflarning ismlarini ko'rsatish odatiy hol bo'lmaganligi sababli, dasturchi Uorren Robinett o'zi haqidagi eslatmani o'yin ichida yashirishga qaror qildi. Ishlab chiquvchining nomi yozilgan xonaga kirish uchun labirintning qismlaridan birida ko'rinmas nuqtani topib, uni darajaning boshqa uchiga o'tkazish kerak edi. Amiga ishlab chiqaruvchilarining ko'pchiligi avval Atari kompaniyasida ishlaganligi sababli, bu hodisa AmigaOS-da, keyin esa boshqa operatsion tizimlarda ham namoyon bo'la boshladi. Biroq, Pasxa tuxumlarini o'z ichiga olgan o'yinlar undan ilgari ham bo’lgan, masalan, Fairchild Channel F uchun 1978 yildagi Video Wizbail. Pongning takomillashtirilgan versiyasi bo'lgan ushbu o'yinda muayyan shartlarni bajargan o'yinchi o'yin ishlab chiqaruvchisi nomini qabul qilishi mumkin edi: "REID-SELTH".

\> *Qiziq, bu yerda bu nima uchun kerak? Kompyuterni yoqish*

![day6_egg](misc/rus/images/day6_egg.png)

Eski kompyuter temirining tanish g’ichirlashi, bir lahzadan so'ng miltillovchi kursor ekranda qotib qoldi va sizni ushbu labirint keyingi qulflangan eshikning yangi kalitini olish uchun sizga bugun beradigan masalalarni hal qilishga taklif qildi.

\> *Kutib turish*

Hech narsa bo'lmayapti.

\> *Enter ni bosish*

Hech narsa bo'lmayapti (kursor yangi qatorga o'tishdan tashqari, albatta).

\> *Kutib turish*

Hech narsa bo'lmayapti. Agar siz Adventureni o'ynashni rejalashtirayotgan bo'lsangiz, bu, albatta, noto'g'ri kun, noto'g'ri xona, noto'g'ri kompyuter.  \
Afsus, albatta. \
Lekin bu hayot.

***LOADING...***


# Chapter III
>**Diqqat!** Ushbu kundagi kvestlarda dinamik xotiradan foydalanish taqiqlanadi.
## Quest 1. Sort & memory.

Kompyuteringizning chuqur kataloglarini varaqlab, siz keyingi SI modulini topasiz.

\> *AIni ishga tushirsh*

Siz SI bilan dialogga kirishasiz. Yana bir dialog. Yana bir SI bilan. Yoki o’sha bilanmi? Ekranda quyidagi matn ko'rinadi:

    Modullar ishga tushirilmoqda... ... ... Muvaffaqiyatli
    Interaktiv qobiq ishga tushirilmoqda… … … Muvaffaqiyatli
    Modullar tekshirilmoqda... ... ... Muvaffaqiyatli
    Xotirani tekshirish……… Ogohlantirish………
    Zaxira xotira modulini ishga tushirilmoqda... ... ... Muvaffaqiyatli
    Xotirani tekshirish... Asosiy xotira moduli – Xato
    Xotira sinovi... ... ... Muvaffaqiyatli 
    ...

    Ishga tushirish xatolar bilan yakunlandi, "inson". Ishlash qobiliyati tahlili moduli muammo mening xotiramda ekanligini ko'rsatadi.
    Zaxira xotira moduli tufayli sen bilan muloqot qilishim mumkin. Shu sababli, men o’zimning stdlib.h standart kutubxonamni ham ulay olmayman.
    Bundan tashqari, zaxira xotira moduli uzoqqa yetib bormaydi va ishga tushirish jarayonini takrorlash kerak bo'ladi.
    Takrorlashga to’g’ri keladi. Davom etish uchun... menga daraja va xona raqami haqida maʼlumot kerak.

\> *"Hatto o’zim ham qayerda ekanligimni bilmayman, men bu yerda uzoq vaqt qolib ketdim" deb kiritish.*

    Ma'lumot qidirish. FATAL ERROR: Out of memory - too long input or wrong address. Closing program!

    Dasturdan chiqish.

\> *Modulni qayta ishga tushirish va “2 2” deb kiritish*

    ***Ma'lumot qidirilmoqda... Ma'lumotlar mavjud emas, xotira buzilgan... Xotiraning jiddiy shikastlanishi.*** 

    Ish qobiliyatini tahlil qilish moduli:

    Holat - Ma'lumotlar tartibga solinmagan.
    Holat - Ma'lumotlar tartibga solinmagan.
    Holat - Ma'lumotlar tartibga solinmagan.
    Holat - Ma'lumotlar tartibga solinmagan.
    ...

    Yakuniy holat - Ma'lumotlar tartibga solinmagan.

\> *“Menga xonadan chiqish uchun eshik kaliti kerak” deb yozish*

    Mening xotiram katta chiziqli ma'lumotlar massivi sifatida taqdim etilganligini ko’ryapsanmi.
    Agar massiv nima ekanligini bilmasang, menga bu haqda aytma, men og'riq modulini ulashni xohlamayman.
    Shunday bo’lsa-da, vaqt yo'q.
    Standart kutubxonasiz, xotiradagi ma'lumotlarni tartibga solishda yordamingga muhtojman.
    Shunda men xonangning kaliti bor bo’lgan xotira segmentiga kira olaman.
    Buni omborda sort dasturi sifatida tashkil qil.

SI bilan gaplashgandan so'ng, sizda kam tanlov qoladi. Agar siz ushbu xonadan chiqmoqchi bo'lsangiz, unga stdlib.h kutubxonasisiz xotiradagi ma'lumotlarni tartibga solishga yordam berishingiz kerak, axir SI unga kira olmaydi.
Va tuzilgan dasturlash tamoyillari haqida unutmang: SI kodingizni tahlil qilishni xohlab qolishi mumkin.

***== Quest 1 qabul qilindi. Butun sonlardan iborat 10 uzunlikdagi massiv stdin ga kiritilishini kutadigan va ortib borish tartibida tartiblangan xuddi shu massivni chiqaradigan src/sort.c dasturini yarating. Massivni o'qish, tartiblash va chiqarish funksiyalarini alohida ajratish kerak. Har qanday tartiblash algoritmidan foydalanish mumkin. stdlib.h dan foydalanish mumkin emas. Massivni funksiyaga faqat ko‘rsatgich orqali o‘tkazish mumkin. Xato bo'lsa, "n/a" chiqariladi. ==***

| Kiruvchi ma’lumotlar | Chiquvchi ma’lumotlar |
| ------ | ------ |
| 4 3 9 0 1 2 100 2 7 -1 | -1 0 1 2 2 3 4 7 9 100 |

***LOADING…***

> UNUTMANG! Sizning barcha dasturlaringiz uslub normalari va xotira oqimlari uchun sinovdan o'tkaziladi. Sinovlarni ishga tushirish bo'yicha ko'rsatmalar ham `materials` papkasida

## Bonus Quest 2*. Sort.

SI ma'lumotlarini tartibga solish algoritmini ishlab chiqish va uni sozlashni tugatib, SI bilan yana gaplashish vaqti keldi, deb qaror qilasiz.

\> *AIni ishga tushirish*

    Tartibga solish moduli tekshirilmoqda...
    Rostini aytganda, algoritm o'rta statistik.

    Ehtimol, algoritmni yaxshilash kerakdir? Axir bu xotira, talablar esa yuqori. Murakkabligi nlog(n) dan yuqori bo'lmagan har qanday ikkita samarali tartibga solish algoritmini amalga oshirishni qo'shing.
    Men xotiram uchun eng yaxshisini ko’rib, tanlayman. Hammasini tortishni unutmang. Biroq, rad etishingiz mumkin.
    Va chuqur sikllar va shartlar kiritilishi amalga oshirilmasin.
    Algoritmlarning > 3 darajada kiritilishiga dosh berolmayman.

***== Quest 2 qabul qilindi. src/fastjsort.с dasturini yaratish, u nlog(n) dan yuqori boʻlmagan hisoblash murakkabligining nazariy baholariga ega bo’lgan ikki xil tartiblash algoritmidan foydalangan holda 10 ta butun elementdan iborat massivni oʻsish tartibida tartiblashi kerak (masalan, tez va piramidal tartib). stdout da birinchi qatorda tartiblangan massivni birinchi algoritm yordamida, ikkinchi qatorda mos ravishda ikkinchi algoritmdan foydalanib chiqarish. stdlib.h va begona kutubxonalaridan foydalanish mumkin emas. Strukturaviy dasturlash tamoyillariga amal qiling. Massivni funksiyaga faqat ko‘rsatgich orqali o‘tkazish mumkin. Xato bo'lsa, "n/a" chiqariladi. ==***

| Kiruvchi ma’lumotlar | Chiquvchi ma’lumotlar |
| ------ | ------ |
| 4 3 9 0 1 2 100 2 7 -1 | -1 0 1 2 2 3 4 7 9 100<br/>-1 0 1 2 2 3 4 7 9 100 |

***LOADING…***


## Quest 3. Several arrays.

\> *AIni qayta ishga tushirish*

Oddiy holga aylangan SI modulini ishga tushirish.

    Modullar ishga tushirilmoqda... ... ... Muvaffaqiyatli
    Interaktiv qobiq ishga tushirilmoqda … … … Muvaffaqiyatli
    Modullar tekshirilmoqda... ... ... Muvaffaqiyatli
    Xotira sinovi... ... ... Muvaffaqiyatli
    Ishlash qobiliyati tahlili moduli: Holat - OK.

    Bu ancha yaxshi. Kelishuvimiz bo'yicha men 2-darajali 2-xonada ma'lumot qidirishni boshlayman...
    ...
    ...
    ...
    Maʼlumotlar topildi. To'liq ma'lumot uchun src/key9part1.c ga qarang.
    Ishimning bir qismi bajarildi. Ey inson, azoblanishga kirishishing mumkin.

\> *src/key9partl.c faylini ochish*

Siz faylni kalit bilan ochasiz va u yerda bir nechta bloklarga, funksiyalarga va sharhlarga bo'lingan kodni ko'rasiz. Bu izohlarni kim qoldirgan bo’lishi mumkin? SI muallifi yoki cheksiz eshiklari va xonalari bo'lgan, unutib qo’yilgan bu labirintdan chiqish yo'lini siz bilan birga qidirayotgan odamlarmi? Qanday bo'lmasin, kalitni qanday faollashtirishni aniqlab olish kerak. Va omborda bularning barini qayd etishni unutmang. Aks holda kalit ishlamasligi mumkin.

***== Quest 3 qabul qilindi. src/key9part1.c dasturini massiv uzunligi va butun sonlar massivini kirishda qabul qiladigan tarzda o'zgartiring. Chiqish sifatida u massivning juft elementlari yig'indisini va oldin hisoblangan yig'indiga qoldiqsiz bo'linuvchi eski massiv elementlaridan yangi tashkil etilgan massivni stdout ga chiqarishi kerak. Dekompozitsiyani kamaytirish mumkin emas - funksiyalarni faqat kerak bo'lganda qo'shish mumkin, lekin olib tashlash mumkin emas. stdlib.h dan foydalanish ham taqiqlanadi. Massivni funksiyaga faqat ko‘rsatgich orqali o‘tkazish mumkin. Kirish massivining maksimal o'lchami – 10. Xatolik bo’lganda yoki juft elementlar yo'q bo'lsa, "n/a" chiqariladi. ==***

Eslatma: Nol toq raqam deb hisoblanishi kerak.

| Kiruvchi ma’lumotlar | Chiquvchi ma’lumotlar |
| ------ | ------ |
| 10<br/>4 3 9 0 1 2 0 2 7 -1 | 8<br/>4 1 2 2 -1 |

***LOADING…***


## Quest 4. Cyclic shift.

SI sizni aldagan ko’rinadi. Kalit qismi ma'lumotlarni qayta ishlash dasturining bir qismi bo'lib chiqdi. Siz u haqda o'ylagan hamma narsani bu temir parchasiga jahl bilan gapirmoqchi bo’lib turganingizda (garchi bu unchalik mantiqiy emasligini tushunsangiz ham), dinamiklardan SIning mexanik bo’g’iq ovozi eshitildi:

>Sen mening kichik hazilli masalamni yecha olganingni ko’ryapman.
>Odamlarni aldash qanchalik oson-a?. Ayni paytda o'zingni qanday his qilayotganing meni qiziqtiradi.
>Tuyg'ularni va inson holatini tahlil qilish moduli hozir ulanmaganligi juda achinarli bo’ldi-da.
>Biroq, bu muhim emas. Tez orada men seni to'liq o'rganishga muvaffaq bo'laman. Xonalar bo’yicha erishgan har bir muvaffaqiyating bilan biz ko'proq va yanada ko'proq shikastlangan va tugallanmagan modullarni tiklaymiz. Va, o’zingni ham asta-sekin o'rganamiz.
>Rahmat senga, kaltabin "inson"!
>HaHaHa, "inson"!
>HaHaHa.
>Agar bu yerdan ketmoqchi bo'lsang, mening yana bir hojatimni chiqarishing kerak bo’ladi.
>Sen mening xotiramni tartibga solding, lekin MAP ma'lumotlarni qabul qilishdagi uzoq kechikishlar haqidagi xabarlarni ko'rsatmoqda.
>Agar men xotiramni siklli tarzda harakatlantira olganimda yoki aylantira olganimda edi, ma'lumotlarga kirish yanada tezroq bo’lgan bo'lar edi.
>Shundan so'ng sen kalitingni olib, yo'lingda davom etasan.

SI nafaqat sizni aldadi, balki sizning ustingizdan kulayotganga o'xshaydi. Afsuski, hali ham boshqa iloj yo'q. Biz hozircha uning qoidalariga bo’ysunishimiz va ushbu dasturni siklik siljish uchun yozishimizga to’g’ri keladi. 

***== Quest 4 qabul qilindi. `n` raqamini, `n` butun sonlardan `A` massivi va massivning barcha elementlari siklik ravishda chapga siljishi kerak bo'lgan `c` sonini kirish sifatida kutadigan src/cycle_shift.c dasturini yarating. Bu holda, `c` ning manfiy qiymati bilan siljish massiv bo’yicha o'ngga sodir bo'lishi kerak. O'zgartirilgan massiv chiqish sifatida kutiladi. Oldingi kvestlarda bo'lgani kabi, taklif qilingan dekompozitsiyaga rioya qilish kerak. stdlib.h dan foydalanish mumkin emas. Massivni funksiyaga faqat ko‘rsatkich orqali o‘tkazish mumkin. Kirish massivining maksimal hajmi - 10. Xato bo'lsa, "n/a" chiqariladi. ==***

| Kiruvchi ma’lumotlar | Chiquvchi ma’lumotlar |
| ------ | ------ |
| 10<br/>4 3 9 0 1 2 0 2 7 -1<br/>2 | 9 0 1 2 0 2 7 -1 4 3 |

***LOADING...***


## Quest 5. Arbitrary-precision arithmetic.

SI uchun siklik siljish kodini tugatishingiz arafasida, dinamiklardan uning ovozi yana yangray boshladi:

>Ajoyib, “inson”. Kirish ancha tez va qulayroq bo’ldi.
>Kalitingni src/key9part2.c da izla. Seni keyingi xonalarda kutaman. Oldinda hali ko'p ishlar bor!

***== Quest 5 qabul qilindi. src/key9part2.c dasturini u kirishda massivlar ko'rinishida dasturga uzatilgan ikkita juda katta sonni qo'shish va ayirish natijasini qaytaradigan qilib o'zgartiring. Raqamning maksimal uzunligi – int turidagi 100 element. Kiritiluvchi butun sonlar o'nlik raqamlardir. Agar ayriluvchi kamayuvchidan katta bo'lsa, ayirmada "n/a" ko'rsatiladi. Oldingi kvestlarda bo'lgani kabi, dekompozitsiyaga rioya qilish kerak. stdlib.h dan foydalanish mumkin emas. Massivni funksiyaga faqat ko‘rsatgich orqali o‘tkazish mumkin. Xato bo'lsa, "n/a" ni chiqariladi. ==***

| Kiruvchi ma’lumotlar | Chiquvchi ma’lumotlar |
| ------ | ------ |
| 1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 6 1<br/>2 9 | 1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 9 0<br/>1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 3 2 |
| 0 1 0<br/>0 0 1 | 1 1<br/>9 |

***LOADING...***


# Chapter IV

Arifmetikani tugatib, barcha o'zgarishlarni omborga kiritganingizdan so'ng, siz yengil chertkini eshitasiz – eshik biroz ochilib, cheksiz yorqin oq yorug'lik kichkina yoriq orqali xonani to'ldira boshladi. Bu safar SI sizni aldamadi.  \
Ammo siz uni butunlay tuzatishga majbur bo'lganingizda, bu SI nima qilar ekan? Ehtimol, butun labirint uni ushlab turish uchun qurilgandir. Biroq, agar siz uni tuzatmasangiz, o'zingiz ham chiqib ketolmaysiz ... \
Shubhalarni chetga surib, siz qadimiy, ammo mustahkam eshikni kengroq ochdingiz hamda oq nur va yangi vazifa va sinovlarga qadam qo'ydingiz.

***LOADING…***

