public class Task1CStudentLb27102025 {
    private String name;
    private int[] scores;
    private int fn;
    private int scoreCount;

    public Task1CStudentLb27102025(String name, int fn) {
        this.name = name;
        this.fn = fn;
        this.scores = new int[20];
        this.scoreCount = 0;
    }

    public double getGrade() {
        if (scoreCount == 0) return 0.0;
        int sum = 0;
        for (int i = 0; i < scoreCount; i++) sum += scores[i];
        return sum / (double) scoreCount;
    }

    public void addScore(int score) throws Task1ScoreExceptionLb27102025 {
        if (score < 2 || score > 6) throw new Task1ScoreExceptionLb27102025("Invalid score: " + score);
        if (scoreCount >= scores.length) throw new Task1ScoreExceptionLb27102025("Too many scores");

        scores[scoreCount++] = score;
    }

    public int[] getScores() {
        int[] result = new int[scoreCount];
        System.arraycopy(scores, 0, result, 0, scoreCount);

        return result;
    }

    public String getName() { return name; }
    public int getFn() { return fn; }
}
