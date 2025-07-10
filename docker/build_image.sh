# Build Docker image for ph_sys
# Name you give your docker image (can be anything): ph_sys:latest

docker build \
    --no-cache \
    -t ph_sys:latest \
    -f ./Dockerfile \
    ..