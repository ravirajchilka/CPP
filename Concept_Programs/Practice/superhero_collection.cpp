#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

class SuperHero {
    public:
        float rating;
        std::string name;
        std::vector<std::string> powers;

        SuperHero(float rating, const std::string& name, const std::vector<std::string>& powers)
        : rating(rating),name(name),powers(powers) {
        }
};

void showAllSupes(std::vector<SuperHero>& supesVector) {
    std::uint8_t order = 1;
    for(const auto& supes: supesVector) {
        std::cout << "["<<static_cast<int>(order) << "]" << std::endl;
        std::cout << "name:" << supes.name << std::endl; 
        std::cout << "rating: " << supes.rating << std::endl;
        std:: cout << "powers: [" << std::endl;

        std::uint8_t index = 1;
    
        for(const auto& power:supes.powers) {  
            std::cout << "    " << power;
            if(supes.powers.size()>index) {
                std::cout << "," << std::endl;
            }
            index++;
        }

        std:: cout << " ]" << std::endl;

        std::cout << "" <<std::endl;
        std::cout << "------------------" <<std::endl;
        std::cout << "" <<std::endl;
        order++;
    }
};

void addSuperHeros(std::vector<SuperHero>& newSupesCollection, SuperHero supe) {
    newSupesCollection.emplace_back(supe);
};

void deleteSupe(std::vector<SuperHero>& supeCollection, const std::string& name) {
    for(auto it=supeCollection.begin();it!=supeCollection.end();) {
        if(it->name == name) {
            supeCollection.erase(it);
        } else {
            it++;
        }
    }
};

int main() {

    auto superHeroCollection = std::vector<SuperHero>{
        SuperHero(9.5, "Superman", {"flight", "super strength"}),
        SuperHero(9.0, "Wonder Woman", {"super strength", "lasso of truth", "flight"}),
        SuperHero(8.5, "Batman", {"intelligence", "martial arts", "gadgets"}),
        SuperHero(8.8, "Spider-Man", {"web-slinging", "spider-sense", "wall-crawling"}),
        SuperHero(9.2, "Thor", {"god-like strength", "control of lightning", "flight"}),
        SuperHero(8.7, "Black Panther", {"enhanced strength", "vibranium suit", "genius intellect"}),
        SuperHero(8.9, "Captain America", {"peak human strength", "leadership", "indestructible shield"}),
        SuperHero(9.1, "Iron Man", {"powered armor", "genius intellect", "flight"}),
        SuperHero(8.6, "Flash", {"super speed", "time travel", "speed force"}),
        SuperHero(8.8, "Green Lantern", {"power ring", "energy constructs", "flight"}),
        SuperHero(9.3, "Doctor Strange", {"mystic arts", "time manipulation", "astral projection"}),
        SuperHero(8.7, "Aquaman", {"underwater breathing", "marine telepathy", "super strength"}),
        SuperHero(9.0, "Captain Marvel", {"energy absorption", "flight", "super strength"}),
        SuperHero(8.5, "Wolverine", {"healing factor", "adamantium claws", "enhanced senses"}),
        SuperHero(8.9, "Jean Grey", {"telepathy", "telekinesis", "phoenix force"})  };

    showAllSupes(superHeroCollection);

    addSuperHeros(superHeroCollection, 
            SuperHero(7.8, "The Question", 
                {"peak physical condition", "master detective", 
                "expert martial artist", "inquisitive mind", "disguise expertise", 
                "investigative skills", "philosophical insight", 
                "stealth and infiltration", "interrogation techniques", "vast knowledge"}
                )
            );

    // showAllSupes(superHeroCollection);

    deleteSupe(superHeroCollection,"The Question");
    deleteSupe(superHeroCollection,"Jean Grey");
    deleteSupe(superHeroCollection,"Wolverine");

    showAllSupes(superHeroCollection);
    return 0;
}



