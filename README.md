# ThirdPartyProjects


### Add a submodule
### git submodule add <repo-url> <path>

>   git submodule add https://github.com/p-ranav/tabulate.git libs/tabulate
>   git commit -m "Add Tabulate as submodule"
>   git push origin main

### Clone project with submodules correctly
### When you clone a repo containing submodules, the submodule directories will be empty unless initialized.

>   git clone git@github.com:AndreyTokmakov/ThirdPartyProjects.git
>   git submodule update --init
>   git submodule update --init --recursive

### Build project with submodules
>   cmake -DCMAKE_BUILD_TYPE=Release -B./build
>   cd build
>   make -j$(nproc)