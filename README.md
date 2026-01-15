## Podstawy programowania w C++ - instrukcja if, pętle


### Instrukcja warunkowa IF
Możesz użyć instrukcji `if`, aby wykonać fragment kodu, jeśli spełniony jest określony warunek. Jeśli wyrażenie ma wartość `True`, wykonywane są pewne instrukcje. W przeciwnym razie są one pomijane. Instrukcja `if` wygląda następująco:
```C++
if (wyrażenie warunkowe){
  instrukcje
}
```
W C++ wyrażenie zapisujemy w nawiasach okrągłych. Instrukcje które mają się wykonać zapisywane są miedzy nawiasami klamrowymi. Dla czytelności kodu instrukcje pisane są z wcięciem. 
Przykład:
```C++
if (15 > 10){
  cout << "Warunek prawdziwy." << endl;
  cout << "15 jest wieksze od 10" << endl;
}
cout << "Koniec programu" << endl;
```

Jeżeli używamy tylko jednej instrukcji to nie musimy używać nawiasów klamrowych:
```C++
if (15 > 10)
  cout << "15 jest wieksze od 10" << endl;

cout << "Koniec programu" << endl;
```

Aby wykonać bardziej złożone warunki, instrukcje mogą być zagnieżdżone, jedna w drugiej. Oznacza to, że wewnętrzne instrukcje `if` są częścią instrukcji zewnętrznej. Jest to jeden ze sposobów sprawdzenia, czy spełnione są warunki wielokrotne.
Przykład:
```c++
if (num >= 5){
  cout << "Liczba wieksza od 5" << endl;
  if (num <= 45){
    cout << "Liczba z przedziału [5, 45]" << endl;
  }
}
```
Instrukcja `else` wykonuje instrukcję `if` i zawiera kod, który jest wywoływany, gdy instrukcja `if` zwraca wartość `False`. Podobnie jak w przypadku instrukcji `if`, używa się nawiasów klamrowych.
Przykład:
```C++
int x = 4;
if (x == 5){
  cout << "Tak" << endl;
}
else{
  cout << "Nie" << endl;
}
```
Instrukcje `if` i `else` można łączyć łańcuchowo, aby określić, która opcja w serii możliwości jest prawdziwa.
Przykład:
```c++
int num = 12;

if (num == 5) {
    cout << "Numerem jest 5" << endl;
}
else if (num == 10) {
    cout << "Numerem jest 10" << endl;
}
else {
    cout << "Numerem nie jest 5 ani 10" << endl;
}

```
Instrukcja `else if` jest rozwinięciem instrukcji `else`, w przypadku gdy chcemy sprawdzić kolejne warunki, np. gdy chcemy sprawdzić kolejne dzielinki liczby. Seria instrukcji `if` `else if` może mieć końcowy blok `else`, który jest wywoływany, jeśli żadne z wyrażeń `if` lub `elif` nie jest prawdziwe.
Przykład:
```C++
int num = 12;

if (num == 5) {
    cout << "Numerem jest 5" << endl;
}
else if (num == 10) {
    cout << "Numerem jest 10" << endl;
}
else if (num == 15) {
    cout << "Numerem jest 15" << endl;
}
else {
    cout << "Numerem nie jest 5, 10 ani 15" << endl;
}

```
### Operatory logiczne
Służą do tworzenia bardziej skomplikowanych warunków dla instrukcji, które opierają się na więcej niż jednym warunku. Operatorami logicznymi w Pythonie są:
- `&&` - AND (koniunkcja) 
- `||` - OR (lub)
- `!=` - NOT (zaprzeczenie)


### Zadanie
Uzupełnij tabelę dla działan logiki matematycznej:

### Pętla while
Instrukcja `if` jest uruchamiana jednokrotnie, jeśli jej warunek jest prawdziwy, a nigdy, jeśli oceniany jest jako fałszywy. Instrukcja `while` jest podobna, z tym wyjątkiem, że może być uruchamiana więcej niż raz. Instrukcje wewnątrz niej są wielokrotnie wykonywane, o ile warunek jest prawdziwy. Po przejściu do wartości False wykonywana jest następna sekcja kodu. Poniżej znajduje się pętla `while` zawierająca zmienną, która liczy od 1 do 5, w którym to momencie pętla kończy się.
```c++
int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;
}
cout << "Koniec!" << endl;

```
Nieskończona pętla jest specjalnym rodzajem pętli while; nigdy się nie kończy. Jego stan pozostaje zawsze prawdziwy.
Przykład:
```c++
while (true) {
    cout << "operacje w pętli" << endl;
}

```
Aby przedwcześnie zakończyć pętlę, można użyć instrukcji break. Po napotkaniu wewnątrz pętli instrukcja break powoduje natychmiastowe zakończenie pętli.
Przykład:
```c++
int i = 0;

while (true) {
    cout << i << endl;
    i++;
    if (i >= 5) {
        cout << "Przerwanie" << endl;
        break;
    }
}
cout << "Koniec" << endl;

```
Kolejną instrukcją, która może być używana w pętlach, jest
continue. W przeciwieństwie do break, continue przeskakuje
z powrotem na początek pętli, zamiast ją zatrzymywać.
Przykład:
```c++
int i = 0;

while (true) {
    i++;
    if (i == 2) {
        cout << "Pomin 2" << endl;
        continue;
    }
    if (i == 5) {
        cout << "Przerwanie" << endl;
        break;
    }
    cout << i << endl;
}
cout << "Koniec" << endl;

```

### Pętla do while

### Pętla for
Pętla `for` iteruje po elementach np. listy w kolejności, wykonując blok instrukcji.
Przykład:
```c++
string words[] = {"hello", "world", "spam", "eggs"};

for (string word : words) {
    cout << word << "!" << endl;
}

```
Pętla `for` jest zwykle używana do powtarzania fragmentu kodu pewną liczbę razy. Odbywa się to przez połączenie pętli z funkcją `range`.
Przykład:
```c++
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}

```

## Zadania do wykonania
:one: Przepisz przykład zagnieżdżonego if-a z początku instrukcji jako jeden `if`.

:two: Napisz skrypt, który zapyta użytkownika o imię, a potem wyświetli powitanie z wykorzystaniem podanego imienia.

:three: Napisz krótki skrypt (wystarczy jedna linia kodu), który obliczy sumę liczb całkowitych wprowadzonych przez użytkownika (jeden input do, którego podamy dwie liczby rozdzielone spacją) i wynik wyświetli jako liczba zmiennoprzecinkowa.

:four: Korzystając z pętli `for` oraz `sum` oblicz sumę liczb naturalnych od 8 do 80.

:six: Korzystając ze zdobytych wiadomości, napisz prosty kalkulator posiadający menu wyboru działania i wykonującego działania dla dwóch liczb.

