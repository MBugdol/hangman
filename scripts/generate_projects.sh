cd ..
echo ---Creating Visual Studio 2022 project files---
./vendor/bin/premake5 vs2022
echo ---Creating Makefiles---
./vendor/bin/premake5 gmake2
echo ---Generation finished---
read -n 1 -s -r -p "Press any key to continue..."
echo
cd scripts