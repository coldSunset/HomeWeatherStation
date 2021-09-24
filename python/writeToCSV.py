import csv

header ['date', 'time', 'sensorID', 'temperature', 'humidty']
data = ['24/09/210', '17:00', '1', '19', '49']

with open('data.csv', 'w', encoding='UTF8') as f:
    writer = csv.writer(f)

    writer.writerow(header)

    writer.writerow(data)