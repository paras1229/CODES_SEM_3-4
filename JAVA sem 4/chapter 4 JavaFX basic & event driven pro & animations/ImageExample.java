import java.io.FileInputStream;
import java.io.FileNotFoundException;
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.Scene;
public class ImageExample extends Application
{
    @Override
    public void start(Stage stage) throws FileNotFoundException 
    {
        Image image = new Image(new FileInputStream("D:\\bmw-m4-gt3-race-cars-2021-5k-8k-7680x5120-5520.jpg"));
        ImageView imageView = new ImageView(image);

        imageView.setX(50);
        imageView.setY(28);
        
        imageView.setFitHeight(455);
        imageView.setFitWidth(500);
        imageView.setPreserveRatio(true);

        Group root = new Group(imageView);
        Scene scene = new Scene(root, 600, 500);
        stage.setTitle("Loading an image...");
        stage.setScene(scene);
        stage.show();
    }
    public static void main(String[] args)
    {
        launch(args);
    }
}