#include <iostream>
using namespace std;
/*
 ~~~~1강 (9:04)
-언리얼은 c++를 직접 타이핑하는 방법과 블루프린트 클래스를 이용하여 코딩할 수 있다.
-직접 타이핑과 블루프린트를 적절히 섞어서 개발하는게 언리얼에서 이상적인 방법이다.
-블루프린트는 c++ 로 이루어져 있다.

-[파일 -> 새로운 c++클래스]를 통해 쉽사리 클래스를 생성할 수 있다.
-Actor클래스는 월드에 배치할 수 있는 오브젝트이다.

-BeginPlay() 함수는 Actor가 이미 배치되어 있는 월드가 시작되거나, Actor가 새로 스폰될 때 딱 한번 호출된다.
-Tick(float DeltaTime)함수는 매 프레임 호출되는 함수이다. 굳이 필요하지않다면 제거해서 성능을 높일 수 있다.

-UE_LOG()라는 함수를 통해 언리얼에디터 안에 있는 로그에 메세지를 출력할 수 있다. 

~~~~~ 2강 (13:56)
-변수를 선언할때 UPROPERTY() 라는 매크로를 앞에 붙여준다.
-이 매크로는 porperty가 언리얼 엔진 및 에디터에 이러한 프로퍼티가 있음을 알린다.
-또한 연결되었을 때 어떻게 작동할지를 지정하기 위해 존재한다.

-short,int,long은 플랫폼마다 길이가 달라질 수도 있어서 int8, int16, int32, int64를 쓰자
-양수만 할 경우 uint8, uint16, uint32, uint64
-꼭 변수가 어떤용도로 사용될 지 생각하고 범위 정하기.

-float..double..

-일반 c++과 유니티의 c#과 달리 언리얼에서는 여러가지 클래스로 문자열을 제공한다.
-Fstring (가장 기본적인 타입) : ""가 아닌 TEXT()라는 매크로를 사용
-FText : 현지화 텍스트를 위해 사용
-FName : 자주사용되는 문자열을 식별자로 지정. 메모리와 cpu절약가능
-TCHAR : 플랫폼마다 문자열이 다를 수 있는 점을 해결

-public...protected...private...

-public으로 그냥 변수를 지정하면 에디터내의 디테일패널에서 공개되지않음 (오른쪽패널)
-UPROPERTY()라는 매크로를 붙여줘서 공개되게 할 수 있다.
-하지만 그것도 지정자를 넣어줘야 공개될 수 있다.
-(https://docs.unrealengine.com/4.26/ko/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/)

-visual에서 빌드후 에디터에서 컴파일 꼭 하기

-생성자에서 초기화 하기...

~~~~~ 3강 (15:03)
-함수...
-함수선언...

-PostInitProperties : 오브젝트의 property가 초기화될 때 호출되는 함수
-PostEditChangeProperty : 프로퍼티가 수정될 때 호출되는 함수

-생성된 Actor는 기본적으로 부모클래스인 AActor의 자식클래스이다.
-따라서 위에 두함수에 virtual, override 붙여주기

-Super 키워드는 클래스가 상속받은 부모 클래스에 있는 원본 프로퍼티나 함수를 가져오는데 사용된다.
-만약 쓰지 않으면 부모클래스의 함수가 실행되지 않을 수도 있다.

-UFUNCTION()이라는 매크로를 사용하면 함수를 블루프린트에 사용할 수 있게 한다.
-UFUNCTION 지정자 ->
-(https://docs.unrealengine.com/4.27/ko/ProgrammingAndScripting/GameplayArchitecture/Functions/Specifiers/)

-블루프린트는 어찌저찌만든 함수들을 보다 쉽게 연결 할 수 있게 해준다! 노드형식으로

-역으로 블루프린트에서 만든 기능을 C++코드에 쓸 수 있는 방법도 있다.
-UFUNTION에서 BlueprintImplementalbeEvent 라는 지정자를 쓰면 일단 함수의 본체를 만들필요가 없다.
-이 함수의 본체는 블루프린트에서 만들 수 있다.

-BlueprintNativeEvent 지정자는 위와 비슷하나 블루프린트에서 함수내용을 만들지 않았을 경우에도
-동작할 수 있는 기본 동작을 정의할 수 있다.

-동시에 동작하게 하는 방법도 있다.
-해당 이벤트의 [부모 함수로의 호출 추가]를 선택한 다음 노드를 연결하면 순서에따라 값이 나온다.
 */

int main()
{
    return 0;
}