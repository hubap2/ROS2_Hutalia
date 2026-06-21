# Variables
WORKSPACE = ros2_ws
# Par défaut, si on ne précise rien, c'est l'epreuve1
NUM ?= 1
LAUNCH_FILE = epreuve$(NUM).launch.py

.PHONY: build launch clean

# 1. Compiler uniquement
build:
	cd $(WORKSPACE) && colcon build --symlink-install

# 2. Compiler, sourcer et lancer l'épreuve choisie
launch:
	cd $(WORKSPACE) && colcon build --symlink-install && . install/setup.bash && ros2 launch droneload $(LAUNCH_FILE)

# 3. Nettoyer le workspace
clean:
	cd $(WORKSPACE) && rm -rf build install log