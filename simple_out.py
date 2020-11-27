import Jetson.GPIO as GPIO
import time

output_pin = 12


def main():


GPIO.setmode(GPIO.BOARD)
GPIO.setup(output_pin, GPIO.OUT, initial=GPIO.HIGH)
print("Starting demo now! Press CTRL+C to exit")
curr_value = GPIO.HIGH
try:
    while True:
        time.sleep(1)
        print("Outputting {} to pin {}".format(curr_value, output_pin))
        GPIO.output(output_pin, curr_value)
        curr_value = 1-curr_value  # Toggle the output every seconds


finally:
    GPIO.cleanup()

if __name__ == '__main__':
    main()
