# Use the latest Ubuntu image
FROM ubuntu:latest

# Set environment variables to avoid interactive prompts during build
ENV DEBIAN_FRONTEND=noninteractive

# Create a user for the CTF challenge
RUN useradd -m ctf && \
    apt-get update && \
    apt-get install -y gcc make && \
    apt-get clean

# Set the working directory
WORKDIR /home/ctf

# Copy the source code and Makefile into the container
COPY segfault.c Makefile ./

# Compile the program
RUN make

# Switch to the ctf user and set the entrypoint
USER ctf
ENTRYPOINT ["/home/ctf/segfault"]
