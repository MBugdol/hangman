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

    includedirs {
        "%{prj.name}/src"
    }
    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    filter "configurations:debug"
        cppdialect "C++17"
        optimize "off"
    filter "configurations:release"
        cppdialect "C++17"
        optimize "on"