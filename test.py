import os

RESULTS_PREFIX = '/home/xs/UAV/Results'

def create_subdirectory(directory):
    try:
        existing_numbers = [int(name[3:]) for name in os.listdir(directory) if name.startswith("run")]

        max_number = max(existing_numbers) if existing_numbers else -1

        new_directory = os.path.join(directory, "run{}".format(max_number), "labels")

        if not os.path.exists(new_directory):
            os.mkdir(new_directory)

        new_directory = os.path.join(RESULTS_PREFIX, "run{}".format(max_number))

        return new_directory
    
    except Exception as e:
        print("Error:", e)
        return None

# 测试函数
new_dir = create_subdirectory(RESULTS_PREFIX)
print(new_dir)
