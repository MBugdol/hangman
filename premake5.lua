workspace "hangman"
    architecture "x64"

    configurations
    {
        "debug",
        "release"
    }

outputdir = "%{cfg.system}-%{cfg.buildcfg}-%{cfg.architecture}"

project "hangman"
    location "hangman"
    kind "ConsoleApp"
    language "C++"

    targetdir ("bin/" ..outputdir)
    objdir("obj/" ..outputdir)

    pchheader "hangmanpch.h"
    pchsource "%{prj.name}/src/hangmanpch.cpp"

    files {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }
    includedirs {
        "%{prj.name}/src"
    }

    filter "configurations:debug"
        cppdialect "C++17"
        optimize "off"
    filter "configurations:release"
        cppdialect "C++17"
        optimize "on"