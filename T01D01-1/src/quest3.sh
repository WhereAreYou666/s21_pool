﻿mv door_management_fi door_management_files
mkdir door_configuration 
mkdir door_map 
mkdir door_logs
mv door_map_1.1 door_map
mv *.conf door_configuration/
mv *.log door_logs/
chmod +x ai_door_control.sh
bash ai_door_management_module.sh
