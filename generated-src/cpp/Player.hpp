// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from twenty_forty_eight.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <vector>

namespace twentyfortyeight { namespace cpp {

enum class Move;

class Player {
public:
    virtual ~Player() {}

    static std::shared_ptr<Player> Create();

    virtual void NewGame() = 0;

    virtual int64_t Score() = 0;

    virtual bool HasWon() = 0;

    virtual std::vector<int32_t> GameState() = 0;

    virtual bool GameOver() = 0;

    virtual void Swipe(Move move) = 0;
};

} }  // namespace twentyfortyeight::cpp
