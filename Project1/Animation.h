#pragma once
class Animation
{
private:

	//分割画像
	int* images;
	//開始フレーム
	int startFrame;
	//再生フレーム数
	int frameCount;
	//再生速度
	int spead;
	//再生開始時間
	int startTime;
public:
	//===================================
	//コンストラクタ
	//===================================
	Animation();
	//画像設定
	void SetImages(int* img);
	void Play(int startFrame, int frameCount, int speed);
	//現在の画像取得
	int GetImage(int currentTime);
};

