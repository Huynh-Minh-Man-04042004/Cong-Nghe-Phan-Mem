import torch, numpy

print("Welcome to the MyClip project")

device = "cuda" if torch.cuda.is_available() else "cpu"

print(device)