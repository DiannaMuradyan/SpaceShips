# 🚀 SpaceShips

A 2D space-shooter game written in **C++ with Qt**.  
Pilot your spaceship, shoot enemies, collect points, and survive as long as you can!

---

## 🎮 Features

- Arcade-style space shooter gameplay  
- Player movement + shooting mechanics  
- Enemy spawning + collision detection  
- Score + health tracking  
- Qt UI interface  
- Sprite graphics included (ships, bullets, background)

---

## 🧠 Tech Stack

| Component | Technology |
|----------|------------|
| Language | C++ |
| GUI & Graphics | Qt Framework |
| Assets | PNG/JPG sprites |
| Build | Qt Creator / qmake |

---

## 📂 Project Structure

```
.
├── main.cpp
├── game.h / game.cpp          // Game logic
├── myrect.h / myrect.cpp      // Player ship (custom rect class)
├── enemy.h / enemy.cpp        // Enemy logic
├── bullet.h / bullet.cpp      // Bullet logic
├── score.h / score.cpp        // Scoring system
├── health.h / health.cpp      // Health system
├── sprites/                   // Images (spaceship, enemy, background, etc.)
└── mainwindow.ui             // Qt UI file
```

---

## ▶️ How to Run

### Prerequisites
- Install **Qt** (recommended Qt Creator IDE)

### Build & Run
1. Clone the repo  
   ```bash
   git clone https://github.com/DiannaMuradyan/SpaceShips.git
   cd SpaceShips
   ```
2. Open the project in **Qt Creator**
3. Build (`Ctrl+B`)
4. Run (`Ctrl+R`)

---

## 🎯 Gameplay Instructions

| Action | Control |
|--------|---------|
| Move ship | Arrow keys |
| Shoot | Spacebar |

- Destroy enemies to gain points  
- Losing all health ends the game  
- Try to beat your best score!

---

## 🏗️ Future Improvements

- Add enemy types + boss battles  
- Power-ups (shields, triple-shot, etc.)
- Sound effects & music
- Menu + game over screen
- Save high scores
- Use smart pointers & modern C++ cleanup

---

## 🤝 Contributing

Pull requests and ideas are welcome!

---

## 📜 License

No license file currently — feel free to fork for learning and experimenting.  
If you intend to distribute, consider adding a license.

---

Enjoy the game and happy coding! ⭐

