import os, strutils 

proc main() =
  let args = commandLineParams()
  
  if args.len == 0:
    echo "No source file is provided."
    echo "Usage: gaya main.gaya"
    return
  
  let filePath = args[0]
  
  if not fileExists(filePath):
    echo "Error: File does not exist."
  elif not filePath.endsWith(".gaya"):
    echo "Error: File must have a .gaya extension."
  else:
    echo "Processing file: ", filePath



when isMainModule:
  main()
