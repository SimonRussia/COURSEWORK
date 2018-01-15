<img src="http://abali.ru/wp-content/uploads/2013/03/Gerb_MGTU_imeni_Baumana.png" width="160" height="whatever" align="right">

[![Build Status](https://travis-ci.org/SimonRussia/COURSEWORK.svg?branch=master)](https://travis-ci.org/SimonRussia/COURSEWORK) [![codecov](https://codecov.io/gh/SimonRussia/COURSEWORK/branch/master/graph/badge.svg)](https://codecov.io/gh/SimonRussia/COURSEWORK) [![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](/LICENSE) [![docs: doxygen](https://img.shields.io/badge/doxygen-github.io-orange.svg)](https://simonrussia.github.io/COURSEWORK)

## Курсовой проект
Тема: ***Реализация основных алгоритмов сортировок***

## Техническое задание
- [X] Реализовать основные алгоритмы сортировок с использование шаблонных функций языка **C++**;
- [X] Тестирование разработанных алгоритмов с использованием  фреймворка для модульного тестирования **Catch**;
- [X] Обеспечение **100%** покрытия кода;
- [X] Рассмотреть возможность оптимизации при реализации алгоритмов направленных на работу в мультизадачных системах.

## Статический анализ кода
| check | algorithm | cpplint report | cppcheck report | OCLint report |
| :---: | --- | --- | --- | --- |
| ☑️ | **BUCKET** | Done processing bucket.hpp | Checking bucket.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **MERGE** | Done processing merge.hpp | Checking merge.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **RADIX** | Done processing radix.hpp | Checking radix.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **SELECTION** | Done processing selection.hpp | Checking selection.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |

## Визуализация алгоритмов сортировок
| Bucket | Merge | Radix | Selection |
| --- | --- | --- | --- |
| <img src="http://sorting.valemak.com/wp-content/uploads/2013/12/sort_bucket.gif" width="300" height="whatever"> | <img src="http://sorting.valemak.com/wp-content/uploads/2013/11/sort_merge.gif" width="300" height="whatever"> | <img src="http://sorting.valemak.com/wp-content/uploads/2013/12/sort_radix_lsd.gif" width="300" height="whatever"> | <img src="http://sorting.valemak.com/wp-content/uploads/2013/11/sort_selection.gif" width="300" height="whatever"> |
