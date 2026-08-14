#include <iostream>
#include <string>
#include <vector>

// Global functions from different developers - naming conflicts ahead!

namespace Graphics{
    void render() {
        std::cout << "Rendering 2D sprites" << std::endl;
    }
    
    void render(bool use3D) {
        if (use3D) {
            std::cout << "Rendering 3D models" << std::endl;
        } else {
            std::cout << "Rendering 2D sprites" << std::endl;
        }
    }

    void setResoultion(int length , int width){
        std::cout<<"length is : "<<length<<"And"<<"Width is :"<<width<<std::endl;
    }

}

namespace Audio {
    void play() {
        std::cout << "Playing background music" << std::endl;
    }

    void play(std::string soundEffect) {
        std::cout << "Playing sound effect: " << soundEffect << std::endl;
    }
    void playJump(float jump){
        std::cout<<"PLayer Jumped."<<std::endl;
    }
}

namespace update{
    void update() {
        std::cout << "Updating physics calculations" << std::endl;
    }
    
    void update(double deltaTime) {
        std::cout << "Updating physics with delta time: " << deltaTime << std::endl;
    }
}

namespace initilize{
    void initialize() {
        std::cout << "Initializing graphics system" << std::endl;
    }
    
    void initialize(int maxEntities) {
        std::cout << "Initializing physics system with " << maxEntities << " entities" << std::endl;
    }

    namespace rendershadows{
        void render(){
            std::cout<<"Rendering Shadows in a system."<<std::endl;
        }

        void render_particles(int n){
            std::cout<<n<<"Particles are rendered."<<std::endl;
        }

    }
}

int main() {
	// This code is confusing - which functions do what?
	Graphics::render();
	Graphics::render(true);
	Audio::play();
	Audio::play("explosion.wav");
	update::update();
	update::update(16.67);
	initilize::initialize();
	initilize::initialize(1000);
    initilize::rendershadows::render();
    initilize::rendershadows::render_particles(100);
    Audio::playJump(3);
	return 0;
}