FROM ghcr.io/userver-framework/base:latest

WORKDIR /app

COPY . .

RUN mkdir build && cd build && cmake .. && make -j

CMD ["./build/auth_service"]
