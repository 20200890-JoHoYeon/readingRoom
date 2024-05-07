# readingRoom Update

From a beginner's point of view, the API is very interesting :flushed:

# API :exclamation:

<details>
<summary><b>Login API</b></summary>
 
1. kakao-login API = Complete ☑️ <br />
@react-native-seoul/kakao-login
reference data: https://www.npmjs.com/package/@react-native-seoul/kakao-login/v/3.0.0

## Development Story :question:

As a competitive project preparation task currently underway in the "Mars" club, we recorded various processes that occurred during API learning. 👍 

At that time, there were many difficulties, such as encountering various errors and spending a long time with minor errors, but it was a good experience to practice them and get closer. 👍

## Debugging Story :exclamation:

 <b>#login err [Error: invalid android_key_hash or ios_bundle_id or web_site_url]</b> 

    해시키 설정이 올바른지 확인해보자.
    필자의 경우 기본적으로 지원해주는 해시키인 Xo8WBi6jzSxKDVR4drqm84yr9iU= 를 적용하여 해당 오류를 해결하였다.
 
 <b>#Error loading white infinite when running Kakao login window emulator</b> 

    에뮬레이터의 사양 문제일 수 있다.
    사양을 변경하거나 사용중인 스마트폰을 연결하여 구동하면 흰색창 무한로딩 오류를 해결할 수 있다.
    필자의 경우는 후자의 방법을 택했다.

 <b>#keytool : 'keytool' 용어가 cmdlet, 함수 J 스크립트 파일 또는 실행할 수 가 포함된 경우 경로가 올바른지 검증한 다음 다시 시도하십시오. 위치 줄 :1 문자 :1 + keytool -exportcert -alias androiddebugkey -keystore ~/.android/app/d ··· + sesses + CategoryInfo : ObjectNotFound: (keytool:String) [], Com mandNotFoundException + FullyQualifiedErrorId : CommandNotFoundException</b> 

    cmd 를 통해 keytool 사용 시 필요로 하는 요소들(Java-JDK, OpenSSL..)의 버전 확인(-version)을 통해 세팅에 문제가 없는지 확인해보자.
    버전 확인을 통해 온전한 설치여부를 확인했다면 환경변수가 제대로 적용되어 있는지 체크해보자.
    필자의 경우는 JDK 환경변수 문제로 오류가 발생했었고 해당 부분을 수정하여 해결하였다.
 
</details>
