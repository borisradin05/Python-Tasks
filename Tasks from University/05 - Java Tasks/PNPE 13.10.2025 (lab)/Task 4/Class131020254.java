public class Class131020254 {
    public static class MultiprocessorTask4 {
        private int cpus;
        private int cores;
        private double clock;

        public MultiprocessorTask4(int cpus, int cores, double clock) {
            this.cpus = cpus;
            this.cores = cores;
            this.clock = clock;
        }

        public int getCpus() {
            return cpus;
        }

        public void setCpus(int cpus) {
            this.cpus = cpus;
        }

        public int getCores() {
            return cores;
        }

        public void setCores(int cores) {
            this.cores = cores;
        }

        public double getClock() {
            return clock;
        }

        public void setClock(double clock) {
            this.clock = clock;
        }

        public double getEquivalentClock() {
            double coreCoef;
            if (cores > 1) {
                coreCoef = 0.7 * cores;
            } else {
                coreCoef = 1;
            }

            double cpuCoef;
            if (cpus > 1) {
                cpuCoef = 0.8 * cpus;
            } else {
                cpuCoef = 1;
            }
            
            return coreCoef * cpuCoef * clock;
        }

        public double operationTime(double t) {
            double multicpuClock = getEquivalentClock();
            return t * clock / multicpuClock;
        }

        @Override
        public String toString() {
            return String.format(
                "Multiprocessor: %d CPUs, %d cores/CPU, %.2f GHz\nEquivalent clock: %.2f GHz",
                cpus, cores, clock, getEquivalentClock()
            );
        }
    }

    public static void main(String[] args) {
        MultiprocessorTask4 mp = new MultiprocessorTask4(2, 4, 3.5);
        System.out.println(mp);
        double t = 10.0;
        System.out.printf("Operation time on multiprocessor: %.2f seconds\n", mp.operationTime(t));
    }
}
