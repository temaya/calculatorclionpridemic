# Use an Alpine-based image as the base
FROM alpine:latest

# Install the build tools and libraries required by your application
RUN apk add --no-cache g++ make cmake gtest-dev

# Copy the source code into the image
COPY . /main    
WORKDIR /main

# Run CMake to generate the build files
RUN cmake .

# Build the application
RUN make

# Specify the command to run the application
# CMD ["./main/build"]

