// 강의 19
/*
c++ 클래스는 직접 폴더로 찾아가서 지우면 된다.
지우기 전에 어디서 사용되고 있는지 파악하기
*/

//강의 20
/*
Cast라는 함수를 통해 형변환을 할 수 있다.

예시)

void AMyActor::NotifyActorOverlap(AActor* OtherActor)
{
	AProjectile* Projectil = Cast<AProjectile>(OtherActor);
	if (Projectil != nullptr)
	{
		//Damage Process
	)
)

블루프린트에서 또한 가능하다.
*/

//강의 21
/*

별도의 cpp파일에서 확인

*/

//강의 22
/*
예시)
UENUM(BlueprintType)
enum class EMyColor : uint8
{
	Red UMETA(DisplayName = "Red"),
	Green UMETA(DisplayName = "Green"),
	Blue UMETA(DisplayName = "Blue")
}

만약 한 열거형이 모든 곳에서 쓰이길 바란다면 그것들을 모아놓은 헤더를 새로 만들자
*/