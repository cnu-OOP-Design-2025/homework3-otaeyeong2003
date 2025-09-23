[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/VetqM53u)
# 📘 Homework 3: 학생 정보 정렬 프로그램

## 📌 과제 개요
이번 과제에서는 `StudentStruct` 구조체 배열을 다양한 기준으로 정렬하는 프로그램을 작성합니다.  
정렬 기준은 다음과 같습니다:

- 학번 (ID)
- 이름 (Name)
- 중간고사 성적 (Midterm)
- 기말고사 성적 (Final)
- 총점 (Midterm + Final)

정렬은 두 가지 방식으로 구현합니다:

1. **Functor 기반 정렬** (`doTest1`)
2. **Lambda 기반 정렬** (`doTest2`)

---

### 🎯 학습 목표

- C++에서 `Functor`와 `lambda`의 사용방법을 익힌다. 
- STL 함수 사용 방법을 익힌다. 


## 🧩 구현 파일
- `main.cpp`: 과제의 메인 로직이 포함된 파일
- `homework3.h`: `StudentStruct` 정의 및 `fillStudentRecord()` 함수 선언
- `homework3.cpp`: fillStudentRecord를 위한 기본 함수 

---

## ✅ TODO 항목
아래 항목은 **필수 구현 과제**입니다. 점수에 반영됩니다.

### Functor 정의 (`doTest1` 관련)
- `SortByName`: 이름 기준 오름차순 정렬
- `SortByMidterm`: 중간고사 성적 기준 내림차순 정렬
- `SortByFinal`: 기말고사 성적 기준 내림차순 정렬
- `SortByTotal`: 총점 기준 내림차순 정렬

### Lambda 정의 (`doTest2` 관련)
- 이름 기준 오름차순 정렬
- 중간고사 성적 기준 내림차순 정렬
- 기말고사 성적 기준 내림차순 정렬
- 총점 기준 내림차순 정렬

---

## 🧠 FIXME 항목 (보너스 문제)
- `fillStudentRecord()` 함수의 `numOfStudent` 파라미터를 **reference 타입으로 변경**해보세요.
- `students` 파라미터는 왜 reference로 전달할 수 없는지 **생각해보고 주석으로 설명**해보세요.

> ⚠️ FIXME 항목은 **점수에 반영되지 않지만**, 도전해보면 포인터와 참조 개념을 더 깊이 이해할 수 있습니다.

---


## 🧪 테스트 방법
다 구현한 후, 아래 명령어를 통해 테스트를 실행하세요:

### Windows 사용자
```bash
.\test3.bat
```

### MacOS/Linux 사용자
```bash
/bin/bash test3.sh
```
