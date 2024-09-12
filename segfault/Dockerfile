FROM ubuntu:latest

# Install necessary packages
RUN useradd -m ctf && \
    apt-get update && \
    apt-get install -y gcc

WORKDIR /home/ctf

# Copy source code and compilation script
COPY . .

# Set permissions and compile
RUN chown -R root:root /home/ctf && \
    chmod -R 555 /home/ctf && \
    ./compile.sh

USER ctf

# Run the compiled binary
CMD ["./segfault"]
EXPOSE 1337
