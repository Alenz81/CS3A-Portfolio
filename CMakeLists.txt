cmake_minimum_required(VERSION 3.23)
project(Portfolio)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -static")

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        AnimatedSprites.cpp
        AnimatedSprites.h
        Application.cpp
        Application.h
        Background.cpp
        Background.h
        BallRun.cpp
        BallRun.h
        Balls.cpp
        Balls.h
        Binasc.cpp
        Binasc.h
        BoxWithText.cpp
        BoxWithText.h
        Card.cpp
        Card.h
        Card1.cpp
        Card1.h
        CardHand.cpp
        CardHand.h
        CardHandScorer.cpp
        CardHandScorer.h
        CardPoker.cpp
        CardPoker.h
        CardRun.cpp
        CardRun.h
        Component.h
        ComponentDrums.h
        ComponentOne.h
        Deck.cpp
        Deck.h
        DifficultySelector.cpp
        DifficultySelector.h
        Engine.cpp
        Engine.h
        EventHandable.h
        EventHandlable.h
        Font.cpp
        Font.h
        Fret.cpp
        Fret.h
        FretBoard.cpp
        FretBoard.h
        GreenBallRun.cpp
        GreenBallRun.h
        HighWay.cpp
        HighWay.h
        Images.cpp
        Images.h
        Images1.cpp
        Images1.h
        main.cpp
        Menu.cpp
        Menu.h
        MidiEvent.cpp
        MidiEvent.h
        MidiEventList.cpp
        MidiEventList.h
        MidiFile.cpp
        MidiFile.h
        MidiMessage.cpp
        MidiMessage.h
        MouseEvents.cpp
        MouseEvents.h
        Note.cpp
        Note.h
        notes.png
        Options.cpp
        Options.h
        PauseMenu.cpp
        PauseMenu.h
        phaser.png
        PhaserRun.cpp
        PhaserRun.h
        PokerAnalysis.cpp
        PokerAnalysis.h
        PokerAnalysisRun.cpp
        PokerAnalysisRun.h
        PokerScore.cpp
        PokerScore.h
        PortfolioSelector.cpp
        PortfolioSelector.h
        Position.cpp
        Position.h
        Rank.cpp
        Rank.h
        Ranks.cpp
        Ranks.h
        Ranks1.h
        Ranks2.h
        RowOfCards.cpp
        RowOfCards.h
        RowOfCardsPoker.cpp
        RowOfCardsPoker.h
        Runnable.h
        SFMLDrumHeroRun.cpp
        SFMLDrumHeroRun.h
        SongAudio.cpp
        SongAudio.h
        States.cpp
        States.h
        Suit.cpp
        Suit.h
        Suits.cpp
        Suits.h
        Suits1.h
        Suits2.h
        Tests.cpp
        Tests.h
        TwoDVector.cpp
        TwoDVector.h
        TwoDVectorRun.cpp
        TwoDVectorRun.h
        Updatable.h
        UpdatableDrums.h)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(Portfolio WIN32 ${SOURCE_FILES})
else ()
    add_executable(Portfolio ${SOURCE_FILES})
endif ()

set(SFML_ROOT C:/SFML-2.6.0-windows-gcc-13.1.0-mingw-32-bit/SFML-2.6.0)
set(SFML_STATIC_LIBRARIES TRUE)

set(CMAKE_MODULE_PATH C:/Users/super/CLionProjects/cmake_modules)
set(SFML_DIR C:/SFML/SFML-2.6.0/lib/cmake/SFML)
find_package(SFML REQUIRED COMPONENTS audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Portfolio ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()

# cmake_minimum_required(VERSION 3.23)
# project (Portfolio)

# set(CMAKE_CXX_STANDARD 14)

# add_executable(Portfolio main.cpp)