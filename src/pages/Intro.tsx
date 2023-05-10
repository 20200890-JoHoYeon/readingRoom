import {Image, Pressable, StyleSheet, Text, View} from 'react-native';
import React, {useState} from 'react';
import {
  login,
  logout,
  getProfile as getKakaoProfile,
  unlink,
} from '@react-native-seoul/kakao-login';
import ResultView from './IntroView';

const Intro = () => {
  const [result, setResult] = useState<string>('');

  const signInWithKakao = async (): Promise<void> => {
    try {
      const token = await login();
      setResult(JSON.stringify(token));
    } catch (err) {
      console.error('login err', err);
    }
  };

  const signOutWithKakao = async (): Promise<void> => {
    try {
      const message = await logout();

      setResult(message);
    } catch (err) {
      console.error('signOut error', err);
    }
  };

  const getProfile = async (): Promise<void> => {
    try {
      const profile = await getKakaoProfile();

      setResult(JSON.stringify(profile));
    } catch (err) {
      console.error('signOut error', err);
    }
  };

  const unlinkKakao = async (): Promise<void> => {
    try {
      const message = await unlink();

      setResult(message);
    } catch (err) {
      console.error('signOut error', err);
    }
  };

  return (
    <View style={styles.container}>
      <ResultView result={result} />
      <View style={styles.imgContainer}>
        <Image
          source={require('../assets/2111466w.png')}
          style={styles.mainLogoImg}></Image>
      </View>
      <Pressable
        style={styles.button}
        onPress={() => {
          signInWithKakao();
        }}>
        <Text style={styles.text}>카카오 로그인</Text>
      </Pressable>
      <Pressable style={styles.button} onPress={() => getProfile()}>
        <Text style={styles.text}>프로필 조회</Text>
      </Pressable>
      <Pressable style={styles.button} onPress={() => unlinkKakao()}>
        <Text style={styles.text}>링크 해제</Text>
      </Pressable>
      <Pressable style={styles.button} onPress={() => signOutWithKakao()}>
        <Text style={styles.text}>카카오 로그아웃</Text>
      </Pressable>
    </View>
  );
};

export default Intro;

const styles = StyleSheet.create({
  container: {
    height: '100%',
    justifyContent: 'flex-end',
    alignItems: 'center',
    paddingBottom: 50,
    backgroundColor: '#E3AB9A',
  },
  imgContainer: {
    width: 200,
    height: 140,
    borderRadius: 100,
    backgroundColor: '#AD5F478B',
    borderColor: '#7B3911',
    justifyContent: 'center',
    alignItems: 'center',
    marginBottom: 40,
    borderLeftWidth: 55,
  },
  mainLogoImg: {
    borderRadius: 20,
    width: 150,
    height: 140,
  },
  button: {
    backgroundColor: '#AD5F478B',
    borderWidth: 4,
    borderRadius: 10,
    borderColor: '#7B3911',
    width: 350,
    height: 55,
    justifyContent: 'center',
    marginTop: 15,
  },
  text: {
    fontSize: 17,
    color: '#7B3911',
    fontWeight: 'bold',
    textAlign: 'center',
  },
});
