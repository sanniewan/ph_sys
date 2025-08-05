# This shell script opens a new shell inside the currently running container.
# Lets you interact with the same filesystem, same ROS 2 environment, same processes.
# Used for calling ROS 2 services, running scripts, checking logs, etc.
docker exec -it ph_sys bash