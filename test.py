import asyncio
import websockets
import json

MAV_CMD_NAV_WAYPOINT    = 16
MAV_CMD_NAV_LAND        = 21
MAV_CMD_NAV_TAKEOFF     = 22

#  wp0 = Waypoint(frame=Waypoint.FRAME_GLOBAL_REL_ALT, command=MAV_CMD_NAV_TAKEOFF, is_current=True, 
#                        autocontinue=True, param4=float('nan'), x_lat=31.3104184, y_long=120.6358413, z_alt=3.0)
#         wp1 = Waypoint(frame=Waypoint.FRAME_GLOBAL_REL_ALT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
#                        autocontinue=True, param4=float('nan'), x_lat=31.3103428, y_long=120.6356525, z_alt=3.0)
#         wp2 = Waypoint(frame=Waypoint.FRAME_GLOBAL_REL_ALT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
#                        autocontinue=True, param4=float('nan'), x_lat=31.3102927, y_long=120.6358282, z_alt=3.0)
#         wp3 = Waypoint(frame=Waypoint.FRAME_GLOBAL_REL_ALT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
#                        autocontinue=True, param4=float('nan'), x_lat=31.3104184, y_long=120.6358413, z_alt=3.0)
#         wp4 = Waypoint(frame=Waypoint.FRAME_GLOBAL_REL_ALT, command=MAV_CMD_NAV_LAND, is_current=False, 
#                        autocontinue=True, param4=float('nan'), x_lat=31.3104184, y_long=120.6358413, z_alt=0.0)

async def send_message():
    async with websockets.connect("ws://localhost:8765") as websocket:
        while True:
            data = {
                "mission": [
                    {
                        "command": MAV_CMD_NAV_TAKEOFF,
                        "x": 31.3104184,
                        "y": 120.6358413,
                        "z": 3.0
                    },{
                        "command": MAV_CMD_NAV_WAYPOINT,
                        "x": 31.3103428,
                        "y": 120.6356525,
                        "z": 3.0
                    },{
                        "command": MAV_CMD_NAV_WAYPOINT,
                        "x": 31.3102927,
                        "y": 120.6358282,
                        "z": 3.0
                    },{
                        "command": MAV_CMD_NAV_WAYPOINT,
                        "x": 31.3104184,
                        "y": 120.6358413,
                        "z": 3.0
                    },{
                        "command": MAV_CMD_NAV_LAND,
                        "x": 31.3104184,
                        "y": 120.6358413,
                        "z": 0.0
                    }
                ]
            }
            
            await websocket.send(json.dumps(data))
            print(f"Sent JSON data to server: {data}")
            
            response = await websocket.recv()
            response_data = json.loads(response)
            print(f"Received from server: {response_data}")

if __name__ == "__main__":
    asyncio.run(send_message())
