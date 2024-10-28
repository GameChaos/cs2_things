
import glob
import os

# put this script in sdk/include
# put source2gen.hpp in sdk/include/source2sdk
# run this script at your own risk

with open("source2sdk_supermegaheader.h", 'w') as list_file:
	list_file.write("#include <string_view>\n")
	list_file.write("\n")
	for root, subdirs, files in os.walk("."):
		for filename in files:
			file_path = os.path.join(root, filename)
			if file_path.endswith(".hpp"):
				# delete all static_asserts from file
				lines = []
				with open(file_path, "r+") as header:
					lines = header.readlines()
					header.truncate(0)
					header.seek(0)
					for line in lines:
						if "static_assert(" not in line:
							header.write(line)
				
				file_path = file_path.replace("\\", "/").replace("./", "")
				print(file_path)
				
				list_file.write("#include \"" + file_path + "\"\n")
