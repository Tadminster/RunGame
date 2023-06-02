﻿#pragma once
class Main : public Scene
{
private:
	/*ObImage* bg;
	ObImage* bg_1;
	ObImage* bg_2;
	ObImage* bg_3;
	ObImage* bg_4;*/
	class Map*		map;
	class Player*	player;

	bool			debug = true;

public:
	Main();
	~Main();
	virtual void Init() override;
	virtual void Release() override; //해제
	virtual void Update() override;
	virtual void LateUpdate() override;//갱신
	virtual void Render() override;
	virtual void ResizeScreen() override;
};
