1 Создание личного репозитория
Создайте новый репозиторий на GitLab:
Перейдите на страницу создания нового проекта в вашем аккаунте GitLab.
Введите имя проекта и описание, при необходимости выберите видимость (публичный или приватный).

![1st screen](src/Screenshot/Screenshot_20240917_143444.png)
https://imgur.com/MZNH7xQ

Нажмите "Create project".
Клонируйте репозиторий на ваш локальный компьютер:
Создайте файл .gitignore:
touch .gitignore

2 Создание веток develop и master
Перейдите в основную ветку (обычно это master):
Создайте ветку develop и переключитесь на неё:
git checkout -b develop

![2nd screen](src/Screenshot/Screenshot_20240917_164814.png)
https://imgur.com/hGCcbAI

3 Установка ветки develop по умолчанию,
Перейдите на веб-интерфейс GitLab и откройте настройки вашего проекта.
Перейдите в раздел Repository → Branches.
Найдите ветку develop и нажмите "Default" для установки её как основной.

![3rd screen](src/Screenshot/Screenshot_20240917_171144.png)
https://imgur.com/a/Ip9G8hE

4 Создание Issue
Перейдите в раздел Issues вашего проекта на GitLab.
Нажмите "New issue".
Заполните заголовок и описание. Например, задача: "Создание текущего мануала".
Нажмите "Submit issue".

![4 screen](src/Screenshot/Screenshot_20240917_171412.png)
https://imgur.com/6FA0NI4

5 Создание ветки по Issue
Перейдите в раздел Issues и откройте созданный Issue.
Нажмите "Create merge request" (если такая опция доступна).

![5 screen](src/Screenshot/Screenshot_20240917_171516.png)
https://imgur.com/T6OfAmc

6 Создание Merge Request
Перейдите в раздел Merge Requests вашего проекта на GitLab.
Нажмите "New merge request".
Выберите исходную ветку (issue-branch-name) и целевую ветку (develop).
Заполните описание и создайте Merge Request.

![6 screen](src/Screenshot/Screenshot_20240917_171613.png)
https://imgur.com/PgffEmV

7 Комментирование и принятие Merge Request
Откройте Merge Request и просмотрите изменения.
Добавьте комментарии при необходимости.
Нажмите "Merge" для объединения ветки с develop.

8 Формирование стабильной версии в master и постановка тега
Переключитесь на ветку master:
git checkout master
git merge develop
git push origin master

9 Работа с Wiki проекта
Перейдите в раздел Wiki вашего проекта на GitLab.
Создайте новую страницу или отредактируйте существующую.
Сохраните изменения.
