# Indique à Make que s'il est lancé tout seul, il doit exécuter "launch" (l'épreuve complète)
.DEFAULT_GOAL := launch

# Variables
WORKSPACE = ros2_ws
NUM ?= 1
LAUNCH_FILE = epreuve$(NUM).launch.py

.PHONY: build launch clean aruco camera led pince reconnaissance robot

# --- COMMANDES GÉNÉRALES ---

# Compiler UNIQUEMENT le package droneload
build:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload"

# Compiler, sourcer et lancer l'épreuve complète via son fichier Launch
launch:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 launch droneload $(LAUNCH_FILE)"

# Nettoyer le workspace
clean:
	bash -c "cd $(WORKSPACE) && rm -rf build install log"


# --- RÈGLES POUR CHAQUE NŒUD (ros2 run) ---

aruco:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload aruco_node"

aruco_topic:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic echo /aruco/markers"

camera:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload camera_node"

camera_topic:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic echo /camera/image_raw"

led:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload led_node"

pince:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload pince1_node"

pincecommand_topic:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic echo /reconnaissance/pince_command"

reconnaissance:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload reconnaissance_node"

reco_topic:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic echo /robot/reco_image"

robot:
	bash -c "cd $(WORKSPACE) && colcon build --symlink-install --packages-select droneload && source install/setup.bash && ros2 run droneload robot_node"

imagereconnu_topic:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic echo /reconnaissance/image_reconnu"

# --- COMMANDES DE SIMULATION / TEST (PUBLISH) ---

# Variable par défaut pour l'objet à chercher (si on ne précise rien)
OBJ ?= "Image 1"

# 1. Envoyer la cible UNE SEULE FOIS (-1)
pub_image_once:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic pub -1 /robot/reco_image std_msgs/msg/String \"{data: '$(OBJ)'}\""

# 2. Envoyer la cible EN PERMANENCE (-r 1 -> 1 fois par seconde)
pub_image_loop:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic pub -r 1 /robot/reco_image std_msgs/msg/String \"{data: '$(OBJ)'}\""

# Variable par défaut pour la commande de la pince
CMD ?= ouvert

# Forcer l'envoi d'un ordre à la pince une seule fois
command_pince:
	bash -c "source $(WORKSPACE)/install/setup.bash && ros2 topic pub -1 /reconnaissance/pince_command std_msgs/msg/String \"{data: '$(CMD)'}\""
