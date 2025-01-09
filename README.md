# Cub3D

Welcome to **Cub3D**, a project from the [42 School](https://www.42.fr/) common core. This project is inspired by the classic **Wolfenstein 3D** game and involves building a simple first-person perspective game engine using raycasting.

## About

**Cub3D** is a group project that challenges students to develop a 3D game using the **MinilibX** library. It includes key features of a game engine, such as rendering walls, handling textures, and player movement. The project uses the **raycasting** technique to simulate 3D environments in a 2D plane.

This implementation includes all the mandatory and bonus features, except for the minimap, which resulted in a final score of **120/125**. The project was a collaborative effort.

## Features

### Mandatory
- 3D rendering using **raycasting**.
- Handling walls, textures, and different types of floors/ceilings.
- Player movement and collision detection.
- Parsing and validating `.cub` configuration files.
- Handling errors (invalid maps, missing assets, etc.).

### Bonus
- Adjustable field of view (FOV).
- Smooth player rotation and movement.
- Additional texture effects (e.g., shadows, lighting).
- Implemented functional doors that open and close interactively.

### Missing
- A **minimap**, which was not implemented for this version.

## Usage

The game requires a valid `.cub` file to run. Example:
```bash
./cub3D maps/level1.cub
```

To create your own map, ensure the file meets the following requirements:
- **Walls** must be represented by `1`.
- **Empty spaces** by `0`.
- **Player start positions** (`N`, `S`, `E`, `W`).
- Valid paths to texture files for walls and ceiling/floor colors.

### Example `.cub` Map
```
1111111111
1000000001
100N000001
1000000001
1111111111
```

## Controls

- **W, A, S, D**: Move the player forward, left, backward, and right.
- **Left/Right Arrow**: Rotate the player view.
- **Esc**: Exit the game.

## Project Requirements

- **Mandatory**:
  - Implementation of raycasting for 3D rendering.
  - Parsing `.cub` configuration files.
  - Use of **MinilibX** for graphical rendering.
  - Handle edge cases, including invalid maps and missing files.

- **Bonus**:
  - Implementation of advanced features such as animations, doors, and smooth movement.

### Missing Feature
- The **minimap** feature was not implemented, which resulted in a score of **120/125**.

## Credits

This project was developed by:

- **Delfina Parada**: ([dparada](https://profile.intra.42.fr/users/dparada))
- **Tobias Anselmo** ([tanselmo](https://profile.intra.42.fr/users/tanselmo))
