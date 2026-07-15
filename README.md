# ConsoleMVC-choisang-0707

반도체 시료 생산주문관리 시스템 개인과제의 미션1(PoC) 중 "MVC 스켈레톤 코드" 항목.

Model / Controller / View 패키지 구조와 역할 분리를 검증하기 위한 최소 콘솔 애플리케이션이다.

## 구조

```
ConsoleMVC/
├── Model/
│   ├── SampleModel.h / .cpp   # 데이터 보관 (Sample 목록)
├── View/
│   ├── ConsoleView.h / .cpp   # 콘솔 입출력 담당
├── Controller/
│   ├── SampleController.h / .cpp  # 메뉴 흐름 제어, Model-View 연결
└── main.cpp                   # 진입점
```

- **Model**: 데이터(Sample)와 상태만 보유, 입출력에 관여하지 않는다.
- **View**: 콘솔 출력/입력만 담당, 비즈니스 로직을 갖지 않는다.
- **Controller**: 사용자 입력을 받아 Model을 조작하고 View에 결과 표시를 위임한다.

## 기능

- `[1] 시료 등록`: ID/이름/재고 입력 → Model에 추가
- `[2] 시료 목록 조회`: 등록된 시료 목록 출력
- `[0] 종료`

## 빌드/실행

Visual Studio에서 `ConsoleMVC.slnx`를 열어 빌드 및 실행한다 (C++20, Console Application).

## 참고

- 본 PoC는 [SampleOrderSystem (Project17)](../Project17) 본 프로젝트와 분리된 별도 저장소이며, 여기서 검증된 구조를 본 프로젝트의 MVC 구조 설계 기반으로 사용한다.
