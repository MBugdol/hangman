workspace "hangman"
    architecture "x64"

    configurations
    {
        "Debug",
        "Release"
    }

project "hangman"
    location "hangman"
    kind "ConsoleApp"
    language "C++"

    targetdir ("bin")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }  
        