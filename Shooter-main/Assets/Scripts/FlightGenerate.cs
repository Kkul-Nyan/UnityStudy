using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FlightGenerate : MonoBehaviour
{
    public List<Flight> flights = new List<Flight>();

    public List<Flight> getFlights()
    {
        return flights; 
    }

    public abstract void CreateFlight();
}

public class TriangleFlightGenerator : FlightGenerate
{
    public override void CreateFlight()
    {
        flights.Clear();
        flights.Add(new TriangleFlight());
        flights.Add(new TriangleFlight());
        flights.Add(new TriangleFlight());
    }
}

public class CircleFlightGenerator : FlightGenerate
{
    public override void CreateFlight()
    {
        flights.Clear();
        flights.Add(new CircleFlight());
        flights.Add(new CircleFlight());
        flights.Add(new CircleFlight());
    }
}

class Usefactory
{

}
