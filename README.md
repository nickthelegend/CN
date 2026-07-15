# CN — Computer Networks Lab

> A collection of classic Computer Networks lab programs written in C/C++.

## Overview

This repository holds solutions to common **Computer Networks** laboratory
exercises — the kind assigned in undergraduate CS/IT courses. Each program is a
small, self-contained console application that demonstrates one core networking
concept, from error detection and framing to routing and flow control. It's meant
as a study/reference collection, not a production library.

## Programs

| File | Concept |
| --- | --- |
| `crc.cpp` | Cyclic Redundancy Check (CRC) error detection via binary division |
| `framing.cpp` | Framing — character-count and character-stuffing |
| `encrypt.cpp` | Caesar cipher (additive) encryption and decryption |
| `encrypt1.cpp` | Caesar cipher with alphabet wrap-around (case-preserving) |
| `gobackn.cpp` | Go-Back-N ARQ sliding-window protocol simulation |
| `leaky.cpp` | Leaky-bucket algorithm for traffic shaping |
| `sorting.cpp` | Bubble sort of frame sequence numbers (frame reordering) |
| `broadcast.cpp` | Network broadcast using BFS over an adjacency matrix |
| `broadcast1.cpp` | Broadcast (BFS), STL-based version |
| `dijkstra.cpp` | Dijkstra's shortest path (link-state routing) |
| `dijkstra1.cpp` | Dijkstra's shortest path using an STL priority queue |
| `dvr.cpp` | Distance Vector Routing with a next-hop table |
| `dvr1.cpp` | Additional routing/broadcast exercise |

## Tech Stack

- **Language:** C / C++ (standard library only — `stdio.h`, `string.h`, and
  `<bits/stdc++.h>` in the STL variants)
- **Build:** any standard C++ compiler (`g++`, `clang++`)
- No external dependencies or build system.

## Getting Started

Each file is standalone. Compile and run whichever program you want:

```bash
# Compile a single program
g++ crc.cpp -o crc

# Run it (programs are interactive and read input from stdin)
./crc
```

Most programs prompt for their input (matrices, frame counts, text, etc.)
directly in the terminal.

## Project Structure

```
CN/
├── broadcast.cpp     # BFS broadcast
├── broadcast1.cpp    # BFS broadcast (STL)
├── crc.cpp           # CRC error detection
├── dijkstra.cpp      # Dijkstra shortest path
├── dijkstra1.cpp     # Dijkstra (priority queue)
├── dvr.cpp           # Distance vector routing
├── dvr1.cpp          # Routing/broadcast exercise
├── encrypt.cpp       # Caesar cipher
├── encrypt1.cpp      # Caesar cipher (wrap-around)
├── framing.cpp       # Character count & stuffing
├── gobackn.cpp       # Go-Back-N ARQ
├── leaky.cpp         # Leaky bucket
└── sorting.cpp       # Frame sequence sort
```

---

Built by [nickthelegend](https://github.com/nickthelegend) · [nickthelegend.tech](https://nickthelegend.tech)
