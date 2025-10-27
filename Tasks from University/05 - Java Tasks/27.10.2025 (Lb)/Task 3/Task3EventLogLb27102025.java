import java.util.ArrayList;

public class Task3EventLogLb27102025 {
    private ArrayList<String> events;
    private int maxEvents = 100;

    public Task3EventLogLb27102025() {
        events = new ArrayList<>();
    }

    public void addEvent(String event) throws Task3EventExceptionLb27102025 {
        if (events.size() >= maxEvents) throw new Task3EventExceptionLb27102025("Event log is full");

        events.add(event);
    }

    public void print() {
        if (events.isEmpty()) {
            System.out.println("No events.");
            return;
        }
        for (int i = 0; i < events.size(); i++) {
            System.out.println((i + 1) + " - " + events.get(i));
        }
    }

    public void editEvent(int index, String newEvent) throws Task3EventExceptionLb27102025 {
        if (index < 0 || index >= events.size()) throw new Task3EventExceptionLb27102025("Invalid event index");
        events.set(index, newEvent);
    }

    public void removeEvent(int index) throws Task3EventExceptionLb27102025 {
        if (index < 0 || index >= events.size()) throw new Task3EventExceptionLb27102025("Invalid event index");
        events.remove(index);
    }

    public int getEventCount() {
        return events.size();
    }
}
