#pragma once
#include <cstdint>

namespace NWNXLib::API::Constants {

namespace Animation
{
    enum TYPE
    {
        Pause                              = 0,
        Ready                              = 1,
        Walking                            = 2,
        WalkingBackwards                   = 3,
        Running                            = 4,
        KnockdownFront                     = 5,
        DeadFront                          = 6,
        KnockdownButt                      = 7,
        DeadButt                           = 8,
        Attack                             = 9,
        Throw                              = 10,
        Dodge                              = 11,
        Parry                              = 12,
        Shield                             = 13,
        Damage                             = 14,
        Conjure1                           = 15,
        Conjure2                           = 16,
        Cast1                              = 17,
        Cast2                              = 18,
        Cast3                              = 19,
        Cast4                              = 20,
        Open                               = 21,
        Closed                             = 22,
        Spasm                              = 23,
        CombatStepFront                    = 24,
        CombatStepBack                     = 25,
        CombatStepLeft                     = 26,
        CombatStepRight                    = 27,
        Taunt                              = 28,
        OverlayGreeting                    = 29,
        OverlayListen                      = 30,
        Meditate                           = 32,
        Worship                            = 33,
        OverlaySalute                      = 34,
        Bow                                = 35,
        Sitting                            = 36,
        Steal                              = 37,
        OverlayTalkNormal                  = 38,
        OverlayTalkPleading                = 39,
        OverlayTalkForceful                = 40,
        OverlayTalkLaugh                   = 41,
        CombatStepDummy                    = 42,
        AttackDummy                        = 43,
        VictoryFighter                     = 44,
        VictoryMage                        = 45,
        VictoryThief                       = 46,
        SitCrossLegs                       = 47,
        LookFar                            = 48,
        CombatStepDummyFB                  = 49,
        Opened1                            = 50,
        Opened2                            = 51,
        Pause2                             = 52,
        HeadTurnLeft                       = 53,
        HeadTurnRight                      = 54,
        PauseScratchHead                   = 55,
        PauseBored                         = 56,
        PauseTired                         = 57,
        PauseDrunk                         = 58,
        GetLow                             = 59,
        GetMid                             = 60,
        Cast5                              = 61,
        Flown                              = 62,
        Arrived                            = 63,
        OverlayDrink                       = 70,
        OverlayRead                        = 71,
        Destroyed                          = 72,
        PlaceableActivated                 = 73,
        PlaceableDeactivated               = 74,
        PlaceableOpened                    = 75,
        PlaceableClosed                    = 76,
        DamageStab                         = 77,
        WalkingLeft                        = 78,
        WalkingRight                       = 79,
        TurnOnSpotRight                    = 80,
        TurnOnSpotLeft                     = 81,
        CombatTurnRight                    = 82,
        CombatTurnLeft                     = 83,
        WalkingForwardLeft                 = 84,
        WalkingForwardRight                = 85,
        RunningForwardLeft                 = 86,
        RunningForwardRight                = 87,
        DialogNoAnim                       = 88,
        FakeAttack                         = 89,
        FakeDodgeSide                      = 90,
        FakeDodgeDuck                      = 91,
        Whirlwind                          = 92,
        SpasmLooping                       = 93,
        Flown2                             = 94,
        Arrived2                           = 95,
        CastCreature                       = 96,
        Custom1                            = 97,
        Custom2                            = 98,
        DamageLeft                         = 99,
        DamageRight                        = 100,
        Custom3                            = 101,
        Custom4                            = 102,
        Custom5                            = 103,
        Custom6                            = 104,
        Custom7                            = 105,
        Custom8                            = 106,
        Custom9                            = 107,
        Custom10                           = 108,
        Custom11                           = 109,
        Custom12                           = 110,
        Custom13                           = 111,
        Custom14                           = 112,
        Custom15                           = 113,
        Custom16                           = 114,
        Custom17                           = 115,
        Custom18                           = 116,
        Custom19                           = 117,
        Custom20                           = 118,
        Mount1                             = 119,
        Dismount1                          = 120,

    };
    constexpr int32_t MIN   = 0;
    constexpr int32_t MAX   = 120;
    static_assert(MAX == Dismount1);

    constexpr const char* ToString(const unsigned value)
    {
        constexpr const char* TYPE_STRINGS[] =
        {
            "Pause",
            "Ready",
            "Walking ",
            "Walking  Backwards",
            "Running",
            "Knockdown Front",
            "Dead Front",
            "Knockdown Butt",
            "Dead Butt",
            "Attack",
            "Throw",
            "Dodge",
            "Parry",
            "Shield",
            "Damage",
            "Conjure 1",
            "Conjure 2",
            "Cast 1",
            "Cast 2",
            "Cast 3",
            "Cast 4",
            "Open",
            "Closed",
            "Spasm",
            "Combat Step Front",
            "Combat Step Back",
            "Combat Step Left",
            "Combat Step Right",
            "Taunt",
            "Overlay Greeting",
            "Overlay Listen",
            "Meditate",
            "Worship",
            "Overlay Salute",
            "Bow",
            "Sitting",
            "Steal",
            "Overlay Talk Normal",
            "Overlay Talk Pleading",
            "Overlay Talk Forceful",
            "Overlay Talk Laugh",
            "Combat Step Dummy",
            "Attack Dummy",
            "Victory Fighter",
            "Victory Mage",
            "Victory Thief",
            "Sit Cross Legs",
            "Look Far",
            "Combat Step DummyFB",
            "Opened 1",
            "Opened 2",
            "Pause 2",
            "Head Turn Left",
            "Head Turn Right",
            "Pause ScratchHead",
            "Pause Bored",
            "Pause Tired",
            "Pause Drunk",
            "Get Low",
            "Get Mid",
            "Cast 5",
            "Flown",
            "Arrived",
            "Overlay Drink",
            "Overlay Read",
            "Destroyed",
            "Placeable Activated",
            "Placeable Deactivated",
            "Placeable Opened",
            "Placeable Closed",
            "Damage Stab",
            "Walking Left",
            "Walking Right",
            "Turn On Spot Right",
            "Turn On Spot Left",
            "Combat Turn Right",
            "Combat Turn Left",
            "Walking Forward Left",
            "Walking Forward Right",
            "Running Forward Left",
            "Running Forward Right",
            "Dialog No Animation",
            "Fake Attack",
            "Fake Dodge Side",
            "Fake Dodge Duck",
            "Whirlwind",
            "Spasm Looping",
            "Flown 2",
            "Arrived 2",
            "Cast Creature",
            "Custom 1",
            "Custom 2",
            "Damage Left",
            "Damage Right",
            "Custom 3",
            "Custom 4",
            "Custom 5",
            "Custom 6",
            "Custom 7",
            "Custom 8",
            "Custom 9",
            "Custom 10",
            "Custom 11",
            "Custom 12",
            "Custom 13",
            "Custom 14",
            "Custom 15",
            "Custom 16",
            "Custom 17",
            "Custom 18",
            "Custom 19",
            "Custom 20",
            "Mount 1",
            "Dismount 1",
        };

        return (value > MAX) ? "(invalid)" : TYPE_STRINGS[value];
    }
}


}
