# Projekt gry w C++
Gra tekstowa w gatunku RPG stworzona w C++ w której gracz ma kilka opcji do wyboru.
## Uruchomienie
Grę można uruchomić za pomocą programu visual studio, lub po komplicaji w g++. Przykład: 
```bash
g++ -o program character.cpp Character.h main.cpp Monster.cpp Monster.h randomEvent.cpp randomEvent.h Shop.cpp Shop.h
```
## Zasady gry
Po wpisaniu swojego imienia gracz ma kilka opcji do wyboru:
- udanie się na wyprawę
- odwiedzenie sklepu
- zobaczenie statystyk
- wyjście z gry

Po wybraniu opcji "Udanie się na wyprawę", gracz może napotkać jedno z trzech zdarzeń:
- Znalezienie złota
- Spotkanie potwora
- Nic się nie stanie

W przypadku spotkania z potworem uruchamia się system walki, gdzie gracz musi stawić czoła przeciwnikowi. Po pokonaniu potwora gracz może zdobyć złoto, ale istnieje również ryzyko śmierci, co kończy grę.

## Zwycięstwo
Kiedy gracz przekroczy 10 tur osiąga zwycięstwo.
