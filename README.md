# translator_lab

## Программный интерфейс.
На консоли выводится сообщение, предлагающее пользователю ввести арифметическое выражение. Далее программа анализирует
входные данные на корректность. Если арифметическое выражение введено корректно, выводится его результат.
Иначе выводится код ошибки: если программа выдала ошибку на этапе лексического анализа,
выводится номер символа, на котором произошла ошибка. Если ошибка произошла на этапе синтаксического анализа,
возвратится код ошибки -1. Пользователь может вводить неограниченное количество арифметических выражений.

## Функции и константы, поддерживаемые программой.

Пользователь может использовать при написании арифметических выражений следующие возможности:
основные арифметические операции, тригонометрические функции, известные числовые константы,
скобочные выражения различной степени вложенности, целые числа, вещественные числа в формате «123.7»,
а также переменные: как односимвольные, так и многосимвольные.

Поддерживаемые функции и математические константы с форматом их ввода представлены в следующей таблице:

| Поддерживаемая функция/числовая константа: | Формат ввода                                                    |
|--------------------------------------------|-----------------------------------------------------------------|
| Тригонометрические функции                 | sin(x), cos(x), tg(x)                                           |
| Возведение в степень                       | a^b                                                             |
| Математические константы: число пи, число е| PI, E                                                           |
| Основные арифметические операции           | a+b, a-b, a/b, a*b                                              |
| Модуль	                             | abs(x)                                                          |
| Унарные плюс и минус                       | +a, -a                                                          |

