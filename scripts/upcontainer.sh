#!/bin/bash

docker compose build
# Todo: add a name to the container
# Todo: add a network(test, prod) to the container
docker compose up -d
