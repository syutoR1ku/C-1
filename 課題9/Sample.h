#pragma once
class Sample
{
	//メンバ関数
public:
	Sample(); //コンストラクタ
	~Sample(); //デストラクタ
	void menberFunc();
};

//予想
//プログラム開始
//関数が呼び出されました
//コンストラクタが呼び出されました
//クラスのメンバ関数が呼び出されました
//デストラクタが呼び出されました
//プログラム終了

//結果
//プログラム開始
//関数が呼び出されました
//コンストラクタが呼び出されました
//クラスのメンバ関数が呼び出されました
//デストラクタが呼び出されました
//プログラム終了