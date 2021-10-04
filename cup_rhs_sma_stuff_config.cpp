/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Drawbridge";
	pictureItem = "Exile_Item_ConcreteDrawBridgeKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDrawBridgeKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port (Small)";
	pictureItem = "Exile_Item_ConcreteFloorPortSmallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortSmallKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Ladder Hatch";
	pictureItem = "Exile_Item_ConcreteLadderHatchKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteLadderHatchKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder";
	pictureItem = "Exile_Item_MetalLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder (Double Tall)";
	pictureItem = "Exile_Item_MetalLadderDoubleKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalLadderKit"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftOldChest: Exile_AbstractCraftingRecipe
{
	name = "Craft Old Chest";
	pictureItem = "Exile_Item_OldChestKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_OldChestKit"}
	};
	components[] = 
	{
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port (Small)";
	pictureItem = "Exile_Item_WoodFloorPortSmallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder Hatch";
	pictureItem = "Exile_Item_WoodLadderHatchKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class CookAlsatianSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Alsatian Steak";
	pictureItem = "Exile_Item_AlsatianSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_AlsatianSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_AlsatianSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookCatSharkFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Shark Filet";
	pictureItem = "Exile_Item_CatSharkFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatSharkFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatSharkFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookChickenFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Chicken Filet";
	pictureItem = "Exile_Item_ChickenFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChickenFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChickenFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookFinSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Fin Steak";
	pictureItem = "Exile_Item_FinSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FinSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_FinSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookGoatSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Goat Steak";
	pictureItem = "Exile_Item_GoatSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GoatSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GoatSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMackerelFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mackerel Filet";
	pictureItem = "Exile_Item_MackerelFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MackerelFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MackerelFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMulletFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mullet Filet";
	pictureItem = "Exile_Item_MulletFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MulletFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MulletFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookOrnateFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Ornate Filet";
	pictureItem = "Exile_Item_OrnateFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_OrnateFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_OrnateFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRabbitSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Rabbit Steak";
	pictureItem = "Exile_Item_RabbitSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RabbitSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RabbitSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRoosterFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Rooster Filet";
	pictureItem = "Exile_Item_RoosterFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RoosterFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RoosterFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSalemaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Salema Filet";
	pictureItem = "Exile_Item_SalemaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SalemaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SalemaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSheepSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep Steak";
	pictureItem = "Exile_Item_SheepSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SheepSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SheepSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSnakeFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Snake Filet";
	pictureItem = "Exile_Item_SnakeFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SnakeFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SnakeFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTunaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Tuna Filet";
	pictureItem = "Exile_Item_TunaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TunaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TunaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTurtleFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Turtle Filet";
	pictureItem = "Exile_Item_TurtleFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TurtleFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TurtleFilet_Raw"}
	};
};


class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodGateKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 1;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 1;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 2; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 2; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 2; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 2; price = 40; };
	class U_I_OfficerUniform						{ quality = 2; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 2; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 2; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 2; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 2; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_leader								{ quality = 3; price = 40; };
	class U_IG_leader								{ quality = 3; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_B_GhillieSuit							{ quality = 3; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_I_GhillieSuit							{ quality = 3; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 6; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 6; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 6; price = 150; };
	class U_O_GhillieSuit							{ quality = 5; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 6; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 2; price = 10; };
	class G_Balaclava_oli			 	{ quality = 2; price = 10; };
	class G_Balaclava_combat			{ quality = 2; price = 10; };
	class G_Balaclava_lowprofile		{ quality = 2; price = 10; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_tna_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_blk_F		{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_tna_F		{ quality = 2; price = 15; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 2; price = 6; };
	class H_Beret_blk								{ quality = 2; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 2; price = 6; };
	class H_Beret_brn_SF							{ quality = 2; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 2; price = 6; };
	class H_Beret_grn_SF							{ quality = 2; price = 6; };
	class H_Beret_ocamo								{ quality = 2; price = 6; };
	class H_Beret_red								{ quality = 2; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 2; price = 20; };
	class H_HelmetB_light_black						{ quality = 2; price = 20; };
	class H_HelmetB_light_desert					{ quality = 2; price = 20; };
	class H_HelmetB_light_grass						{ quality = 2; price = 20; };
	class H_HelmetB_light_sand						{ quality = 2; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 3; price = 40; };
	class H_HelmetIA_camo							{ quality = 3; price = 40; };
	class H_HelmetIA_net							{ quality = 3; price = 40; };
	class H_HelmetB									{ quality = 3; price = 60; };
	class H_HelmetB_black							{ quality = 3; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 3; price = 60; };
	class H_HelmetB_grass							{ quality = 3; price = 60; };
	class H_HelmetB_paint							{ quality = 3; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 60; };
	class H_HelmetB_sand							{ quality = 3; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 4; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 5; price = 150; };
	class H_HelmetO_oucamo							{ quality = 5; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 5; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 5; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 2; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 10; };
	class bipod_01_F_snd	 						{ quality = 2; price = 10; };
	class bipod_02_F_blk	 						{ quality = 2; price = 10; };
	class bipod_02_F_hex	 						{ quality = 2; price = 10; };
	class bipod_02_F_tan	 						{ quality = 2; price = 10; };
	class bipod_03_F_blk	 						{ quality = 2; price = 10; };
	class bipod_03_F_oli	 						{ quality = 2; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 5; price = 50; };
	class muzzle_snds_338_green 					{ quality = 5; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 5; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 4; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 4; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 3; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 4; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 4; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 4; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 4; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 5; price = 300; };
	class optic_AMS_khk								{ quality = 5; price = 300; };
	class optic_AMS_snd								{ quality = 5; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 2; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 4; price = 300; };
	class optic_KHS_hex								{ quality = 4; price = 300; };
	class optic_KHS_old								{ quality = 4; price = 300; };
	class optic_KHS_tan								{ quality = 4; price = 300; };
	class optic_LRPS								{ quality = 5; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 6; price = 1000; };
	class optic_NVS									{ quality = 4; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = QUALITY_LEVEL_9000; price = 1500; };
	//class optic_tws_mg								{ quality = QUALITY_LEVEL_9000; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 4; price = 25000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	//class Exile_Item_Laptop						{ quality = 2; price = 9000; };
	//class Exile_Item_BaseCameraKit				{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Exile_Item_MetalWire					{ quality = 1; price = 100; };
	//class Exile_Item_Cement						{ quality = 1; price = 20; };
	//class Exile_Item_Sand							{ quality = 1; price = 20; };
	//class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	// Added in 1.0.3, but not used
	//class Exile_Item_SprayCan_Black				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Red					{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Green				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_White				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Blue				{ quality = 2; price = 20; };
	//class Exile_Item_BurlapSack					{ quality = 2; price = 5; };
	//class Exile_Item_Bullets_556					{ quality = 2; price = 5; };
	//class Exile_Item_Bullets_762					{ quality = 2; price = 5; };
	//class Exile_Item_WeaponParts					{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_SheepSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_AlsatianSteak_Cooked			{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_CatSharkFilet_Cooked			{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_FinSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_GoatSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_TurtleFilet_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_TunaFilet_Cooked				{ quality = 3; price = 220; }; //90, 30
	class Exile_Item_RabbitSteak_Cooked				{ quality = 3; price = 215; }; //80, 30
	class Exile_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Exile_Item_ChickenFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	class Exile_Item_RoosterFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	class Exile_Item_MulletFilet_Cooked				{ quality = 3; price = 200; }; //65, 30
	class Exile_Item_SalemaFilet_Cooked				{ quality = 3; price = 200; }; //65, 30
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_MackerelFilet_Cooked			{ quality = 3; price = 190; }; //55, 30
	class Exile_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Exile_Item_OrnateFilet_Cooked				{ quality = 3; price = 180; }; //40, 30
	class Exile_Item_SnakeFilet_Cooked				{ quality = 3; price = 180; }; //40, 30
	class Exile_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_MacasCheese					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_CatSharkFilet_Raw				{ quality = 2; price = 125; }; //25, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_TunaFilet_Raw					{ quality = 2; price = 120; }; //20, 30
	class Exile_Item_AlsatianSteak_Raw				{ quality = 2; price = 115; };	//15, 30
	class Exile_Item_TurtleFilet_Raw				{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_SheepSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_FinSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_GoatSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_ChickenFilet_Raw				{ quality = 2; price = 110; }; //10, 30
	class Exile_Item_RoosterFilet_Raw				{ quality = 2; price = 110; }; //10, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_MackerelFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_MulletFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_OrnateFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_RabbitSteak_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_SalemaFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_SnakeFilet_Raw					{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 70; sellPrice = 10; };//100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 25; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_InstaDoc                       { quality = 5; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 3; price = 300; };
	class Exile_Item_Bandage	                    { quality = 2; price = 100; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };

	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 2; price = 100; };
	class Exile_Melee_SledgeHammmer					{ quality = 3; price = 500; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 2; price = 500; };
	class Exile_Item_Pliers							{ quality = 2; price = 350; };
	class Exile_Item_Grinder						{ quality = 2; price = 1250; };
	class Exile_Item_Foolbox						{ quality = 2; price = 4000; };
	//class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	//class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	//class Exile_Item_Hammer						{ quality = 1; price = 600; };
	//class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	//class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	//class Exile_Item_Shovel						{ quality = 1; price = 700; };
	//class Exile_Item_Wrench						{ quality = 1; price = 250; };
	//class Exile_Item_SleepingMat					{ quality = 1; price = 1250; };
	//class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	//class Exile_Item_ZipTie						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };
	class ItemGPS									{ quality = 2; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 3; price = 200; };
	class Laserdesignator							{ quality = 6; price = 750; };
	class Laserdesignator_02						{ quality = 6; price = 750; };
	class Laserdesignator_03						{ quality = 6; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 4; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 150; };
	class H_HelmetCrew_I							{ quality = 3; price = 100; };
	class H_HelmetCrew_B							{ quality = 3; price = 100; };
	class H_HelmetCrew_O							{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 4; price = 80; };
	class U_B_PilotCoveralls						{ quality = 2; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 60; };
	class U_I_pilotCoveralls						{ quality = 2; price = 60; };
	class U_O_PilotCoveralls						{ quality = 2; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 3; price = 200; };
	class B_Bergen_mcamo							{ quality = 3; price = 200; };
	class B_Bergen_rgr								{ quality = 3; price = 200; };
	class B_Bergen_sgg								{ quality = 3; price = 200; };
	class B_Carryall_cbr							{ quality = 4; price = 300; };
	class B_Carryall_khk							{ quality = 4; price = 300; };
	class B_Carryall_mcamo							{ quality = 4; price = 300; };
	class B_Carryall_ocamo							{ quality = 4; price = 300; };
	class B_Carryall_oli							{ quality = 4; price = 300; };
	class B_Carryall_oucamo							{ quality = 4; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 						{ quality = 2; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 									{ quality = 4; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 									{ quality = 5; price = 30; };

	class 10Rnd_762x54_Mag 									{ quality = 3; price = 30; };
	//class 10Rnd_762x51_Mag { quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 							{ quality = 4; price = 40; };
	class 11Rnd_45ACP_Mag 									{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 								{ quality = 3; price = 20; };
	class 150Rnd_762x54_Box_Tracer 							{ quality = 3; price = 30; };
	class 16Rnd_9x21_Mag 									{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 							{ quality = 2; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 					{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 									{ quality = 6; price = 50; };
	class 130Rnd_338_Mag 									{ quality = 5; price = 40; };
	class 20Rnd_556x45_UW_mag 								{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 									{ quality = 2; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 							{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow				{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red					{ quality = 1; price = 10; };
	class 30Rnd_556x45_Stanag 								{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_green  						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 					{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 				{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_red 							{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green 						{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 							{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 					{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 									{ quality = 1; price = 40; };
	class 30Rnd_9x21_Yellow_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Green_Mag								{ quality = 1; price = 40; };
	class 30Rnd_9x21_Red_Mag								{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 							{ quality = 6; price = 50; };
	class 5Rnd_127x108_Mag 									{ quality = 6; price = 40; };
	class 6Rnd_45ACP_Cylinder 								{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 								{ quality = 1; price = 30; };
	class 6Rnd_RedSignal_F 									{ quality = 1; price = 30; };
	class 7Rnd_408_Mag 										{ quality = 6; price = 10; };
	class 9Rnd_45ACP_Mag 									{ quality = 1; price = 6; };

	// Price for bullet cam magazines is normal magazine price + 20 pop tabs per bullet
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			{ quality = 6; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag 		{ quality = 6; price = 40 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 		{ quality = 6; price = 40 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				{ quality = 6; price = 10 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				{ quality = 6; price = 30 + 10 * 20; };
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag 		{ quality = 6; price = 40 + 10 * 20; };
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag 		{ quality = 6; price = 40 +  5 * 20; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag 	{ quality = 6; price = 40 +  5 * 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 4; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 5; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 3; price = 350; };
	class MMG_01_hex_F								{ quality = 6; price = 800; };
	class MMG_01_tan_F								{ quality = 6; price = 800; };
	class MMG_02_black_F							{ quality = 6; price = 450; };
	class MMG_02_camo_F								{ quality = 5; price = 450; };
	class MMG_02_sand_F								{ quality = 5; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 2; price = 150; };
	class arifle_Katiba_F							{ quality = 2; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 2; price = 450; };
	class arifle_MX_F								{ quality = 2; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 2; price = 350; };
	class arifle_MXC_F								{ quality = 2; price = 350; };
	class arifle_SDAR_F								{ quality = 1; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 2; price = 550; };
	class arifle_MXM_F 								{ quality = 2; price = 550; };
	class srifle_DMR_01_F 							{ quality = 3; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 4; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 4; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 4; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 4; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 5; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 5; price = 800; };
	class srifle_EBR_F 								{ quality = 3; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 900; };
	class srifle_GM6_F 								{ quality = 6; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 6; price = 850; };
	class srifle_LRR_F 								{ quality = 6; price = 850; };

	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Weapons
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Weapon_AK107						{ quality = 1; price = 300; };
	class Exile_Weapon_AK107_GL						{ quality = 2; price = 400; };
	class Exile_Weapon_AK74							{ quality = 2; price = 350; };
	class Exile_Weapon_AK74_GL						{ quality = 2; price = 400; };
	class Exile_Weapon_AK47							{ quality = 3; price = 500; };
	class Exile_Weapon_AKM							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS							{ quality = 3; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 550; };
	class Exile_Weapon_DMR							{ quality = 3; price = 650; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 250; };
	class Exile_Weapon_CZ550						{ quality = 2; price = 400; };
	class Exile_Weapon_SVD							{ quality = 4; price = 800; };
	class Exile_Weapon_SVDCamo						{ quality = 4; price = 850; };
	class Exile_Weapon_VSSVintorez					{ quality = 3; price = 600; };
	class Exile_Weapon_RPK							{ quality = 2; price = 250; };
	class Exile_Weapon_PK							{ quality = 3; price = 300; };
	class Exile_Weapon_PKP							{ quality = 3; price = 350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 100; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 100; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 150; };
	class Exile_Weapon_M1014						{ quality = 2; price = 200; };
	class Exile_Weapon_SA61							{ quality = 1; price = 150; };
	class Exile_Weapon_m107							{ quality = 5; price = 850; };
	class Exile_Weapon_ksvk							{ quality = 5; price = 850; };
	class Exile_Weapon_M4							{ quality = 2; price = 300; };
	class Exile_Weapon_M16A4						{ quality = 2; price = 350; };
	class Exile_Weapon_M16A2						{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 3; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 20; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	class Exile_Magazine_10Rnd_765x17_SA61				{ quality = 1; price = 10; };
	class Exile_Magazine_20Rnd_765x17_SA61				{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_127x99_m107				{ quality = 3; price = 30; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK			{ quality = 3; price = 40; };
	class Exile_Magazine_5Rnd_127x108_KSVK				{ quality = 3; price = 30; };


	///////////////////////////////////////////////////////////////////////////////
	// Apex Items & Weapons
	///////////////////////////////////////////////////////////////////////////////
	class hgun_Pistol_01_F            { quality = 1; price = 65; };
	class hgun_P07_khk_F              { quality = 1; price = 65; };
	class SMG_05_F					  { quality = 1; price = 150; };
	class LMG_03_F					  { quality = 2; price = 300; };
	class arifle_MX_khk_F             { quality = 2; price = 450; };
	class arifle_MX_GL_khk_F          { quality = 2; price = 500; };
	class arifle_MXC_khk_F            { quality = 2; price = 350; };
	class arifle_MXM_khk_F            { quality = 2; price = 500; };
	class srifle_LRR_tna_F            { quality = 6; price = 850; };
	class srifle_GM6_ghex_F           { quality = 6; price = 900; };
	class srifle_DMR_07_blk_F         { quality = 4; price = 750; };
	class srifle_DMR_07_hex_F         { quality = 4; price = 750; };
	class srifle_DMR_07_ghex_F        { quality = 4; price = 750; };
	class arifle_AK12_F               { quality = 3; price = 650; };
	class arifle_AK12_GL_F            { quality = 3; price = 700; };
	class arifle_AKM_F                { quality = 3; price = 400; };
	class arifle_AKM_FL_F             { quality = 3; price = 400; };
	class arifle_AKS_F                { quality = 3; price = 350; };
	class arifle_ARX_blk_F            { quality = 5; price = 900; };
	class arifle_ARX_ghex_F           { quality = 5; price = 900; };
	class arifle_ARX_hex_F            { quality = 5; price = 900; };
	class arifle_CTAR_blk_F           { quality = 2; price = 450; };
	class arifle_CTAR_hex_F           { quality = 2; price = 450; };
	class arifle_CTAR_ghex_F          { quality = 2; price = 450; };
	class arifle_CTAR_GL_blk_F        { quality = 2; price = 450; };
	class arifle_CTAR_GL_ghex_F       { quality = 2; price = 450; };
	class arifle_CTAR_GL_hex_F        { quality = 2; price = 450; };
	class arifle_CTARS_blk_F          { quality = 2; price = 450; };
	class arifle_CTARS_ghex_F         { quality = 2; price = 450; };
	class arifle_CTARS_hex_F          { quality = 2; price = 450; };
	class arifle_SPAR_01_blk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_khk_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_snd_F        { quality = 1; price = 400; };
	class arifle_SPAR_01_GL_blk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_khk_F     { quality = 1; price = 500; };
	class arifle_SPAR_01_GL_snd_F     { quality = 1; price = 500; };
	class arifle_SPAR_02_blk_F        { quality = 2; price = 550; };
	class arifle_SPAR_02_khk_F        { quality = 2; price = 550; };
	class arifle_SPAR_02_snd_F        { quality = 2; price = 550; };
	class arifle_SPAR_03_blk_F        { quality = 3; price = 600; };
	class arifle_SPAR_03_khk_F        { quality = 3; price = 600; };
	class arifle_SPAR_03_snd_F        { quality = 3; price = 600; };
	class muzzle_snds_H_khk_F         { quality = 2; price = 50; };
	class muzzle_snds_H_snd_F         { quality = 2; price = 50; };
	class muzzle_snds_58_blk_F        { quality = 1; price = 20; };
	class muzzle_snds_m_khk_F         { quality = 1; price = 15; };
	class muzzle_snds_m_snd_F         { quality = 1; price = 15; };
	class muzzle_snds_B_khk_F         { quality = 3; price = 50; };
	class muzzle_snds_B_snd_F         { quality = 3; price = 50; };
	class muzzle_snds_58_wdm_F        { quality = 1; price = 20; };
	class muzzle_snds_65_TI_blk_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_hex_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_ghex_F    { quality = 2; price = 75; };
	class muzzle_snds_H_MG_blk_F      { quality = 2; price = 20; };
	class muzzle_snds_H_MG_khk_F      { quality = 2; price = 20; };
	class optic_Arco_blk_F            { quality = 1; price = 100; };
	class optic_Arco_ghex_F           { quality = 1; price = 100; };
	class optic_DMS_ghex_F            { quality = 2; price = 150; };
	class optic_Hamr_khk_F            { quality = 3; price = 200; };
	class optic_ERCO_blk_F            { quality = 1; price = 125; };
	class optic_ERCO_khk_F            { quality = 1; price = 125; };
	class optic_ERCO_snd_F            { quality = 1; price = 125; };
	class optic_SOS_khk_F             { quality = 2; price = 200; };
	class optic_LRPS_tna_F            { quality = 5; price = 300; };
	class optic_LRPS_ghex_F           { quality = 5; price = 300; };
	class optic_Holosight_blk_F       { quality = 1; price = 50; };
	class optic_Holosight_khk_F       { quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   { quality = 1; price = 50; };
	class bipod_01_F_khk              { quality = 2; price = 10; };
	class O_NVGoggles_hex_F           { quality = 3; price = 150; };
	class O_NVGoggles_urb_F           { quality = 3; price = 150; };
	class O_NVGoggles_ghex_F          { quality = 3; price = 150; };
	class NVGoggles_tna_F             { quality = 2; price = 100; };
	//class NVGogglesB_blk_F            { quality = 1; price = 1000; }; //Normal NightV but fullscreen thermal
	//class NVGogglesB_grn_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class NVGogglesB_gry_F            { quality = 1; price = 1000; };	//Normal NightV but fullscreen thermal
	//class Laserdesignator_01_khk_F    { quality = 1; price = 1000; };	//Thermal
	//class Laserdesignator_02_ghex_F   { quality = 1; price = 1000; };	//Thermal
	class U_B_T_Soldier_F             { quality = 2; price = 40; };
	class U_B_T_Soldier_AR_F          { quality = 2; price = 40; };
	class U_B_T_Soldier_SL_F          { quality = 2; price = 40; };
	class U_B_T_Sniper_F              { quality = 3; price = 100; };
	class U_B_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_B_CTRG_Soldier_F          { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_2_F        { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_3_F        { quality = 2; price = 40; };
	class U_B_GEN_Soldier_F           { quality = 2; price = 35; };
	class U_B_GEN_Commander_F         { quality = 2; price = 35; };
	class U_O_T_Soldier_F             { quality = 2; price = 40; };
	class U_O_T_Officer_F             { quality = 3; price = 40; };
	class U_O_T_Sniper_F              { quality = 3; price = 100; };
	class U_O_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_F       { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_hex_F   { quality = 4; price = 150; };
	class U_I_C_Soldier_Para_1_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_2_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_3_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_4_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_5_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Bandit_1_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_2_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_3_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_4_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_5_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Camo_F        { quality = 2; price = 30; };
	class U_C_man_sport_1_F           { quality = 1; price = 10; };
	class U_C_man_sport_2_F           { quality = 1; price = 10; };
	class U_C_man_sport_3_F           { quality = 1; price = 10; };
	class U_C_Man_casual_1_F          { quality = 1; price = 10; };
	class U_C_Man_casual_2_F          { quality = 1; price = 10; };
	class U_C_Man_casual_3_F          { quality = 1; price = 10; };
	class U_C_Man_casual_4_F          { quality = 1; price = 10; };
	class U_C_Man_casual_5_F          { quality = 1; price = 10; };
	class U_C_Man_casual_6_F          { quality = 1; price = 10; };
	class U_B_CTRG_Soldier_urb_1_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_2_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_3_F    { quality = 2; price = 40; };
	class H_Helmet_Skate              { quality = 2; price = 20; };
	class H_HelmetB_TI_tna_F          { quality = 4; price = 100; };
	//class H_HelmetO_ViperSP_hex_F     { quality = 4; price = 1000; };		//Themal
	//class H_HelmetO_ViperSP_ghex_F    { quality = 4; price = 1000; }; 	//Themal
	class H_HelmetB_tna_F             { quality = 3; price = 50; };
	class H_HelmetB_Enh_tna_F         { quality = 4; price = 100; };
	class H_HelmetB_Light_tna_F       { quality = 2; price = 20; };
	class H_HelmetSpecO_ghex_F        { quality = 5; price = 100; };
	class H_HelmetLeaderO_ghex_F      { quality = 5; price = 175; };
	class H_HelmetO_ghex_F            { quality = 5; price = 75; };
	class H_HelmetCrew_O_ghex_F       { quality = 3; price = 75; };
	class H_MilCap_tna_F              { quality = 1; price = 8; };
	class H_MilCap_ghex_F             { quality = 1; price = 8; };
	class H_Booniehat_tna_F           { quality = 1; price = 4; };
	class H_Beret_gen_F               { quality = 2; price = 12; };
	class H_MilCap_gen_F              { quality = 1; price = 10; };
	class H_Cap_oli_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        { quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   { quality = 1; price = 6; };
	class V_TacChestrig_grn_F         { quality = 1; price = 15; };
	class V_TacChestrig_oli_F         { quality = 1; price = 15; };
	class V_TacChestrig_cbr_F         { quality = 1; price = 15; };
	class V_PlateCarrier1_tna_F       { quality = 3; price = 50; };
	class V_PlateCarrier2_tna_F       { quality = 3; price = 60; };
	class V_PlateCarrierSpec_tna_F    { quality = 5; price = 100; };
	class V_PlateCarrierGL_tna_F      { quality = 6; price = 500; };
	class V_HarnessO_ghex_F           { quality = 2; price = 50; };
	class V_HarnessOGL_ghex_F         { quality = 1; price = 30; };
	class V_BandollierB_ghex_F        { quality = 1; price = 10; };
	class V_TacVest_gen_F             { quality = 1; price = 25; };
	class V_PlateCarrier1_rgr_noflag_F		{ quality = 2; price = 50; };
	class V_PlateCarrier2_rgr_noflag_F		{ quality = 2; price = 60; };
	class B_Bergen_Base_F					{ quality = 5; price = 400; };
	class B_Bergen_mcamo_F                  { quality = 5; price = 400; };
	class B_Bergen_dgtl_F                   { quality = 5; price = 400; };
	class B_Bergen_hex_F                    { quality = 5; price = 400; };
	class B_Bergen_tna_F                    { quality = 5; price = 400; };
	class B_AssaultPack_tna_F               { quality = 1; price = 90; };
	class B_Carryall_ghex_F                 { quality = 4; price = 300; };
	class B_FieldPack_ghex_F                { quality = 2; price = 120; };
	class B_ViperHarness_base_F             { quality = 3; price = 250; };
	class B_ViperHarness_blk_F              { quality = 3; price = 250; };
	class B_ViperHarness_ghex_F             { quality = 3; price = 250; };
	class B_ViperHarness_hex_F              { quality = 3; price = 250; };
	class B_ViperHarness_khk_F              { quality = 3; price = 250; };
	class B_ViperHarness_oli_F              { quality = 3; price = 250; };
	class B_ViperLightHarness_base_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_blk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_ghex_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_hex_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_khk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_oli_F         { quality = 2; price = 200; };

	class 30Rnd_9x21_Mag_SMG_02						{quality = 1; price = 10; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_F                        {quality = 2; price = 15; };
	class 30Rnd_580x42_Mag_Tracer_F                 {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_F                       {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                {quality = 2; price = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  {quality = 4; price = 20; };
	class 10Rnd_50BW_Mag_F                          {quality = 5; price = 35; };
	class 150Rnd_556x45_Drum_Mag_F                  {quality = 2; price = 75; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           {quality = 2; price = 75; };
	class 30Rnd_762x39_Mag_F                        {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Green_F                  {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_F                 {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           {quality = 3; price = 25; };
	class 30Rnd_545x39_Mag_F                        {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Green_F                  {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_F                 {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           {quality = 1; price = 10; };
	class 200Rnd_556x45_Box_F                       {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            {quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{quality = 1; price = 10; };
	
	// Jets DLC items
	class V_DeckCrew_yellow_F						{ quality = 2; price = 30; };
	class V_DeckCrew_blue_F							{ quality = 2; price = 30; };
	class V_DeckCrew_green_F						{ quality = 2; price = 30; };
	class V_DeckCrew_red_F							{ quality = 2; price = 30; };
	class V_DeckCrew_white_F						{ quality = 2; price = 30; };
	class V_DeckCrew_brown_F						{ quality = 2; price = 30; };
	class V_DeckCrew_violet_F						{ quality = 2; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 2; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Green 					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Desert					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 2; price = 25000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 2; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 3; price = 27500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 3; price = 27500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 3; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 17000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 5; price = 50000; };
	class Exile_Chopper_Huron_Green								{ quality = 5; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 4; price = 45000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 3; price = 28000; };
	class Exile_Chopper_Orca_Black								{ quality = 3; price = 28000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 3; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 3; price = 17000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 3; price = 17000; };

	class Exile_Chopper_Taru_CSAT								{ quality = 4; price = 33000; };
	class Exile_Chopper_Taru_Black								{ quality = 4; price = 33000; };

	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 4; price = 43000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 4; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// An-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Green									{ quality = 2; price = 17000; };
	class Exile_Plane_AN2_White									{ quality = 2; price = 17000; };
	class Exile_Plane_AN2_Stripe								{ quality = 2; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Green						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Blue						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Grey						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Black						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Dark						{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 3; price = 12000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 3; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Red							{ quality = 1; price = 8000; };
	class Exile_Car_Golf_Black							{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 17000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 2; price = 25000; };
	class Exile_Car_Ural_Open_Military		{ quality = 2; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 2; price = 28000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 2; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// V3S
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_V3S_Open			{ quality = 2; price = 28000; };
	class Exile_Car_V3S_Covered			{ quality = 2; price = 28000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 3; price = 20000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tractor_Red 				{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor (Old)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_OldTractor_Red 				{ quality = 1; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// Tow Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_TowTractor_White			{ quality = 1; price = 1800; };

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_White				{ quality = 2; price = 6000; };
	class Exile_Car_Octavius_Black				{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Green				{ quality = 2; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_UAZ_Open_Green			{ quality = 2; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Red 				{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Urban 			{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Green 			{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Sand 				{ quality = 3; price = 11000; };
	class Exile_Car_LandRover_Desert 			{ quality = 3; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Green		{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Desert		{ quality = 3; price = 12000; };
	class Exile_Car_LandRover_Ambulance_Sand		{ quality = 3; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Taxi 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Red 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_White 				{ quality = 2; price = 6000; };
	class Exile_Car_Lada_Hipster 			{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 2; price = 6000; };
	class Exile_Car_Volha_White				{ quality = 2; price = 6000; };
	class Exile_Car_Volha_Black				{ quality = 2; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 4; price = 14000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 4; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 3; price = 48000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 5; price = 26500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 4; price = 23000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Beige						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_White						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Blue						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 3; price = 16000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 3; price = 16000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 5; price = 25000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 5; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 4; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 4; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 6; price = 44000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Black 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Grey 							{ quality = 3; price = 14000; };
	class Exile_Car_SUV_Orange 							{ quality = 3; price = 14000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Armed_Black 					{ quality = 4; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// BRDM2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BRDM2_HQ 							{ quality = 5; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Green 							{ quality = 6; price = 38000; };
	class Exile_Car_BTR40_MG_Camo 							{ quality = 6; price = 38000; };
	class Exile_Car_BTR40_Green 							{ quality = 2; price = 15000; };
	class Exile_Car_BTR40_Camo 								{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M134_Green 							{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M134_Desert 							{ quality = 5; price = 33000; };
	class Exile_Car_HMMWV_M2_Green 								{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_M2_Desert 							{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_MEV_Green 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_MEV_Desert 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_UNA_Green 							{ quality = 3; price = 21000; };
	class Exile_Car_HMMWV_UNA_Desert 							{ quality = 3; price = 21000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 4; price = 48300; };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_White 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_Red 							{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 2; price = 12000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 2; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_White 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Red 						{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 3; price = 17000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 3; price = 17000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 3; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 3; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 4; price = 43000; };

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter						{ quality = 2; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RHIB								{ quality = 3; price = 1500; };

	///////////////////////////////////////////////////////////////////////////////
	// Ceaser BTT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Ceasar							{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishInfantry							{ quality = 6; price = 60000; };
	class Exile_Plane_BlackfishVehicle							{ quality = 6; price = 60000; };

	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_ProwlerLight							{ quality = 3; price = 22000; };
	class Exile_Car_ProwlerUnarmed							{ quality = 3; price = 22000; };

	///////////////////////////////////////////////////////////////////////////////
	// Qilin
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_QilinUnarmed							{ quality = 3; price = 21000; };

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_MB4WD							{ quality = 2; price = 15000; };
	class Exile_Car_MB4WDOpen							{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
	

	
///////////////////////////////////////////////////////////////////////////////////////////////CUP/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////BLUEFOR////////////////////////////////////////////////////////////////////
	class CUP_B_T810_Armed_CZ_WDL              { quality = 4; price = 95000; };//			Tatra T810 (MG/Covered)
	class CUP_B_T810_Unarmed_CZ_WDL            { quality = 4; price = 65000; };//			Tatra T810 (Covered)
	class CUP_B_T810_Refuel_CZ_WDL             { quality = 4; price = 65000; };//			Tatra T810 (Fuel)
	class CUP_B_T810_Reammo_CZ_WDL             { quality = 5; price = 120000; };//			Tatra T810 (Ammo)
	class CUP_B_T810_Repair_CZ_WDL             { quality = 5; price = 99000; };//			Tatra T810 (Repair)
	class CUP_B_T810_Armed_CZ_DES              { quality = 5; price = 99000; };//			Tatra T810 (MG/Covered)
	class CUP_B_T810_Unarmed_CZ_DES            { quality = 4; price = 65000; };//			Tatra T810 (Covered)
	class CUP_B_T810_Refuel_CZ_DES             { quality = 4; price = 65000; };//			Tatra T810 (Fuel)
	class CUP_B_T810_Reammo_CZ_DES             { quality = 5; price = 120000; };//			Tatra T810 (Ammo)
	class CUP_B_T810_Repair_CZ_DES             { quality = 5; price = 99000; };//			Tatra T810 (Repair)
	
	class CUP_B_MH47E_USA                      { quality = 4; price = 160000; };//			MH-47E
	class CUP_B_MH47E_GB                       { quality = 6; price = 180000; };//			Chinook HC-6
	
	class CUP_B_LCU1600_USMC                   { quality = 6; price = 900000; };//			LCU-1610
	class CUP_B_MK10_GB                        { quality = 6; price = 560000; };//			LCU Mk.10
	
	class CUP_B_S1203_Ambulance_CDF            { quality = 1; price = 18000; };//			Å koda S1203 (Ambulance)
	
	class CUP_B_MTLB_pk_CDF                    { quality = 6; price = 320000; };//			MT-LB LV
	class CUP_B_MTLB_pk_Winter_CDF             { quality = 6; price = 320000; };//			MT-LB LV (Winter)
	class CUP_B_MTLB_pk_FIA                    { quality = 6; price = 320000; };//			MT-LB LV
	
	class CUP_B_FV510_GB_D_SLAT                { quality = 6; price = 920000; };//			FV510 Warrior (SLAT - Desert)
	class CUP_B_FV510_GB_W_SLAT                { quality = 6; price = 920000; };//			FV510 Warrior (SLAT - Woodland)
	class CUP_B_FV510_GB_D                     { quality = 6; price = 920000; };//			FV510 Warrior (Desert)
	class CUP_B_FV510_GB_W                     { quality = 6; price = 920000; };//			FV510 Warrior (Woodland)
	
	class CUP_B_MCV80_GB_D_SLAT                { quality = 6; price = 720000; };//			MCV-80 Warrior (SLAT - Desert)
	class CUP_B_MCV80_GB_W_SLAT                { quality = 6; price = 720000; };//			MCV-80 Warrior (SLAT - Woodland)
	class CUP_B_MCV80_GB_D                     { quality = 6; price = 720000; };//			MCV-80 Warrior (Desert)
	class CUP_B_MCV80_GB_W                     { quality = 6; price = 720000; };//			MCV-80 Warrior (Woodland)
	
	class CUP_B_BAF_Coyote_L2A1_D              { quality = 5; price = 120000; };//			Coyote L2A1 (Desert)
	class CUP_B_BAF_Coyote_GMG_D               { quality = 5; price = 120000; };//			Coyote GMG (Desert)
	class CUP_B_BAF_Coyote_GMG_W               { quality = 5; price = 120000; };//			Coyote GMG (Woodland)
	class CUP_B_BAF_Coyote_L2A1_W              { quality = 5; price = 120000; };//			Coyote L2A1 (Woodland)
	
	class CUP_B_Jackal2_GMG_GB_D               { quality = 5; price = 125000; };//			Jackal2 L2A1 Desert
	class CUP_B_Jackal2_GMG_GB_W               { quality = 5; price = 125000; };//			Jackal2 GMG Woodland
	class CUP_B_Jackal2_L2A1_GB_D              { quality = 5; price = 125000; };//			Jackal2 L2A1 Desert
	class CUP_B_Jackal2_L2A1_GB_W              { quality = 5; price = 125000; };//			Jackal2 L2A1 Woodland
	
	class CUP_B_Mastiff_HMG_GB_D               { quality = 5; price = 150000; };//			Mastiff PPV HMG Desert
	class CUP_B_Mastiff_HMG_GB_W               { quality = 5; price = 150000; };//			Mastiff PPV HMG Woodland
	class CUP_B_Mastiff_GMG_GB_D               { quality = 5; price = 150000; };//			Mastiff PPV GMG Desert
	class CUP_B_Mastiff_GMG_GB_W               { quality = 5; price = 150000; };//			Mastiff PPV GMG Woodland
	class CUP_B_Mastiff_LMG_GB_D               { quality = 5; price = 150000; };//			Mastiff PPV LMG Desert
	class CUP_B_Mastiff_LMG_GB_W               { quality = 5; price = 150000; };//			Mastiff PPV LMG Woodland
	
	class CUP_B_Ridgback_HMG_GB_D              { quality = 5; price = 120000; };//			Ridgeback PPV HMG Desert
	class CUP_B_Ridgback_HMG_GB_W              { quality = 5; price = 120000; };//		    Ridgeback PPV HMG Woodland
	class CUP_B_Ridgback_GMG_GB_D              { quality = 5; price = 120000; };//			Ridgeback PPV GMG Desert
	class CUP_B_Ridgback_GMG_GB_W              { quality = 5; price = 120000; };//			Ridgeback PPV GMG Woodland
	class CUP_B_Ridgback_LMG_GB_D              { quality = 5; price = 120000; };//			Ridgeback PPV LMG Desert
	class CUP_B_Ridgback_LMG_GB_W              { quality = 5; price = 120000; };//			Ridgeback PPV LMG Woodland
	
	class CUP_B_FENNEK_GER_Wdl                 { quality = 2; price = 53000; };//			Fennek (Woodland)
	class CUP_B_FENNEK_GER_Des                 { quality = 2; price = 53000; };//			Fennek (Desert)
	
	class CUP_B_Wolfhound_HMG_GB_D             { quality = 5; price = 150000; };//			Wolfhound TSV HMG Desert
	class CUP_B_Wolfhound_HMG_GB_W             { quality = 5; price = 150000; };//			Wolfhound TSV HMG Woodland
	class CUP_B_Wolfhound_GMG_GB_D             { quality = 5; price = 150000; };//			Wolfhound TSV GMG Desert
	class CUP_B_Wolfhound_GMG_GB_W             { quality = 5; price = 150000; };//			Wolfhound TSV GMG Woodland
	class CUP_B_Wolfhound_LMG_GB_D             { quality = 5; price = 150000; };//			Wolfhound TSV LMG Desert
	class CUP_B_Wolfhound_LMG_GB_W             { quality = 5; price = 150000; };//			Wolfhound TSV LMG Woodland
	
//PanzerSchwerSchwimm
	class CUP_B_AAV_USMC                       { quality = 6; price = 612000; };//			AAVP7/A1	BLUFOR	United States Marine Corps	APCs
	class CUP_B_AAV_Unarmed_USMC               { quality = 6; price = 612000; };//			AAVC7/A1 (Command)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_M2Bradley_USA_D                { quality = 6; price = 812000; };//			M2A2 Bradley IFV (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M2Bradley_USA_W                { quality = 6; price = 812000; };//			M2A2 Bradley IFV (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M6LineBacker_USA_D             { quality = 6; price = 812000; };//			M6 Linebacker (Desert)	BLUFOR	United States Army	Anti-Air
	class CUP_B_M6LineBacker_USA_W             { quality = 6; price = 812000; };//			M6 Linebacker (Woodland)	BLUFOR	United States Army	Anti-Air
	class CUP_B_M2A3Bradley_USA_D              { quality = 6; price = 812000; };//			M2A3 ERA Bradley IFV (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M2A3Bradley_USA_W              { quality = 6; price = 812000; };//			M2A3 ERA Bradley IFV (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M7Bradley_USA_D                { quality = 6; price = 852000; };//			M7 Bradley (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M7Bradley_USA_W                { quality = 6; price = 852000; };//			M7 Bradley (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M2Bradley_NATO_T               { quality = 6; price = 852000; };//			M2A2 Bradley IFV	BLUFOR	NATO (Pacific)	APCs
	class CUP_B_M6LineBacker_NATO_T            { quality = 6; price = 852000; };//			M6 Linebacker	BLUFOR	NATO (Pacific)	Anti-Air
	class CUP_B_M2A3Bradley_NATO_T             { quality = 6; price = 852000; };//			M2A3 ERA Bradley IFV	BLUFOR	NATO (Pacific)	APCs
	class CUP_B_Challenger2_Woodland_BAF       { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Woodland)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_2CW_BAF            { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Two Color Woodland)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_Desert_BAF         { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Desert)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_2CD_BAF            { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Two-Color Desert)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_Snow_BAF           { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Snow)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_2CS_BAF            { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Two Color Snow)	BLUFOR	British Armed Forces	Tanks
	class CUP_B_Challenger2_Green_CTRG         { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Green)	BLUFOR	CTRG	Tanks
	class CUP_B_Challenger2_Sand_CTRG          { quality = 6; price = 1200000; };//			FV4034 Challenger 2 (Green)	BLUFOR	CTRG	Tanks
	class CUP_B_Challenger2_NATO               { quality = 6; price = 1200000; };//			FV4034 Challenger 2	BLUFOR	NATO	Tanks
	class CUP_B_Leopard2A6_GER                 { quality = 6; price = 1100000; };//			Leopard 2A6	BLUFOR	Bundeswehr	Tanks
	class CUP_B_Leopard2A6DST_GER              { quality = 6; price = 1100000; };//			Leopard 2A6 (Desert)	BLUFOR	Bundeswehr	Tanks
	class CUP_B_M113_USA                       { quality = 5; price = 412000; };//			M113	BLUFOR	United States Army	APCs
	class CUP_B_M113_desert_USA                { quality = 5; price = 412000; };//			M113A3 (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M113_Med_USA                   { quality = 6; price = 320000; };//			M113A3 Ambulance	BLUFOR	United States Army	APCs
	class CUP_B_M163_USA                       { quality = 6; price = 612000; };//			M163A1 VADS	BLUFOR	United States Army	Anti-Air
	class CUP_B_M1A1_Woodland_US_Army	       { quality = 6; price = 900000; };//		M1A1 Abrams (Woodland)	BLUFOR	United States Army	Tanks
	class CUP_B_M1A1_DES_US_Army               { quality = 6; price = 900000; };//			M1A1 Abrams (Desert)	BLUFOR	United States Army	Tanks
	class CUP_B_M1A2_TUSK_MG_US_Army           { quality = 6; price = 920000; };//			M1A2 Abrams TUSK (Woodland)	BLUFOR	United States Army	Tanks
	class CUP_B_M1A2_TUSK_MG_DES_US_Army       { quality = 6; price = 920000; };//			M1A2 Abrams TUSK (Desert)	BLUFOR	United States Army	Tanks
	class CUP_B_M1A1_Woodland_USMC             { quality = 6; price = 900000; };//			M1A1 Abrams (Woodland)	BLUFOR	United States Marine Corps	Tanks
	class CUP_B_M1A1_DES_USMC                  { quality = 6; price = 900000; };//			M1A1 Abrams (Desert)	BLUFOR	United States Marine Corps	Tanks
	class CUP_B_M1A2_TUSK_MG_USMC              { quality = 6; price = 920000; };//			M1A2 Abrams TUSK (Woodland)	BLUFOR	United States Marine Corps	Tanks
	class CUP_B_M1A2_TUSK_MG_DES_USMC          { quality = 6; price = 920000; };//			M1A2 Abrams TUSK (Desert)	BLUFOR	United States Marine Corps	Tanks
	class CUP_B_M1A1_NATO_T                    { quality = 6; price = 900000; };//			M1A1 Abrams	BLUFOR	NATO (Pacific)	Tanks
	class CUP_B_M1A_TUSK_NATO_T                { quality = 6; price = 900000; };//			M1A2 Abrams TUSK	BLUFOR	NATO (Pacific)	Tanks
	class CUP_B_M60A3_USMC                     { quality = 6; price = 800000; };//			M60A3	BLUFOR	United States Marine Corps	Tanks
	class CUP_B_M60A3_TTS_USMC                 { quality = 6; price = 800000; };//			M60A3 TTS	BLUFOR	United States Marine Corps	Tanks
//Boote
	class CUP_B_RHIB_USMC                      { quality = 6; price = 150000; };//			RHIB	BLUFOR	United States Marine Corps	Boats
	class CUP_B_RHIB2Turret_USMC               { quality = 6; price = 190000; };//			RHIB (Mk19)	BLUFOR	United States Marine Corps	Boats
	class CUP_B_Zodiac_USMC                    { quality = 1; price = 32000; };//			Zodiac	BLUFOR	United States Marine Corps	Boats
//BDRM
	class CUP_B_BRDM2_CDF                      { quality = 4; price = 300000; };//			BRDM-2	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BRDM2_ATGM_CDF                 { quality = 5; price = 400000; };//			BRDM-2 (ATGM)	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BRDM2_HQ_CDF                   { quality = 4; price = 300000; };//			BRDM-2 (HQ)	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BRDM2_CZ                       { quality = 4; price = 300000; };//			BRDM-2	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BRDM2_CZ_Des                   { quality = 5; price = 400000; };//			BRDM-2 (desert)	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BRDM2_HQ_CZ                    { quality = 4; price = 300000; };//			BRDM-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BRDM2_HQ_CZ_Des                { quality = 4; price = 300000; };//			BRDM-2 (HQ)(desert)	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BTR60_CDF                      { quality = 5; price = 400000; };//			BTR-60PB	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BTR60_FIA                      { quality = 5; price = 400000; };//			BTR-60PB	BLUFOR	FIA	APCs
	class CUP_B_Dingo_CZ_Wdl                   { quality = 5; price = 99000; };//			Dingo 2 (MG) (Woodland)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_Dingo_CZ_Des                   { quality = 5; price = 99000; };//			Dingo 2 (MG) (Desert)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_Dingo_GL_CZ_Wdl                { quality = 5; price = 99000; };//			Dingo 2 (GL) (Woodland)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_Dingo_GL_CZ_Des                { quality = 5; price = 99000; };//			Dingo 2 (GL) (Desert)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_Dingo_GER_Wdl                  { quality = 5; price = 99000; };//			Dingo 2 (MG) (Woodland)	BLUFOR	Bundeswehr	Cars
	class CUP_B_Dingo_GER_Des                  { quality = 5; price = 99000; };//			Dingo 2 (MG) (Desert)	BLUFOR	Bundeswehr	Cars
	class CUP_B_Dingo_GL_GER_Wdl               { quality = 5; price = 99000; };//			Dingo 2 (GL) (Woodland)	BLUFOR	Bundeswehr	Cars
	class CUP_B_Dingo_GL_GER_Des               { quality = 5; price = 99000; };//			Dingo 2 (GL) (Desert)	BLUFOR	Bundeswehr	Cars
//HUMMWV
	class CUP_B_HMMWV_Unarmed_USMC             { quality = 1; price = 41000; };//			HMMWV (Unarmed)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_HMMWV_M2_USMC                  { quality = 5; price = 98000; };//			HMMWV M2	BLUFOR	United States Marine Corps	Cars
	class CUP_B_HMMWV_MK19_USMC                { quality = 5; price = 98000; };//			HMMWV (MK19)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_HMMWV_TOW_USMC                 { quality = 5; price = 98000; };//			HMMWV (TOW)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_HMMWV_M1114_USMC               { quality = 5; price = 98000; };//			HMMWV (M240)	BLUFOR	United States Marine Corps	Cars
	//class CUP_B_HMMWV_Avenger_USMC             { quality = 1; price = 12000; };//			HMMWV Avenger	BLUFOR	United States Marine Corps	Anti-Air
	class CUP_B_HMMWV_Ambulance_USMC           { quality = 1; price = 42000; };//			HMMWV (Ambulance)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_HMMWV_Unarmed_USA              { quality = 1; price = 41000; };//			HMMWV (Unarmed)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_M2_USA                   { quality = 5; price = 98000; };//			HMMWV M2	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_MK19_USA                 { quality = 5; price = 98000; };//			HMMWV (MK19)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_TOW_USA                  { quality = 5; price = 98000; };//			HMMWV (TOW)	BLUFOR	United States Army	Cars
	//class CUP_B_HMMWV_Avenger_USA              { quality = 1; price = 12000; };//			HMMWV Avenger	BLUFOR	United States Army	Anti-Air
	class CUP_B_HMMWV_Ambulance_USA            { quality = 1; price = 42000; };//			HMMWV (Ambulance)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_Transport_USA            { quality = 1; price = 42000; };//			HMMWV (Transport)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_M2_GPK_USA               { quality = 5; price = 98000; };//			HMMWV M1151 M2	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_Terminal_USA             { quality = 1; price = 45000; };//			HMMWV UAV Terminal	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_SOV_USA                  { quality = 5; price = 98000; };//			HMMWV SOV (Mk19)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_SOV_M2_USA               { quality = 5; price = 98000; };//			HMMWV SOV (M2)	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_Crows_M2_USA             { quality = 5; price = 98000; };//			HMMWV CROWS M2	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_Crows_MK19_USA           { quality = 5; price = 98000; };//			HMMWV CROWS MK19	BLUFOR	United States Army	Cars
	class CUP_B_HMMWV_Unarmed_NATO_T           { quality = 1; price = 42000; };//			HMMWV (Unarmed)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_M2_NATO_T                { quality = 5; price = 98000; };//			HMMWV M2	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_MK19_NATO_T              { quality = 5; price = 98000; };//			HMMWV (MK19)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_TOW_NATO_T               { quality = 5; price = 98000; };//			HMMWV (TOW)	BLUFOR	NATO (Pacific)	Cars
	//class CUP_B_HMMWV_Avenger_NATO_T           { quality = 1; price = 12000; };//			HMMWV Avenger	BLUFOR	NATO (Pacific)	Anti-Air
	class CUP_B_HMMWV_Ambulance_NATO_T         { quality = 1; price = 42000; };//			HMMWV (Ambulance)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_Transport_NATO_T         { quality = 1; price = 42000; };//			HMMWV (Transport)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_M2_GPK_NATO_T            { quality = 5; price = 100000; };//			HMMWV M1151 M2	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_Terminal_NATO_T          { quality = 1; price = 42000; };//			HMMWV UAV Terminal	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_SOV_NATO_T               { quality = 5; price = 98000; };//			HMMWV SOV (Mk19)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_SOV_M2_NATO_T            { quality = 5; price = 100000; };//			HMMWV SOV (M2)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_Crows_M2_NATO_T          { quality = 5; price = 100000; };//			HMMWV CROWS M2	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_Crows_MK19_NATO_T        { quality = 5; price = 100000; };//			HMMWV CROWS MK19	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_HMMWV_M2_GPK_ACR               { quality = 5; price = 100000; };//			HMMWV M1151 M2	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_HMMWV_DSHKM_GPK_ACR            { quality = 5; price = 100000; };//			HMMWV M1114 DSHKM	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_HMMWV_AGS_GPK_ACR              { quality = 5; price = 100000; };//			HMMWV M1114 AGS	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_HMMWV_Ambulance_ACR            { quality = 1; price = 42000; };//			HMMWV (Ambulance)	BLUFOR	Army of the Czech Republic	Cars
//TRUCK
	class CUP_B_Kamaz_CDF                      { quality = 1; price = 45000; };//			Kamaz 5350	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Kamaz_Open_CDF                 { quality = 1; price = 45000; };//			Kamaz 5350 (Open)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Kamaz_Refuel_CDF               { quality = 5; price = 120000; };//			Kamaz 5350 (Fuel)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Kamaz_Repair_CDF               { quality = 5; price = 120000; };//			Kamaz 5350 (Repair)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Kamaz_Reammo_CDF               { quality = 5; price = 120000; };//			Kamaz 5350 (Ammo)	BLUFOR	Chernarus Defense Forces	Cars
//RADPANZER
	class CUP_B_LAV25_USMC                     { quality = 6; price = 450000; };//			LAV-25A1	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25_desert_USMC              { quality = 6; price = 450000; };//			LAV-25A1 (Desert)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25_green                    { quality = 6; price = 450000; };//			LAV-25A1 (Olive)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25M240_USMC                 { quality = 6; price = 500000; };//			LAV-25A1 (M240)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25M240_desert_USMC          { quality = 6; price = 500000; };//			LAV-25A1 (M240) (Desert)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25M240_green                { quality = 6; price = 500000; };//			LAV-25A1 (M240) (Olive)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25_HQ_USMC                  { quality = 6; price = 550000; };//			LAV-C2	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25_HQ_desert_USMC           { quality = 6; price = 550000; };//			LAV-C2 (Desert)	BLUFOR	United States Marine Corps	APCs
	class CUP_B_LAV25_HQ_green                 { quality = 6; price = 550000; };//			LAV-C2 (Olive)	BLUFOR	United States Marine Corps	APCs
//LANDROVER
	class CUP_B_LR_Transport_CZ_W              { quality = 1; price = 19000; };//			Land Rover 110 (Transport) Woodland	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Transport_CZ_D              { quality = 1; price = 19000; };//			Land Rover 110 (Transport) Desert	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_MG_CZ_W                     { quality = 4; price = 72000; };//			Land Rover 110 (M2) Woodland	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Ambulance_CZ_W              { quality = 1; price = 19000; };//			Land Rover 110 (Ambulance) Woodland	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Ambulance_CZ_D              { quality = 1; price = 19000; };//			Land Rover 110 (Ambulance) Desert	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Special_CZ_W                { quality = 6; price = 82000; };//			Land Rover 110 (Special) Woodland	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Special_Des_CZ_D            { quality = 6; price = 82000; };//			Land Rover 110 (Special) Desert	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_LR_Transport_GB_W              { quality = 1; price = 19000; };//			Land Rover 110 (Transport) Woodland	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Transport_GB_D              { quality = 1; price = 19000; };//			Land Rover 110 (Transport) Desert	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_MG_GB_W                     { quality = 4; price = 72000; };//			Land Rover 110 (M2) Woodland	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_MG_GB_D                     { quality = 4; price = 72000; };//			Land Rover 110 (M2) Desert	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Ambulance_GB_W              { quality = 1; price = 19000; };//			Land Rover 110 (Ambulance) Woodland	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Ambulance_GB_D              { quality = 1; price = 19000; };//			Land Rover 110 (Ambulance) Desert	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Special_M2_GB_W             { quality = 6; price = 82000; };//			Land Rover 110 (M2 Special) Woodland	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Special_M2_GB_D             { quality = 6; price = 82000; };//			Land Rover 110 (M2 Special) Desert	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Special_GMG_GB_W            { quality = 1; price = 52000; };//			Land Rover 110 (GMG Special) Woodland	BLUFOR	British Armed Forces	Cars
	class CUP_B_LR_Special_GMG_GB_D            { quality = 1; price = 52000; };//			Land Rover 110 (GMG Special) Desert	BLUFOR	British Armed Forces	Cars
	class CUP_B_M1030_USMC                     { quality = 1; price = 12000; };//			M1030	BLUFOR	United States Marine Corps	Bikes
//URAL
	class CUP_B_MTVR_USA                       { quality = 1; price = 28000; };//			MTVR	BLUFOR	United States Army	Cars
	class CUP_B_MTVR_Ammo_USA                  { quality = 5; price = 120000; };//			MTVR (Ammo)	BLUFOR	United States Army	Cars	
	class CUP_B_MTVR_Refuel_USA                { quality = 5; price = 120000; };//			MTVR (Refuel)	BLUFOR	United States Army	Cars
	class CUP_B_MTVR_Repair_USA                { quality = 5; price = 120000; };//			MTVR (Repair)	BLUFOR	United States Army	Cars
	class CUP_B_MTVR_USMC                      { quality = 1; price = 28000; };//			MTVR	BLUFOR	United States Marine Corps	Cars
	class CUP_B_MTVR_Ammo_USMC                 { quality = 5; price = 120000; };//			MTVR (Ammo)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_MTVR_Refuel_USMC               { quality = 5; price = 120000; };//			MTVR (Refuel)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_MTVR_Repair_USMC               { quality = 5; price = 120000; };//			MTVR (Repair)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_RG31_M2_USMC                   { quality = 5; price = 120000; };//			RG-31 Nyala M2	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_RG31_M2_OD_USMC                { quality = 5; price = 120000; };//			RG-31 Nyala M2	BLUFOR	United States Marine Corps	Cars
	class CUP_B_RG31_M2_GC_USMC                { quality = 5; price = 120000; };//			RG-31 Nyala M2 GC	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_RG31_M2_OD_GC_USMC             { quality = 5; price = 120000; };//			RG-31 Nyala M2 GC	BLUFOR	United States Marine Corps	Cars
	class CUP_B_RG31_Mk19_USMC                 { quality = 5; price = 120000; };//			RG-31 Mk.19	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_RG31_Mk19_OD_USMC              { quality = 5; price = 120000; };//			RG-31 Mk.19	BLUFOR	United States Marine Corps	Cars
	class CUP_B_RG31E_M2_USMC                  { quality = 5; price = 120000; };//			RG-31 Mk5E M2	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_RG31E_M2_OD_USMC               { quality = 5; price = 120000; };//			RG-31 Mk5E M2	BLUFOR	United States Marine Corps	Cars
	class CUP_B_RG31_M2_USA                    { quality = 5; price = 120000; };//			RG-31 Nyala M2	BLUFOR	United States Army	Cars
	class CUP_B_RG31_M2_OD_USA                 { quality = 5; price = 120000; };//			RG-31 Nyala M2	BLUFOR	United States Army	Cars (Woodland)
	class CUP_B_RG31_M2_GC_USA                 { quality = 5; price = 120000; };//			RG-31 Nyala M2 GC	BLUFOR	United States Army	Cars
	class CUP_B_RG31_M2_OD_GC_USA              { quality = 5; price = 120000; };//			RG-31 Nyala M2 GC	BLUFOR	United States Army	Cars (Woodland)	
	class CUP_B_RG31_Mk19_USA                  { quality = 5; price = 120000; };//			RG-31 Mk.19	BLUFOR	United States Army	Cars
	class CUP_B_RG31_Mk19_OD_USA               { quality = 5; price = 120000; };//			RG-31 Mk.19	BLUFOR	United States Army	Cars (Woodland)
	class CUP_B_RG31E_M2_USA                   { quality = 5; price = 120000; };//			RG-31 Mk5E M2	BLUFOR	United States Army	Cars
	class CUP_B_RG31E_M2_OD_USA                { quality = 5; price = 120000; };//			RG-31 Mk5E M2	BLUFOR	United States Army	Cars (Woodland)
	class CUP_B_M1126_ICV_M2_Desert            { quality = 6; price = 450000; };//			M1126 ICV M2 CROWS (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_M2_Desert_Slat       { quality = 6; price = 450000; };//			M1126 ICV M2 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_M2_Woodland	       { quality = 6; price = 450000; };//		 ICV M2 CROWS (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_M2_Woodland_Slat     { quality = 6; price = 450000; };//			M1126 ICV M2 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_MK19_Desert          { quality = 6; price = 450000; };//			M1126 ICV MK19 CROWS (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_MK19_Desert_Slat     { quality = 6; price = 450000; };//			M1126 ICV MK19 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_MK19_Woodland        { quality = 6; price = 450000; };//			M1126 ICV MK19 CROWS (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1126_ICV_MK19_Woodland_Slat   { quality = 6; price = 450000; };//			M1126 ICV MK19 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1130_CV_M2_Desert             { quality = 6; price = 450000; };//			M1130 CV M2 CROWS (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1130_CV_M2_Desert_Slat        { quality = 6; price = 450000; };//			M1130 CV M2 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1130_CV_M2_Woodland           { quality = 6; price = 450000; };//			M1130 CV M2 CROWS (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1130_CV_M2_Woodland_Slat      { quality = 6; price = 450000; };//			M1130 CV M2 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1129_MC_MK19_Desert           { quality = 6; price = 512000; };//			M1129 MC MK19 CROWS (Desert)	BLUFOR	United States Army	Artillery
	class CUP_B_M1129_MC_MK19_Desert_Slat      { quality = 6; price = 512000; };//			M1129 MC MK19 CROWS (Desert - Slat)	BLUFOR	United States Army	Artillery
	class CUP_B_M1129_MC_MK19_Woodland         { quality = 6; price = 512000; };//			M1129 MC MK19 CROWS (Woodland)	BLUFOR	United States Army	Artillery
	class CUP_B_M1129_MC_MK19_Woodland_Slat    { quality = 6; price = 512000; };//			M1129 MC MK19 CROWS (Woodland - Slat)	BLUFOR	United States Army	Artillery
	class CUP_B_M1135_ATGMV_Desert             { quality = 5; price = 412000; };//			M1135 ATGMV (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1135_ATGMV_Desert_Slat        { quality = 5; price = 412000; };//			M1135 ATGMV (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1135_ATGMV_Woodland           { quality = 5; price = 412000; };//			M1135 ATGMV (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1135_ATGMV_Woodland_Slat      { quality = 5; price = 412000; };//			M1135 ATGMV (Woodland - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1128_MGS_Desert               { quality = 6; price = 512000; };//			M1128 MGS (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1128_MGS_Desert_Slat          { quality = 6; price = 512000; };//			M1128 MGS (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1128_MGS_Woodland             { quality = 6; price = 512000; };//			M1128 MGS (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1128_MGS_Woodland_Slat        { quality = 6; price = 512000; };//			M1128 MGS (Woodland - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1133_MEV_Desert               { quality = 6; price = 212000; };//			M1133 MEV (Desert)	BLUFOR	United States Army	APCs
	class CUP_B_M1133_MEV_Desert_Slat          { quality = 6; price = 212000; };//			M1133 MEV (Desert - Slat)	BLUFOR	United States Army	APCs
	class CUP_B_M1133_MEV_Woodland             { quality = 6; price = 212000; };//			M1133 MEV (Woodland)	BLUFOR	United States Army	APCs
	class CUP_B_M1133_MEV_Woodland_Slat        { quality = 6; price = 212000; };//			M1133 MEV (Woodland - Slat)	BLUFOR	United States Army	APCs

	class CUP_B_M1165_GMV_USA                  { quality = 5; price = 98000; };//			M1165 GMV (M134)	BLUFOR	United States Army	Cars
	class CUP_B_M1151_M2_USA                   { quality = 5; price = 120000; };//			M1151 (M2)	BLUFOR	United States Army	Cars
	class CUP_B_M1151_Deploy_USA               { quality = 5; price = 125000; };//			M1151 (M2) Deployment	BLUFOR	United States Army	Cars
	class CUP_B_M1151_Mk19_USA                 { quality = 5; price = 120000; };//			M1151 (Mk. 19)	BLUFOR	United States Army	
	class CUP_B_M1151_USA                      { quality = 1; price = 43000; };//			M1151 (Unarmed)	BLUFOR	United States Army	Cars
	class CUP_B_M1152_USA                      { quality = 1; price = 43000; };//			M1152 ECV	BLUFOR	United States Army	Cars
	class CUP_B_M1167_USA                      { quality = 5; price = 120000; };//			M1167 (TOW-2)	BLUFOR	United States Army	Cars
	class CUP_B_M1165_GMV_WDL_USA              { quality = 5; price = 120000; };//			M1165 GMV (M134)	BLUFOR	United States Army	Cars (Woodland)
	class CUP_B_M1151_M2_WDL_USA               { quality = 5; price = 125000; };//			M1151 (M2)	BLUFOR	United States Army	Cars (Woodland)	Public
	class CUP_B_M1151_Deploy_WDL_USA           { quality = 5; price = 128000; };//			M1151 (M2) Deployment	BLUFOR	United States Army	Cars (Woodland)	Public
	class CUP_B_M1151_Mk19_WDL_USA             { quality = 5; price = 129000; };//			M1151 (Mk. 19)	BLUFOR	United States Army	Cars (Woodland)	Public
	class CUP_B_M1151_WDL_USA                  { quality = 1; price = 45000; };//			M1151 (Unarmed)	BLUFOR	United States Army	Cars (Woodland)	
	class CUP_B_M1152_WDL_USA                  { quality = 1; price = 45000; };//			M1152 ECV	BLUFOR	United States Army	Cars (Woodland)	
	class CUP_B_M1167_WDL_USA                  { quality = 5; price = 125000; };//			M1167 (TOW-2)	BLUFOR	United States Army	Cars (Woodland)
	class CUP_B_M1165_GMV_USMC                 { quality = 5; price = 120000; };//			M1165 GMV (M134)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1151_M2_USMC                  { quality = 5; price = 120000; };//			M1151 (M2)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1151_Deploy_USMC              { quality = 5; price = 125000; };//			M1151 (M2) Deployment	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1151_Mk19_USMC                { quality = 5; price = 120000; };//			M1151 (Mk. 19)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1151_USMC                     { quality = 1; price = 45000; };//			M1151 (Unarmed)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1152_USMC                     { quality = 1; price = 44000; };//			M1152 ECV	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1167_USMC                     { quality = 5; price = 120000; };//			M1167 (TOW-2)	BLUFOR	United States Marine Corps	Cars
	class CUP_B_M1165_GMV_DSRT_USMC            { quality = 5; price = 120000; };//			M1165 GMV (M134)	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1151_M2_DSRT_USMC             { quality = 5; price = 125000; };//			M1151 (M2)	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1151_Deploy_DSRT_USMC         { quality = 5; price = 129000; };//			M1151 (M2) Deployment	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1151_Mk19_DSRT_USMC           { quality = 5; price = 129000; };//			M1151 (Mk. 19)	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1151_DSRT_USMC                { quality = 1; price = 45000; };//			M1151 (Unarmed)	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1152_DSRT_USMC                { quality = 1; price = 45000; };//			M1152 ECV	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1167_DSRT_USMC                { quality = 5; price = 120000; };//			M1167 (TOW-2)	BLUFOR	United States Marine Corps	Cars (Desert)
	class CUP_B_M1165_GMV_NATO_T               { quality = 5; price = 120000; };//			M1165 GMV (M134)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_M1151_M2_NATO_T                { quality = 1; price = 128000; };//			M1151 (M2)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_M1151_Deploy_NATO_T            { quality = 5; price = 129000; };//			M1151 (M2) Deployment	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_M1151_Mk19_NATO_T              { quality = 5; price = 127000; };//			M1151 (Mk. 19)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_M1151_NATO_T                   { quality = 1; price = 45000; };//			M1151 (Unarmed)	BLUFOR	NATO (Pacific)	Cars
	class CUP_B_M1152_NATO_T                   { quality = 1; price = 45000; };//			M1152 ECV		class CUP_B_M1167_NATO_T	M1167 (TOW-2)	BLUFOR	NATO (Pacific)	Cars
//KAMPFHELI
	class CUP_B_AH64D_DL_USA                   { quality = 6; price = 2905000; };//			AH-64D	BLUFOR	United States Army	Helicopters
	class CUP_B_AH64_DL_USA                    { quality = 6; price = 2900000; };//			AH-64	BLUFOR	United States Army	Helicopters
	class CUP_B_AH1_DL_BAF                     { quality = 6; price = 2800000; };//			AH1	BLUFOR	British Armed Forces	Helicopters
	class CUP_B_MH6M_USA                       { quality = 2; price = 38000; };//			MH-6M MELB	BLUFOR	United States Army	Helicopters
	class CUP_B_MH6J_USA                       { quality = 2; price = 38000; };//			MH-6J Little Bird	BLUFOR	United States Army	Helicopters
	class CUP_B_MH6M_OBS_USA                   { quality = 2; price = 38000; };//			MH-6M Recon	BLUFOR	United States Army	Helicopters
	class CUP_B_MH6J_OBS_USA                   { quality = 2; price = 38000; };//			MH-6J Recon	BLUFOR	United States Army	Helicopters
	class CUP_B_AH6X_USA                       { quality = 2; price = 40000; };//			AH-6X Littlebird ULB	BLUFOR	United States Army	Drones
	class CUP_B_AH6M_USA                       { quality = 6; price = 180000; };//			AH-6M	BLUFOR	United States Army	Helicopters
	class CUP_B_AH6J_USA                       { quality = 6; price = 180000; };//			AH-6J	BLUFOR	United States Army	Helicopters
//JET
	class CUP_B_AV8B_DYN_USMC                  { quality = 6; price = 2820000; };//			AV-8B Harrier II	BLUFOR	United States Marine Corps	Planes
	class CUP_B_GR9_DYN_GB                     { quality = 6; price = 2820000; };//			Harrier GR.9	BLUFOR	British Armed Forces	Planes
	class CUP_B_C130J_USMC                     { quality = 6; price = 212000; };//			C-130J	BLUFOR	United States Marine Corps	Planes
	class CUP_B_C130J_Cargo_USMC               { quality = 6; price = 212000; };//			C-130J (VIV)	BLUFOR	United States Marine Corps	Planes
	class CUP_B_C130J_GB                       { quality = 6; price = 212000; };//			C-130J	BLUFOR	British Armed Forces	Planes
	class CUP_B_C130J_Cargo_GB                 { quality = 6; price = 212000; };//			C-130J (VIV)	BLUFOR	British Armed Forces	Planes
	class CUP_B_C47_USA                        { quality = 6; price = 252000; };//			C-47 Skytrain	BLUFOR	United States Army	Planes
	class CUP_B_AC47_Spooky_USA                { quality = 6; price = 252000; };//			AC-47D Spooky	BLUFOR	United States Army	Planes
	class CUP_B_F35B_USMC                      { quality = 6; price = 2820000; };//			F-35B Lightning II	BLUFOR	United States Marine Corps	Planes
	class CUP_B_F35B_Stealth_USMC              { quality = 6; price = 2820000; };//			F-35B Lightning II (Stealth)	BLUFOR	United States Marine Corps	Planes
	class CUP_B_F35B_BAF                       { quality = 6; price = 2820000; };//			F-35B Lightning II	BLUFOR	British Armed Forces	Planes
	class CUP_B_F35B_Stealth_BAF               { quality = 6; price = 2820000; };//			F-35B Lightning II (Stealth)	BLUFOR	British Armed Forces	Planes
	class CUP_B_MV22_USMC                      { quality = 5; price = 120000; };//			MV-22B Osprey	BLUFOR	United States Marine Corps	Planes
	class CUP_B_MV22_VIV_USMC                  { quality = 5; price = 120000; };//			MV-22B Osprey (VIV)	BLUFOR	United States Marine Corps	Planes
	class CUP_B_MV22_USMC_RAMPGUN              { quality = 5; price = 120000; };//			MV-22B Osprey (Ramp Gun)	BLUFOR	United States Marine Corps	Planes
	class CUP_B_Su25_Dyn_CDF                   { quality = 6; price = 2820000; };//			Su-25 Frogfoot	BLUFOR	Chernarus Defense Forces	Planes
	class CUP_B_SU34_CDF                       { quality = 6; price = 2820000; };//			Su-34	BLUFOR	Chernarus Defense Forces	Planes

//Heli
	class CUP_B_CH47F_USA                      { quality = 5; price = 182000; };//			CH-47F	BLUFOR	United States Army	Helicopters
	class CUP_B_CH47F_VIV_USA                  { quality = 5; price = 182000; };//			CH-47F (VIV)	BLUFOR	United States Army	Helicopters
	class CUP_B_CH47F_GB                       { quality = 5; price = 182000; };//			Chinook HC-4	BLUFOR	British Armed Forces	Helicopters
	class CUP_B_CH47F_VIV_GB                   { quality = 5; price = 182000; };//			Chinook HC-4 (VIV)	BLUFOR	British Armed Forces	Helicopters
	class CUP_B_CH53E_USMC                     { quality = 5; price = 182000; };//			CH-53E Super Stallion	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_CH53E_VIV_USMC                 { quality = 5; price = 182000; };//			CH-53E Super Stallion (VIV)	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_CH53E_GER                      { quality = 5; price = 182000; };//			CH-53G Super Stallion	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_CH53E_VIV_GER                  { quality = 5; price = 182000; };//			CH-53G Super Stallion (VIV)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_MH60S_USMC                     { quality = 5; price = 160000; };//			MH-60S Seahawk	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_MH60S_FFV_USMC                 { quality = 5; price = 160000; };//			MH-60S Seahawk (FFV)	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_SA330_Puma_HC1_BAF             { quality = 5; price = 120000; };//			SA-330 Puma HC1	BLUFOR	British Armed Forces	Helicopters
	class CUP_B_SA330_Puma_HC2_BAF             { quality = 5; price = 120000; };//			SA-330 Puma HC2	BLUFOR	British Armed Forces	Helicopters
	class CUP_B_UH1D_GER_KSK                   { quality = 4; price = 85000; };//			UH-1D	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_slick_GER_KSK             { quality = 6; price = 185000; };//			UH-1D Slick	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_armed_GER_KSK             { quality = 6; price = 180000; };//			UH-1D (Armed)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_gunship_GER_KSK           { quality = 6; price = 200000; };//			UH-1D (Gunship)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_GER_KSK_Des               { quality = 6; price = 180000; };//			UH-1D (Desert)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_slick_GER_KSK_Des         { quality = 5; price = 185000; };//			UH-1D Slick (Desert)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_armed_GER_KSK_Des         { quality = 5; price = 185000; };//			UH-1D Armed (Desert)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1D_gunship_GER_KSK_Des       { quality = 6; price = 200000; };//			UH-1D Gunship (Desert)	BLUFOR	Bundeswehr	Helicopters
	class CUP_B_UH1Y_UNA_USMC                  { quality = 4; price = 85000; };//			UH-1Y Venom Transport	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_UH1Y_MEV_USMC                  { quality = 4; price = 85000; };//			UH-1Y Venom MEV	BLUFOR	United States Marine Corps	Helicopters
	//class CUP_B_UH1Y_Gunship_Dynamic_USMC      { quality = 5; price = 120000; };//			UH-1Y Venom (Gunship)	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_UH60M_US                       { quality = 5; price = 160000; };//			UH-60M	BLUFOR	United States Army	Helicopters
	class CUP_B_MH60L_DAP_4x_US                { quality = 5; price = 188000; };//			MH-60L DAP (4 Stores)	BLUFOR	United States Army	Helicopters
	class CUP_B_MH60L_DAP_2x_US                { quality = 5; price = 172000; };//			MH-60L DAP (2 Stores)	BLUFOR	United States Army	Helicopters
	class CUP_B_UH60M_FFV_US                   { quality = 5; price = 160000; };//			UH-60M (FFV)	BLUFOR	United States Army	Helicopters
	class CUP_B_UH60M_Unarmed_US               { quality = 4; price = 85000; };//			UH-60M (Unarmed)	BLUFOR	United States Army	Helicopters
	class CUP_B_UH60M_Unarmed_FFV_US           { quality = 4; price = 95000; };//			UH-60M (Unarmed/FFV)	BLUFOR	United States Army	Helicopters
	class CUP_B_UH60M_Unarmed_FFV_MEV_US       { quality = 5; price = 120000; };//			UH-60M MEV (Unarmed/FFV)	BLUFOR	United States Army	Helicopters
	class CUP_B_MH60L_DAP_4x_USN               { quality = 6; price = 220000; };//			MH-60S Knighthawk (ESSS x4)	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_MH60L_DAP_2x_USN               { quality = 6; price = 200000; };//			MH-60S Knighthawk (ESSS x2)	BLUFOR	United States Marine Corps	Helicopters
	class CUP_B_UH60S_USN                      { quality = 5; price = 120000; };//			MH-60S Seahawk (M3M)	BLUFOR	United States Marine Corps	Helicopters

	class CUP_B_Merlin_HC3_GB	               { quality = 5; price = 140000; };//		    Merlin HC3
	class CUP_B_Merlin_HC3_VIV_GB	           { quality = 5; price = 140000; };//		    Merlin HC3 (VIV)
	class CUP_B_Merlin_HC3A_GB	               { quality = 5; price = 140000; };//		    Merlin HC3A
	class CUP_B_Merlin_HC3_Armed_GB            { quality = 5; price = 180000; };//			Merlin HC3 (Armed)
	class CUP_B_Merlin_HC3A_Armed_GB           { quality = 5; price = 180000; };//			Merlin HC3A (Armed)
	class CUP_B_Merlin_HC4_GB                  { quality = 2; price = 120000; };//			Merlin HM2
	class CUP_B_AW159_Unarmed_GB               { quality = 5; price = 120000; };//			AW159 Wildcat (Green, Unarmed)
	class CUP_B_AW159_Unarmed_RN_Grey          { quality = 5; price = 120000; };//			AW159 Wildcat (Grey, Unarmed
	class CUP_B_AW159_Unarmed_RN_Blackcat      { quality = 5; price = 130000; };//			AW159 Wildcat (Black Cat, Unarmed)
	class CUP_B_AW159_GB                       { quality = 6; price = 225000; };//			AW159 Wildcat (Green)
	class CUP_B_AW159_RN_Grey                  { quality = 6; price = 225000; };//			AW159 Wildcat (Grey)
	class CUP_B_AW159_RN_Blackcat              { quality = 6; price = 230000; };//			AW159 Wildcat (Black Cat)

//BMP
	class CUP_B_BMP2_CDF                       { quality = 5; price = 412000; };//			BMP-2	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BMP_HQ_CDF                     { quality = 6; price = 450000; };//			BMP-2K	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BMP2_AMB_CDF                   { quality = 5; price = 412000; };//			BMP-2 Ambulance	BLUFOR	Chernarus Defense Forces	APCs
	class CUP_B_BMP2_CZ                        { quality = 5; price = 412000; };//			BVP-2	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BMP2_CZ_Des                    { quality = 5; price = 412000; };//			BVP-2	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BMP_HQ_CZ                      { quality = 6; price = 450000; };//			BVP-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BMP_HQ_CZ_Des                  { quality = 6; price = 450000; };//			BVP-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BMP2_AMB_CZ                    { quality = 5; price = 412000; };//			BVP-2 Ambulance	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_BMP2_AMB_CZ_Des                { quality = 5; price = 412000; };//			BVP-2 Ambulance	BLUFOR	Army of the Czech Republic	APCs
	class CUP_B_FV432_Bulldog_GB_D             { quality = 6; price = 612000; };//			FV432 Bulldog M240 [Desert]	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_Bulldog_GB_W             { quality = 6; price = 612000; };//			FV432 Bulldog M240 [Woodland]	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_Bulldog_GB_D_RWS         { quality = 6; price = 612000; };//			FV432 Bulldog M2 RWS [Desert]	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_Bulldog_GB_W_RWS         { quality = 6; price = 612000; };//			FV432 Bulldog M2 RWS [Woodland]	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_GB_GPMG                  { quality = 5; price = 412000; };//			FV432 GPMG	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_GB_Ambulance             { quality = 6; price = 312000; };//			FV432 Ambulance	BLUFOR	British Armed Forces	APCs
	class CUP_B_FV432_Mortar                   { quality = 6; price = 512000; };//			FV432 Mortar	BLUFOR	British Armed Forces	APCs
	//class CUP_B_M270_HE_USMC                   { quality = 1; price = 12000; };//			M270 MLRS (HE)	BLUFOR	United States Marine Corps	Artillery
	//class CUP_B_M270_DPICM_USMC                { quality = 1; price = 12000; };//			M270 MLRS (DPICM)	BLUFOR	United States Marine Corps	Artillery
	//class CUP_B_M270_HE_USA                    { quality = 1; price = 12000; };//			M270 MLRS (HE)	BLUFOR	United States Army	Artillery
	//class CUP_B_M270_DPICM_USA                 { quality = 1; price = 912000; };//			M270 MLRS (DPICM)	BLUFOR	United States Army	Artillery
	class CUP_B_T72_CDF                        { quality = 6; price = 912000; };//			T-72	BLUFOR	Chernarus Defense Forces	Tanks
	class CUP_B_T72_CZ                         { quality = 6; price = 912000; };//			T-72M4CZ	BLUFOR	Army of the Czech Republic	Tanks
	//class CUP_B_ZSU23_CDF                      { quality = 6; price = 912000; };//			ZSU-23-4	BLUFOR	Chernarus Defense Forces	Anti-Air OP!!!
	//class CUP_B_ZSU23_Afghan_CDF               { quality = 6; price = 912000; };//			ZSU-23-4 Afghanski	BLUFOR	Chernarus Defense Forces	Anti-Air
//
	class CUP_B_Frigate_ANZAC                  { quality = 11; price = 12000000; };//			ANZAC Class Frigate	BLUFOR	Royal New Zealand Navy	Boats
	class CUP_B_UAZ_Unarmed_CDF                { quality = 1; price = 12000; };//			UAZ	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_Open_CDF                   { quality = 1; price = 12000; };//			UAZ (Open)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_MG_CDF                     { quality = 4; price = 72000; };//			UAZ (DShKM)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_AGS30_CDF                  { quality = 4; price = 72000; };//			UAZ (AGS-30)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_SPG9_CDF                   { quality = 4; price = 72000; };//			UAZ (SPG-9)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_METIS_CDF                  { quality = 4; price = 72000; };//			UAZ (Metis-M)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_UAZ_Unarmed_ACR                { quality = 1; price = 12000; };//			UAZ	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_UAZ_Open_ACR                   { quality = 1; price = 12000; };//			UAZ (Open)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_UAZ_MG_ACR                     { quality = 4; price = 72000; };//			UAZ (DShKM)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_UAZ_AGS30_ACR                  { quality = 4; price = 72000; };//			UAZ (AGS-30)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_UAZ_SPG9_ACR                   { quality = 4; price = 72000; };//			UAZ (SPG-9)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_UAZ_METIS_ACR                  { quality = 4; price = 72000; };//			UAZ (Metis-M)	BLUFOR	Army of the Czech Republic	Cars
	class CUP_B_Ural_CDF                       { quality = 1; price = 33000; };//			Ural	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_Open_CDF                  { quality = 1; price = 33000; };//			Ural (Open)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_Refuel_CDF                { quality = 5; price = 120000; };//			Ural (Refuel)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_Repair_CDF                { quality = 5; price = 120000; };//			Ural (Repair)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_Reammo_CDF                { quality = 5; price = 120000; };//			Ural (Ammo)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_Empty_CDF                 { quality = 1; price = 28000; };//			Ural (Empty)	BLUFOR	Chernarus Defense Forces	Cars
	class CUP_B_Ural_ZU23_CDF                  { quality = 5; price = 120000; };//			Ural (ZU-23)	BLUFOR	Chernarus Defense Forces	Anti-Air
	//class CUP_B_BM21_CDF                       { quality = 5; price = 120000; };//			BM-21	BLUFOR	Chernarus Defense Forces	Artillery //OP!!

	class CUP_B_L39_CZ                         { quality = 6; price = 2720000; };//			L-39ZA (Green)	BLUFOR	Army of the Czech Republic	Planes
	class CUP_B_L39_CZ_GREY                    { quality = 6; price = 2720000; };//			L-39ZA (Grey)	BLUFOR	Army of the Czech Republic	Planes

	class CUP_B_MI6A_CDF                       { quality = 1; price = 85000; };//			Mi-6A Hook (VIV)	BLUFOR	Chernarus Defense Forces	Helicopters
	class CUP_B_MI6T_CDF                       { quality = 1; price = 85000; };//			Mi-6T Hook	BLUFOR	Chernarus Defense Forces	Helicopters
	class CUP_B_Mi17_CDF                       { quality = 4; price = 95000; };//			Mi-8MT	BLUFOR	Chernarus Defense Forces	Helicopters
	class CUP_B_Mi17_medevac_CDF               { quality = 3; price = 95000; };//			Mi-8MT Medevac	BLUFOR	Chernarus Defense Forces	Helicopters
	class CUP_B_Mi17_VIV_CDF                   { quality = 3; price = 95000; };//			Mi-8MT (VIV)	BLUFOR	Chernarus Defense Forces	Helicopters
	class CUP_B_Mi171Sh_ACR                    { quality = 6; price = 200000; };//			Mi-171Sh (Rockets)	BLUFOR	Army of the Czech Republic	Helicopters
	class CUP_B_Mi171Sh_Unarmed_ACR            { quality = 3; price = 95000; };//			Mi-171Sh	BLUFOR	Army of the Czech Republic	Helicopters
/////////////////////////////////////////OPFOR////////////////////////////////////////////////////////////////////
	class CUP_O_LCVP_SLA                 { quality = 1; price = 560000; };//	LCVP	OPFOR	Sahrani Liberation Army	Boats	Public		
	class CUP_O_LCVP_VIV_SLA             { quality = 1; price = 560000; };//		LCVP (VIV)	OPFOR	Sahrani Liberation Army	Boats	Public		
	class CUP_O_Volha_SLA                { quality = 1; price = 15000; };//		Volha (Militia)	OPFOR	Sahrani Liberation Army	Cars	Public		
	//class CUP_O_Pchela1T_RU              { quality = 5; price = 150000; };//		Pchela-1T	OPFOR	Armed Forces of the Russian Federation	Drones	Public		
	class CUP_O_MTLB_pk_TKA              { quality = 5; price = 320000; };//		MT-LB LV	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_MTLB_pk_TK_MILITIA       { quality = 5; price = 320000; };//		MT-LB LV	OPFOR	Takistani Militia	APCs	Public		
	class CUP_O_MTLB_pk_ChDKZ            { quality = 5; price = 320000; };//		MT-LB LV	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_MTLB_pk_SLA              { quality = 5; price = 320000; };//		MT-LB LV	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_MTLB_pk_Green_RU         { quality = 5; price = 320000; };//		MT-LB LV (Green)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_MTLB_pk_Green            { quality = 5; price = 320000; };//		MT-LB LV (Green)	OPFOR	Armed Forces of the Russian Federation	APCs
	class CUP_O_MTLB_pk_WDL_RU           { quality = 5; price = 320000; };//		MT-LB LV (Camo)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_MTLB_pk_Winter_RU        { quality = 5; price = 320000; };//		MT-LB LV (Winter)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	//class CUP_O_2S6_RU                   { quality = 5; price = 150000; };//		2S6 Tunguska	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
	//class CUP_O_2S6M_RU                  { quality = 5; price = 150000; };//		2S6M Tunguska-M	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
	class CUP_O_BMP3_RU                  { quality = 6; price = 950000; };//		BMP-3	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BMP3_CSAT_T              { quality = 6; price = 950000; };//		BMP-3	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_M113_TKA	             { quality = 6; price = 412000; };//		OPFOR	Takistani Army	APCs	Public		
	class CUP_O_M113_Med_TKA             { quality = 5; price = 320000; };//		M113A3 Ambulance	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_T90_RU                   { quality = 6; price = 1100000; };//		T-90A	OPFOR	Armed Forces of the Russian Federation	Tanks	Public		
	class CUP_O_BRDM2_CHDKZ              { quality = 5; price = 400000; };//		BRDM-2	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	//class CUP_O_BRDM2_ATGM_CHDKZ         { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_BRDM2_HQ_CHDKZ           { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_BRDM2_SLA                { quality = 5; price = 400000; };//		BRDM-2	OPFOR	Sahrani Liberation Army	APCs	Public		
	//class CUP_O_BRDM2_ATGM_SLA           { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_BRDM2_HQ_SLA             { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_BRDM2_CSAT               { quality = 5; price = 400000; };//		BRDM-2	OPFOR	CSAT	APCs	Public		
	//class CUP_O_BRDM2_ATGM_CSAT          { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	CSAT	APCs	Public		
	class CUP_O_BRDM2_HQ_CSAT            { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	CSAT	APCs	Public		
	class CUP_O_BRDM2_CSAT_T             { quality = 5; price = 400000; };//		BRDM-2	OPFOR	CSAT (Pacific)	APCs	Public		
	//class CUP_O_BRDM2_ATGM_CSAT_T        { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BRDM2_HQ_CSAT_T          { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BRDM2_RUS                { quality = 5; price = 400000; };//		BRDM-2	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	//class CUP_O_BRDM2_ATGM_RUS           { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BRDM2_HQ_RUS             { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BRDM2_TKA                { quality = 5; price = 400000; };//		BRDM-2	OPFOR	Takistani Army	APCs	Public		
	//class CUP_O_BRDM2_ATGM_TKA           { quality = 5; price = 150000; };//		BRDM-2 (ATGM)	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BRDM2_HQ_TKA             { quality = 5; price = 250000; };//		BRDM-2 (HQ)	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BTR40_MG_TKM             { quality = 5; price = 150000; };//		BTR-40 (DSHKM)	OPFOR	Takistani Militia	APCs	Public		
	class CUP_O_BTR40_TKM                { quality = 5; price = 100000; };//		BTR-40 (Unarmed)	OPFOR	Takistani Militia	APCs	Public		
	class CUP_O_BTR40_MG_TKA             { quality = 5; price = 150000; };//		BTR-40 (DSHKM)	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BTR40_TKA                { quality = 5; price = 100000; };//		BTR-40 (Unarmed)	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BTR60_TK                 { quality = 5; price = 450000; };//		BTR-60PB	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BTR60_SLA                { quality = 5; price = 450000; };//		BTR-60PB	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_BTR60_CSAT               { quality = 5; price = 450000; };//		BTR-60PB	OPFOR	CSAT	APCs	Public		
	class CUP_O_BTR60_RU                 { quality = 5; price = 450000; };//		BTR-60PB (Woodland)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BTR60_Green_RU           { quality = 5; price = 450000; };//		BTR-60PB (Green)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BTR60_Winter_RU          { quality = 5; price = 450000; };//		BTR-60PB (Winter)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BTR60_CHDKZ              { quality = 5; price = 450000; };//		BTR-60PB	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_BTR90_RU                 { quality = 6; price = 500000; };//		BTR-90	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BTR90_HQ_RU              { quality = 6; price = 500000; };//		BTR-90 (HQ)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_Kamaz_RU                 { quality = 1; price = 50000; };//		Kamaz 5350	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Kamaz_Open_RU            { quality = 2; price = 50000; };//		Kamaz 5350 (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Kamaz_Repair_RU          { quality = 5; price = 150000; };//		Kamaz 5350 (Repair)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Kamaz_Reammo_RU          { quality = 5; price = 150000; };//		Kamaz 5350 (Ammo)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Kamaz_Refuel_RU          { quality = 5; price = 150000; };//		Kamaz 5350 (Fuel)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_LR_Transport_TKA         { quality = 1; price = 19000; };//		Land Rover 110 (Transport)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_LR_MG_TKA                { quality = 2; price = 72000; };//		Land Rover 110 (M2)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_LR_Ambulance_TKA         { quality = 1; price = 19000; };//		Land Rover 110 (Ambulance)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_LR_SPG9_TKA              { quality = 1; price = 72000; };//		Land Rover 110 (SPG-9)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_LR_Transport_TKM         { quality = 1; price = 19000; };//		Land Rover 110 (Transport)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_LR_MG_TKM                { quality = 2; price = 72000; };//		Land Rover 110 (M2)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_LR_SPG9_TKM              { quality = 1; price = 72000; };//		Land Rover 110 (SPG-9)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_TowingTractor_RU         { quality = 1; price = 15000; };//		Towing Tractor	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_TowingTractor_CSAT       { quality = 1; price = 15000; };//		Towing Tractor	OPFOR	CSAT	Cars	Public		
	class CUP_O_GAZ_Vodnik_PK_RU         { quality = 6; price = 190000; };//		GAZ Vodnik (2x PKM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_GAZ_Vodnik_BPPU_RU       { quality = 6; price = 290000; };//		GAZ Vodnik (BPPU)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_GAZ_Vodnik_MedEvac_RU    { quality = 3; price = 70000; };//		GAZ Vodnik (Medical)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_GAZ_Vodnik_AGS_RU        { quality = 4; price = 190000; };//		GAZ Vodnik (AGS-30/PKM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_C130J_TKA                { quality = 5; price = 250000; };//		C-130J	OPFOR	Takistani Army	Planes	Public		
	class CUP_O_C130J_Cargo_TKA          { quality = 5; price = 250000; };//		C-130J (VIV)	OPFOR	Takistani Army	Planes	Public		
	class CUP_O_C47_SLA                  { quality = 5; price = 150000; };//		Li-2	OPFOR	Sahrani Liberation Army	Planes	Public					
	class CUP_O_Ka50_DL_SLA              { quality = 6; price = 2905000; };//		Ka-50 Black Shark	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_Ka50_DL_RU               { quality = 6; price = 2905000; };//		Ka-50 Black Shark	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Ka52_RU                  { quality = 6; price = 2905000; };//		Ka-52	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Su25_Dyn_TKA             { quality = 6; price = 2905000; };//		Su-25 Frogfoot	OPFOR	Takistani Army	Planes	Public		
	class CUP_O_Su25_Dyn_SLA	         { quality = 6; price = 2905000; };//	Su-25 Frogfoot	OPFOR	Sahrani Liberation Army	Planes	Public		
	class CUP_O_Su25_Dyn_CSAT_T          { quality = 6; price = 2905000; };//		Su-25 Frogfoot	OPFOR	CSAT (Pacific)	Planes	Public		
	class CUP_O_Su25_Dyn_RU              { quality = 6; price = 2905000; };//		Su-25T Frogfoot	OPFOR	Armed Forces of the Russian Federation	Planes	Public		
	class CUP_O_SU34_CSAT                { quality = 6; price = 2905000; };//		Su-34	OPFOR	CSAT	Planes	Public		
	class CUP_O_SU34_RU                  { quality = 6; price = 2905000; };//		Su-34	OPFOR	Armed Forces of the Russian Federation	Planes	Public		
	class CUP_O_SU34_SLA                 { quality = 6; price = 2905000; };//		Su-34	OPFOR	Sahrani Liberation Army	Planes	Public		
	class CUP_O_UH1H_TKA                 { quality = 5; price = 150000; };//		UH-1H	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_UH1H_slick_TKA           { quality = 5; price = 150000; };//		UH-1H (Slick)	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_UH1H_armed_TKA           { quality = 6; price = 180000; };//		UH-1H (Armed)	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_UH1H_gunship_TKA         { quality = 6; price = 220000; };//		UH-1H (Gunship)	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_UH1H_SLA                 { quality = 5; price = 150000; };//		UH-1H	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_UH1H_slick_SLA           { quality = 5; price = 150000; };//		UH-1H (Slick)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_UH1H_armed_SLA           { quality = 5; price = 180000; };//		UH-1H (Armed)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_UH1H_gunship_SLA         { quality = 6; price = 220000; };//		UH-1H (Gunship)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_BMP1_TKA                 { quality = 6; price = 412000; };//		BMP-1	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BMP1P_TKA                { quality = 6; price = 450000; };//		BMP-1P	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BMP2_TKA                 { quality = 6; price = 412000; };//		BMP-2	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BMP_HQ_TKA               { quality = 6; price = 550000; };//		BMP-2K	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BMP2_AMB_TKA             { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	Takistani Army	APCs	Public					
	class CUP_O_BMP2_ZU_TKA              { quality = 6; price = 412000; };//		BMP-2 ZU-23	OPFOR	Takistani Army	APCs	Public		
	class CUP_O_BMP2_RU                  { quality = 6; price = 412000; };//		BMP-2	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BMP_HQ_RU                { quality = 6; price = 550000; };//		BMP-2K	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
	class CUP_O_BMP2_AMB_RU              { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	Armed Forces of the Russian Federation	APCs	Public					
	class CUP_O_BMP2_CHDKZ               { quality = 6; price = 412000; };//		BMP-2	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_BMP_HQ_CHDKZ             { quality = 6; price = 550000; };//		BMP-2K	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
	class CUP_O_BMP2_AMB_CHDKZ           { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	Chernarussian Movement of the Red Star	APCs	Public					
	class CUP_O_BMP2_SLA                 { quality = 6; price = 412000; };//		BMP-2	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_BMP_HQ_sla               { quality = 6; price = 550000; };//		BMP-2K	OPFOR	Sahrani Liberation Army	APCs	Public		
	class CUP_O_BMP2_AMB_sla             { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	Sahrani Liberation Army	APCs	Public					
	class CUP_O_BMP1_CSAT                { quality = 6; price = 412000; };//		BMP-1	OPFOR	CSAT	APCs	Public		
	class CUP_O_BMP1P_CSAT               { quality = 6; price = 450000; };//		BMP-1P	OPFOR	CSAT	APCs	Public		
	class CUP_O_BMP2_CSAT                { quality = 6; price = 412000; };//		BMP-2	OPFOR	CSAT	APCs	Public		
	class CUP_O_BMP_HQ_CSAT              { quality = 6; price = 550000; };//		BMP-2K	OPFOR	CSAT	APCs	Public		
	class CUP_O_BMP2_AMB_CSAT            { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	CSAT	APCs	Public					
	class CUP_O_BMP2_ZU_CSAT             { quality = 6; price = 412000; };//		BMP-2 ZU-23	OPFOR	CSAT	APCs	Public		
	class CUP_O_BMP1_CSAT_T              { quality = 6; price = 412000; };//		BMP-1	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BMP1P_CSAT_T             { quality = 6; price = 450000; };//		BMP-1P	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BMP2_CSAT_T              { quality = 6; price = 412000; };//		BMP-2	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BMP_HQ_CSAT_T            { quality = 6; price = 550000; };//		BMP-2K	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_BMP2_AMB_CSAT_T          { quality = 6; price = 412000; };//		BMP-2 Ambulance	OPFOR	CSAT (Pacific)	APCs	Public					
	class CUP_O_BMP2_ZU_CSAT_T           { quality = 6; price = 412000; };//		BMP-2 ZU-23	OPFOR	CSAT (Pacific)	APCs	Public		
	class CUP_O_T72_SLA                  { quality = 6; price = 1100000; };//		T-72	OPFOR	Sahrani Liberation Army	Tanks	Public		
	class CUP_O_T72_CSAT                 { quality = 6; price = 1100000; };//		T-72	OPFOR	CSAT	Tanks	Public		
	class CUP_O_T72_CSAT_T               { quality = 6; price = 1100000; };//		T-72	OPFOR	CSAT (Pacific)	Tanks	Public		
	class CUP_O_T72_TKA                  { quality = 6; price = 1100000; };//		T-72	OPFOR	Takistani Army	Tanks	Public		
	class CUP_O_T72_RU                   { quality = 6; price = 1100000; };//		T-72	OPFOR	Armed Forces of the Russian Federation	Tanks	Public		
	class CUP_O_T72_CHDKZ                { quality = 6; price = 1100000; };//		T-72	OPFOR	Chernarussian Movement of the Red Star	Tanks	Public		
	//class CUP_O_ZSU23_ChDKZ              { quality = 5; price = 150000; };//		ZSU-23-4	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
	//class CUP_O_ZSU23_TK                 { quality = 5; price = 150000; };//		ZSU-23-4	OPFOR	Takistani Army	Anti-Air	Public		
	//class CUP_O_ZSU23_SLA                { quality = 5; price = 150000; };//		ZSU-23-4	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
	//class CUP_O_ZSU23_CSAT               { quality = 5; price = 150000; };//		ZSU-23-4	OPFOR	CSAT	Anti-Air	Public		
	//class CUP_O_ZSU23_Afghan_ChDKZ       { quality = 5; price = 150000; };//		ZSU-23-4 Afghanski	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
	//class CUP_O_ZSU23_Afghan_TK          { quality = 5; price = 150000; };//		ZSU-23-4 Afghanski	OPFOR	Takistani Army	Anti-Air	Public		
	//class CUP_O_ZSU23_Afghan_SLA         { quality = 5; price = 150000; };//		ZSU-23-4 Afghanski	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
	//class CUP_O_ZSU23_Afghan_CSAT        { quality = 5; price = 150000; };//		ZSU-23-4 Afghanski	OPFOR	CSAT	Anti-Air	Public		
	class CUP_O_PBX_RU                   { quality = 2; price = 45000; };//		PBX	OPFOR	Armed Forces of the Russian Federation	Boats	Public					
	class CUP_O_PBX_SLA                  { quality = 2; price = 45000; };//		PBX	OPFOR	Sahrani Liberation Army	Boats	Public					
	class CUP_O_Datsun_PK                { quality = 5; price = 80000; };//		Datsun 620 Pickup (PK)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Datsun_PK_Random         { quality = 5; price = 50000; };//		Datsun 620 Pickup (PK) Woodland	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Datsun_4seat             { quality = 5; price = 50000; };//		Datsun 620 Pickup Woodland	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_SUV_TKA                  { quality = 5; price = 50000; };//		SUV	OPFOR	Takistani Army	Cars	Public		
	//class CUP_O_Tractor_Old_CHDKZ        { quality = 5; price = 1500; };//		Towing Tractor	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	//class CUP_O_Tractor_SLA              { quality = 5; price = 150000; };//		Towing Tractor	OPFOR	Sahrani Liberation Army	Cars	Public		
	//class CUP_O_Tractor_Old_TKA          { quality = 5; price = 150000; };//		Towing Tractor	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_TT650_CHDKZ	             { quality = 3; price = 15000; };//	TT650	OPFOR	Chernarussian Movement of the Red Star	Bikes	Public		
	class CUP_O_TT650_TKA                { quality = 3; price = 15000; };//		TT650	OPFOR	Takistani Army	Bikes	Public		
	class CUP_O_UAZ_Unarmed_CHDKZ        { quality = 1; price = 15000; };//		UAZ	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_Open_CHDKZ           { quality = 1; price = 15000; };//		UAZ (Open)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_MG_CHDKZ             { quality = 3; price = 72000; };//		UAZ (DShKM)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_AGS30_CHDKZ          { quality = 5; price = 72000; };//		UAZ (AGS-30)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_SPG9_CHDKZ           { quality = 5; price = 72000; };//		UAZ (SPG-9)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_METIS_CHDKZ          { quality = 5; price = 72000; };//		UAZ (Metis-M)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_UAZ_Unarmed_SLA          { quality = 1; price = 15000; };//		UAZ	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_Militia_SLA          { quality = 2; price = 15000; };//		UAZ (Militia)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_Open_SLA	         { quality = 2; price = 15000; };//	 (Open)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_MG_SLA	             { quality = 5; price = 72000; };//	 (DShKM)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_AGS30_SLA            { quality = 5; price = 72000; };//		UAZ (AGS-30)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_SPG9_SLA             { quality = 5; price = 72000; };//		UAZ (SPG-9)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_METIS_SLA            { quality = 5; price = 72000; };//		UAZ (Metis-M)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_UAZ_Unarmed_CSAT         { quality = 1; price = 15000; };//		UAZ	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_Militia_CSAT         { quality = 2; price = 15000; };//		UAZ (Militia)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_Open_CSAT            { quality = 2; price = 15000; };//		UAZ (Open)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_MG_CSAT              { quality = 3; price = 72000; };//		UAZ (DShKM)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_AGS30_CSAT           { quality = 3; price = 72000; };//		UAZ (AGS-30)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_SPG9_CSAT            { quality = 3; price = 72000; };//		UAZ (SPG-9)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_METIS_CSAT           { quality = 3; price = 72000; };//		UAZ (Metis-M)	OPFOR	CSAT	Cars	Public		
	class CUP_O_UAZ_Unarmed_RU           { quality = 1; price = 15000; };//		UAZ	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_Open_RU              { quality = 1; price = 15000; };//		UAZ (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_MG_RU                { quality = 3; price = 72000; };//		UAZ (DShKM)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_AGS30_RU             { quality = 3; price = 72000; };//		UAZ (AGS-30)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_SPG9_RU              { quality = 3; price = 72000; };//		UAZ (SPG-9)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_METIS_RU             { quality = 3; price = 72000; };//		UAZ (Metis-M)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_AMB_RU               { quality = 3; price = 72000; };//		UAZ (Medevac)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_UAZ_Unarmed_TKA          { quality = 1; price = 15000; };//		UAZ	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_UAZ_Open_TKA             { quality = 1; price = 15000; };//		UAZ (Open)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_UAZ_MG_TKA               { quality = 3; price = 72000; };//		UAZ (DShKM)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_UAZ_AGS30_TKA            { quality = 3; price = 72000; };//		UAZ (AGS-30)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_UAZ_SPG9_TKA             { quality = 3; price = 72000; };//		UAZ (SPG-9)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_UAZ_METIS_TKA            { quality = 3; price = 72000; };//		UAZ (Metis-M)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_RU                  { quality = 1; price = 45000; };//		Ural	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_Open_RU             { quality = 1; price = 45000; };//		Ural (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_Refuel_RU           { quality = 5; price = 120000; };//		Ural (Refuel)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_Repair_RU           { quality = 5; price = 120000; };//		Ural (Repair)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_Reammo_RU           { quality = 5; price = 120000; };//		Ural (Ammo)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_Empty_RU            { quality = 5; price = 45000; };//		Ural (Empty)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
	class CUP_O_Ural_ZU23_RU             { quality = 5; price = 250000; };//		Ural (ZU-23)	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
	//class CUP_O_BM21_RU                  { quality = 5; price = 150000; };//		BM-21	OPFOR	Armed Forces of the Russian Federation	Artillery	Public		
	class CUP_O_Ural_CHDKZ               { quality = 1; price = 45000; };//		Ural	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_Open_CHDKZ          { quality = 1; price = 45000; };//		Ural (Open)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_Refuel_CHDKZ        { quality = 5; price = 120000; };//		Ural (Refuel)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_Repair_CHDKZ        { quality = 5; price = 120000; };//		Ural (Repair)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_Reammo_CHDKZ        { quality = 5; price = 120000; };//		Ural (Ammo)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_Empty_CHDKZ         { quality = 1; price = 45000; };//	Ural (Empty)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
	class CUP_O_Ural_ZU23_CHDKZ          { quality = 5; price = 250000; };//		Ural (ZU-23)	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
	//class CUP_O_BM21_CHDKZ               { quality = 5; price = 150000; };//		BM-21	OPFOR	Chernarussian Movement of the Red Star	Artillery	Public		
	class CUP_O_Ural_TKA	             { quality = 1; price = 45000; };//		OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_Open_TKA            { quality = 1; price = 45000; };//		Ural (Open)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_Refuel_TKA          { quality = 5; price = 120000; };//		Ural (Refuel)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_Repair_TKA          { quality = 5; price = 120000; };//		Ural (Repair)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_Reammo_TKA          { quality = 5; price = 120000; };//		Ural (Ammo)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_Empty_TKA           { quality = 1; price = 45000; };//		Ural (Empty)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_Ural_ZU23_TKA            { quality = 5; price = 650000; };//		Ural (ZU-23)	OPFOR	Takistani Army	Anti-Air	Public		
	//class CUP_O_BM21_TKA                 { quality = 5; price = 150000; };//		BM-21		OPFOR	Takistani Army	Artillery	Public		
	class CUP_O_Ural_ZU23_TKM            { quality = 6; price = 120000; };//		Ural (ZU-23)	OPFOR	Takistani Militia	Anti-Air	Public		
	class CUP_O_Ural_SLA	             { quality = 2; price = 45000; };//		OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_Open_SLA            { quality = 2; price = 45000; };//		Ural (Open)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_Refuel_SLA          { quality = 5; price = 120000; };//		Ural (Refuel)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_Repair_SLA          { quality = 5; price = 120000; };//		Ural (Repair)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_Reammo_SLA          { quality = 5; price = 120000; };//		Ural (Ammo)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_Empty_SLA           { quality = 2; price = 45000; };//		Ural (Empty)	OPFOR	Sahrani Liberation Army	Cars	Public		
	class CUP_O_Ural_ZU23_SLA            { quality = 6; price = 150000; };//		Ural (ZU-23)	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
	//class CUP_O_BM21_SLA                 { quality = 5; price = 150000; };//		BM-21	OPFOR	Sahrani Liberation Army	Artillery	Public		
	class CUP_O_V3S_Open_TKA             { quality = 1; price = 41000; };//		Praga V3S	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_V3S_Covered_TKA          { quality = 1; price = 41000; };//		Praga V3S (Covered)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_V3S_Refuel_TKA           { quality = 5; price = 110000; };//		Praga V3S (Refuel)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_V3S_Repair_TKA           { quality = 5; price = 110000; };//		Praga V3S (Repair)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_V3S_Rearm_TKA            { quality = 5; price = 110000; };//		Praga V3S (Rearm)	OPFOR	Takistani Army	Cars	Public		
	class CUP_O_V3S_Open_TKM             { quality = 1; price = 41000; };//		Praga V3S	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_V3S_Covered_TKM          { quality = 1; price = 41000; };//		Praga V3S (Covered)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_V3S_Refuel_TKM           { quality = 5; price = 110000; };//		Praga V3S (Refuel)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_V3S_Repair_TKM           { quality = 5; price = 110000; };//		Praga V3S (Repair)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_V3S_Rearm_TKM            { quality = 5; price = 110000; };//		Praga V3S (Rearm)	OPFOR	Takistani Militia	Cars	Public		
	class CUP_O_AN2_TK                   { quality = 5; price = 150000; };//		Antonov An-2	OPFOR	Takistani Army	Planes	Public					
	class CUP_O_Ka60_GL_Hex_CSAT         { quality = 6; price = 250000; };//		Ka-60 Kasatka Hex (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
	class CUP_O_Ka60_Hex_CSAT            { quality = 6; price = 250000; };//		Ka-60 Kasatka Hex (Rockets)	OPFOR	CSAT	Helicopters	Public					
	class CUP_O_Ka60_GL_Blk_CSAT         { quality = 6; price = 250000; };//		Ka-60 Kasatka Black (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
	class CUP_O_Ka60_Blk_CSAT            { quality = 6; price = 250000; };//		Ka-60 Kasatka Black (Rockets)	OPFOR	CSAT	Helicopters	Public					
	class CUP_O_Ka60_GL_Whale_CSAT       { quality = 6; price = 250000; };//		Ka-60 Kasatka Whale (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
	class CUP_O_Ka60_Whale_CSAT          { quality = 6; price = 250000; };//		Ka-60 Kasatka Whale (Rockets)	OPFOR	CSAT	Helicopters	Public					
	class CUP_O_Ka60_Grey_RU             { quality = 6; price = 250000; };//		Ka-60 Kasatka Grey (Rockets)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
	class CUP_O_L39_TK                   { quality = 6; price = 2500000; };//		L-39ZA	OPFOR	Takistani Army	Planes	Public		
	//class CUP_O_Mi24_P_Dynamic_RU        { quality = 5; price = 150000; };//		Mi-24P	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	//class CUP_O_Mi24_V_Dynamic_RU        { quality = 5; price = 150000; };//		Mi-24V	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	//class CUP_O_Mi24_D_Dynamic_CSAT_T    { quality = 5; price = 150000; };//		Mi-24D	OPFOR	CSAT (Pacific)	Helicopters	Public		
	//class CUP_O_Mi24_P_Dynamic_CSAT_T    { quality = 5; price = 150000; };//		Mi-24P	OPFOR	CSAT (Pacific)	Helicopters	Public		
	//class CUP_O_Mi24_V_Dynamic_CSAT_T    { quality = 5; price = 150000; };//		Mi-24V	OPFOR	CSAT (Pacific)	Helicopters	Public		
	//class CUP_O_Mi24_D_Dynamic_TK        { quality = 5; price = 150000; };//		Mi-24D	OPFOR	Takistani Army	Helicopters	Public		
	//class CUP_O_Mi24_D_Dynamic_SLA       { quality = 5; price = 150000; };//		Mi-24D	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_Mi24_Mk3_CSAT_T          { quality = 6; price = 2990000; };//		Mi-24 Superhind Mk.III	OPFOR	CSAT (Pacific)	Helicopters	Public		
	class CUP_O_Mi24_Mk4_CSAT_T          { quality = 6; price = 2990000; };//		Mi-24 Superhind Mk.IV (S8)	OPFOR	CSAT (Pacific)	Helicopters	Public		
	class CUP_O_MI6A_CHDKZ               { quality = 3; price = 85000; };//		Mi-6A Hook (VIV)	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public					
	class CUP_O_MI6T_CHDKZ               { quality = 3; price = 85000; };//		Mi-6T Hook	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public					
	class CUP_O_MI6A_TKA                 { quality = 3; price = 85000; };//		Mi-6A Hook (VIV)	OPFOR	Takistani Army	Helicopters	Public					
	class CUP_O_MI6T_TKA                 { quality = 3; price = 85000; };//		Mi-6T Hook	OPFOR	Takistani Army	Helicopters	Public					
	class CUP_O_MI6T_SLA                 { quality = 3; price = 85000; };//		Mi-6T Hook	OPFOR	Sahrani Liberation Army	Helicopters	Public					
	class CUP_O_MI6A_SLA                 { quality = 3; price = 85000; };//		Mi-6A Hook (VIV)	OPFOR	Sahrani Liberation Army	Helicopters	Public					
	class CUP_O_MI6A_RU                  { quality = 3; price = 85000; };//		Mi-6A Hook (VIV)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
	class CUP_O_MI6T_RU                  { quality = 3; price = 95000; };//		Mi-6T Hook	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
	class CUP_O_MI6A_CSAT_T              { quality = 3; price = 95000; };//		Mi-6A Hook (VIV)	OPFOR	CSAT (Pacific)	Helicopters	Public					
	class CUP_O_MI6T_CSAT_T              { quality = 3; price = 95000; };//		Mi-6T Hook	OPFOR	CSAT (Pacific)	Helicopters	Public					
	class CUP_O_Mi8_CHDKZ                { quality = 3; price = 95000; };//		Mi-8MT	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
	class CUP_O_Mi8_medevac_CHDKZ        { quality = 3; price = 95000; };//		Mi-8MT Medevac	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
	class CUP_O_Mi8_VIV_CHDKZ            { quality = 3; price = 95000; };//		Mi-8MT (VIV)	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
	class CUP_O_Mi17_TK                  { quality = 3; price = 95000; };//		Mi-8MT	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_Mi17_VIV_TK              { quality = 3; price = 95000; };//		Mi-8MT (VIV)	OPFOR	Takistani Army	Helicopters	Public		
	class CUP_O_Mi8_medevac_RU           { quality = 5; price = 185000; };//		Mi-8AMT Medevac	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Mi8_VIV_RU               { quality = 5; price = 185000; };//		Mi-8AMT (VIV)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Mi8_RU                   { quality = 6; price = 210000; };//		Mi-8MTV3	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Mi8AMT_RU                { quality = 5; price = 185000; };//		Mi-8AMT	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
	class CUP_O_Mi8_SLA_1                { quality = 5; price = 185000; };//		Mi-8MT	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_Mi8_SLA_2                { quality = 6; price = 240000; };//		Mi-8MTV3	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_Mi8_VIV_SLA              { quality = 5; price = 95000; };//		Mi-8AMT (VIV)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	class CUP_O_T34_TKA                  { quality = 6; price = 950000; };//		T-34-85M	OPFOR	Takistani Army	Tanks	Public		
	class CUP_O_T55_TK                   { quality = 6; price = 1100000; };//		T-55	OPFOR	Takistani Army	Tanks	Public		
	class CUP_O_T55_CHDKZ                { quality = 6; price = 1100000; };//		T-55	OPFOR	Chernarussian Movement of the Red Star	Tanks	Public		
	class CUP_O_T55_SLA                  { quality = 6; price = 1100000; };//		T-55	OPFOR	Sahrani Liberation Army	Tanks	Public		
	class CUP_O_T55_CSAT                 { quality = 6; price = 1100000; };//		T-55	OPFOR	CSAT	Tanks	Public		
	class CUP_O_T55_CSAT_T               { quality = 6; price = 1100000; };//		T-55	OPFOR	CSAT (Pacific)	Tanks	Public	
	//WAFFEN
	class CUP_arifle_AK74									{ quality = 1; price = 1900; };
	class CUP_arifle_AK107									{ quality = 1; price = 2900; };
	class CUP_arifle_AK107_GL								{ quality = 1; price = 3400; };
	class CUP_arifle_AKS74									{ quality = 1; price = 1900; };
	class CUP_arifle_AKS74U									{ quality = 1; price = 1900; };
	class CUP_arifle_AK74_GL								{ quality = 1; price = 1400; };
	class CUP_arifle_AKM									{ quality = 1; price = 1900; };
	class CUP_arifle_AKS									{ quality = 1; price = 2400; };
	class CUP_arifle_AKS_Gold								{ quality = 3; price = 4200; };
	class CUP_arifle_RPK74									{ quality = 3; price = 2350; };
	class CUP_arifle_CZ805_A2								{ quality = 3; price = 4200; };
	class CUP_arifle_FNFAL_railed							{ quality = 4; price = 4500; };
	class CUP_arifle_G36A									{ quality = 3; price = 4200; };
	class CUP_arifle_G36A_camo								{ quality = 3; price = 4200; };
	class CUP_arifle_G36K									{ quality = 3; price = 4200; };
	class CUP_arifle_G36K_camo								{ quality = 3; price = 4200; };
	class CUP_arifle_G36C									{ quality = 3; price = 4200; };
	class CUP_arifle_G36C_camo								{ quality = 3; price = 4200; };
	class CUP_arifle_MG36									{ quality = 3; price = 1800; };
	class CUP_arifle_MG36_camo								{ quality = 3; price = 1800; };
	class CUP_arifle_L85A2									{ quality = 1; price = 1800; };
	class CUP_arifle_L85A2_GL								{ quality = 1; price = 1900; };
	class CUP_arifle_L86A2									{ quality = 3; price = 4200; };
	class CUP_arifle_M16A2									{ quality = 1; price = 1900; };
	class CUP_arifle_M16A2_GL								{ quality = 3; price = 4200; };
	class CUP_arifle_M16A4_GL								{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1									{ quality = 1; price = 1900; };
	class CUP_arifle_M4A1_camo								{ quality = 1; price = 1900; };
	class CUP_arifle_M16A4_Base								{ quality = 3; price = 4200; };
	class CUP_arifle_M16A4GL								{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1_BUIS_GL							{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1_BUIS_camo_GL						{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1_BUIS_desert_GL					{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1_black								{ quality = 1; price = 1900; };
	class CUP_arifle_M4A1_desert							{ quality = 1; price = 1900; };
	class CUP_arifle_Sa58P									{ quality = 1; price = 1800; };
	class CUP_arifle_Sa58V									{ quality = 1; price = 1800; };
	class CUP_arifle_Mk16_CQC								{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Compact_Rail						{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Railed								{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Carbine							{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Carbine_FG							{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Carbine_GL							{ quality = 3; price = 4200; };
	class CUP_arifle_XM8_Compact							{ quality = 3; price = 4200; };
	class CUP_arifle_xm8_SAW								{ quality = 3; price = 4200; };
	class CUP_arifle_xm8_sharpshooter						{ quality = 3; price = 4200; };
	class CUP_arifle_CZ805_A1								{ quality = 3; price = 4200; };
	class CUP_arifle_CZ805_GL								{ quality = 3; price = 4200; };
	class CUP_arifle_CZ805_B_GL								{ quality = 3; price = 4200; };
	class CUP_arifle_CZ805_B								{ quality = 3; price = 4200; };
	class CUP_arifle_Sa58P_des								{ quality = 1; price = 1900; };
	class CUP_arifle_Sa58V_camo								{ quality = 1; price = 1900; };
	class CUP_arifle_Sa58RIS1								{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_FG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_SFG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_EGLM							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD								{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_FG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_SFG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_EGLM							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_SV								{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC								{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_FG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_SFG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_EGLM							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD								{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_FG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_SFG							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_EGLM							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_FG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_SFG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_EGLM_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_FG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_SFG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_EGLM_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_SV_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_FG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_SFG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_EGLM_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_FG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_SFG_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_EGLM_woodland							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_FG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_SFG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_CQC_EGLM_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_FG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_SFG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_STD_EGLM_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk16_SV_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_FG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_SFG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_CQC_EGLM_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_FG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_SFG_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk17_STD_EGLM_black							{ quality = 3; price = 4200; };
	class CUP_arifle_Mk20									{ quality = 3; price = 4200; };
	class CUP_sgun_AA12										{ quality = 3; price = 2600; };
	class CUP_sgun_M1014									{ quality = 1; price = 2600; };
	class CUP_sgun_Saiga12K									{ quality = 3; price = 4200; };
	class CUP_hgun_Colt1911									{ quality = 1; price = 900; };
	class CUP_hgun_Compact									{ quality = 1; price = 900; };
	class CUP_hgun_Glock17									{ quality = 1; price = 900; };
	class CUP_hgun_M9										{ quality = 1; price = 900; };
	class CUP_hgun_Makarov									{ quality = 1; price = 600; };
	class CUP_hgun_PB6P9									{ quality = 1; price = 600; };
	class CUP_hgun_MicroUzi									{ quality = 1; price = 600; };
	class CUP_hgun_TaurusTracker455							{ quality = 1; price = 600; };
	class CUP_hgun_TaurusTracker455_gold					{ quality = 1; price = 600; };
	class CUP_hgun_SA61										{ quality = 2; price = 1200; };
	class CUP_hgun_Duty										{ quality = 2; price = 1200; };
	class CUP_hgun_Phantom									{ quality = 2; price = 1200; };
	class CUP_lmg_L7A2										{ quality = 3; price = 4800; };
	class CUP_lmg_L110A1									{ quality = 3; price = 4800; };
	class CUP_lmg_M240										{ quality = 3; price = 4800; };
	class CUP_lmg_M249										{ quality = 3; price = 4800; };
	class CUP_lmg_PKM										{ quality = 3; price = 4800; };
	class CUP_lmg_Pecheneg									{ quality = 3; price = 4800; };
	class CUP_smg_bizon										{ quality = 1; price = 1600; };
	class CUP_smg_EVO										{ quality = 1; price = 1800; };
	class CUP_smg_MP5SD6									{ quality = 1; price = 1800; };
	class CUP_MP5SD 										{ quality = 1; price = 1800; };
	class CUP_smg_MP5A5										{ quality = 1; price = 1600; };
	class CUP_srifle_AWM_des								{ quality = 1; price = 3500; };
	class CUP_srifle_AWM_wdl								{ quality = 1; price = 3500; };
	class CUP_srifle_G22_des								{ quality = 1; price = 3500; };
	class CUP_srifle_G22_wdl								{ quality = 1; price = 3500; };
	class CUP_srifle_CZ750									{ quality = 6; price = 8000; };
	class CUP_srifle_DMR									{ quality = 4; price = 3500; };
	class CUP_srifle_M14									{ quality = 1; price = 2500; };
	class CUP_srifle_Mk12SPR								{ quality = 1; price = 3500; };
	class CUP_srifle_M24_des								{ quality = 6; price = 5000; };
	class CUP_srifle_M24_wdl								{ quality = 6; price = 5000; };
	class CUP_srifle_M40A3									{ quality = 4; price = 5000; };
	class CUP_srifle_M110									{ quality = 1; price = 3500; };
	class CUP_srifle_AS50									{ quality = 6; price = 9000; };
	class CUP_optic_PSO_1									{ quality = 1; price = 300; };
	class CUP_optic_PSO_3									{ quality = 1; price = 300; };
	class CUP_optic_Kobra									{ quality = 1; price = 300; };
	class CUP_optic_GOSHAWK									{ quality = 1; price = 300; };
	class CUP_optic_NSPU									{ quality = 1; price = 300; };
	class CUP_optic_PechenegScope							{ quality = 1; price = 300; };
	class CUP_optic_MAAWS_Scope								{ quality = 1; price = 300; };
	class CUP_optic_SMAW_Scope								{ quality = 1; price = 300; };
	class CUP_optic_AN_PAS_13c2								{ quality = 1; price = 300; };
	class CUP_optic_LeupoldMk4								{ quality = 1; price = 300; };
	class CUP_optic_HoloBlack								{ quality = 1; price = 300; };
	class CUP_optic_HoloWdl									{ quality = 1; price = 300; };
	class CUP_optic_HoloDesert								{ quality = 1; price = 300; };
	class CUP_optic_Eotech533								{ quality = 1; price = 300; };
	class CUP_optic_CompM4									{ quality = 1; price = 300; };
	class CUP_optic_SUSAT									{ quality = 1; price = 300; };
	class CUP_optic_ACOG									{ quality = 1; price = 300; };
	class CUP_optic_CWS										{ quality = 1; price = 300; };
	class CUP_optic_Leupold_VX3								{ quality = 1; price = 300; };
	class CUP_optic_AN_PVS_10								{ quality = 1; price = 300; };
	class CUP_optic_CompM2_Black							{ quality = 1; price = 300; };
	class CUP_optic_CompM2_Woodland							{ quality = 1; price = 300; };
	class CUP_optic_CompM2_Woodland2						{ quality = 1; price = 300; };
	class CUP_optic_CompM2_Desert							{ quality = 1; price = 300; };
	class CUP_optic_RCO										{ quality = 1; price = 300; };
	class CUP_optic_RCO_desert								{ quality = 1; price = 300; };
	class CUP_optic_LeupoldM3LR								{ quality = 1; price = 300; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert				{ quality = 1; price = 300; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland			{ quality = 1; price = 300; };
	class CUP_optic_ElcanM145								{ quality = 1; price = 300; };
	class CUP_optic_AN_PAS_13c1								{ quality = 1; price = 300; };
	class CUP_optic_LeupoldMk4_CQ_T							{ quality = 1; price = 300; };
	class CUP_optic_ELCAN_SpecterDR							{ quality = 1; price = 300; };
	class CUP_optic_LeupoldMk4_MRT_tan						{ quality = 1; price = 300; };
	class CUP_optic_SB_11_4x20_PM							{ quality = 1; price = 300; };
	class CUP_optic_ZDDot									{ quality = 1; price = 300; };
	class CUP_optic_MRad									{ quality = 1; price = 300; };
	class CUP_optic_TrijiconRx01_desert						{ quality = 1; price = 300; };
	class CUP_optic_TrijiconRx01_black						{ quality = 1; price = 300; };
	class CUP_optic_AN_PVS_4								{ quality = 1; price = 800; };
	class CUP_muzzle_PBS4									{ quality = 1; price = 200; };
	class CUP_muzzle_PB6P9									{ quality = 1; price = 200; };
	class CUP_muzzle_Bizon									{ quality = 1; price = 200; };
	class CUP_muzzle_snds_M110								{ quality = 1; price = 800; };
	class CUP_muzzle_snds_M14								{ quality = 1; price = 800; };
	class CUP_muzzle_snds_M9								{ quality = 1; price = 200; };
	class CUP_muzzle_snds_MicroUzi							{ quality = 1; price = 200; };
	class CUP_muzzle_snds_AWM								{ quality = 1; price = 600; };
	class CUP_muzzle_snds_G36_black							{ quality = 1; price = 200; };
	class CUP_muzzle_snds_G36_desert						{ quality = 1; price = 200; };
	class CUP_muzzle_snds_L85								{ quality = 1; price = 200; };
	class CUP_muzzle_snds_M16_camo							{ quality = 1; price = 200; };
	class CUP_muzzle_snds_M16								{ quality = 1; price = 200; };
	class CUP_muzzle_snds_SCAR_L							{ quality = 1; price = 200; };
	class CUP_muzzle_mfsup_SCAR_L							{ quality = 1; price = 200; };
	class CUP_muzzle_snds_SCAR_H							{ quality = 1; price = 200; };
	class CUP_muzzle_mfsup_SCAR_H							{ quality = 1; price = 200; };
	class CUP_muzzle_snds_XM8								{ quality = 1; price = 200; };
	class CUP_20Rnd_B_AA12_Pellets							{ quality = 1; price = 50; };
	class CUP_20Rnd_B_AA12_74Slug							{ quality = 1; price = 80; };
	class CUP_20Rnd_B_AA12_HE								{ quality = 1; price = 800; };
	class CUP_8Rnd_B_Beneli_74Slug							{ quality = 1; price = 50; };
	class CUP_8Rnd_B_Saiga12_74Slug_M						{ quality = 1; price = 50; };
	class CUP_6Rnd_HE_M203									{ quality = 1; price = 300; };
	class CUP_6Rnd_FlareWhite_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_FlareGreen_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_FlareRed_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_FlareYellow_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_Smoke_M203								{ quality = 1; price = 200; };
	class CUP_6Rnd_SmokeRed_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_SmokeGreen_M203							{ quality = 1; price = 200; };
	class CUP_6Rnd_SmokeYellow_M203							{ quality = 1; price = 200; };
	class CUP_1Rnd_HE_M203									{ quality = 1; price = 100; };
	class CUP_1Rnd_HEDP_M203								{ quality = 1; price = 100; };
	class CUP_FlareWhite_M203								{ quality = 1; price = 200; };
	class CUP_FlareGreen_M203								{ quality = 1; price = 200; };
	class CUP_FlareRed_M203									{ quality = 1; price = 200; };
	class CUP_FlareYellow_M203								{ quality = 1; price = 200; };
	class CUP_1Rnd_Smoke_M203								{ quality = 1; price = 200; };
	class CUP_1Rnd_SmokeRed_M203							{ quality = 1; price = 200; };
	class CUP_1Rnd_SmokeGreen_M203							{ quality = 1; price = 200; };
	class CUP_1Rnd_SmokeYellow_M203							{ quality = 1; price = 200; };
	class CUP_8Rnd_9x18_Makarov_M							{ quality = 1; price = 40; };
	class CUP_8Rnd_9x18_MakarovSD_M							{ quality = 1; price = 40; };
	class CUP_15Rnd_9x19_M9									{ quality = 1; price = 40; };
	class CUP_18Rnd_9x19_Phantom							{ quality = 1; price = 40; };
	class CUP_6Rnd_45ACP_M									{ quality = 1; price = 40; };
	class CUP_17Rnd_9x19_glock17							{ quality = 1; price = 40; };
	class CUP_7Rnd_45ACP_1911								{ quality = 1; price = 40; };
	class CUP_10Rnd_9x19_Compact							{ quality = 1; price = 40; };
	class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M    { quality = 1; price = 1000; };
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M		{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M     { quality = 1; price = 1000; };
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M      { quality = 1; price = 1000; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_M249				{ quality = 1; price = 1600; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249			{ quality = 1; price = 1600; };
	class CUP_200Rnd_TE1_Red_Tracer_556x45_M249				{ quality = 1; price = 1600; };
	class CUP_100Rnd_TE4_Green_Tracer_556x45_M249			{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE4_Red_Tracer_556x45_M249				{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249			{ quality = 1; price = 1000; };
	class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1			{ quality = 1; price = 1600; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1			{ quality = 1; price = 1600; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1		{ quality = 1; price = 1600; };
	class CUP_64Rnd_9x19_Bizon_M							{ quality = 1; price = 80; };
	class CUP_64Rnd_Green_Tracer_9x19_Bizon_M				{ quality = 1; price = 80; };
	class CUP_64Rnd_Red_Tracer_9x19_Bizon_M					{ quality = 1; price = 80; };
	class CUP_64Rnd_White_Tracer_9x19_Bizon_M				{ quality = 1; price = 80; };
	class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M				{ quality = 1; price = 80; };
	class CUP_30Rnd_9x19_EVO								{ quality = 1; price = 50; };
	class CUP_30Rnd_9x19_UZI								{ quality = 1; price = 50; };
	class CUP_30Rnd_9x19_MP5								{ quality = 1; price = 50; };
	class CUP_20Rnd_B_765x17_Ball_M							{ quality = 1; price = 50; };
	class CUP_5Rnd_127x99_as50_M							{ quality = 1; price = 600; };
	class CUP_5Rnd_86x70_L115A1								{ quality = 1; price = 60; };
	class CUP_5Rnd_762x67_G22								{ quality = 1; price = 60; };
	class CUP_10Rnd_762x51_CZ750_Tracer						{ quality = 1; price = 200; };
	class CUP_10Rnd_762x51_CZ750							{ quality = 1; price = 200; };
	class CUP_5Rnd_762x51_M24								{ quality = 1; price = 200; };
	class CUP_20Rnd_762x51_B_M110							{ quality = 1; price = 200; };
	class CUP_20Rnd_762x51_L129_M							{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110			{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110				{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110			{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110			{ quality = 1; price = 200; };
	class CUP_10Rnd_762x54_SVD_M							{ quality = 1; price = 200; };
	class CUP_10Rnd_9x39_SP5_VSS_M							{ quality = 1; price = 200; };
	class CUP_20Rnd_9x39_SP5_VSS_M							{ quality = 1; price = 200; };
	class CUP_5x_22_LR_17_HMR_M								{ quality = 1; price = 200; };
	class CUP_30Rnd_545x39_AK_M								{ quality = 1; price = 80; };
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M			{ quality = 1; price = 80; };
	class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M				{ quality = 1; price = 80; };
	class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M			{ quality = 1; price = 80; };
	class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M			{ quality = 1; price = 80; };
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M		{ quality = 1; price = 200; };
	class CUP_30Rnd_762x39_AK47_M							{ quality = 1; price = 80; };
	class CUP_30Rnd_556x45_Stanag							{ quality = 1; price = 40; };
	class CUP_30Rnd_556x45_G36								{ quality = 1; price = 40; };
	class CUP_30Rnd_TE1_Red_Tracer_556x45_G36				{ quality = 1; price = 40; };
	class CUP_30Rnd_TE1_Green_Tracer_556x45_G36				{ quality = 1; price = 40; };
	class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36			{ quality = 1; price = 40; };
	class CUP_100Rnd_556x45_BetaCMag						{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag			{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag		{ quality = 1; price = 1000; };
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag		{ quality = 1; price = 1000; };
	class CUP_20Rnd_556x45_Stanag							{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_CZ805B							{ quality = 1; price = 40; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B			{ quality = 1; price = 40; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B			{ quality = 1; price = 40; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B			{ quality = 1; price = 40; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B			{ quality = 1; price = 40; };
	class CUP_20Rnd_762x51_DMR								{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR			{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR				{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR				{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR				{ quality = 1; price = 200; };
	class CUP_20Rnd_762x51_FNFAL_M							{ quality = 1; price = 200; };
	class CUP_30Rnd_Sa58_M_TracerG							{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M_TracerR							{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M_TracerY							{ quality = 1; price = 30; };
	class CUP_30Rnd_Sa58_M									{ quality = 1; price = 30; };
	class CUP_20Rnd_762x51_B_SCAR							{ quality = 1; price = 200; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR			{ quality = 1; price = 80; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR				{ quality = 1; price = 80; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR			{ quality = 1; price = 80; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR			{ quality = 1; price = 80; };
	class CUP_hgun_BallisticShield_Armed					{ quality = 3; price = 4800; };
	class CUP_srifle_CZ550_rail								{ quality = 3; price = 3500; };
	class CUP_srifle_L129A1									{ quality = 5; price = 4900; };
	class CUP_lmg_Mk48_des									{ quality = 6; price = 4600; };
	class CUP_lmg_Mk48_wdl									{ quality = 6; price = 4600; };
	class CUP_lmg_minimi_railed								{ quality = 6; price = 3600; };
	class CUP_lmg_M60E4										{ quality = 6; price = 3600; };
	class CUP_BAF_L7A2_GPMG									{ quality = 4; price = 5200; };
	//class CUP_Strela										{ quality = 1; price = 10000; sellPrice = 10; };
	//class CUP_Strela_2_M									{ quality = 1; price = 2000; sellPrice = 10; };
	//class CUP_launch_FIM92Stinger							{ quality = 1; price = 10000; sellPrice = 10; };
	//class CUP_Stinger_M										{ quality = 1; price = 2000; sellPrice = 10; };
	class CUP_srifle_LeeEnfield_rail						{ quality = 1; price = 1800; };
	class CUP_10x_303_M										{ quality = 1; price = 80; };
	class CUP_arifle_M4A3_desert							{ quality = 1; price = 1900; };
	class CUP_Mxx_camo										{ quality = 1; price = 2000; };
	class CUP_Mxx_camo_half									{ quality = 1; price = 2000; };
	class CUP_SVD_camo_g									{ quality = 5; price = 5900; };
	class CUP_SVD_camo_g_half								{ quality = 5; price = 5900; };
	class CUP_SVD_camo_d									{ quality = 5; price = 5900; };
	class CUP_SVD_camo_d_half								{ quality = 5; price = 5900; };
	class CUP_acc_sffh										{ quality = 1; price = 200; };
	class CUP_acc_bfa										{ quality = 1; price = 200; };
	class CUP_bipod_Harris_1A2_L							{ quality = 1; price = 200; };
	class CUP_bipod_VLTOR_Modpod							{ quality = 1; price = 200; };
	class CUP_arifle_SAIGA_MK03_top_rail					{ quality = 3; price = 4200; };
	class CUP_arifle_TYPE_56_2_top_rail						{ quality = 3; price = 4200; };
	class CUP_lmg_MG3_rail									{ quality = 3; price = 5800; };
	class CUP_10Rnd_762x39_SaigaMk03_M						{ quality = 1; price = 50; };
	class CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M	{ quality = 1; price = 120; };
	class CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M		{ quality = 1; price = 120; };
	class CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M	{ quality = 1; price = 120; };
	class CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M	{ quality = 1; price = 120; };
	class CUP_Bipod_G36										{ quality = 1; price = 200; };
	//new
	class CUP_arifle_AS_VAL									{ quality = 3; price = 3200; };
	class CUP_arifle_SR3M_Vikhr								{ quality = 3; price = 4200; };
	class CUP_arifle_M16A1									{ quality = 3; price = 4200; };
	class CUP_arifle_XM16E1									{ quality = 3; price = 4200; };
	class CUP_smg_vityaz									{ quality = 1; price = 3600; };
	class CUP_30Rnd_9x19_Vityaz								{ quality = 1; price = 50; };
	class CUP_hgun_PMM										{ quality = 1; price = 600; };
	class CUP_muzzle_snds_SR3M								{ quality = 1; price = 200; };
	class CUP_12Rnd_9x18_PMM_M								{ quality = 1; price = 50; };
	class CUP_30Rnd_9x39_SP5_VIKHR_M						{ quality = 1; price = 50; };
	class CUP_srifle_M24_blk								{ quality = 5; price = 5000; };
	class CUP_arifle_mk18_black								{ quality = 4; price = 2800; };
	class CUP_arifle_mk18_m203_black						{ quality = 4; price = 3800; };
	class CUP_arifle_SBR_black								{ quality = 1; price = 1800; };
	class CUP_arifle_SBR_od									{ quality = 1; price = 1800; };
	class CUP_arifle_Mk20_black								{ quality = 3; price = 2800; };
	class CUP_muzzle_TGPA                                   { quality = 1; price = 80; };
	class CUP_muzzle_snds_Mk12                              { quality = 1; price = 100; };
	//new 240419
	class CUP_arifle_AS_VAL_top_rail						{ quality = 3; price = 4200; };
	class CUP_arifle_AS_VAL_VFG								{ quality = 3; price = 4200; };
	class CUP_arifle_AS_VAL_VFG_top_rail					{ quality = 3; price = 4200; };
	class CUP_arifle_SR3M_Vikhr_top_rail					{ quality = 3; price = 4200; };
	class CUP_arifle_SR3M_Vikhr_VFG							{ quality = 3; price = 4200; };
	class CUP_arifle_SR3M_Vikhr_VFG_top_rail				{ quality = 3; price = 4200; };
	class CUP_arifle_AKMS_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK47_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AKS_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK74_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AKS74_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK74M_camo								{ quality = 3; price = 4200; };
	class CUP_arifle_AK74M_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK74M_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK101_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK103_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK107_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK107_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK108_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK109_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK109_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK102_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK102_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK104_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK104_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_AK105_top_rail							{ quality = 3; price = 4200; };
	class CUP_arifle_AK105_railed							{ quality = 3; price = 4200; };
	class CUP_arifle_RPK74_top_rail							{ quality = 5; price = 4200; };
	class CUP_arifle_Colt727								{ quality = 3; price = 4200; };
	class CUP_arifle_M4A1_desert_carryhandle				{ quality = 3; price = 5200; };
	class CUP_arifle_M4A1_camo_carryhandle					{ quality = 3; price = 5200; };
	class CUP_lmg_FNMAG_RIS									{ quality = 5; price = 6800; };
	class CUP_optic_ACOG_Reflex_Wood						{ quality = 1; price = 300; };
	class CUP_optic_ACOG_Reflex_Desert						{ quality = 1; price = 300; };
	class CUP_optic_ACOG2									{ quality = 1; price = 300; };	
	//Units
	class CUP_O_TKI_Khet_Partug_01                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_02                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_03                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_04                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_05                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_06                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_07                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Partug_08                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Jeans_01                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Jeans_02                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Jeans_03                                     { quality = 1; price = 550; };
	class CUP_O_TKI_Khet_Jeans_04                                     { quality = 1; price = 550; };
	class CUP_U_C_Pilot_01                                             { quality = 1; price = 550; };
	class CUP_U_C_Citizen_01                                         { quality = 1; price = 550; };
	class CUP_U_C_Citizen_02                                         { quality = 1; price = 550; };
	class CUP_U_C_Citizen_03                                         { quality = 1; price = 550; };
	class CUP_U_C_Citizen_04                                         { quality = 1; price = 550; };
	class CUP_U_C_Worker_01                                             { quality = 1; price = 550; };
	class CUP_U_C_Worker_02                                             { quality = 1; price = 550; };
	class CUP_U_C_Worker_03                                             { quality = 1; price = 550; };
	class CUP_U_C_Worker_04                                             { quality = 1; price = 550; };
	class CUP_U_C_Profiteer_01                                         { quality = 1; price = 550; };
	class CUP_U_C_Profiteer_02                                         { quality = 1; price = 550; };
	class CUP_U_C_Profiteer_03                                         { quality = 1; price = 550; };
	class CUP_U_C_Profiteer_04                                         { quality = 1; price = 550; };
	class CUP_U_C_Woodlander_01                                         { quality = 1; price = 550; };
	class CUP_U_C_Woodlander_02                                         { quality = 1; price = 550; };
	class CUP_U_C_Woodlander_03                                         { quality = 1; price = 550; };
	class CUP_U_C_Woodlander_04                                         { quality = 1; price = 550; };
	class CUP_U_C_Villager_01                                         { quality = 1; price = 550; };
	class CUP_U_C_Villager_02                                         { quality = 1; price = 550; };
	class CUP_U_C_Villager_03                                         { quality = 1; price = 550; };
	class CUP_U_C_Villager_04                                         { quality = 1; price = 550; };
	class CUP_U_B_CZ_WDL_TShirt                                         { quality = 1; price = 550; };
	class CUP_U_B_GER_Tropentarn_1                                     { quality = 1; price = 550; };
	class CUP_U_B_GER_Tropentarn_2                                     { quality = 1; price = 550; };
	class CUP_U_B_GER_Ghillie                                         { quality = 1; price = 550; };
	class CUP_U_B_GER_Flecktarn_1                                     { quality = 1; price = 550; };
	class CUP_U_B_GER_Flecktarn_2                                     { quality = 1; price = 550; };
	class CUP_U_B_GER_Fleck_Ghillie                                     { quality = 1; price = 550; };
	class CUP_U_B_USMC_Officer                                         { quality = 1; price = 550; };
	class CUP_U_B_USMC_PilotOverall                                     { quality = 1; price = 550; };
	class CUP_U_B_USMC_Ghillie_WDL                                     { quality = 1; price = 550; };
	class CUP_U_B_USMC_MARPAT_WDL_Sleeves                            { quality = 1; price = 550; };
	class CUP_U_B_USMC_MARPAT_WDL_RolledUp                             { quality = 1; price = 550; };
	class CUP_U_B_USMC_MARPAT_WDL_Kneepad                             { quality = 1; price = 550; };
	class CUP_U_B_USMC_MARPAT_WDL_TwoKneepads                         { quality = 1; price = 550; };
	class CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad                        { quality = 1; price = 550; };
	class CUP_U_B_FR_SpecOps                                         { quality = 1; price = 550; };
	class CUP_U_B_FR_Scout                                             { quality = 1; price = 550; };
	class CUP_U_B_FR_Scout1                                             { quality = 1; price = 550; };
	class CUP_U_B_FR_Scout2                                             { quality = 1; price = 550; };
	class CUP_U_B_FR_Scout3                                             { quality = 1; price = 550; };
	class CUP_U_B_FR_Officer                                         { quality = 1; price = 550; };
	class CUP_U_B_FR_Corpsman                                         { quality = 1; price = 550; };
	class CUP_U_B_FR_DirAction                                         { quality = 1; price = 550; };
	class CUP_U_B_FR_DirAction2                                         { quality = 1; price = 550; };
	class CUP_U_B_FR_Light                                             { quality = 1; price = 550; };
	class CUP_U_I_GUE_Flecktarn                                         { quality = 1; price = 550; };
	class CUP_U_I_GUE_Flecktarn2                                     { quality = 1; price = 550; };
	class CUP_U_I_GUE_Flecktarn3                                     { quality = 1; price = 550; };
	class CUP_U_I_GUE_Woodland1                                         { quality = 1; price = 550; };
	class CUP_U_I_Ghillie_Top                                         { quality = 1; price = 550; };
	class CUP_U_I_RACS_PilotOverall                                     { quality = 1; price = 550; };
	class CUP_U_I_RACS_Desert_1                                         { quality = 1; price = 550; };
	class CUP_U_I_RACS_Desert_2                                         { quality = 1; price = 550; };
	class CUP_U_I_RACS_Urban_1                                         { quality = 1; price = 550; };
	class CUP_U_I_RACS_Urban_2                                         { quality = 1; price = 550; };
	class CUP_U_O_SLA_Officer                                         { quality = 1; price = 550; };
	class CUP_U_O_SLA_Officer_Suit                                     { quality = 1; price = 550; };
	class CUP_U_O_SLA_MixedCamo                                         { quality = 1; price = 550; };
	class CUP_U_O_SLA_Green                                             { quality = 1; price = 550; };
	class CUP_U_O_SLA_Urban                                             { quality = 1; price = 550; };
	class CUP_U_O_SLA_Desert                                         { quality = 1; price = 550; };
	class CUP_U_O_SLA_Overalls_Pilot                                 { quality = 1; price = 550; };
	class CUP_U_O_SLA_Overalls_Tank                                     { quality = 1; price = 550; };
	class CUP_U_O_Partisan_TTsKO                                     { quality = 1; price = 550; };
	class CUP_U_O_Partisan_TTsKO_Mixed                                { quality = 1; price = 550; };
	class CUP_U_O_Partisan_VSR_Mixed1                                { quality = 1; price = 550; };
	class CUP_U_O_Partisan_VSR_Mixed2                                { quality = 1; price = 550; };
	class CUP_U_O_TK_Officer                                         { quality = 1; price = 550; };
	class CUP_U_O_TK_MixedCamo                                         { quality = 1; price = 550; };
	class CUP_U_O_TK_Green                                             { quality = 1; price = 550; };
	class CUP_U_O_TK_Ghillie                                         { quality = 1; price = 550; };
	class CUP_U_O_TK_Ghillie_Top                                     { quality = 1; price = 550; };
	class CUP_U_B_BAF_DDPM_S1_RolledUp                               { quality = 1; price = 550; };
	class CUP_U_B_BAF_DDPM_S1_UnRolled                                   { quality = 1; price = 550; };
	class CUP_U_B_BAF_DDPM_Tshirt                                     { quality = 1; price = 550; };
	class CUP_U_B_BAF_DPM_S1_RolledUp                                     { quality = 1; price = 550; };
	class CUP_U_B_BAF_DPM_S2_UnRolled                                     { quality = 1; price = 550; };
	class CUP_U_B_BAF_DPM_Tshirt                                 { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S1_RolledUp                                      { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S2_UnRolled                                    { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_Tshirt                                 { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S3_RolledUp                                   { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S4_UnRolled                                  { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S5_UnRolled                                   { quality = 1; price = 550; };
	class CUP_U_B_BAF_MTP_S6_UnRolled                                   { quality = 1; price = 550; };
	class CUP_I_B_PMC_Unit_18										 { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_25										 { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_26										 { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_27										 { quality = 1; price = 650; };
	class CUP_B_Bergen_BAF											 { quality = 1; price = 200; };
	class CUP_B_GER_Pack_Tropentarn                                  { quality = 1; price = 200; };
	class CUP_B_GER_Pack_Flecktarn                                   { quality = 1; price = 200; };
	class CUP_B_HikingPack_Civ                                       { quality = 1; price = 200; };
	class CUP_B_RUS_Backpack                                         { quality = 1; price = 200; };
	class CUP_B_CivPack_WDL                                          { quality = 1; price = 200; };
	class CUP_B_USPack_Coyote                                        { quality = 1; price = 200; };
	class CUP_B_AssaultPack_ACU                                      { quality = 1; price = 200; };
	class CUP_B_AssaultPack_Coyote                                   { quality = 1; price = 200; };
	class CUP_B_USMC_AssaultPack                                     { quality = 1; price = 200; };
	class CUP_B_USMC_MOLLE                                           { quality = 1; price = 200; };
	class CUP_B_MOLLE_WDL                                            { quality = 1; price = 200; };
	class CUP_B_USPack_Black                                         { quality = 1; price = 200; };
	class CUP_B_ACRPara_m95                                          { quality = 1; price = 200; };
	class CUP_B_AssaultPack_Black                                    { quality = 1; price = 200; };
	class CUP_H_C_Ushanka_01                                         { quality = 1; price = 350; };
	class CUP_H_C_Ushanka_02                                         { quality = 1; price = 350; };
	class CUP_H_C_Ushanka_03                                         { quality = 1; price = 350; };
	class CUP_H_C_Ushanka_04                                         { quality = 1; price = 350; };
	class CUP_H_C_Beanie_01                                             { quality = 1; price = 350; };
	class CUP_H_C_Beanie_02                                             { quality = 1; price = 350; };
	class CUP_H_C_Beanie_03                                             { quality = 1; price = 350; };
	class CUP_H_C_Beanie_04                                             { quality = 1; price = 350; };
	class CUP_H_C_Beret_01                                             { quality = 1; price = 350; };
	class CUP_H_C_Beret_02                                             { quality = 1; price = 350; };
	class CUP_H_C_Beret_03                                             { quality = 1; price = 350; };
	class CUP_H_C_Beret_04                                             { quality = 1; price = 350; };
	class CUP_H_GER_Boonie_desert                                     { quality = 1; price = 350; };
	class CUP_H_GER_Boonie_Flecktarn                                { quality = 1; price = 350; };
	class CUP_H_NAPA_Fedora                                             { quality = 1; price = 350; };
	class CUP_H_PMC_PRR_Headset                                         { quality = 1; price = 350; };
	class CUP_H_PMC_EP_Headset                                         { quality = 1; price = 350; };
	class CUP_H_PMC_Cap_Tan                                             { quality = 1; price = 350; };
	class CUP_H_PMC_Cap_Grey                                         { quality = 1; price = 350; };
	class CUP_H_PMC_Cap_PRR_Tan                                         { quality = 1; price = 350; };
	class CUP_H_PMC_Cap_PRR_Grey                                     { quality = 1; price = 350; };
	class CUP_H_RACS_Beret_Blue                                         { quality = 1; price = 350; };
	class CUP_H_RACS_Helmet_Des                                         { quality = 1; price = 350; };
	class CUP_H_RACS_Helmet_Goggles_Des                                 { quality = 1; price = 350; };
	class CUP_H_RACS_Helmet_Headset_Des                                 { quality = 1; price = 350; };
	class CUP_H_RUS_6B46			                                     { quality = 1; price = 350; };
	class CUP_H_RUS_6B47                             					{ quality = 1; price = 350; };
	class CUP_H_RUS_6B47_SF                             				{ quality = 1; price = 350; };
	class CUP_H_SLA_TankerHelmet                                     { quality = 1; price = 350; };
	class CUP_H_SLA_Helmet                                             { quality = 1; price = 350; };
	class CUP_H_SLA_Pilot_Helmet                                    { quality = 1; price = 350; };
	class CUP_H_SLA_OfficerCap                                         { quality = 1; price = 350; };
	class CUP_H_SLA_SLCap                                             { quality = 1; price = 350; };
	class CUP_H_SLA_Boonie                                             { quality = 1; price = 350; };
	class CUP_H_SLA_Beret                                             { quality = 1; price = 350; };
	class CUP_H_SLA_BeenieGreen                                         { quality = 1; price = 350; };
	class CUP_H_TK_TankerHelmet                                         { quality = 1; price = 350; };
	class CUP_H_TK_PilotHelmet                                         { quality = 1; price = 350; };
	class CUP_H_TK_Helmet                                             { quality = 1; price = 350; };
	class CUP_H_TK_Lungee                                             { quality = 1; price = 350; };
	class CUP_H_TK_Beret                                             { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_01                                         { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_02                                         { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_03                                         { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_04                                         { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_05                                         { quality = 1; price = 350; };
	class CUP_H_TKI_SkullCap_06                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_01                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_02                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_03                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_04                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_05                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_06                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_01                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_02                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_03                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_04                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_05                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Lungee_Open_06                                     { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_01                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_02                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_03                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_04                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_05                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_1_06                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_01                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_02                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_03                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_04                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_05                                         { quality = 1; price = 350; };
	class CUP_H_TKI_Pakol_2_06                                         { quality = 1; price = 350; };
	class CUP_H_USMC_Officer_Cap                                     { quality = 1; price = 350; };
	class CUP_H_USMC_HelmetWDL                                         { quality = 1; price = 350; };
	class CUP_H_USMC_HeadSet_HelmetWDL                                 { quality = 1; price = 350; };
	class CUP_H_USMC_HeadSet_GoggleW_HelmetWDL                         { quality = 1; price = 350; };
	class CUP_H_USMC_Crew_Helmet                                     { quality = 1; price = 350; };
	class CUP_H_USMC_Goggles_HelmetWDL                                 { quality = 1; price = 350; };
	class CUP_H_USMC_Helmet_Pilot                                     { quality = 1; price = 350; };
	class CUP_H_FR_Headset                                             { quality = 1; price = 350; };
	class CUP_H_FR_Cap_Headset_Green                                 { quality = 1; price = 350; };
	class CUP_H_FR_Cap_Officer_Headset                                 { quality = 1; price = 350; };
	class CUP_H_FR_BandanaGreen                                         { quality = 1; price = 350; };
	class CUP_H_FR_BandanaWdl                                         { quality = 1; price = 350; };
	class CUP_H_FR_Bandana_Headset                                     { quality = 1; price = 350; };
	class CUP_H_FR_Headband_Headset                                     { quality = 1; price = 350; };
	class CUP_H_FR_ECH                                                 { quality = 1; price = 350; };
	class CUP_H_FR_BoonieMARPAT                                         { quality = 1; price = 350; };
	class CUP_H_FR_BoonieWDL                                         { quality = 1; price = 350; };
	class CUP_H_FR_BeanieGreen                                         { quality = 1; price = 350; };
	class CUP_H_FR_PRR_BoonieWDL                                     { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Blue                                 { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Brown                                 { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Green                                 { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Red                                     { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Violet                                 { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_White                                 { quality = 1; price = 350; };
	class CUP_H_Navy_CrewHelmet_Yellow                                { quality = 1; price = 350; };    
	class CUP_H_BAF_Officer_Beret_PRR_O								  { quality = 1; price = 350; };   
	class CUP_H_BAF_Helmet_1_DDPM								  { quality = 1; price = 350; };   	
	class CUP_H_BAF_Helmet_2_DDPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_3_DDPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_4_DDPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_1_DPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_2_DPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_3_DPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_4_DPM								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_1_MTP								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_2_MTP								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_3_MTP								  { quality = 1; price = 350; }; 
	class CUP_H_BAF_Helmet_4_MTP								  { quality = 1; price = 350; };
	class CUP_V_B_GER_Carrier_Rig                                     { quality = 1; price = 980; };
	class CUP_V_B_GER_Carrier_Rig_2                                     { quality = 1; price = 980; };
	class CUP_V_B_GER_Carrier_Vest                                     { quality = 1; price = 980; };
	class CUP_V_B_GER_Carrier_Vest_2                                 { quality = 1; price = 980; };
	class CUP_V_B_GER_Carrier_Vest_3                                 { quality = 1; price = 980; };
	class CUP_V_B_GER_Vest_1                                         { quality = 1; price = 980; };
	class CUP_V_B_GER_Vest_2                                         { quality = 1; price = 980; };
	class CUP_V_B_MTV                                                 { quality = 1; price = 980; };
	class CUP_V_B_MTV_Patrol                                         { quality = 1; price = 980; };
	class CUP_V_B_MTV_Pouches                                         { quality = 1; price = 980; };
	class CUP_V_B_MTV_noCB                                             { quality = 1; price = 980; };
	class CUP_V_B_MTV_Marksman                                         { quality = 1; price = 980; };
	class CUP_V_B_MTV_PistolBlack                                     { quality = 1; price = 980; };
	class CUP_V_B_MTV_LegPouch                                         { quality = 1; price = 980; };
	class CUP_V_B_MTV_MG                                             { quality = 1; price = 980; };
	class CUP_V_B_MTV_Mine                                             { quality = 1; price = 980; };
	class CUP_V_B_MTV_TL                                             { quality = 1; price = 980; };
	class CUP_V_B_PilotVest                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_TL                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_Officer                                         { quality = 1; price = 980; };
	class CUP_V_B_RRV_Medic                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_DA1                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_DA2                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_MG                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_Light                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_Scout                                             { quality = 1; price = 980; };
	class CUP_V_B_RRV_Scout2                                         { quality = 1; price = 980; };
	class CUP_V_B_RRV_Scout3                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Blue                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Brown                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Green                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Red                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Violet                                     { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_White                                         { quality = 1; price = 980; };
	class CUP_V_B_LHDVest_Yellow                                     { quality = 1; price = 980; };
	class CUP_V_I_Carrier_Belt                                         { quality = 1; price = 980; };
	class CUP_V_I_Guerilla_Jacket                                     { quality = 1; price = 980; };
	class CUP_V_I_RACS_Carrier_Vest                                     { quality = 1; price = 980; };
	class CUP_V_I_RACS_Carrier_Vest_2                                 { quality = 1; price = 980; };
	class CUP_V_I_RACS_Carrier_Vest_3                                 { quality = 1; price = 980; };
	class CUP_V_O_SLA_Carrier_Belt                                     { quality = 1; price = 980; };
	class CUP_V_O_SLA_Carrier_Belt02                                 { quality = 1; price = 980; };
	class CUP_V_O_SLA_Carrier_Belt03                                 { quality = 1; price = 980; };
	class CUP_V_O_SLA_Flak_Vest01                                     { quality = 1; price = 980; };
	class CUP_V_O_SLA_Flak_Vest02                                     { quality = 1; price = 980; };
	class CUP_V_O_SLA_Flak_Vest03                                     { quality = 1; price = 980; };
	class CUP_V_O_TK_CrewBelt                                         { quality = 1; price = 980; };
	class CUP_V_O_TK_OfficerBelt                                     { quality = 1; price = 980; };
	class CUP_V_O_TK_OfficerBelt2                                     { quality = 1; price = 980; };
	class CUP_V_O_TK_Vest_1                                             { quality = 1; price = 980; };
	class CUP_V_O_TK_Vest_2                                             { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_01                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_02                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_03                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_04                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_05                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket1_06                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_01                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_02                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_03                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_04                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_05                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket2_06                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_01                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_02                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_03                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_04                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_05                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket3_06                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_01                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_02                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_03                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_04                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_05                                     { quality = 1; price = 980; };
	class CUP_V_OI_TKI_Jacket4_06                                     { quality = 1; price = 980; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Scout							 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1					     { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Sapper					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Medic					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DDPM_Officer					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Scout							 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Soldier1					     { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Soldier2					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Grenadier					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Sapper					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Medic					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Officer					 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk4_MTP_Grenadier				 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner				 { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk4_MTP_Rifleman				         { quality = 1; price = 550; };
	class CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader				     { quality = 1; price = 550; };
	class CUP_V_PMC_CIRAS_Winter_Empty				     { quality = 1; price = 550; };
	class CUP_V_PMC_CIRAS_Winter_Patrol				     { quality = 1; price = 550; };
	class CUP_V_PMC_CIRAS_Winter_Grenadier				     { quality = 1; price = 550; };
	class CUP_V_PMC_CIRAS_Winter_TL				     { quality = 1; price = 550; };
	class CUP_V_PMC_CIRAS_Winter_Veh				     { quality = 1; price = 550; };
	class CUP_H_CZ_Helmet01                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet02                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet03                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet04                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet05                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet06                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet07                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet08                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet09                              { quality = 1; price = 650; };
	class CUP_H_CZ_Helmet10                              { quality = 1; price = 650; };
	class CUP_H_CZ_Hat01                              	 { quality = 1; price = 650; };
	class CUP_H_CZ_Hat02                                 { quality = 1; price = 650; };
	class CUP_H_CZ_Hat03                                 { quality = 1; price = 650; };
	class CUP_H_CZ_Hat04                                 { quality = 1; price = 650; };
	class CUP_U_B_CZ_DST_TShirt                          { quality = 1; price = 550; };
	class CUP_U_B_CZ_WDL_NoKneepads                      { quality = 1; price = 650; };
	class CUP_U_B_CZ_DST_NoKneepads                      { quality = 1; price = 650; };
	class CUP_U_B_CZ_WDL_Kneepads                        { quality = 1; price = 200; };
	class CUP_U_B_CZ_DST_Kneepads                        { quality = 1; price = 200; };
	class CUP_U_B_CZ_DST_Kneepads_Sleeve                 { quality = 1; price = 200; };
	class CUP_U_B_CZ_Pilot_DST                           { quality = 1; price = 300; };
	class CUP_U_B_CZ_Pilot_WDL                           { quality = 1; price = 300; };
	class CUP_U_B_CZ_DST_Kneepads_Gloves                 { quality = 1; price = 200; };
	class CUP_U_B_CZ_WDL_Kneepads_Gloves                 { quality = 1; price = 200; };
	class CUP_U_B_CZ_WDL_Ghillie                         { quality = 1; price = 500; };
	class CUP_U_B_CZ_DST_Ghillie                         { quality = 1; price = 500; };
	class CUP_V_CZ_vest02                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest03                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest04                             	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest01                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest05                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest06                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest07                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest08                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest09                        		 { quality = 1; price = 550; };
	class CUP_V_CZ_vest10                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest11                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest16                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest14                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest12                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest13                             	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest15                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest17                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest18                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest19                              	 { quality = 1; price = 550; };
	class CUP_V_CZ_vest20                              	 { quality = 1; price = 550; };
	class CUP_B_ACRScout_m95                             { quality = 1; price = 200; };
	class CUP_V_B_PASGT_winter                           { quality = 1; price = 550; };
	class CUP_V_B_PASGT_no_bags_winter					 { quality = 1; price = 550; };
	class CUP_V_B_PASGT_OD								 { quality = 1; price = 550; };
	class CUP_H_US_H_PASGT_winter 						 { quality = 1; price = 650; };
	class CUP_H_CDF_H_PASGT_SNW 						 { quality = 1; price = 650; };
	class CUP_H_CDF_H_PASGT_FST 						 { quality = 1; price = 650; };
	//new
	class CUP_B_RPGPack_Khaki 						 	 { quality = 1; price = 650; };
	class CUP_B_AlicePack_OD                             { quality = 1; price = 200; };
	class CUP_B_AlicePack_Khaki                          { quality = 1; price = 200; };
	class CUP_B_AlicePack_Bedroll                        { quality = 1; price = 200; };
	class CUP_B_USMC_MOLLE_WDL                           { quality = 1; price = 200; };
	class CUP_B_GER_Medic_Desert                         { quality = 1; price = 200; };
	class CUP_B_GER_Medic_Tropentarn                     { quality = 1; price = 200; };
	class CUP_B_GER_Medic_FLecktarn                      { quality = 1; price = 200; };
	class CUP_B_TK_Medic_Desert                          { quality = 1; price = 200; };
	class CUP_B_SLA_Medicbag                             { quality = 1; price = 200; };
	class CUP_B_Predator_MTP                             { quality = 1; price = 300; };
	class CUP_B_Motherlode_MTP                           { quality = 1; price = 300; };
	class CUP_B_Kombat_Olive                             { quality = 1; price = 200; };
	class CUP_US_Backpack_EP1                            { quality = 1; price = 200; };
	class CUP_CZ_Backpack_EP1                            { quality = 1; price = 200; };
	class CUP_CZ_VestPouch_EP1                           { quality = 1; price = 200; };
	class CUP_TK_Assault_Pack_EP1                        { quality = 1; price = 200; };
	class CUP_U_B_BAF_MTP_GHILLIE                        { quality = 1; price = 650; };
	class CUP_U_B_BAF_DPM_GHILLIE                        { quality = 1; price = 650; };
	class CUP_U_B_BAF_DDPM_GHILLIE                       { quality = 1; price = 650; };
	class CUP_U_B_USArmy_UBACS                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Bardak                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Commander                        { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_01                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_02                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_03                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_04                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_05                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_06                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_07                           { quality = 1; price = 650; };
	class CUP_U_O_CHDKZ_Kam_08                           { quality = 1; price = 650; };
	class CUP_U_O_Pilot_01                               { quality = 1; price = 650; };
	class CUP_U_C_Suit_01                                { quality = 1; price = 650; };
	class CUP_U_C_Rocker_01                              { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_2                             { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_3                             { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_6                             { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_7                             { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_10                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_11                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_13                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_14                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_17                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_20                            { quality = 1; price = 650; };
	class CUP_I_B_PMC_Unit_24                            { quality = 1; price = 650; };
	//new
	class CUP_H_BAF_MTP_Mk7								 { quality = 1; price = 650; };
	class CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing             { quality = 1; price = 550; };
	class CUP_V_O_SLA_M23_1_OD                           { quality = 1; price = 550; };
	class CUP_V_O_SLA_M23_1_BRN                          { quality = 1; price = 550; };
	class CUP_U_I_Leader_01                              { quality = 1; price = 650; };
	class CUP_U_O_RUS_EMR_1                              { quality = 1; price = 650; };
	class CUP_U_O_RUS_EMR_2                              { quality = 1; price = 650; };
	class CUP_U_O_RUS_EMR_1_VDV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_EMR_2_VDV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_M88_MSV                            { quality = 1; price = 650; };
	class CUP_U_O_RUS_M88_VDV                            { quality = 1; price = 650; };
	class CUP_U_O_RUS_M88_MSV_rolled_up                  { quality = 1; price = 650; };
	class CUP_U_O_RUS_M88_VDV_rolled_up                  { quality = 1; price = 650; };
	class CUP_U_O_RUS_Flora_1                            { quality = 1; price = 650; };
	class CUP_U_O_RUS_Flora_2                            { quality = 1; price = 650; };
	class CUP_U_O_RUS_Flora_1_VDV                        { quality = 1; price = 650; };
	class CUP_U_O_RUS_Flora_2_VDV                        { quality = 1; price = 650; };
	class CUP_U_O_RUS_Flora_3                            { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_MSV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_MSV                     { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_VDV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_VDV                     { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_MSV_rolled_up                { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_MSV_rolled_up           { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_VDV_rolled_up                { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_VDV_rolled_up           { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_gloves_MSV              { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR93_worn_gloves_VDV              { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_MSV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_MSV                     { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_VDV                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_VDV                     { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_MSV_rolled_up                { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_MSV_rolled_up           { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_VDV_rolled_up                { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_VDV_rolled_up           { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_gloves_MSV              { quality = 1; price = 650; };
	class CUP_U_O_RUS_VSR98_worn_gloves_VDV              { quality = 1; price = 650; };
	class CUP_U_O_RUS_Commander                          { quality = 1; price = 650; };
	class CUP_U_O_RUS_Gorka_Partizan                     { quality = 1; price = 650; };
	class CUP_U_O_RUS_Gorka_Partizan_A                   { quality = 1; price = 650; };
	class CUP_U_O_RUS_Gorka_Green                        { quality = 1; price = 650; };
	class CUP_U_O_RUS_Ghillie                            { quality = 1; price = 650; };
	class CUP_U_B_US_BDU                                 { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_OD                              { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_desert                          { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_ERDL                            { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_ERDL_highland                   { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_tigerstripe                     { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_Tpattern                        { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_urban                           { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_winter                          { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_winter_WoodlandBottom           { quality = 1; price = 650; };
	class CUP_U_B_US_BDU_winter_WoodlandTop              { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG1_WMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG1_DMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG2_WMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG2_DMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG3_WMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG3_DMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG4_WMARPAT                     { quality = 1; price = 650; };
	class CUP_U_B_USMC_FROG4_DMARPAT                     { quality = 1; price = 650; };
	class CUP_B_AH1Z_NoWeapons					         { quality = 3; price = 1; sellPrice = 50000; };
    //RHS Mod
    //HUMMWE SAND
	class rhsusf_m1025_d_m2						        { quality = 1; price = 140000; };
	class rhsusf_m1025_d						        { quality = 1; price = 66000; };
	class rhsusf_m1043_d_m2						        { quality = 1; price = 140000; };
	class rhsusf_m1043_d						        { quality = 1; price = 52000; };
	class rhsusf_m998_d_2dr_fulltop						{ quality = 1; price = 68000; };
	class rhsusf_m998_d_2dr_halftop						{ quality = 1; price = 58000; };
	class rhsusf_m998_d_2dr						        { quality = 1; price = 55000; };
	class rhsusf_m998_d_4dr_fulltop						{ quality = 1; price = 64000; };
	class rhsusf_m998_d_4dr_halftop						{ quality = 1; price = 59000; };
	class rhsusf_m998_d_4dr						        { quality = 1; price = 58500; };
	class rhsusf_m1151_usarmy_d						    { quality = 1; price = 70000; };
	class rhsusf_m1151_m2_v1_usarmy_d					{ quality = 1; price = 170000; };
	class rhsusf_m1151_m2_lras3_v1_usarmy_d				{ quality = 1; price = 190000; };
	class rhsusf_m1151_m240_v1_usarmy_d					{ quality = 1; price = 150000; };
	class rhsusf_m1151_m2_v2_usarmy_d					{ quality = 1; price = 199999; };
	class rhsusf_m1151_m240_v2_usarmy_d					{ quality = 1; price = 175000; };
	class rhsusf_m1152_usarmy_d						    { quality = 1; price = 49000; };
	class rhsusf_m1152_rsv_usarmy_d						{ quality = 1; price = 53000; };
	class rhsusf_m1152_sicps_usarmy_d					{ quality = 1; price = 56000; };
	class rhsusf_m1165_usarmy_d						    { quality = 1; price = 52000; };
    //HUMMWE GRÜN
	class rhsusf_m1025_w_m2						        { quality = 1; price = 140000; };
	class rhsusf_m1025_w						        { quality = 1; price = 66000; };
	class rhsusf_m1043_w_m2						        { quality = 1; price = 140000; };
	class rhsusf_m1043_w						        { quality = 1; price = 52000; };
	class rhsusf_m998_w_2dr_fulltop						{ quality = 1; price = 68000; };
	class rhsusf_m998_w_2dr_halftop						{ quality = 1; price = 58000; };
	class rhsusf_m998_w_2dr						        { quality = 1; price = 55000; };
	class rhsusf_m998_w_4dr_fulltop						{ quality = 1; price = 64000; };
	class rhsusf_m998_w_4dr_halftop						{ quality = 1; price = 59000; };
	class rhsusf_m998_w_4dr						        { quality = 1; price = 58500; };
	class rhsusf_m1151_usarmy_wd						{ quality = 1; price = 70000; };
	class rhsusf_m1151_m2_v1_usarmy_wd					{ quality = 1; price = 170000; };
	class rhsusf_m1151_m2_lras3_v1_usarmy_wd			{ quality = 1; price = 190000; };
	class rhsusf_m1151_m240_v1_usarmy_wd				{ quality = 1; price = 150000; };
	class rhsusf_m1151_m2_v2_usarmy_wd					{ quality = 1; price = 199999; };
	class rhsusf_m1151_m240_v2_usarmy_wd				{ quality = 1; price = 175000; };
	class rhsusf_m1152_usarmy_wd						{ quality = 1; price = 49000; };
	class rhsusf_m1152_rsv_usarmy_wd					{ quality = 1; price = 53000; };
	class rhsusf_m1152_sicps_usarmy_wd					{ quality = 1; price = 56000; };
	class rhsusf_m1165_usarmy_wd						{ quality = 1; price = 52000; };
    //HUMMWE SAND2
	class rhsusf_m1025_d_s_m2						    { quality = 1; price = 140000; };
	class rhsusf_m1025_d_s						        { quality = 1; price = 66000; };
	class rhsusf_m1043_d_s_m2						    { quality = 1; price = 140000; };
	class rhsusf_m1043_d_s						        { quality = 1; price = 52000; };
	class rhsusf_m998_d_s_2dr_halftop					{ quality = 1; price = 68000; };
	class rhsusf_m998_d_s_2dr						    { quality = 1; price = 58000; };
	class rhsusf_m998_d_s_2dr_fulltop					{ quality = 1; price = 64000; };
	class rhsusf_m998_d_s_4dr_halftop					{ quality = 1; price = 59000; };
	class rhsusf_m998_d_s_4dr_fulltop					{ quality = 1; price = 64000; };
	class rhsusf_m1151_usmc_d						    { quality = 1; price = 70000; };
	class rhsusf_m1151_m2crows_usmc_d					{ quality = 1; price = 210000; };
	class rhsusf_m1151_m2_v3_usmc_d						{ quality = 1; price = 199999; };
	class rhsusf_m1151_m240_v3_usmc_d					{ quality = 1; price = 175000; };
	class rhsusf_m1152_usmc_d						    { quality = 1; price = 53000; };
	class rhsusf_m1152_rsv_usmc_d						{ quality = 1; price = 56000; };
	class rhsusf_m1165_usmc_d						    { quality = 1; price = 52000; };
    //HUMMWE GRÜNTARN
	class rhsusf_CGRCAT1A2_usmc_d						{ quality = 1; price = 86000; };
	class rhsusf_CGRCAT1A2_M2_usmc_d					{ quality = 1; price = 165000; };
	class rhsusf_M1232_MC_M2_usmc_d						{ quality = 1; price = 199999; };
	class rhsusf_m1240a1_usmc_d						    { quality = 1; price = 70000; };
	class rhsusf_m1240a1_m2_usmc_d						{ quality = 1; price = 178000; };
	class rhsusf_m1240a1_m240_usmc_d					{ quality = 1; price = 150000; };
	class rhsusf_m1240a1_m2crows_usmc_d					{ quality = 1; price = 230000; };
	class rhsusf_m1a1fep_d						        { quality = 1; price = 1500620; };
	class rhsusf_m1025_w_s_m2						    { quality = 1; price = 140000; };
	class rhsusf_m1025_w_s						        { quality = 1; price = 66000; };
	class rhsusf_m1043_w_s_m2						    { quality = 1; price = 140000; };
	class rhsusf_m1043_w_s						        { quality = 1; price = 52000; };
	class rhsusf_m998_w_s_2dr_halftop					{ quality = 1; price = 68000; };
	class rhsusf_m998_w_s_2dr						    { quality = 1; price = 58000; };
	class rhsusf_m998_w_s_2dr_fulltop					{ quality = 1; price = 64000; };
	class rhsusf_m998_w_s_4dr_halftop					{ quality = 1; price = 59000; };
	class rhsusf_m998_w_s_4dr						    { quality = 1; price = 64000; };
	class rhsusf_m998_w_s_4dr_fulltop					{ quality = 1; price = 70000; };
	class rhsusf_m1151_usmc_wd						    { quality = 1; price = 70000; };
	class rhsusf_m1151_m2crows_usmc_wd				 	{ quality = 1; price = 245000; };
	class rhsusf_m1151_m2_v3_usmc_wd					{ quality = 1; price = 199999; };
	class rhsusf_m1151_m240_v3_usmc_wd					{ quality = 1; price = 175000; };
	class rhsusf_m1152_usmc_wd						    { quality = 1; price = 53000; };
	class rhsusf_m1152_rsv_usmc_wd						{ quality = 1; price = 56000; };
	class rhsusf_m1165_usmc_wd						    { quality = 1; price = 52000; };
    //LKW 2 ACHSER
    //SAND
	class rhsusf_M1078A1P2_WD_fmtv_usarmy				{ quality = 1; price = 62000; };
	class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy		{ quality = 1; price = 59000; };
	class rhsusf_M1078A1P2_B_WD_fmtv_usarmy				{ quality = 1; price = 65000; };
	class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy		{ quality = 1; price = 62000; };
	class rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy			{ quality = 1; price = 99000; };
	class rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy	{ quality = 1; price = 96000; };
	class rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy			{ quality = 1; price = 66000; };
    //GRÜNTARN
	class rhsusf_M1078A1P2_D_fmtv_usarmy				{ quality = 1; price = 62000; };
	class rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy		{ quality = 1; price = 59000; };
	class rhsusf_M1078A1P2_B_D_fmtv_usarmy				{ quality = 1; price = 65000; };
	class rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy		{ quality = 1; price = 62000; };
	class rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy			{ quality = 1; price = 99000; };
	class rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy	{ quality = 1; price = 96000; };
	class rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy			{ quality = 1; price = 66000; };
    //LKW 2 ACHSER OFFEN HMG
	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom			{ quality = 1; price = 54000; };
	class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom			{ quality = 1; price = 58000; };
    //LKW 3 ACHSER
    //SAND
	class rhsusf_M1083A1P2_D_fmtv_usarmy				{ quality = 1; price = 64000; };
	class rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy		{ quality = 1; price = 62000; };
	class rhsusf_M1083A1P2_B_D_fmtv_usarmy				{ quality = 1; price = 67000; };
	class rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy		{ quality = 1; price = 64000; };
	class rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy			{ quality = 1; price = 110000; };
	class rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy	{ quality = 1; price = 115000; };
    //GRÜNTARN
	class rhsusf_M1083A1P2_WD_fmtv_usarmy				{ quality = 1; price = 64000; };
	class rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy		{ quality = 1; price = 62000; };
	class rhsusf_M1083A1P2_B_WD_fmtv_usarmy				{ quality = 1; price = 67000; };
	class rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy		{ quality = 1; price = 64000; };
	class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy			{ quality = 1; price = 110000; };
	class rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy	{ quality = 1; price = 115000; };
    //LKW 3 ACHSER
    //SAND
	class rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy		{ quality = 1; price = 55000; };
	class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy		{ quality = 1; price = 60000; };
    //LKW 3 ACHSER LANG
    //SAND
	class rhsusf_M1084A1P2_D_fmtv_usarmy				{ quality = 1; price = 88000; };
	class rhsusf_M1084A1P2_B_D_fmtv_usarmy				{ quality = 1; price = 91000; };
	class rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy			{ quality = 1; price = 140000; };
    //GRÜNTARN
	class rhsusf_M1084A1P2_WD_fmtv_usarmy				{ quality = 1; price = 88000; };
	class rhsusf_M1084A1P2_B_WD_fmtv_usarmy				{ quality = 1; price = 91000; };
	class rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy			{ quality = 1; price = 140000; };
    //LKW 4 ACHSER HEMMET
    //SAND
	class rhsusf_M977A4_usarmy_d						{ quality = 1; price = 100000; };
	class rhsusf_M977A4_REPAIR_usarmy_d					{ quality = 1; price = 140000; };
	class rhsusf_M977A4_BKIT_usarmy_d					{ quality = 1; price = 101000; };
//	class rhsusf_M977A4_AMMO_BKIT_usarmy_d				{ quality = 1; price = 500119; };
	class rhsusf_M977A4_BKIT_M2_usarmy_d				{ quality = 1; price = 160000; };
//	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d			{ quality = 1; price = 500121; };
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d			{ quality = 1; price = 170000; };
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_d			{ quality = 1; price = 101000; };
//	class rhsusf_M978A4_usarmy_d						{ quality = 1; price = 500124; };
    //GRÜNTARN
	class rhsusf_M977A4_usarmy_wd						{ quality = 1; price = 100000; };
//	class rhsusf_M977A4_AMMO_usarmy_wd					{ quality = 1; price = 500126; }; //AMMO
	class rhsusf_M977A4_REPAIR_usarmy_wd				{ quality = 1; price = 140000; };
	class rhsusf_M977A4_BKIT_usarmy_wd					{ quality = 1; price = 101000; };
	//class rhsusf_M977A4_AMMO_BKIT_usarmy_wd				{ quality = 1; price = 500129; };
	class rhsusf_M977A4_BKIT_M2_usarmy_wd				{ quality = 1; price = 500130; };
//	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd			{ quality = 1; price = 500131; };
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd		{ quality = 1; price = 170000; };
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd			{ quality = 1; price = 101000; };
//	class rhsusf_M978A4_usarmy_wd						{ quality = 1; price = 500134; }; //TANKER
    //PANZERWAGEN 2 RAD
    //SAND
	class rhsusf_M1117_D						        { quality = 1; price = 301000; };
	class rhsusf_M1117_O						        { quality = 1; price = 301000; };
    //GRÜNTARN
	class rhsusf_M1117_W						        { quality = 1; price = 301000; };
    //HUNTER 3 ACHSER
	class rhsusf_M1220_usarmy_d						    { quality = 1; price = 99000; };
	class rhsusf_M1220_M153_M2_usarmy_d					{ quality = 1; price = 196000; };
	class rhsusf_M1220_M2_usarmy_d						{ quality = 1; price = 156000; };
    //GRÜNTARN
	class rhsusf_M1220_usarmy_wd					    { quality = 1; price = 99000; };
	class rhsusf_M1220_M153_M2_usarmy_wd				{ quality = 1; price = 196000; };
	class rhsusf_M1220_M2_usarmy_wd						{ quality = 1; price = 156000; };
    //HUNTER 3 ACHSER GEPANZERT
	class rhsusf_M1230_M2_usarmy_d						{ quality = 1; price = 160000; };
	class rhsusf_M1230a1_usarmy_d						{ quality = 1; price = 89000; };
    //GRÜNTARN
	class rhsusf_M1230_M2_usarmy_wd						{ quality = 1; price = 160000; };
	class rhsusf_M1230a1_usarmy_wd						{ quality = 1; price = 89000; };
    //HUNTER 3 ACHSER LANG
    //SAND
	class rhsusf_M1232_usarmy_d						    { quality = 1; price = 99000; };
	class rhsusf_M1232_M2_usarmy_d						{ quality = 1; price = 160000; };
    //GRÜN
	class rhsusf_M1232_usarmy_wd						{ quality = 1; price = 99000; };
	class rhsusf_M1232_M2_usarmy_wd						{ quality = 1; price = 160000; };
	class rhsusf_M1232_MC_M2_usmc_wd					{ quality = 1; price = 160000; };
    //HUNTER 3 ACHSER LANG GEPANZERT
	class rhsusf_M1237_M2_usarmy_d						{ quality = 1; price = 175000; };
	class rhsusf_M1237_M2_usarmy_wd						{ quality = 1; price = 175000; };
    //HUNTER
    //SAND
	class rhsusf_m1240a1_usarmy_d						{ quality = 1; price = 69000; };
	class rhsusf_m1240a1_m2_usarmy_d					{ quality = 1; price = 176000; };
	class rhsusf_m1240a1_m240_usarmy_d					{ quality = 1; price = 168000; };
	class rhsusf_m1240a1_m2_uik_usarmy_d				{ quality = 1; price = 180000; };
	class rhsusf_m1240a1_m240_uik_usarmy_d				{ quality = 1; price = 170000; };
	class rhsusf_m1240a1_m2crows_usarmy_d				{ quality = 1; price = 250000; };
    //GRÜNTARN
	class rhsusf_m1240a1_usarmy_wd						{ quality = 1; price = 69000; };
	class rhsusf_m1240a1_m2_usarmy_wd					{ quality = 1; price = 176000; };
	class rhsusf_m1240a1_m240_usarmy_wd					{ quality = 1; price = 168000; };
	class rhsusf_m1240a1_m2_uik_usarmy_wd				{ quality = 1; price = 180000; };
	class rhsusf_m1240a1_m240_uik_usarmy_wd				{ quality = 1; price = 170000; };
	class rhsusf_m1240a1_m2crows_usarmy_wd				{ quality = 1; price = 250000; };
    //PANZER GROSS
    //SAND
	class rhsusf_m1a1aimd_usarmy						{ quality = 1; price = 1500000; };
	class rhsusf_m1a1aim_tuski_d						{ quality = 1; price = 1520000; };
	class rhsusf_m1a2sep1d_usarmy						{ quality = 1; price = 1530000; };
	class rhsusf_m1a2sep1tuskid_usarmy					{ quality = 1; price = 1535000; };
	class rhsusf_m1a2sep1tuskiid_usarmy					{ quality = 1; price = 1540000; };
	class rhsusf_m1a2sep2d_usarmy						{ quality = 1; price = 1545000; };
    //GRÜN
	class rhsusf_m1a1aimwd_usarmy						{ quality = 1; price = 1500000; };
	class rhsusf_m1a1aim_tuski_wd						{ quality = 1; price = 1520000; };
	class rhsusf_m1a2sep1wd_usarmy						{ quality = 1; price = 1530000; };
	class rhsusf_m1a2sep1tuskiwd_usarmy					{ quality = 1; price = 1535000; };
	class rhsusf_m1a2sep1tuskiiwd_usarmy				{ quality = 1; price = 1540000; };
	class rhsusf_m1a2sep2wd_usarmy						{ quality = 1; price = 1545000; };
    //PANZER 4 RAD GORGONSTYLE
	class rhsusf_stryker_m1126_m2_d						{ quality = 1; price = 600179; };
	class rhsusf_stryker_m1127_m2_d						{ quality = 1; price = 600180; };
	class rhsusf_stryker_m1132_m2_np_d					{ quality = 1; price = 600181; };
	class rhsusf_stryker_m1132_m2_d						{ quality = 1; price = 700182; };
    //GRÜNTARN
	class rhsusf_stryker_m1126_m2_wd					{ quality = 1; price = 600183; };
	class rhsusf_stryker_m1127_m2_wd					{ quality = 1; price = 600184; };
	class rhsusf_stryker_m1132_m2_np_wd					{ quality = 1; price = 600185; };
	class rhsusf_stryker_m1132_m2_wd					{ quality = 1; price = 700186; };
    //PANZER KLEIN
    //SAND
	class rhsusf_m113d_usarmy_supply					{ quality = 1; price = 300187; };
	class rhsusf_m113d_usarmy						    { quality = 1; price = 300188; };
	class rhsusf_m113d_usarmy_M240						{ quality = 1; price = 400189; };
	class rhsusf_m113d_usarmy_medical					{ quality = 1; price = 300000; };
	class rhsusf_m113d_usarmy_unarmed					{ quality = 1; price = 300191; };
    //GRÜNTARN
	class rhsusf_m113_usarmy_supply						{ quality = 1; price = 300187; };
	class rhsusf_m113_usarmy						    { quality = 1; price = 300188; };
	class rhsusf_m113_usarmy_M2_90						{ quality = 1; price = 450189; };
	class rhsusf_m113_usarmy_M240						{ quality = 1; price = 400189; };
	class rhsusf_m113_usarmy_medical					{ quality = 1; price = 300000; };
	class rhsusf_m113_usarmy_unarmed					{ quality = 1; price = 300191; };
    //PANZER MITTEL GRÜNTARN
	class RHS_M2A2_wd						            { quality = 1; price = 700198; };
	class RHS_M2A2_BUSKI_WD						        { quality = 1; price = 700199; };
	class RHS_M2A3_wd						            { quality = 1; price = 700200; };
//	class RHS_M2A3_BUSKI_wd						        { quality = 1; price = 500201; };
//	class RHS_M2A3_BUSKIII_wd						    { quality = 1; price = 500202; };
//	class RHS_M6_wd	class 						        { quality = 1; price = 500203; };//AA
    //HUNTER SPEZIAL
	class rhsusf_m1165a1_gmv_m134d_m240_socom_d			{ quality = 1; price = 300204; };
	class rhsusf_m1165a1_gmv_m2_m240_socom_d			{ quality = 1; price = 300205; };
    //BUGGY
	class rhsusf_mrzr4_d						        { quality = 1; price = 20206; };
    //HUNTER GEPANZERT
	class rhsusf_M1238A1_socom_d						{ quality = 1; price = 80207; };
	class rhsusf_M1238A1_M2_socom_d						{ quality = 1; price = 200208; };
    //HUNTER GEPANZERT PICKUP
	class rhsusf_M1239_socom_d						    { quality = 1; price = 90209; };
	class rhsusf_M1239_M2_socom_d						{ quality = 1; price = 320210; };
	class rhsusf_M1239_M2_Deploy_socom_d			    { quality = 1; price = 320211; };
    //HUNTER GEPANZERT2
	class rhsusf_m1245_m2crows_socom_d					{ quality = 1; price = 245212; };
	class rhsusf_m1245_m2crows_socom_deploy				{ quality = 1; price = 250213; };
    //HUMMWE SHERIFF
	class rhsusf_m1165_asv_m240_usaf_d					{ quality = 1; price = 160214; };
    //HUNTER GAS SICHER
	class rhsusf_CGRCAT1A2_usmc_wd						{ quality = 1; price = 80215; };
	class rhsusf_CGRCAT1A2_M2_usmc_wd					{ quality = 1; price = 180216; };
    //HUNTER HINTEN OFFEN
	class rhsusf_m1240a1_usmc_wd						{ quality = 1; price = 70217; };
	class rhsusf_m1240a1_m2_usmc_wd						{ quality = 1; price = 180214; };
	class rhsusf_m1240a1_m240_usmc_wd					{ quality = 1; price = 160214; };
    //PANZER SCHWER
	class rhsusf_m1a1fep_wd						        { quality = 1; price = 1520220; };
	class rhsusf_m1a1fep_od						        { quality = 1; price = 1535000; };
	class rhsusf_m1a1hc_wd						        { quality = 1; price = 1545000; };

    //Heli
	class RHS_CH_47F_10						            { quality = 1; price = 200223; };
	class RHS_CH_47F_10_cargo						    { quality = 1; price = 200224; };
	class RHS_CH_47F_light						        { quality = 1; price = 200225; };
	class RHS_UH60M_d						            { quality = 1; price = 160226; };
	class RHS_UH60M_ESSS_d						        { quality = 1; price = 200227; };
	class RHS_UH60M_ESSS2_d						        { quality = 1; price = 200228; };
	class RHS_UH60M2_d						            { quality = 1; price = 220229; };
	class RHS_UH60M_MEV2_d					        	{ quality = 1; price = 200230; };
	class RHS_UH60M_MEV_d						        { quality = 1; price = 200231; };
//
	class RHS_CH_47F						            { quality = 1; price = 200232; };
	class RHS_CH_47F_cargo						        { quality = 1; price = 200233; };
	class RHS_UH60M						                { quality = 1; price = 160234; };
	class RHS_UH60M_ESSS					            { quality = 1; price = 200235; };
	class RHS_UH60M_ESSS2						        { quality = 1; price = 200236; };
	class RHS_UH60M2						            { quality = 1; price = 220237; };
	class RHS_UH60M_MEV2						        { quality = 1; price = 200238; };
	class RHS_UH60M_MEV						            { quality = 1; price = 200239; };
//
	class RHS_MELB_MH6M						            { quality = 1; price = 110240; };
	class RHS_MELB_H6M						            { quality = 1; price = 90241; };
//
	class rhsusf_CH53E_USMC_D						    { quality = 1; price = 200242; };
	class rhsusf_CH53e_USMC_D_cargo						{ quality = 1; price = 200243; };
	class rhsusf_CH53E_USMC_GAU21_D						{ quality = 1; price = 200244; };
	class RHS_UH1Y_UNARMED_d						    { quality = 1; price = 160245; };
//
	class rhsusf_CH53E_USMC						        { quality = 1; price = 200242; };
	class rhsusf_CH53e_USMC_cargo						{ quality = 1; price = 200243; };
	class rhsusf_CH53E_USMC_GAU21						{ quality = 1; price = 200244; };
	class RHS_UH1Y_UNARMED						        { quality = 1; price = 160245; };
//

//JET
	class RHS_C130J						                { quality = 1; price = 200250; };
	class RHS_C130J_Cargo					        	{ quality = 1; price = 220251; };
//	class rhsusf_f22						            { quality = 1; price = 500252; };
//BOOT
	class rhsusf_mkvsoc						            { quality = 1; price = 970000; };
	//RHS Russen Karren
//GAZ
	class rhs_gaz66_repair_msv                                    { quality = 1; price = 69998; }
	class rhs_gaz66_vdv                                           { quality = 1; price = 69999; };
	class rhs_gaz66_flat_vdv                                      { quality = 1; price = 60000; };
	//class rhs_gaz66_ammo_vdv                                      { quality = 1; price = 50001; };
	class rhs_gaz66o_vdv                                          { quality = 1; price = 60000; };
	class rhs_gaz66o_flat_vdv                                     { quality = 1; price = 60002; };
	class rhs_gaz66_r142_vdv                                      { quality = 1; price = 60003; };
	class rhs_gaz66_ap2_vdv                                       { quality = 1; price = 60004; };
	class rhs_gaz66_repair_vdv                                    { quality = 1; price = 70005; };
	class rhs_gaz66_vmf                                           { quality = 1; price = 60006; };
	class rhs_gaz66_flat_vmf                                      { quality = 1; price = 60007; };
	//class rhs_gaz66_ammo_vmf                                      { quality = 1; price = 50008; };
	class rhs_gaz66o_vmf                                          { quality = 1; price = 60009; };
	class rhs_gaz66o_flat_vmf                                     { quality = 1; price = 60011; };
	class rhs_gaz66_r142_vmf                                      { quality = 1; price = 60012; };
	class rhs_gaz66_ap2_vmf                                       { quality = 1; price = 60013; };
	class rhs_gaz66_repair_vmf                                    { quality = 1; price = 70014; };
	class rhs_gaz66_vv                                            { quality = 1; price = 60015; };
	class rhs_gaz66_flat_vv                                       { quality = 1; price = 60016; };
	//class rhs_gaz66_ammo_vv                                       { quality = 1; price = 50017; };
	class rhs_gaz66o_vv                                           { quality = 1; price = 60018; };
	class rhs_gaz66o_flat_vv                                      { quality = 1; price = 60019; };
	class rhs_gaz66_r142_vv                                       { quality = 1; price = 60020; };
	class rhs_gaz66_ap2_vv                                        { quality = 1; price = 60021; };
	class rhs_gaz66_repair_vv                                     { quality = 1; price = 70022; };
	class rhs_gaz66_msv                                           { quality = 1; price = 60023; };
	class rhs_gaz66_flat_msv                                      { quality = 1; price = 60024; };
	class rhs_gaz66o_msv                                          { quality = 1; price = 60025; };
	class rhs_gaz66o_flat_msv                                     { quality = 1; price = 60026; };
	class rhs_gaz66_r142_msv                                      { quality = 1; price = 60027; };
	class rhs_gaz66_ap2_msv                                       { quality = 1; price = 60028; };
//KAMAZ                                                           
	class rhs_kamaz5350_msv                                       { quality = 1; price = 70031; };
	//class rhs_kamaz5350_ammo_msv                                  { quality = 1; price = 50032; };
	class rhs_kamaz5350_flatbed_cover_msv                         { quality = 1; price = 70033; };
	class rhs_kamaz5350_open_msv                                  { quality = 1; price = 70034; };
	class rhs_kamaz5350_flatbed_msv                               { quality = 1; price = 70035; };
	class rhs_kamaz5350_vdv                                       { quality = 1; price = 70036; };
	//class rhs_kamaz5350_ammo_vdv                                  { quality = 1; price = 50037; };
	class rhs_kamaz5350_flatbed_cover_vdv                         { quality = 1; price = 70038; };
	class rhs_kamaz5350_open_vdv                                  { quality = 1; price = 70039; };
	class rhs_kamaz5350_flatbed_vdv                               { quality = 1; price = 70040; };
	class rhs_kamaz5350_vmf                                       { quality = 1; price = 70041; };
	//class rhs_kamaz5350_ammo_vmf                                  { quality = 1; price = 50042; };
	class rhs_kamaz5350_flatbed_cover_vmf                         { quality = 1; price = 70043; };
	class rhs_kamaz5350_open_vmf                                  { quality = 1; price = 70044; };
	class rhs_kamaz5350_flatbed_vmf                               { quality = 1; price = 70045; };
	class rhs_kamaz5350_vv                                        { quality = 1; price = 70046; };
	//class rhs_kamaz5350_ammo_vv                                   { quality = 1; price = 50047; };
	class rhs_kamaz5350_flatbed_cover_vv                          { quality = 1; price = 70048; };
	class rhs_kamaz5350_open_vv                                   { quality = 1; price = 70049; };
	class rhs_kamaz5350_flatbed_vv                                { quality = 1; price = 70050; };
//KRAZ                                                           
	class rhs_kraz255b1_flatbed_msv                               { quality = 1; price = 65052; };
	class rhs_kraz255b1_cargo_open_msv                            { quality = 1; price = 65053; };
	class rhs_kraz255b1_flatbed_vdv                               { quality = 1; price = 65054; };
	class rhs_kraz255b1_cargo_open_vdv                            { quality = 1; price = 65055; };
	class rhs_kraz255b1_flatbed_vmf                               { quality = 1; price = 65056; };
	class rhs_kraz255b1_cargo_open_vmf                            { quality = 1; price = 65057; };
	class rhs_kraz255b1_flatbed_vv                                { quality = 1; price = 65058; };
	class rhs_kraz255b1_cargo_open_vv                             { quality = 1; price = 65059; };
//Ural                                                            
	class RHS_Ural_MSV_01                                         { quality = 1; price = 65061; };
	//class RHS_Ural_Ammo_MSV_01                                    { quality = 1; price = 65062; };
	class RHS_Ural_Flat_MSV_01                                    { quality = 1; price = 65063; };
	class RHS_Ural_Open_MSV_01                                    { quality = 1; price = 65064; };
	class RHS_Ural_Open_Flat_MSV_01                               { quality = 1; price = 65065; };
	class RHS_Ural_Repair_MSV_01                                  { quality = 1; price = 65066; };
	class RHS_Ural_VDV_01                                         { quality = 1; price = 65067; };
	//class RHS_Ural_Ammo_VDV_01                                    { quality = 1; price = 65068; };
	class RHS_Ural_Flat_VDV_01                                    { quality = 1; price = 65069; };
	class RHS_Ural_Open_VDV_01                                    { quality = 1; price = 65070; };
	class RHS_Ural_Open_Flat_VDV_01                               { quality = 1; price = 65071; };
	class RHS_Ural_Repair_VDV_01                                  { quality = 1; price = 65072; };
	class RHS_Ural_VV_01                                          { quality = 1; price = 65073; };
	//class RHS_Ural_Ammo_VV_01                                     { quality = 1; price = 65074; };
	class RHS_Ural_Flat_VV_01                                     { quality = 1; price = 65075; };
	class RHS_Ural_Open_VV_01                                     { quality = 1; price = 65076; };
	class RHS_Ural_Open_Flat_VV_01                                { quality = 1; price = 65077; };
	class RHS_Ural_Repair_VV_01                                   { quality = 1; price = 65078; };
	class RHS_Ural_Civ_01                                         { quality = 1; price = 65079; };
	class RHS_Ural_Open_Civ_01                                    { quality = 1; price = 65080; };
//UralAlt                                                         
	class rhs_zil131_msv                                          { quality = 1; price = 65082; };
	class rhs_zil131_flatbed_cover_msv                            { quality = 1; price = 65083; };
	class rhs_zil131_open_msv                                     { quality = 1; price = 65084; };
	class rhs_zil131_flatbed_msv                                  { quality = 1; price = 65085; };
	class rhs_zil131_vdv                                          { quality = 1; price = 65086; };
	class rhs_zil131_flatbed_cover_vdv                            { quality = 1; price = 65087; };
	class rhs_zil131_open_vdv                                     { quality = 1; price = 65088; };
	class rhs_zil131_flatbed_vdv                                  { quality = 1; price = 65089; };
	class rhs_zil131_vmf                                          { quality = 1; price = 65090; };
	class rhs_zil131_flatbed_cover_vmf                            { quality = 1; price = 65091; };
	class rhs_zil131_open_vmf                                     { quality = 1; price = 65092; };
	class rhs_zil131_flatbed_vmf                                  { quality = 1; price = 65093; };
	class rhs_zil131_vv                                           { quality = 1; price = 65094; };
	class rhs_zil131_flatbed_cover_vv                             { quality = 1; price = 65095; };
	class rhs_zil131_open_vv                                      { quality = 1; price = 65096; };
	class rhs_zil131_flatbed_vv                                   { quality = 1; price = 65097; };
//BTR                                                             
	class rhs_btr60_msv                                           { quality = 1; price = 250099; };
	class rhs_btr70_msv                                           { quality = 1; price = 250100; };
	class rhs_btr80_msv                                           { quality = 1; price = 280101; };
	class rhs_btr80a_msv                                          { quality = 1; price = 400102; };
	class rhs_bmp1_tv                                             { quality = 1; price = 650103; };
	class rhs_bmp1d_tv                                            { quality = 1; price = 650104; };
	class rhs_bmp1k_tv                                            { quality = 1; price = 650105; };
	class rhs_bmp1p_tv                                            { quality = 1; price = 650106; };
	class rhs_bmp2e_tv                                            { quality = 1; price = 650107; };
	class rhs_bmp2_tv                                             { quality = 1; price = 650108; };
	class rhs_bmp2d_tv                                            { quality = 1; price = 650109; };
	class rhs_bmp2k_tv                                            { quality = 1; price = 650110; };
	class rhs_btr60_vdv                                           { quality = 1; price = 250111; };
	class rhs_btr70_vdv                                           { quality = 1; price = 250112; };
	class rhs_btr80_vdv                                           { quality = 1; price = 280113; };
	class rhs_btr80a_vdv                                          { quality = 1; price = 400114; };
	class rhs_btr60_vmf                                           { quality = 1; price = 250111; };
	class rhs_btr70_vmf                                           { quality = 1; price = 250112; };
	class rhs_btr80_vmf                                           { quality = 1; price = 280113; };
	class rhs_btr80a_vmf                                          { quality = 1; price = 400114; };
	class rhs_btr60_vv                                            { quality = 1; price = 250111; };
	class rhs_btr70_vv                                            { quality = 1; price = 250112; };
	class rhs_btr80_vv                                            { quality = 1; price = 280113; };
	class rhs_btr80a_vv                                           { quality = 1; price = 400114; };
//Bmp                                                             
	class rhs_bmp1_msv                                            { quality = 1; price = 650124; };
	class rhs_bmp1d_msv                                           { quality = 1; price = 650125; };
	class rhs_bmp1k_msv                                           { quality = 1; price = 650126; }; 
	class rhs_bmp1p_msv                                           { quality = 1; price = 650127; };
	class rhs_bmp2e_msv                                           { quality = 1; price = 650128; };
	class rhs_bmp2_msv                                            { quality = 1; price = 650129; };
	class rhs_bmp2d_msv                                           { quality = 1; price = 650130; };
	class rhs_bmp2k_msv                                           { quality = 1; price = 650131; };
	class rhs_bmp3_msv                                            { quality = 1; price = 700132; };
	class rhs_bmp3_late_msv                                       { quality = 1; price = 700133; };
	class rhs_bmp3m_msv                                           { quality = 1; price = 700134; }; 
	class rhs_bmp3mera_msv                                        { quality = 1; price = 700135; };
	class rhs_bmd1                                                { quality = 1; price = 650136; };
	class rhs_bmd1k                                               { quality = 1; price = 650137; };
	class rhs_bmd1p                                               { quality = 1; price = 650138; };
	class rhs_bmd1pk                                              { quality = 1; price = 650139; };
	class rhs_bmd2                                                { quality = 1; price = 650140; };
	class rhs_bmd2k                                               { quality = 1; price = 650141; };
	class rhs_bmd4_vdv                                            { quality = 1; price = 700142; };
	class rhs_bmd4m_vdv                                           { quality = 1; price = 700143; };
	class rhs_bmd4ma_vdv                                          { quality = 1; price = 750144; };
	class rhs_bmp1_vdv                                            { quality = 1; price = 650145; };
	class rhs_bmp1d_vdv                                           { quality = 1; price = 650146; };
	class rhs_bmp1k_vdv                                           { quality = 1; price = 650147; };
	class rhs_bmp1p_vdv                                           { quality = 1; price = 650148; };
	class rhs_bmp2e_vdv                                           { quality = 1; price = 650149; };
	class rhs_bmp2_vdv                                            { quality = 1; price = 650150; };
	class rhs_bmp2d_vdv                                           { quality = 1; price = 650151; };
	class rhs_bmp2k_vdv                                           { quality = 1; price = 650152; };
	class rhs_bmp1_vmf                                            { quality = 1; price = 650153; };
	class rhs_bmp1d_vmf                                           { quality = 1; price = 650154; };
	class rhs_bmp1k_vmf                                           { quality = 1; price = 650155; };
	class rhs_bmp1p_vmf                                           { quality = 1; price = 650156; };
	class rhs_bmp2e_vmf                                           { quality = 1; price = 650157; };
	class rhs_bmp2_vmf                                            { quality = 1; price = 650158; };
	class rhs_bmp2d_vmf                                           { quality = 1; price = 650159; };
	class rhs_bmp2k_vmf                                           { quality = 1; price = 650160; };
	class rhs_bmp1_vv                                             { quality = 1; price = 650161; };
	class rhs_bmp1d_vv                                            { quality = 1; price = 650162; };
	class rhs_bmp1k_vv                                            { quality = 1; price = 650163; };
	class rhs_bmp1p_vv                                            { quality = 1; price = 650164; };
	class rhs_bmp2e_vv                                            { quality = 1; price = 650165; };
	class rhs_bmp2_vv                                             { quality = 1; price = 650166; };
	class rhs_bmp2d_vv                                            { quality = 1; price = 650167; };
	class rhs_bmp2k_vv                                            { quality = 1; price = 650168; };
//BMK                                                             
	class rhs_bmk_t                                               { quality = 1; price = 140170; };
//WasserladePanzer                                                
	class rhs_pts_vmf                                             { quality = 1; price = 200172; };
//BRM                                                             
	class rhs_brm1k_msv                                           { quality = 1; price = 850174; };
	class rhs_brm1k_tv                                            { quality = 1; price = 850175; };
	class rhs_brm1k_vdv                                           { quality = 1; price = 850176; };
	class rhs_brm1k_vmf                                           { quality = 1; price = 850177; };
	class rhs_brm1k_vv                                            { quality = 1; price = 850178; };
//OB?                                                             
	class rhs_Ob_681_2                                            { quality = 1; price = 700180; };
//PRP?                                                            
	class rhs_prp3_msv                                            { quality = 1; price = 640182; };
	class rhs_prp3_tv                                             { quality = 1; price = 640183; };
	class rhs_prp3_vdv                                            { quality = 1; price = 640184; };
	class rhs_prp3_vmf                                            { quality = 1; price = 640185; };
	class rhs_prp3_vv                                             { quality = 1; price = 640186; };
//GAZ-233011                                                      
	class rhs_tigr_vdv                                            { quality = 1; price = 64188; };
	class rhs_tigr_3camo_vdv                                      { quality = 1; price = 64189; };
	class rhs_tigr_sts_3camo_vdv                                  { quality = 1; price = 180190; };
	class rhs_tigr_m_vdv                                          { quality = 1; price = 64191; };
	class rhs_tigr_m_3camo_vdv                                    { quality = 1; price = 64192; };
	class rhs_tigr_vmf                                            { quality = 1; price = 64193; };
	class rhs_tigr_3camo_vmf                                      { quality = 1; price = 64194; };
	class rhs_tigr_sts_vmf                                        { quality = 1; price = 180195; };
	class rhs_tigr_sts_3camo_vmf                                  { quality = 1; price = 180196; };
	class rhs_tigr_m_vmf                                          { quality = 1; price = 64197; };
	class rhs_tigr_m_3camo_vmf                                    { quality = 1; price = 64198; };
	class rhs_tigr_msv                                            { quality = 1; price = 64199; };
	class rhs_tigr_3camo_msv                                      { quality = 1; price = 64200; };
	class rhs_tigr_sts_msv                                        { quality = 1; price = 180201; };
	class rhs_tigr_sts_3camo_msv                                  { quality = 1; price = 180202; };
	class rhs_tigr_m_msv                                          { quality = 1; price = 64203; };
	class rhs_tigr_m_3camo_msv                                    { quality = 1; price = 64204; };
	class rhs_tigr_sts_vdv                                        { quality = 1; price = 180205; };
	class rhs_tigr_vv                                             { quality = 1; price = 64206; };
	class rhs_tigr_3camo_vv                                       { quality = 1; price = 64207; };
	class rhs_tigr_sts_vv                                         { quality = 1; price = 180208; };
	class rhs_tigr_sts_3camo_vv                                   { quality = 1; price = 180209; };
	class rhs_tigr_m_vv                                           { quality = 1; price = 64210; };
	class rhs_tigr_m_3camo_vv                                     { quality = 1; price = 64211; };
//Panzer                                                          
	class rhs_t14_tv                                              { quality = 1; price = 1500214; };
	class rhs_t15_tv                                              { quality = 1; price = 1500215; };
	class rhs_t72ba_tv                                            { quality = 1; price = 1500216; };
	class rhs_t72bb_tv                                            { quality = 1; price = 1500217; };
	class rhs_t72bc_tv                                            { quality = 1; price = 1500218; };
	class rhs_t72bd_tv                                            { quality = 1; price = 1500219; };
	class rhs_t72be_tv                                            { quality = 1; price = 1500220; };
	class rhs_t80                                                 { quality = 1; price = 1600221; };
	class rhs_t80a                                                { quality = 1; price = 1600222; };
	class rhs_t80b                                                { quality = 1; price = 1600223; };
	class rhs_t80bk                                               { quality = 1; price = 1600224; };
	class rhs_t80bv                                               { quality = 1; price = 1600225; };
	class rhs_t80bvk                                              { quality = 1; price = 1600226; };
	class rhs_t80u                                                { quality = 1; price = 1600227; };
	class rhs_t80u45m                                             { quality = 1; price = 1600228; };
	class rhs_t80ue1                                              { quality = 1; price = 1600229; };
	class rhs_t80uk                                               { quality = 1; price = 1600230; };
	class rhs_t80um                                               { quality = 1; price = 1600231; };
	class rhs_t90_tv                                              { quality = 1; price = 1600232; };
	class rhs_t90a_tv                                             { quality = 1; price = 1600233; };
	class rhs_t90am_tv                                            { quality = 1; price = 1600234; };
	class rhs_t90saa_tv                                           { quality = 1; price = 1600235; };
	class rhs_t90sab_tv                                           { quality = 1; price = 1600236; };
	class rhs_t90sm_tv                                            { quality = 1; price = 1600237; };
	class rhs_typhoon_vdv                                         { quality = 1; price = 100298; };
	class rhs_sprut_vdv                                           { quality = 1; price = 1450299; };
//Helis                                                          
//Mi                                                             
	//class RHS_Mi24P_vdv                                           { quality = 1; price = 500240; };
	//class RHS_Mi24V_vdv                                           { quality = 1; price = 500241; };
	class RHS_Mi8AMT_vdv                                          { quality = 1; price = 160242; };
	class RHS_Mi8mt_vdv                                           { quality = 1; price = 160243; };
	class RHS_Mi8mt_Cargo_vdv                                     { quality = 1; price = 160244; };
	//class RHS_Mi8MTV3_vdv                                         { quality = 1; price = 500245; };
	//class RHS_Mi8MTV3_heavy_vdv                                   { quality = 1; price = 500246; };
	//class RHS_Mi8mtv3_Cargo_vdv                                   { quality = 1; price = 500247; };
	class RHS_Mi8T_vdv                                            { quality = 1; price = 160248; };
	class RHS_Mi8mt_vv                                            { quality = 1; price = 160249; };
	class RHS_Mi8mt_Cargo_vv                                      { quality = 1; price = 160250; };
	class RHS_Mi8t_vv                                             { quality = 1; price = 160251; };
	//class RHS_Mi24P_vvsc                                          { quality = 1; price = 500252; };
	//class RHS_Mi24V_vvsc                                          { quality = 1; price = 500253; };
	class RHS_Mi24Vt_vvsc                                         { quality = 1; price = 270254; };
	//class rhs_mi28n_vvsc                                          { quality = 1; price = 500255; };
	class RHS_Mi8AMT_vvsc                                         { quality = 1; price = 160256; };
	//class RHS_Mi8AMTSh_vvsc                                       { quality = 1; price = 500257; };
	class RHS_Mi8mt_vvsc                                          { quality = 1; price = 160258; };
	class RHS_Mi8mt_Cargo_vvsc                                    { quality = 1; price = 160259; };
	//class RHS_Mi8MTV3_vvsc                                        { quality = 1; price = 500260; };
	//class RHS_Mi8MTV3_heavy_vvsc                                  { quality = 1; price = 500261; };
	//class RHS_Mi8mtv3_Cargo_vvsc                                  { quality = 1; price = 500262; };
	class RHS_Mi8T_vvsc                                           { quality = 1; price = 160263; };
	//class RHS_Mi24P_vvs                                           { quality = 1; price = 500264; };
	//class RHS_Mi24V_vvs                                           { quality = 1; price = 500265; };
	class RHS_Mi24Vt_vvs                                          { quality = 1; price = 280266; };
	//class rhs_mi28n_vvs                                           { quality = 1; price = 500267; };
	class RHS_Mi8AMT_vvs                                          { quality = 1; price = 160268; };
	//class RHS_Mi8AMTSh_vvs                                        { quality = 1; price = 160269; };
	class RHS_Mi8mt_vvs                                           { quality = 1; price = 160270; };
	class RHS_Mi8mt_Cargo_vvs                                     { quality = 1; price = 160271; };
	//class RHS_Mi8MTV3_vvs                                         { quality = 1; price = 500272; };
	//class RHS_Mi8MTV3_heavy_vvs                                   { quality = 1; price = 500273; };
	//class RHS_Mi8mtv3_Cargo_vvs                                   { quality = 1; price = 500274; };
	class RHS_Mi8T_vvs                                            { quality = 1; price = 160275; };
	class RHS_Mi8amt_civilian                                     { quality = 1; price = 160276; };
	class RHS_Mi8t_civilian                                       { quality = 1; price = 160277; };
//SchwerHeli                                                      
	//class RHS_Ka52_vvsc                                           { quality = 1; price = 500279; };
	//class rhs_ka60_c                                              { quality = 1; price = 500280; };
	//class RHS_Ka52_vvs                                            { quality = 1; price = 500281; };
	//class rhs_ka60_grey                                           { quality = 1; price = 500282; };
//Jets                                                            
	//class rhs_mig29s_vmf                                          { quality = 1; price = 500284; };
	//class rhs_mig29sm_vmf                                         { quality = 1; price = 500285; };
	//class rhs_mig29s_vvsc                                         { quality = 1; price = 500286; };
	//class rhs_mig29sm_vvsc                                        { quality = 1; price = 500287; };
	//class RHS_Su25SM_vvsc                                         { quality = 1; price = 500288; };
	//class rhs_mig29s_vvs                                          { quality = 1; price = 500289; };
	//class rhs_mig29sm_vvs                                         { quality = 1; price = 500290; };
	//class RHS_Su25SM_vvs                                          { quality = 1; price = 500291; };
	//class RHS_T50_vvs_generic                                     { quality = 1; price = 500291; };
	//class RHS_T50_vvs_051                                         { quality = 1; price = 500292; };
	//class RHS_T50_vvs_052                                         { quality = 1; price = 500293; };
	//class RHS_T50_vvs_053                                         { quality = 1; price = 500294; };
	//class RHS_T50_vvs_054                                         { quality = 1; price = 500295; };
	//class RHS_T50_vvs_blueonblue                                  { quality = 1; price = 500296; };                                                             

	
	///////////////////////////////////////////////////////////////////////////////
	// Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class rhs_chdkz_uniform_1						{ quality = 1; price = 865; };
	class rhs_chdkz_uniform_2						{ quality = 1; price = 865; };
	class rhs_chdkz_uniform_3						{ quality = 1; price = 865; };
	class rhs_chdkz_uniform_4						{ quality = 1; price = 865; };
	class rhs_chdkz_uniform_5						{ quality = 1; price = 865; };
	class rhs_uniform_FROG01_d						{ quality = 1; price = 865; };
	class rhs_uniform_FROG01_m81					{ quality = 1; price = 865; };
	class rhs_uniform_FROG01_wd						{ quality = 1; price = 865; };
	class rhs_uniform_cu_ocp						{ quality = 1; price = 750; };
	class rhs_uniform_cu_ocp_101st                  { quality = 1; price = 750; };
	class rhs_uniform_cu_ocp_10th					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ocp_1stcav					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ocp_82nd					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ucp						{ quality = 1; price = 750; };
	class rhs_uniform_cu_ucp_101st					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ucp_10th					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ucp_1stcav					{ quality = 1; price = 865; };
	class rhs_uniform_cu_ucp_82nd					{ quality = 1; price = 865; };
	class rhs_uniform_df15                          { quality = 1; price = 750; };
	class rhs_uniform_emr_patchless					{ quality = 1; price = 750; };
	class rhs_uniform_flora							{ quality = 1; price = 865; };
	class rhs_uniform_flora_patchless				{ quality = 1; price = 750; };
	class rhs_uniform_flora_patchless_alt			{ quality = 1; price = 750; };
	class rhs_uniform_g3_blk						{ quality = 1; price = 865; };
	class rhs_uniform_g3_m81						{ quality = 1; price = 865; };
	class rhs_uniform_g3_mc							{ quality = 1; price = 865; };
	class rhs_uniform_g3_rgr						{ quality = 1; price = 865; };
	class rhs_uniform_g3_tan						{ quality = 1; price = 865; };
	class rhs_uniform_gorka_r_g						{ quality = 1; price = 865; };
	class rhs_uniform_gorka_r_y						{ quality = 1; price = 865; };
	class rhs_uniform_m88_patchless					{ quality = 1; price = 750; };
	class rhs_uniform_mflora_patchless				{ quality = 1; price = 750; };
	class rhs_uniform_msv_emr						{ quality = 1; price = 865; };
	class rhs_uniform_mvd_izlom						{ quality = 1; price = 865; };
	class rhs_uniform_vdv_emr_des					{ quality = 1; price = 865; };
	class rhs_uniform_vdv_flora						{ quality = 1; price = 865; };
	class rhs_uniform_vdv_mflora                    { quality = 1; price = 755; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class rhs_6b23								    		{ quality = 1; price = 750; };
	class rhs_6b23_6sh92									{ quality = 1; price = 750; };
	class rhs_6b23_6sh92_headset							{ quality = 1; price = 750; };
	class rhs_6b23_6sh92_headset_mapcase					{ quality = 1; price = 750; };
	class rhs_6b23_6sh92_radio								{ quality = 1; price = 750; };
	class rhs_6b23_6sh92_vog								{ quality = 1; price = 750; };
	class rhs_6b23_6sh92_vog_headset						{ quality = 1; price = 750; };
	class rhs_6b23_ML							    		{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92									{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92_headset							{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92_headset_mapcase					{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92_radio							{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92_vog								{ quality = 1; price = 750; };
	class rhs_6b23_ML_6sh92_vog_headset						{ quality = 1; price = 750; };
	class rhs_6b23_ML_crew									{ quality = 1; price = 750; };
	class rhs_6b23_ML_crewofficer							{ quality = 1; price = 750; };
	class rhs_6b23_ML_engineer								{ quality = 1; price = 750; };
	class rhs_6b23_ML_medic									{ quality = 1; price = 750; };
	class rhs_6b23_ML_rifleman					    		{ quality = 1; price = 750; };
	class rhs_6b23_ML_sniper								{ quality = 1; price = 750; };
	class rhs_6b23_crew							    		{ quality = 1; price = 750; };
	class rhs_6b23_crewofficer								{ quality = 1; price = 750; };
	class rhs_6b23_digi										{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92								{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92_headset						{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92_headset_mapcase				{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92_radio							{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92_vog				    		{ quality = 1; price = 750; };
	class rhs_6b23_digi_6sh92_vog_headset					{ quality = 1; price = 750; };
	class rhs_6b23_digi_crew								{ quality = 1; price = 750; };
	class rhs_6b23_digi_crewofficer							{ quality = 1; price = 750; };
	class rhs_6b23_digi_engineer							{ quality = 1; price = 750; };
	class rhs_6b23_digi_medic					    		{ quality = 1; price = 750; };
	class rhs_6b23_digi_rifleman							{ quality = 1; price = 750; };
	class rhs_6b23_digi_sniper								{ quality = 1; price = 750; };
	class rhs_6b23_engineer					        		{ quality = 1; price = 750; };
	class rhs_6b23_medic									{ quality = 1; price = 750; };
	class rhs_6b23_rifleman									{ quality = 1; price = 750; };
	class rhs_6b23_sniper									{ quality = 1; price = 750; };
	class rhs_6b43											{ quality = 1; price = 950; };
	class rhs_6sh46								    		{ quality = 1; price = 750; };
	class rhs_6sh92								    		{ quality = 1; price = 750; };
	class rhs_6sh92_digi									{ quality = 1; price = 750; };
	class rhs_6sh92_digi_headset							{ quality = 1; price = 750; };
	class rhs_6sh92_digi_radio					    		{ quality = 1; price = 750; };
	class rhs_6sh92_digi_vog								{ quality = 1; price = 750; };
	class rhs_6sh92_digi_vog_headset						{ quality = 1; price = 750; };
	class rhs_6sh92_headset									{ quality = 1; price = 750; };
	class rhs_6sh92_radio									{ quality = 1; price = 750; };
	class rhs_6sh92_vog										{ quality = 1; price = 750; };
	class rhs_6sh92_vog_headset								{ quality = 1; price = 750; };
	class rhs_vest_commander								{ quality = 1; price = 750; };
	class rhs_vydra_3m										{ quality = 1; price = 750; };
	class rhsusf_iotv_ocp									{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_SAW								{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_grenadier							{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_medic					    		{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_repair							{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_rifleman							{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_squadleader						{ quality = 1; price = 950; };
	class rhsusf_iotv_ocp_teamleader						{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp									{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_SAW								{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_grenadier							{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_medic								{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_repair							{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_rifleman							{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_squadleader						{ quality = 1; price = 950; };
	class rhsusf_iotv_ucp_teamleader						{ quality = 1; price = 950; };
	class rhsusf_spc					            		{ quality = 1; price = 950; };
	class rhsusf_spc_corpsman								{ quality = 1; price = 950; };
	class rhsusf_spc_iar									{ quality = 1; price = 950; };
	class rhsusf_spc_light									{ quality = 1; price = 950; };
	class rhsusf_spc_patchless								{ quality = 1; price = 950; };
	class rhsusf_spc_rifleman								{ quality = 1; price = 950; };
	class rhsusf_spc_squadleader							{ quality = 1; price = 950; };
	class rhsusf_spc_teamleader								{ quality = 1; price = 950; };
	class rhsusf_spcs_ocp									{ quality = 1; price = 950; };
	class rhsusf_spcs_ocp_rifleman							{ quality = 1; price = 950; };
	class rhsusf_spcs_ucp									{ quality = 1; price = 950; };
	class rhsusf_spcs_ucp_rifleman							{ quality = 1; price = 950; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class rhs_assault_umbts									{ quality = 1; price = 850; };
	class rhs_assault_umbts_engineer_empty					{ quality = 1; price = 950; };
	class rhs_medic_bag 									{ quality = 1; price = 850; };
	class rhs_rpg_empty 									{ quality = 1; price = 750; };
	class rhs_sidor 										{ quality = 1; price = 650; };
	class rhsusf_assault_eagleaiii_coy						{ quality = 1; price = 850; };
	class rhsusf_assault_eagleaiii_ocp						{ quality = 1; price = 850; };
	class rhsusf_assault_eagleaiii_ucp						{ quality = 1; price = 850; };
	class rhsusf_falconii									{ quality = 1; price = 950; };
	class rhsusf_falconii_coy								{ quality = 1; price = 950; };
	class rhsusf_falconii_mc								{ quality = 1; price = 950; };

	///////////////////////////////////////////////////////////////////////////////
	// Accessories
	///////////////////////////////////////////////////////////////////////////////
	// Added by ElShotte
	class rhs_ess_black										{ quality = 1; price = 150; };
	class rhs_googles_black									{ quality = 1; price = 75; };
	class rhs_googles_clear									{ quality = 1; price = 75; };
	class rhs_googles_yellow								{ quality = 1; price = 75; };
	class rhs_googles_orange								{ quality = 1; price = 75; };
	class rhs_scarf											{ quality = 1; price = 50; };
	class rhs_balaclava										{ quality = 1; price = 50; };
	class rhs_balaclava1_olive								{ quality = 1; price = 50; };
	class rhsusf_ANPVS_15									{ quality = 1; price = 650; };
	class rhsusf_ANPVS_14									{ quality = 1; price = 550; };
	class rhs_1PN138										{ quality = 1; price = 550; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class rhs_6b27m_digi									{ quality = 1; price = 400; };
	class rhs_6b27m_digi_ess								{ quality = 1; price = 400; };
	class rhs_6b27m_digi_bala								{ quality = 1; price = 600; };
	class rhs_6b27m_digi_ess_bala							{ quality = 1; price = 600; };
	class rhs_6b27m											{ quality = 1; price = 400; };
	class rhs_6b27m_bala									{ quality = 1; price = 600; };
	class rhs_6b27m_ess										{ quality = 1; price = 400; };
	class rhs_6b27m_ess_bala								{ quality = 1; price = 600; };
	class rhs_6b27m_ml										{ quality = 1; price = 400; };
	class rhs_6b27m_ml_ess									{ quality = 1; price = 400; };
	class rhs_6b27m_ml_bala									{ quality = 1; price = 600; };
	class rhs_6b27m_ML_ess_bala								{ quality = 1; price = 600; };
	class rhs_6b27m_green									{ quality = 1; price = 900; };
	class rhs_6b27m_green_ess								{ quality = 1; price = 900; };
	class rhs_6b27m_green_ess_bala							{ quality = 1; price = 900; };
	class rhs_6b26_green									{ quality = 1; price = 900; };
	class rhs_6b26_bala_green								{ quality = 1; price = 900; };
	class rhs_6b26_ess_green								{ quality = 1; price = 900; };
	class rhs_6b26_ess_bala_green							{ quality = 1; price = 900; };
	class rhs_6b26											{ quality = 1; price = 900; };
	class rhs_6b26_bala										{ quality = 1; price = 900; };
	class rhs_6b26_ess										{ quality = 1; price = 900; };
	class rhs_6b26_ess_bala									{ quality = 1; price = 900; };
	class rhs_6b28_green									{ quality = 1; price = 900; };
	class rhs_6b28_green_bala								{ quality = 1; price = 900; };
	class rhs_6b28_green_ess								{ quality = 1; price = 900; };
	class rhs_6b28_green_ess_bala							{ quality = 1; price = 900; };
	class rhs_6b28											{ quality = 1; price = 900; };
	class rhs_6b28_bala										{ quality = 1; price = 900; };
	class rhs_6b28_ess										{ quality = 1; price = 900; };
	class rhs_6b28_ess_bala									{ quality = 1; price = 900; };
	class rhs_6b28_flora									{ quality = 1; price = 900; };
	class rhs_6b28_flora_bala								{ quality = 1; price = 900; };
	class rhs_6b28_flora_ess								{ quality = 1; price = 900; };
	class rhs_6b28_flora_ess_bala							{ quality = 1; price = 900; };
	class rhs_Booniehat_digi								{ quality = 1; price = 90; };
	class rhs_Booniehat_flora								{ quality = 1; price = 900; };
	class rhs_ssh68											{ quality = 1; price = 900; };
	class rhs_Booniehat_m81									{ quality = 1; price = 900; };
	class rhs_Booniehat_marpatd								{ quality = 1; price = 1100; };
	class rhs_Booniehat_marpatwd							{ quality = 1; price = 1200; };
	class rhs_Booniehat_ocp									{ quality = 1; price = 900; };
	class rhs_Booniehat_ucp									{ quality = 1; price = 900; };
	class rhsusf_Bowman										{ quality = 1; price = 900; };
	class rhsusf_ach_bare									{ quality = 1; price = 900; };
	class rhsusf_ach_bare_des								{ quality = 1; price = 900; };
	class rhsusf_ach_bare_des_ess							{ quality = 1; price = 900; };
	class rhsusf_ach_bare_des_headset						{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_des_headset_ess					{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_ess								{ quality = 1; price = 900; };
	class rhsusf_ach_bare_headset							{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_headset_ess						{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_semi								{ quality = 1; price = 900; };
	class rhsusf_ach_bare_semi_ess							{ quality = 1; price = 900; };
	class rhsusf_ach_bare_semi_headset						{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_semi_headset_ess					{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_tan								{ quality = 1; price = 900; };
	class rhsusf_ach_bare_tan_ess							{ quality = 1; price = 900; };
	class rhsusf_ach_bare_tan_headset						{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_tan_headset_ess					{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_wood								{ quality = 1; price = 900; };
	class rhsusf_ach_bare_wood_ess							{ quality = 1; price = 900; };
	class rhsusf_ach_bare_wood_headset						{ quality = 1; price = 1200; };
	class rhsusf_ach_bare_wood_headset_ess					{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_ESS_ocp							{ quality = 1; price = 900; };
	class rhsusf_ach_helmet_ESS_ucp							{ quality = 1; price = 900; };
	class rhsusf_ach_helmet_M81								{ quality = 1; price = 1100; };
	class rhsusf_ach_helmet_camo_ocp						{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_headset_ess_ocp					{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_headset_ess_ucp					{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_headset_ocp						{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_headset_ucp						{ quality = 1; price = 1200; };
	class rhsusf_ach_helmet_ocp								{ quality = 1; price = 900; };
	class rhsusf_ach_helmet_ocp_norotos						{ quality = 1; price = 900; };
	class rhsusf_ach_helmet_ucp								{ quality = 1; price = 900; };
	class rhsusf_ach_helmet_ucp_norotos						{ quality = 1; price = 900; };
	class rhsusf_bowman_cap									{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_M1942							{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_marpatd							{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_marpatd_ess						{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_marpatd_headset					{ quality = 1; price = 1200; };
	class rhsusf_lwh_helmet_marpatwd						{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_marpatwd_ess					{ quality = 1; price = 900; };
	class rhsusf_lwh_helmet_marpatwd_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_bare									{ quality = 1; price = 900; };
	class rhsusf_mich_bare_alt								{ quality = 1; price = 900; };
	class rhsusf_mich_bare_alt_semi							{ quality = 1; price = 900; };
	class rhsusf_mich_bare_alt_tan							{ quality = 1; price = 900; };
	class rhsusf_mich_bare_headset							{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos							{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_alt						{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_alt_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_alt_semi					{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_alt_semi_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_alt_tan					{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_alt_tan_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc						{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_arc_alt					{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_arc_alt_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc_alt_semi				{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_arc_alt_semi_headset		{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc_alt_tan				{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_arc_alt_tan_headset		{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc_semi					{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_arc_semi_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_arc_tan					{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_headset					{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_semi						{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_semi_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_norotos_tan						{ quality = 1; price = 900; };
	class rhsusf_mich_bare_norotos_tan_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_semi								{ quality = 1; price = 900; };
	class rhsusf_mich_bare_semi_headset						{ quality = 1; price = 1200; };
	class rhsusf_mich_bare_tan								{ quality = 1; price = 900; };
	class rhsusf_mich_bare_tan_headset						{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_alt_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_norotos				{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_norotos_arc			{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_norotos_arc_headset	{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatd_norotos_headset		{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatwd						{ quality = 1; price = 900; };
	class rhsusf_mich_helmet_marpatwd_alt					{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatwd_alt_headset			{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatwd_headset				{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatwd_norotos				{ quality = 1; price = 900; };
	class rhsusf_mich_helmet_marpatwd_norotos_arc			{ quality = 1; price = 900; };
	class rhsusf_mich_helmet_marpatwd_norotos_arc_headset	{ quality = 1; price = 1200; };
	class rhsusf_mich_helmet_marpatwd_norotos_headset		{ quality = 1; price = 1200; };

	// Added by ElShotte
	class rhs_altyn_novisor 								{ quality = 1; price = 1500; };
	class rhs_altyn_novisor_bala							{ quality = 1; price = 1500; };
	class rhs_altyn_novisor_ess								{ quality = 1; price = 1500; };
	class rhs_altyn_novisor_ess_bala						{ quality = 1; price = 1500; };
	class rhs_altyn_visordown								{ quality = 1; price = 2000; };
	class rhs_altyn											{ quality = 1; price = 2000; };
	class rhs_altyn_bala									{ quality = 1; price = 2000; };
	class rhsusf_opscore_bk_pelt							{ quality = 1; price = 2000; };
	class rhsusf_opscore_bk									{ quality = 1; price = 2000; };
	class rhsusf_opscore_coy_cover							{ quality = 1; price = 2000; };
	class rhsusf_opscore_coy_cover_pelt						{ quality = 1; price = 2000; };
	class rhsusf_opscore_fg									{ quality = 1; price = 2000; };
	class rhsusf_opscore_fg_pelt							{ quality = 1; price = 2000; };
	class rhsusf_opscore_fg_pelt_cam						{ quality = 1; price = 2000; };
	class rhsusf_opscore_fg_pelt_nsw						{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc									{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_pelt							{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_pelt_nsw						{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_cover							{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_cover_pelt						{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_cover_pelt_nsw					{ quality = 1; price = 2000; };
	class rhsusf_opscore_mc_cover_pelt_cam					{ quality = 1; price = 2000; };
	class rhsusf_opscore_paint								{ quality = 1; price = 2000; };
	class rhsusf_opscore_paint_pelt							{ quality = 1; price = 2000; };
	class rhsusf_opscore_paint_pelt_nsw						{ quality = 1; price = 2000; };
	class rhsusf_opscore_paint_pelt_nsw_cam					{ quality = 1; price = 2000; };
	class rhsusf_opscore_rg_cover							{ quality = 1; price = 2000; };
	class rhsusf_opscore_rg_cover_pelt						{ quality = 1; price = 2000; };
	class rhsusf_opscore_ut									{ quality = 1; price = 2000; };
	class rhsusf_opscore_ut_pelt							{ quality = 1; price = 2000; };
	class rhsusf_opscore_ut_pelt_cam						{ quality = 1; price = 2000; };
	class rhsusf_opscore_ut_pelt_nsw						{ quality = 1; price = 2000; };
	class rhsusf_opscore_ut_pelt_nsw_cam					{ quality = 1; price = 2000; };
	class rhsusf_opscore_mar_ut_pelt						{ quality = 1; price = 2000; };
	class rhsusf_opscore_mar_ut								{ quality = 1; price = 2000; };
	class rhsusf_opscore_mar_fg_pelt						{ quality = 1; price = 2000; };
	class rhsusf_opscore_mar_fg								{ quality = 1; price = 2000; };
	class rhsusf_protech_helmet								{ quality = 1; price = 2000; };
	class rhsusf_protech_helmet_ess							{ quality = 1; price = 2000; };
	class rhsusf_protech_helmet_rhino						{ quality = 1; price = 2000; };
	class rhsusf_protech_helmet_rhino_ess					{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Weapon Attachments - Foregrips
	///////////////////////////////////////////////////////////////////////////////
	class rhsusf_acc_grip1									{ quality = 1; price = 100; };
	class rhsusf_acc_grip2 									{ quality = 1; price = 100; };
	class rhsusf_acc_grip2_tan 								{ quality = 1; price = 100; };
	class rhsusf_acc_grip3 									{ quality = 1; price = 100; };
	class rhsusf_acc_grip3_tan 								{ quality = 1; price = 100; };
	class rhs_acc_grip_rk2 									{ quality = 1; price = 100; };
	class rhs_acc_grip_rk6 									{ quality = 1; price = 100; };
	class rhs_acc_grip_ffg2 								{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Weapon Attachments - Rail
	///////////////////////////////////////////////////////////////////////////////
	class rhsusf_acc_anpeq15side							{ quality = 1; price = 100; };
	class rhsusf_acc_anpeq15								{ quality = 1; price = 100; };
	class rhsusf_acc_anpeq15A								{ quality = 1; price = 100; };
	class rhsusf_acc_anpeq15_light							{ quality = 1; price = 100; };
	// Added by ElShotte
	class rhsusf_acc_M952V									{ quality = 1; price = 100; };
	class rhs_acc_perst3									{ quality = 1; price = 100; };
	class rhs_acc_perst3_top								{ quality = 1; price = 100; };
	class rhs_acc_perst3_2dp_h								{ quality = 1; price = 100; };
	class rhs_acc_perst3_2dp_light_h						{ quality = 1; price = 100; };
	class rhs_acc_2dpZenit									{ quality = 1; price = 100; };
	class rhs_acc_2dpZenit_ris								{ quality = 1; price = 100; };
	class rhs_acc_perst1ik									{ quality = 1; price = 100; };
	class rhs_acc_perst1ik_ris								{ quality = 1; price = 100; };
	class rhsusf_acc_anpeq15_bk 							{ quality = 1; price = 100; };
	class rhsusf_acc_anpeq15_bk_light 						{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Weapon Attachments - Bipods
	///////////////////////////////////////////////////////////////////////////////
	class rhsusf_acc_harris_swivel							{ quality = 1; price = 80; };
	class rhs_acc_harris_swivel								{ quality = 1; price = 80; };
	class rhs_bipod											{ quality = 1; price = 80; };
	class rhsusf_acc_harris_bipod							{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Weapon Attachments - Muzzle
	///////////////////////////////////////////////////////////////////////////////
	//US
	class rhsusf_acc_SF3P556								{ quality = 1; price = 140; };
	class rhsusf_acc_SFMB556								{ quality = 1; price = 140; };
	class rhsusf_acc_nt4_black								{ quality = 1; price = 180; };
	class rhsusf_acc_nt4_tan								{ quality = 1; price = 180; };
	class rhsusf_acc_rotex5_grey							{ quality = 1; price = 180; };
	class rhsusf_acc_rotex5_tan								{ quality = 1; price = 180; };
	class rhsusf_acc_SR25S									{ quality = 1; price = 190; };
	class rhsusf_acc_M2010S									{ quality = 1; price = 200; };
	//Russian
	class rhs_acc_ak5										{ quality = 1; price = 140; };
	class rhs_acc_dtk										{ quality = 1; price = 140; };
	class rhs_acc_dtk1										{ quality = 1; price = 140; };
	class rhs_acc_dtk3										{ quality = 1; price = 140; };
	class rhs_acc_dtk4screws								{ quality = 1; price = 180; };
	class rhs_acc_dtk4long									{ quality = 1; price = 180; };
	class rhs_acc_dtk4short									{ quality = 1; price = 180; };
	class rhs_acc_tgpa										{ quality = 1; price = 180; };
	class rhs_acc_dtk1l										{ quality = 1; price = 140; };
	class rhs_acc_pbs1										{ quality = 1; price = 190; };
	// Added by ElShotte
	class rhsusf_acc_omega9k								{ quality = 1; price = 2000; };
	class rhs_acc_uuk										{ quality = 1; price = 1500; };
	//MP7A2 Rotex Silencer Variations
	class rhsusf_acc_rotex_mp7 								{ quality = 1; price = 2000; };
	class rhsusf_acc_rotex_mp7_desert 						{ quality = 1; price = 2000; };
	class rhsusf_acc_rotex_mp7_winter 						{ quality = 1; price = 2000; };
	class rhsusf_acc_rotex_mp7_aor1 						{ quality = 1; price = 2000; };


	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class rhs_acc_1p29										{ quality = 1; price = 300; };
	class rhs_acc_1p63										{ quality = 1; price = 75; };
	class rhs_acc_1p78										{ quality = 1; price = 250; };
	class rhs_acc_1pn93_1									{ quality = 1; price = 300; };
	class rhs_acc_1pn93_2                           		{ quality = 1; price = 50; };
	class rhs_acc_dh520x56									{ quality = 1; price = 400; };
	class rhs_acc_ekp1										{ quality = 1; price = 350; };
	class rhs_acc_pgo7v										{ quality = 1; price = 300; };
	class rhs_acc_pkas										{ quality = 1; price = 50; };
	class rhs_acc_pso1m2									{ quality = 1; price = 300; };
	class rhs_acc_rakursPM 									{ quality = 1; price = 250; };
	class rhs_weap_optic_smaw 								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG									{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG2									{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG2_USMC								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG3									{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG3_USMC								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG_MDO								{ quality = 1; price = 400; };
	class rhsusf_acc_ACOG_RMR								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG_USMC								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG_d 								{ quality = 1; price = 250; };
	class rhsusf_acc_ACOG_pip								{ quality = 1; price = 300; };
	class rhsusf_acc_ACOG_wd 								{ quality = 1; price = 250; };
	class rhsusf_acc_ELCAN									{ quality = 1; price = 500; };
	class rhsusf_acc_ELCAN_pip								{ quality = 1; price = 500; };
	class rhsusf_acc_EOTECH 								{ quality = 1; price = 50; };
	class rhsusf_acc_LEUPOLDMK4 							{ quality = 1; price = 850; };
	class rhsusf_acc_LEUPOLDMK4_2 							{ quality = 1; price = 850; };
	class rhsusf_acc_M8541 									{ quality = 1; price = 500; };
	class rhsusf_acc_M8541_low 								{ quality = 1; price = 500; };
	class rhsusf_acc_M8541_low_d 							{ quality = 1; price = 500; };
	class rhsusf_acc_M8541_low_wd 							{ quality = 1; price = 500; };
	class rhsusf_acc_SpecterDR 								{ quality = 1; price = 200; };
	class rhsusf_acc_SpecterDR_A_3d 						{ quality = 1; price = 200; };
	class rhsusf_acc_SpecterDR_D 							{ quality = 1; price = 200; };
	class rhsusf_acc_SpecterDR_OD 							{ quality = 1; price = 200; };
	class rhsusf_acc_anpas13gv1								{ quality = 1; price = 2000; };
	class rhsusf_acc_compm4									{ quality = 1; price = 50; };
	class rhsusf_acc_eotech_552								{ quality = 1; price = 75; };
	class rhsusf_acc_premier 								{ quality = 1; price = 600; };
	class rhsusf_acc_premier_anpvs27 						{ quality = 1; price = 2500; };
	class rhsusf_acc_premier_low 							{ quality = 1; price = 600; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class rhsusf_mag_7x45acp_MHP                    		{ quality = 1; price = 60; };
	class rhs_mag_9x18_12_57N181S                   		{ quality = 1; price = 60; };
	class rhs_mag_9x19_17                         			{ quality = 1; price = 60; };
	//US
	class rhs_mag_30Rnd_556x45_Mk318_Stanag						{ quality = 1; price = 90; };
	class rhs_mag_30Rnd_556x45_Mk262_Stanag						{ quality = 1; price = 100; };
	class rhs_mag_30Rnd_556x45_M855A1_Stanag					{ quality = 1; price = 90; };
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer			{ quality = 1; price = 90; };
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red			{ quality = 1; price = 90; };
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green		{ quality = 1; price = 90; };
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow		{ quality = 1; price = 90; };
	class rhs_200rnd_556x45_M_SAW							{ quality = 1; price = 1200; };
	class rhs_200rnd_556x45_B_SAW							{ quality = 1; price = 1200; };
	class rhs_200rnd_556x45_T_SAW							{ quality = 1; price = 1200; };
	class rhsusf_50Rnd_762x51								{ quality = 1; price = 150; };
	class rhsusf_50Rnd_762x51_m993							{ quality = 1; price = 150; };
	class rhsusf_50Rnd_762x51_m80a1epr						{ quality = 1; price = 195; };
	class rhsusf_100Rnd_762x51								{ quality = 1; price = 950; };
	class rhsusf_100Rnd_762x51_m993							{ quality = 1; price = 950; };
	class rhsusf_100Rnd_762x51_m80a1epr						{ quality = 1; price = 950; };
	class rhsusf_8Rnd_00Buck								{ quality = 1; price = 40; };
	class rhsusf_8Rnd_Slug									{ quality = 1; price = 50; };
	class rhsusf_20Rnd_762x51_m993_Mag						{ quality = 1; price = 85; };
	class rhsusf_5Rnd_300winmag_xm2010						{ quality = 1; price = 75; };
	//Russian
	class rhs_30Rnd_762x39mm								{ quality = 1; price = 70; };
	class rhs_30Rnd_762x39mm_tracer							{ quality = 1; price = 70; };
	class rhs_30Rnd_762x39mm_89								{ quality = 1; price = 70; };
	class rhs_30Rnd_545x39_AK								{ quality = 1; price = 70; };
	class rhs_30Rnd_545x39_AK_no_tracers					{ quality = 1; price = 70; };
	class rhs_30Rnd_545x39_7N10_AK							{ quality = 1; price = 70; };
	class rhs_30Rnd_545x39_7N22_AK							{ quality = 1; price = 70; };
	class rhs_30Rnd_545x39_AK_green							{ quality = 1; price = 70; };
	class rhs_45Rnd_545X39_AK								{ quality = 1; price = 90; };
	class rhs_45Rnd_545X39_7N10_AK							{ quality = 1; price = 90; };
	class rhs_45Rnd_545X39_7N22_AK							{ quality = 1; price = 90; };
	class rhs_45Rnd_545X39_AK_Green							{ quality = 1; price = 90; };
	class rhs_100Rnd_762x54mmR								{ quality = 1; price = 950; };
	class rhs_100Rnd_762x54mmR_green						{ quality = 1; price = 950; };
	class rhs_10Rnd_762x54mmR_7N1							{ quality = 1; price = 90; };

	//50 Cal
	class rhsusf_mag_10Rnd_STD_50BMG_M33				{ quality = 1; price = 500; };
	class rhsusf_mag_10Rnd_STD_50BMG_mk211				{ quality = 1; price = 900; };
	//MP7
	class rhsusf_mag_40Rnd_46x30_AP 					{ quality = 1; price = 60; };
	class rhsusf_mag_40Rnd_46x30_FMJ 					{ quality = 1; price = 60; };
	class rhsusf_mag_40Rnd_46x30_JHP 					{ quality = 1; price = 60; };
	//T-5000
	class rhs_5Rnd_338lapua_t5000 						{ quality = 1; price = 140; };
	//M590
	class rhsusf_5Rnd_00Buck 							{ quality = 1; price = 40; };
	class rhsusf_5Rnd_FRAG 								{ quality = 1; price = 70; };
	class rhsusf_5Rnd_HE 								{ quality = 1; price = 70; };
	class rhsusf_5Rnd_Slug 								{ quality = 1; price = 50; };
	class rhsusf_8Rnd_doomsday_Buck 					{ quality = 1; price = 100; };
	//M24 SWS
	class rhsusf_5Rnd_762x51_m118_special_Mag 			{ quality = 1; price = 60; };
	class rhsusf_5Rnd_762x51_m993_Mag 					{ quality = 1; price = 60; };
	class rhsusf_5Rnd_762x51_m62_Mag 					{ quality = 1; price = 60; };
	//M40A5
	class rhsusf_10Rnd_762x51_m62_Mag 					{ quality = 1; price = 60; };
	class rhsusf_10Rnd_762x51_m993_Mag 					{ quality = 1; price = 60; };
	class rhsusf_10Rnd_762x51_m118_special_Mag 			{ quality = 1; price = 60; };
	//M9
	class rhsusf_mag_15Rnd_9x19_FMJ						{ quality = 1; price = 20; };
	class rhsusf_mag_15Rnd_9x19_JHP						{ quality = 1; price = 20; };
	// Glock
	class rhsusf_mag_17Rnd_9x19_JHP 					{ quality = 1; price = 40; };
	class rhsusf_mag_17Rnd_9x19_FMJ 					{ quality = 1; price = 40; };
	// PM
	class rhs_mag_9x18_8_57N181S 						{ quality = 1; price = 30; };
	//PP2000
	class rhs_mag_9x19mm_7n31_44 						{ quality = 1; price = 50; };
	class rhs_mag_9x19mm_7n21_44 						{ quality = 1; price = 50; };
	class rhs_mag_9x19mm_7n31_20 						{ quality = 1; price = 20; };
	class rhs_mag_9x19mm_7n21_20 						{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class rhs_weap_pya 							{ quality = 1; price = 1000; };
	class rhs_weap_makarov_pm 					{ quality = 1; price = 1000; };
	// Added by ElShotte
	class rhsusf_weap_glock17g4 				{ quality = 1; price = 1000; };
	class rhsusf_weap_m9 						{ quality = 1; price = 1000; };
	class rhsusf_weap_m1911a1 					{ quality = 1; price = 1000; };
	class rhs_weap_pp2000_folded 				{ quality = 1; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	//US
	class rhs_weap_m249_pip_L						{ quality = 1; price = 4250; };
	class rhs_weap_m249_pip_L_para					{ quality = 1; price = 4250; };
	class rhs_weap_m249_pip_L_vfg					{ quality = 1; price = 4250; };
	class rhs_weap_m249_pip_S						{ quality = 1; price = 4250; };
	class rhs_weap_m249_pip_S_para					{ quality = 1; price = 4250; };
	class rhs_weap_m249_pip_S_vfg					{ quality = 1; price = 4250; };
	class rhs_weap_m240B							{ quality = 1; price = 4500; };
	class rhs_weap_m240B_CAP						{ quality = 1; price = 4500; };
	class rhs_weap_m240G							{ quality = 1; price = 4500; };
	//Russian
	class rhs_weap_pkm								{ quality = 1; price = 4500; };
	class rhs_weap_pkp								{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class rhs_weap_hk416d10 						{ quality = 1; price = 4550; };
	class rhs_weap_hk416d10_LMT 					{ quality = 1; price = 4550; };
	class rhs_weap_hk416d10_m320 					{ quality = 1; price = 4650; };
	class rhs_weap_hk416d145 						{ quality = 1; price = 4550; };
	class rhs_weap_hk416d145_m320 					{ quality = 1; price = 4650; };
	class rhs_weap_m16a4							{ quality = 1; price = 4350; };
	class rhs_weap_m16a4_carryhandle				{ quality = 1; price = 4350; };
	class rhs_weap_m16a4_carryhandle_M203			{ quality = 1; price = 4400; };
	class rhs_weap_m16a4_carryhandle_pmag			{ quality = 1; price = 4400; };
	class rhs_weap_m27iar 							{ quality = 1; price = 4600; };
	class rhs_weap_m4_carryhandle					{ quality = 1; price = 4350; };
	class rhs_weap_m4_carryhandle_pmag				{ quality = 1; price = 4350; };
	class rhs_weap_m4_m203							{ quality = 1; price = 4450; };
	class rhs_weap_m4_m320							{ quality = 1; price = 4450; };
	class rhs_weap_m4a1								{ quality = 1; price = 4350; };
	class rhs_weap_m4a1_blockII						{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_blockII_KAC					{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_blockII_KAC_bk 				{ quality = 1; price = 4550; };
	class rhs_weap_m4a1_blockII_KAC_d 				{ quality = 1; price = 4550; };
	class rhs_weap_m4a1_blockII_KAC_wd 				{ quality = 1; price = 4550; };
	class rhs_weap_m4a1_blockII_M203				{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_blockII_M203_bk 			{ quality = 1; price = 4650; };
	class rhs_weap_m4a1_blockII_M203_d 				{ quality = 1; price = 4650; };
	class rhs_weap_m4a1_blockII_M203_wd 			{ quality = 1; price = 4650; };
	class rhs_weap_m4a1_blockII_bk 					{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_blockII_d 					{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_blockII_wd 					{ quality = 1; price = 4500; };
	class rhs_weap_m4a1_carryhandle					{ quality = 1; price = 4350; };
	class rhs_weap_m4a1_carryhandle_m203			{ quality = 1; price = 4450; };
	class rhs_weap_m4a1_carryhandle_pmag			{ quality = 1; price = 4350; };
	class rhs_weap_m4a1_m203						{ quality = 1; price = 4450; };
	class rhs_weap_m4a1_m320						{ quality = 1; price = 4450; };
	class rhs_weap_mk18								{ quality = 1; price = 4500; };
	class rhs_weap_mk18_KAC							{ quality = 1; price = 4500; };
	class rhs_weap_mk18_KAC_bk 						{ quality = 1; price = 4550; };
	class rhs_weap_mk18_KAC_d 						{ quality = 1; price = 4550; };
	class rhs_weap_mk18_KAC_wd 						{ quality = 1; price = 4550; };
	class rhs_weap_mk18_bk 							{ quality = 1; price = 4500; };
	class rhs_weap_mk18_d 							{ quality = 1; price = 4500; };
	class rhs_weap_mk18_m320						{ quality = 1; price = 4500; };
	class rhs_weap_mk18_wd 							{ quality = 1; price = 4500; };
	class rhs_weap_M590_5RD							{ quality = 1; price = 4550; };
	class rhs_weap_M590_8RD							{ quality = 1; price = 6650; };
	class rhs_weap_m32								{ quality = 1; price = 4550; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class rhsusf_weap_MP7A2                			{ quality = 1; price = 4800; };
	class rhsusf_weap_MP7A2_desert         			{ quality = 1; price = 4800; };
	class rhsusf_weap_MP7A2_aor1           			{ quality = 1; price = 4800; };
	class rhsusf_weap_MP7A2_winter         			{ quality = 1; price = 4800; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	//US
	class rhs_weap_sr25								{ quality = 1; price = 4000; };
	class rhs_weap_sr25_ec							{ quality = 1; price = 4000; };
	class rhs_weap_m14ebrri							{ quality = 1; price = 4000; };
	class rhs_weap_XM2010							{ quality = 1; price = 4250; };
	class rhs_weap_XM2010_wd						{ quality = 1; price = 4250; };
	class rhs_weap_XM2010_d							{ quality = 1; price = 4250; };
	class rhs_weap_XM2010_sa						{ quality = 1; price = 4250; };
	//Russian
	class rhs_weap_svd								{ quality = 1; price = 4000; };
	class rhs_weap_svdp_wd							{ quality = 1; price = 4000; };
	class rhs_weap_svdp_wd_npz						{ quality = 1; price = 4000; };
	class rhs_weap_svdp_npz							{ quality = 1; price = 4000; };
	class rhs_weap_svds								{ quality = 1; price = 4000; };
	class rhs_weap_svds_npz							{ quality = 1; price = 4000; };
	// Added by ElShotte
	class rhs_weap_M107   							{ quality = 1; price = 8500; };
	class rhs_weap_M107_d   						{ quality = 1; price = 8500; };
	class rhs_weap_M107_lc							{ quality = 1; price = 8500; };
	class rhs_weap_M107_w   						{ quality = 1; price = 8500; };
	class rhs_weap_m24sws   						{ quality = 1; price = 4000; };
	class rhs_weap_m24sws_blk   					{ quality = 1; price = 4000; };
	class rhs_weap_m24sws_ghillie   				{ quality = 1; price = 4000; };
	class rhs_weap_m40a5   							{ quality = 1; price = 4000; };
	class rhs_weap_m40a5_d   						{ quality = 1; price = 4000; };
	class rhs_weap_m40a5_w   						{ quality = 1; price = 4000; };
	class rhs_weap_sr25_d 							{ quality = 1; price = 4100; };
	class rhs_weap_sr25_ec_d 						{ quality = 1; price = 4100; };
	class rhs_weap_sr25_ec_wd 						{ quality = 1; price = 4100; };
	class rhs_weap_sr25_wd 							{ quality = 1; price = 4100; };
	class rhs_weap_t5000   							{ quality = 1; price = 7200; };

	///////////////////////////////////////////////////////////////////////////////
	// Launcher
	///////////////////////////////////////////////////////////////////////////////
	class rhs_weap_rpg26  							{ quality = 1; price = 7500; };
	class rhs_weap_rpg7  							{ quality = 1; price = 7500; };
	class rhs_weap_rshg2  							{ quality = 1; price = 7500; };
	class rhs_weap_igla 							{ quality = 1; price = 7500; };
	class rhs_weap_fgm148 							{ quality = 1; price = 7500; };
	class rhs_weap_fim92 							{ quality = 1; price = 7500; };
	class rhs_weap_M136 							{ quality = 1; price = 7500; };
	class rhs_weap_M136_hedp 						{ quality = 1; price = 7500; };
	class rhs_weap_M136_hp 							{ quality = 1; price = 7500; };
	class rhs_weap_m72a7 							{ quality = 1; price = 7500; };
	class rhs_weap_smaw 							{ quality = 1; price = 7500; };
	class rhs_weap_smaw_green 						{ quality = 1; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Launcher Ammo
	///////////////////////////////////////////////////////////////////////////////
	class rhs_rpg26_mag								{ quality = 1; price = 3000; };
	class rhs_rshg2_mag								{ quality = 1; price = 3000; };
	class rhs_rpg18_mag								{ quality = 1; price = 3000; };
	class rhs_rpg7_PG7VL_mag						{ quality = 1; price = 3000; };
	class rhs_rpg7_PG7VR_mag						{ quality = 1; price = 3000; };
	class rhs_rpg7_TBG7V_mag						{ quality = 1; price = 3000; };
	class rhs_rpg7_OG7V_mag							{ quality = 1; price = 3000; };
	class rhs_mag_9k32_rocket						{ quality = 1; price = 3000; };
	class rhs_mag_9k38_rocket						{ quality = 1; price = 3000; };
	// Added by ElShotte
	class rhs_rpg7_type69_airburst_mag 				{ quality = 1; price = 3000; };
	class rhs_fgm148_magazine_AT 					{ quality = 1; price = 3000; };
	class rhs_fim92_mag 							{ quality = 1; price = 3000; };
	class rhs_m136_mag 								{ quality = 1; price = 3000; };
	class rhs_m136_hedp_mag 						{ quality = 1; price = 3000; };
	class rhs_M136_hp_mag 							{ quality = 1; price = 3000; };
	class rhs_m72a7_mag 							{ quality = 1; price = 3000; };
	class rhs_mag_smaw_HEAA 						{ quality = 1; price = 3000; };
	class rhs_mag_smaw_HEDP 						{ quality = 1; price = 3000; };
	class rhs_mag_smaw_SR 							{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mines
	///////////////////////////////////////////////////////////////////////////////
	class rhs_mine_pmn2_mag 						{ quality = 1; price = 4500; };
	class rhs_mine_tm62m_mag 						{ quality = 1; price = 4500; };
	class rhsusf_m112_mag 							{ quality = 1; price = 2000; };
	class rhsusf_m112x4_mag							{ quality = 1; price = 6000; };
	class rhs_mine_m19_mag 							{ quality = 1; price = 4500; };
	class rhsusf_mine_m14_mag						{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Grenades
	///////////////////////////////////////////////////////////////////////////////
	// Added by ElShotte
	class rhs_mag_f1								{ quality = 1; price = 250; };
	class rhs_mag_fakel 							{ quality = 1; price = 150; };
	class rhs_mag_fakels 							{ quality = 1; price = 150; };
	class rhs_mag_m18_green 						{ quality = 1; price = 150; };
	class rhs_mag_m18_purple 						{ quality = 1; price = 150; };
	class rhs_mag_m18_red 							{ quality = 1; price = 150; };
	class rhs_mag_m18_yellow 						{ quality = 1; price = 150; };
	class rhs_mag_m67 								{ quality = 1; price = 250; };
	class rhs_mag_m7a3_cs 							{ quality = 1; price = 200; };
	class rhs_mag_mk84 								{ quality = 1; price = 200; };
	class rhs_mag_mk3a2 							{ quality = 1; price = 200; };
	class rhs_mag_nspd 								{ quality = 1; price = 100; };
	class rhs_mag_nspn_green 						{ quality = 1; price = 100; };
	class rhs_mag_nspn_red 							{ quality = 1; price = 100; };
	class rhs_mag_nspn_yellow 						{ quality = 1; price = 100; };
	class rhs_mag_plamyam 							{ quality = 1; price = 250; };
	class rhs_mag_rdg2_black 						{ quality = 1; price = 80; };
	class rhs_mag_rdg2_white 						{ quality = 1; price = 80; };
	class rhs_mag_rgd5 								{ quality = 1; price = 250; };
	class rhs_mag_rgn 								{ quality = 1; price = 250; };
	class rhs_mag_rgo 								{ quality = 1; price = 250; };
	class rhs_mag_zarya2 							{ quality = 1; price = 150; };
	class rhs_mag_an_m8hc 							{ quality = 1; price = 100; };
	class rhs_mag_an_m14_th3 						{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Unerbarrel GL Ammunition
	///////////////////////////////////////////////////////////////////////////////
	// Added by ElShotte
	class rhs_mag_M433_HEDP								{ quality = 1; price = 50; };
	class rhs_mag_M397_HET								{ quality = 1; price = 50; };
	class rhs_mag_m4009									{ quality = 1; price = 50; };
	class rhs_mag_m576									{ quality = 1; price = 50; };
	class rhs_mag_M585_white							{ quality = 1; price = 50; };
	class rhs_mag_m661_green							{ quality = 1; price = 50; };
	class rhs_mag_m662_red								{ quality = 1; price = 50; };
	class rhs_mag_m713_Red								{ quality = 1; price = 50; };
	class rhs_mag_m714_White							{ quality = 1; price = 50; };
	class rhs_mag_m715_Green							{ quality = 1; price = 50; };
	class rhs_mag_m716_yellow							{ quality = 1; price = 50; };
	class rhs_VOG25										{ quality = 1; price = 50; };
	class rhs_VOG25p									{ quality = 1; price = 50; };
	class rhs_vg40tb									{ quality = 1; price = 50; };
	class rhs_vg40sz									{ quality = 1; price = 50; };
	class rhs_vg40op_white								{ quality = 1; price = 50; };
	class rhs_vg40op_green								{ quality = 1; price = 50; };
	class rhs_vg40op_red								{ quality = 1; price = 50; };
	class rhs_GRD40_white								{ quality = 1; price = 50; };
	class rhs_GRD40_green								{ quality = 1; price = 50; };
	class rhs_GRD40_red									{ quality = 1; price = 50; };
	class rhs_VG40MD_White								{ quality = 1; price = 50; };
	class rhs_VG40MD_Green								{ quality = 1; price = 50; };
	class rhs_VG40MD_Red								{ quality = 1; price = 50; };
	class rhs_GDM40										{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// RHS AA and artillery
	///////////////////////////////////////////////////////////////////////////////
	class RHS_AGS30_TriPod_INS	  				{ quality = 6; price = 100000; };
	class RHS_AGS30_TriPod_MSV	  				{ quality = 6; price = 100000; };
	class RHS_AGS30_TriPod_VDV	  				{ quality = 6; price = 100000; };
	class RHS_AGS30_TriPod_VMF	  				{ quality = 6; price = 100000; };
	class RHS_NSV_TriPod_INS	  				{ quality = 6; price = 100000; };
	class RHS_NSV_TriPod_MSV	  				{ quality = 6; price = 100000; };
	class RHS_NSV_TriPod_VDV	  				{ quality = 6; price = 100000; };
	class RHS_NSV_TriPod_VMF	  				{ quality = 6; price = 100000; };
	class RHS_ZU23_MSV	  						{ quality = 6; price = 100000; };
	class RHS_ZU23_VDV	  						{ quality = 6; price = 100000; };
	class RHS_ZU23_VMF	  						{ quality = 6; price = 100000; };
	class rhs_2b14_82mm_ins	  					{ quality = 6; price = 100000; };
	class rhs_2b14_82mm_msv	  					{ quality = 6; price = 100000; };
	class rhs_2b14_82mm_vdv	  					{ quality = 6; price = 100000; };
	class rhs_2b14_82mm_vmf	  					{ quality = 6; price = 100000; };
	class rhs_D30_at_ins	  					{ quality = 6; price = 100000; };
	class rhs_D30_at_msv	  					{ quality = 6; price = 100000; };
	class rhs_D30_at_vdv	  					{ quality = 6; price = 100000; };
	class rhs_D30_at_vmf	  					{ quality = 6; price = 100000; };
	class rhs_D30_ins	  						{ quality = 6; price = 100000; };
	class rhs_D30_msv	  						{ quality = 6; price = 100000; };
	class rhs_D30_vdv	  						{ quality = 6; price = 100000; };
	class rhs_D30_vmf	  						{ quality = 6; price = 100000; };
	class rhs_DSHKM_Mini_TriPod_ins	  			{ quality = 6; price = 100000; };
	class rhs_DSHKM_ins	  						{ quality = 6; price = 100000; };
	class rhs_Igla_AA_pod_ins	  				{ quality = 6; price = 100000; };
	class rhs_Igla_AA_pod_msv	  				{ quality = 6; price = 100000; };
	class rhs_Igla_AA_pod_vdv	  				{ quality = 6; price = 100000; };
	class rhs_Igla_AA_pod_vmf	  				{ quality = 6; price = 100000; };
	class rhs_KORD_INS	  						{ quality = 6; price = 100000; };
	class rhs_KORD_MSV	  						{ quality = 6; price = 100000; };
	class rhs_KORD_VDV	  						{ quality = 6; price = 100000; };
	class rhs_KORD_VMF	  						{ quality = 6; price = 100000; };
	class rhs_KORD_high_INS	  					{ quality = 6; price = 100000; };
	class rhs_KORD_high_MSV	  					{ quality = 6; price = 100000; };
	class rhs_KORD_high_VDV	  					{ quality = 6; price = 100000; };
	class rhs_KORD_high_VMF	  					{ quality = 6; price = 100000; };
	class rhs_Kornet_9M133_1_ins	  			{ quality = 6; price = 100000; };
	class rhs_Kornet_9M133_2_ins	  			{ quality = 6; price = 100000; };
	class rhs_Kornet_9M133_2_msv	  			{ quality = 6; price = 100000; };
	class rhs_Kornet_9M133_2_vdv	  			{ quality = 6; price = 100000; };
	class rhs_Kornet_9M133_2_vmf	  			{ quality = 6; price = 100000; };
	class rhs_Metis_9k115_1_ins	  				{ quality = 6; price = 100000; };
	class rhs_Metis_9k115_2_ins	  				{ quality = 6; price = 100000; };
	class rhs_Metis_9k115_2_msv	  				{ quality = 6; price = 100000; };
	class rhs_Metis_9k115_2_vdv	  				{ quality = 6; price = 100000; };
	class rhs_Metis_9k115_2_vmf	  				{ quality = 6; price = 100000; };
	class rhs_SPG9M_MSV	  						{ quality = 6; price = 100000; };
	class rhs_SPG9M_VDV	  						{ quality = 6; price = 100000; };
	class rhs_SPG9M_VMF	  						{ quality = 6; price = 100000; };
	class rhs_SPG9_INS	  						{ quality = 6; price = 100000; };
	//M32MGL 6Schuss Grande
	class rhsusf_mag_6Rnd_M441_HE				{ quality = 1; price = 740; };
	class rhsusf_mag_6Rnd_M433_HEDP				{ quality = 1; price = 840; };
	class rhsusf_mag_6Rnd_M397_HET				{ quality = 1; price = 850; };
	class rhsusf_mag_6Rnd_M576_Buckshot			{ quality = 1; price = 150; };
	class rhsusf_mag_6Rnd_m4009					{ quality = 1; price = 350; };
	class rhsusf_mag_6Rnd_M583A1_white			{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_m661_green			{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_m662_red				{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_M713_red				{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_M714_white			{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_M715_green			{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_M716_yellow			{ quality = 1; price = 250; };
	class rhsusf_mag_6Rnd_M781_Practice			{ quality = 1; price = 250; };
	//////SMA
	///////////////////////////////////////////////////////////////////////////////
	// Assault rifle
	///////////////////////////////////////////////////////////////////////////////
	class SMA_HK416afgQCB							{ quality = 1; price = 2000; };
	class SMA_HK416afg								{ quality = 1; price = 2000; };
	class SMA_HK416vfg								{ quality = 1; price = 2000; };
	class SMA_HK416GL								{ quality = 1; price = 2500; };
	class SMA_HK416afgOD							{ quality = 1; price = 2000; };
	class SMA_HK416MOEOD							{ quality = 1; price = 2000; };
	class SMA_HK416CQBafgOD							{ quality = 1; price = 2000; };
	class SMA_HK416CQBMOEOD							{ quality = 1; price = 2000; };
	class SMA_HK416GLOD								{ quality = 1; price = 2000; };
	class SMA_HK416CQBGLOD							{ quality = 1; price = 2000; };
	class SMA_HK416_afg_ODPAINTED					{ quality = 1; price = 2000; };
	class SMA_HK416_GL_ODPAINTED					{ quality = 1; price = 2500; };
	class SMA_HK416_vfg_ODPAINTED					{ quality = 1; price = 2000; };
	class SMA_HK416CQB_vfg_ODPAINTED				{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMafg						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBvfg						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBvfgB					{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBvfgODP					{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMvfg						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMvfgB						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMvfgODP						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBafg						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBafgB					{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMCQBafgODP					{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMafgB						{ quality = 1; price = 2000; };
	class SMA_HK416CUSTOMafgODP						{ quality = 1; price = 2000; };
	class SMA_HK416GLCQB							{ quality = 1; price = 2000; };
	class SMA_HK416GLCQB_B							{ quality = 1; price = 2000; };
	class SMA_HK416GLCQB_ODP						{ quality = 1; price = 2000; };
	class SMA_HK417									{ quality = 1; price = 2000; };
	class SMA_HK417vfg								{ quality = 1; price = 2000; };
	class SMA_HK417_16in							{ quality = 1; price = 2000; };
	class SMA_SAR21_F								{ quality = 1; price = 2000; };
	class SMA_SAR21MMS_F							{ quality = 1; price = 2000; };
	class SMA_SAR21_AFG_F							{ quality = 1; price = 2000; };
	class SMA_SAR21MMS_AFG_F						{ quality = 1; price = 2000; };
	class SMA_SKS_F									{ quality = 1; price = 2000; };
	class SMA_SKS_TAN_F								{ quality = 1; price = 2000; };
	class SMA_STG_E4_F								{ quality = 1; price = 2000; };
	class SMA_STG_E4_BLACK_F						{ quality = 1; price = 2000; };
	class SMA_STG_E4_OD_F							{ quality = 1; price = 2000; };
	class SMA_AUG_EGLM								{ quality = 1; price = 2000; };
	class SMA_AUG_A3_F								{ quality = 1; price = 2000; };
	class SMA_AUG_A3_MCAM_F							{ quality = 1; price = 2000; };
	class SMA_AUG_A3_KRYPT_F						{ quality = 1; price = 2000; };
	class SMA_AUG_EGLM_Olive						{ quality = 1; price = 2500; };
	class SMA_AUG_EGLM_tan							{ quality = 1; price = 2500; };
	class SMA_MK16									{ quality = 1; price = 2000; };
	class SMA_Mk17									{ quality = 1; price = 2000; };
	class SMA_Mk16_EGLM								{ quality = 1; price = 2500; };
	class SMA_Mk17_EGLM								{ quality = 1; price = 2500; };
	class SMA_Mk16_black							{ quality = 1; price = 2000; };
	class SMA_Mk16_Green							{ quality = 1; price = 2000; };
	class SMA_Mk16_blackQCB							{ quality = 1; price = 2000; };
	class SMA_Mk16_GreenQCB							{ quality = 1; price = 2000; };
	class SMA_Mk16QCB								{ quality = 1; price = 2000; };
	class SMA_Mk17_black							{ quality = 1; price = 2000; };
	class SMA_Mk17_Green							{ quality = 1; price = 2000; };
	class SMA_MK16_EGLM_black						{ quality = 1; price = 2500; };
	class SMA_MK16_EGLM_Green						{ quality = 1; price = 2500; };
	class SMA_MK17_EGLM_black						{ quality = 1; price = 2500; };
	class SMA_MK17_EGLM_Green						{ quality = 1; price = 2500; };
	class SMA_Mk17_16_black							{ quality = 1; price = 2000; };
	class SMA_Mk17_16_Green							{ quality = 1; price = 2000; };
	class SMA_Mk17_16								{ quality = 1; price = 2000; };
	class SMA_ACR									{ quality = 1; price = 2000; };
	class SMA_ACRblk								{ quality = 1; price = 2000; };
	class SMA_ACRGL									{ quality = 1; price = 2000; };
	class SMA_ACRGL_B								{ quality = 1; price = 2000; };
	class SMA_ACRMOE								{ quality = 1; price = 2000; };
	class SMA_ACRMOE_Blk							{ quality = 1; price = 2000; };
	class SMA_ACRREM								{ quality = 1; price = 2000; };
	class SMA_ACRREMblk								{ quality = 1; price = 2000; };
	class SMA_ACRREMGL								{ quality = 1; price = 2500; };
	class SMA_ACRREMGL_B							{ quality = 1; price = 2500; };
	class SMA_ACRREMCQBGL							{ quality = 1; price = 2500; };
	class SMA_ACRREMCQBGL_B							{ quality = 1; price = 2500; };
	class SMA_ACRREMMOE								{ quality = 1; price = 2000; };
	class SMA_ACRREMMOEblk							{ quality = 1; price = 2000; };
	class SMA_ACRREMMOECQB							{ quality = 1; price = 2000; };
	class SMA_ACRREMMOECQBblk						{ quality = 1; price = 2000; };
	class SMA_ACRREMAFG								{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGblk							{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGCQB							{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGCQBblk						{ quality = 1; price = 2000; };
	class SMA_ACRREM_N								{ quality = 1; price = 2000; };
	class SMA_ACRREMblk_N							{ quality = 1; price = 2000; };
	class SMA_ACRREMMOE_N							{ quality = 1; price = 2000; };
	class SMA_ACRREMMOEblk_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMMOECQB_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMMOECQBblk_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMAFG_N							{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGblk_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGCQB_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMAFGCQBblk_N						{ quality = 1; price = 2000; };
	class SMA_ACRREMCQBGL_B_N						{ quality = 1; price = 2500; };
	class SMA_ACRREMCQBGL_N							{ quality = 1; price = 2500; };
	class SMA_ACRREMGL_B_N							{ quality = 1; price = 2000; };
	class SMA_ACRREMGL_N							{ quality = 1; price = 2000; };
	class SMA_L85RIS								{ quality = 1; price = 2000; };
	class SMA_L85RISNR								{ quality = 1; price = 2000; };
	class SMA_L85RISafg								{ quality = 1; price = 2000; };
	class SMA_L85RISafgNR							{ quality = 1; price = 2000; };
	class SMA_Steyr_AUG_F							{ quality = 1; price = 2000; };
	class SMA_Steyr_AUG_BLACK_F						{ quality = 1; price = 2000; };
	class SMA_AAC_MPW_9_Black						{ quality = 1; price = 1200; };
	class SMA_AAC_MPW_9_Woodland					{ quality = 1; price = 1200; };
	class SMA_AAC_MPW_9_OD							{ quality = 1; price = 1200; };
	class SMA_AAC_MPW_9_Desert						{ quality = 1; price = 1200; };
	class SMA_AAC_MPW_9_Tan							{ quality = 1; price = 1200; };
	class SMA_AAC_MPW_12_Black						{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_12_Woodland					{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_12_OD							{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_12_Desert						{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_12_Tan						{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_16_Black						{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_16_Woodland					{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_16_OD							{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_16_Desert						{ quality = 1; price = 1700; };
	class SMA_AAC_MPW_16_Tan						{ quality = 1; price = 1700; };
	class SMA_Tavor_F								{ quality = 1; price = 1700; };
	class SMA_TavorOD_F								{ quality = 1; price = 1700; };
	class SMA_TavorBLK_F							{ quality = 1; price = 1700; };
	class SMA_CTAR_F								{ quality = 1; price = 1700; };
	class SMA_CTAROD_F								{ quality = 1; price = 1700; };
	class SMA_CTARBLK_F								{ quality = 1; price = 1700; };
	class SMA_MK18afg								{ quality = 1; price = 1700; };
	class SMA_MK18afg_SM							{ quality = 1; price = 1700; };
	class SMA_MK18afgBLK							{ quality = 1; price = 1700; };
	class SMA_MK18afgODBLK							{ quality = 1; price = 1700; };
	class SMA_MK18afgBLK_SM							{ quality = 1; price = 1700; };
	class SMA_MK18afgODBLK_SM						{ quality = 1; price = 1700; };
	class SMA_MK18afgOD								{ quality = 1; price = 1700; };
	class SMA_MK18afgOD_SM							{ quality = 1; price = 1700; };
	class SMA_MK18afgTAN							{ quality = 1; price = 1700; };
	class SMA_MK18afgTAN_SM							{ quality = 1; price = 1700; };
	class SMA_MK18afgTANBLK							{ quality = 1; price = 1700; };
	class SMA_MK18afgTANBLK_SM						{ quality = 1; price = 1700; };
	class SMA_MK18MOE								{ quality = 1; price = 1700; };
	class SMA_MK18MOE_SM							{ quality = 1; price = 1700; };
	class SMA_MK18MOETAN							{ quality = 1; price = 1700; };
	class SMA_MK18MOETAN_SM							{ quality = 1; price = 1700; };
	class SMA_MK18MOEBLK							{ quality = 1; price = 1700; };
	class SMA_MK18MOEBLK_SM							{ quality = 1; price = 1700; };
	class SMA_MK18MOEODBLK							{ quality = 1; price = 1700; };
	class SMA_MK18MOEODBLK_SM						{ quality = 1; price = 1700; };
	class SMA_MK18MOEOD								{ quality = 1; price = 1700; };
	class SMA_MK18MOEOD_SM							{ quality = 1; price = 1700; };
	class SMA_MK18MOEBLKTAN							{ quality = 1; price = 1700; };
	class SMA_MK18MOEBLKTAN_SM						{ quality = 1; price = 1700; };
	class SMA_MK18_GL								{ quality = 1; price = 2300; };
	class SMA_MK18_GL_SM    						{ quality = 1; price = 2300; };
	class SMA_MK18TANBLK_GL							{ quality = 1; price = 2500; };
	class SMA_MK18TANBLK_GL_SM						{ quality = 1; price = 2500; };
	class SMA_MK18TAN_GL							{ quality = 1; price = 2500; };
	class SMA_MK18TAN_GL_SM							{ quality = 1; price = 2500; };
	class SMA_MK18BLK_GL							{ quality = 1; price = 2500; };
	class SMA_MK18BLK_GL_SM							{ quality = 1; price = 2500; };
	class SMA_MK18ODBLK_GL							{ quality = 1; price = 2500; };
	class SMA_MK18ODBLK_GL_SM						{ quality = 1; price = 2500; };
	class SMA_MK18OD_GL								{ quality = 1; price = 2500; };
	class SMA_MK18OD_GL_SM							{ quality = 1; price = 2500; };
	class SMA_M4_GL									{ quality = 1; price = 2200; };
	class SMA_M4_GL_SM								{ quality = 1; price = 2200; };
	class SMA_M4afg									{ quality = 1; price = 2000; };
	class SMA_M4afg_SM								{ quality = 1; price = 2000; };
	class SMA_M4afg_Tan								{ quality = 1; price = 2000; };
	class SMA_M4afg_Tan_SM							{ quality = 1; price = 2000; };
	class SMA_M4afg_OD								{ quality = 1; price = 2000; };
	class SMA_M4afg_OD_SM							{ quality = 1; price = 2000; };
	class SMA_M4afg_BLK1							{ quality = 1; price = 2000; };
	class SMA_M4afg_BLK1_SM							{ quality = 1; price = 2000; };
	class SMA_M4MOE									{ quality = 1; price = 2000; };
	class SMA_M4MOE_SM								{ quality = 1; price = 2000; };
	class SMA_M4MOE_Tan								{ quality = 1; price = 2000; };
	class SMA_M4MOE_Tan_SM							{ quality = 1; price = 2000; };
	class SMA_M4MOE_OD								{ quality = 1; price = 2000; };
	class SMA_M4MOE_OD_SM							{ quality = 1; price = 2000; };
	class SMA_M4MOE_BLK1							{ quality = 1; price = 2000; };
	class SMA_M4MOE_BLK1_SM							{ quality = 1; price = 2000; };
	class SMA_M4afgSTOCK							{ quality = 1; price = 2000; };
	class SMA_M4CQBR								{ quality = 1; price = 2000; };
	class SMA_M4CQBRMOE								{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Gun
	///////////////////////////////////////////////////////////////////////////////
	class sma_minimi_mk3_762tlb						{ quality = 1; price = 4500; };
	class sma_minimi_mk3_762tlb_des					{ quality = 1; price = 4500; };
	class sma_minimi_mk3_762tlb_wdl					{ quality = 1; price = 4500; };
	class sma_minimi_mk3_762tsb						{ quality = 1; price = 4500; };
	class sma_minimi_mk3_762tsb_des					{ quality = 1; price = 4500; };
	class sma_minimi_mk3_762tsb_wdl					{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class SMA_RAILGUARD_OD_HK 						{ quality = 1; price = 75; };
	class SMA_RAILGUARD_TAN_HK 						{ quality = 1; price = 75; };
	class SMA_RAILGUARD_BLK_HK 						{ quality = 1; price = 75; };
	class SMA_ANPEQ15_TAN 							{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_TAN 						{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_417TAN 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_BLK 							{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_BLK 						{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_417BLK 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_TAN_MK18 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_BLK_MK18 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_TAN_M4 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_BLK_M4 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_TAN_SCAR 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_BLK_SCAR 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_TAN_ACR 					{ quality = 1; price = 150; };
	class SMA_ANPEQ15_TOP_BLK_ACR 					{ quality = 1; price = 150; };
	class SMA_SFFL_TAN 								{ quality = 1; price = 150; };
	class SMA_SFFL_BLK 								{ quality = 1; price = 150; };
	class SMA_SFPEQ_M4TOP_TAN 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_M4TOP_BLK 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_MK18TOP_TAN 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_MK18TOP_BLK 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_HKTOP_TAN 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_HKTOP_BLK 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_HK417TOP_TAN 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_HK417TOP_BLK 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_SCARTOP_TAN 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_SCARTOP_BLK 					{ quality = 1; price = 150; };
	class SMA_SFPEQ_ACRTOP_BLK 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_ACRTOP_BLK_LIGHT 				{ quality = 1; price = 150; };
	class SMA_SFPEQ_ACRTOP_TAN 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_ACRTOP_TAN_LIGHT 				{ quality = 1; price = 150; };
	class SMA_SFPEQ_AUGCQC_TAN 						{ quality = 1; price = 150; };
	class SMA_SFPEQ_AUGCQC_BLK 						{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class SMA_Gripod_01	 							{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class SMA_ELCAN_SPECTER							{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN						{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN					{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_ARDRDS					{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN_ARDRDS				{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN_ARDRDS			{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_RDS						{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN_RDS					{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN_RDS				{ quality = 1; price = 300; };
	class SMA_MICRO_T2								{ quality = 1; price = 300; };
	class SMA_MICRO_T2_LM							{ quality = 1; price = 300; };
	class SMA_MICRO_T2_3XDOWN						{ quality = 1; price = 300; };
	class SMA_eotech								{ quality = 1; price = 300; };
	class SMA_eotech_T								{ quality = 1; price = 300; };
	class SMA_eotech_G								{ quality = 1; price = 300; };
	class SMA_eotechG33_3XDOWN						{ quality = 1; price = 300; };
	class SMA_eotechG33_tan_3XDOWN					{ quality = 1; price = 300; };
	class SMA_eotechG33_grn_3XDOWN					{ quality = 1; price = 300; };
	class SMA_eotech552								{ quality = 1; price = 300; };
	class SMA_eotech552_kf							{ quality = 1; price = 300; };
	class SMA_eotech552_kf_des						{ quality = 1; price = 300; };
	class SMA_eotech552_kf_wdl						{ quality = 1; price = 300; };
	class SMA_eotech552_3XDOWN						{ quality = 1; price = 300; };
	class SMA_eotech552_3XDOWN_wdl					{ quality = 1; price = 300; };
	class SMA_eotech552_3XDOWN_des					{ quality = 1; price = 300; };
	class sma_spitfire_01_sc_black					{ quality = 1; price = 300; };
	class sma_spitfire_01_black						{ quality = 1; price = 300; };
	class sma_spitfire_03_sc_black					{ quality = 1; price = 300; };
	class sma_spitfire_03_black						{ quality = 1; price = 300; };
	class sma_spitfire_03_rds_black					{ quality = 1; price = 300; };
	class sma_spitfire_03_rds_low_black				{ quality = 1; price = 300; };
	class sma_spitfire_03_rds_low_ard_black			{ quality = 1; price = 300; };
	class SMA_AIMPOINT								{ quality = 1; price = 300; };
	class SMA_AIMPOINT_GLARE						{ quality = 1; price = 300; };
	class SMA_BARSKA								{ quality = 1; price = 300; };
	class SMA_CMORE									{ quality = 1; price = 300; };
	class SMA_CMOREGRN								{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_4z						{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN_4z					{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN_4z				{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_ARDRDS_4z				{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN_ARDRDS_4z			{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN_ARDRDS_4z			{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_RDS_4z					{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_TAN_RDS_4z				{ quality = 1; price = 300; };
	class SMA_ELCAN_SPECTER_GREEN_RDS_4z			{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class SMA_FLASHHIDER1 							{ quality = 1; price = 2400; };
	class SMA_FLASHHIDER2 							{ quality = 1; price = 2400; };
	class sma_gemtech_one_blk 						{ quality = 1; price = 2400; };
	class sma_gemtech_one_des 						{ quality = 1; price = 2400; };
	class sma_gemtech_one_wdl 						{ quality = 1; price = 2400; };
	class SMA_Silencer_556 							{ quality = 1; price = 2400; };
	class SMA_Silencer_556_Bronze 					{ quality = 1; price = 2400; };
	class SMA_Silencer_556_Silver 					{ quality = 1; price = 2400; };
	class SMA_supp1b_556 							{ quality = 1; price = 2400; };
	class SMA_supp1tan_556 							{ quality = 1; price = 2400; };
	class SMA_supp2b_556 							{ quality = 1; price = 2400; };
	class SMA_supp2btan_556 						{ quality = 1; price = 2400; };
	class SMA_supp_762 								{ quality = 1; price = 2400; };
	class SMA_supptan_762 							{ quality = 1; price = 2400; };
	class SMA_supp1BB_556 							{ quality = 1; price = 2400; };
	class SMA_supp1BOD_556 							{ quality = 1; price = 2400; };
	class SMA_supp1BT_556 							{ quality = 1; price = 2400; };
	class SMA_supp1Bwht_556 						{ quality = 1; price = 2400; };
	class SMA_supp1TB_556 							{ quality = 1; price = 2400; };
	class SMA_supp1TOD_556 							{ quality = 1; price = 2400; };
	class SMA_supp1TT_556 							{ quality = 1; price = 2400; };
	class SMA_supp1TW_556 							{ quality = 1; price = 2400; };
	class SMA_supp2BOD_556 							{ quality = 1; price = 2400; };
	class SMA_supp2BT_556 							{ quality = 1; price = 2400; };
	class SMA_supp2BW_556 							{ quality = 1; price = 2400; };
	class SMA_supp2T_556 							{ quality = 1; price = 2400; };
	class SMA_supp2TB_556 							{ quality = 1; price = 2400; };
	class SMA_supp2TOD_556 							{ quality = 1; price = 2400; };
	class SMA_supp2TWH_556 							{ quality = 1; price = 2400; };
	class SMA_supp2smaB_556 						{ quality = 1; price = 2400; };
	class SMA_supp2smaT_556 						{ quality = 1; price = 2400; };
	class SMA_rotex_blk 							{ quality = 1; price = 2400; };
	class SMA_rotex_tan 							{ quality = 1; price = 2400; };
	class SMA_rotex_gry 							{ quality = 1; price = 2400; };
	class SMA_AAC_762_sdn6							{ quality = 1; price = 2400; };
	class SMA_AAC_762_sdn6_w						{ quality = 1; price = 2400; };
	class SMA_AAC_762_sdn6_d						{ quality = 1; price = 2400; };
	class SMA_AAC_762_sdn6_T						{ quality = 1; price = 2400; };
	class SMA_AAC_762_sdn6_G						{ quality = 1; price = 2400; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class SMA_30Rnd_762x35_BLK_EPR 										{ quality = 1; price = 50; };
	class SMA_30Rnd_762x35_SS 											{ quality = 1; price = 50; };
	class SMA_30Rnd_762x39_SKS_FMJ 										{ quality = 1; price = 50; };
	class SMA_30Rnd_762x39_SKS_FMJ_Red									{ quality = 1; price = 50; };
	class SMA_30Rnd_762x39_SKS_7n23_AP									{ quality = 1; price = 50; };
	class SMA_30Rnd_762x39_7n23_AP_Red 									{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_M80A1_EPR 									{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_M80A1_EPR_Tracer  							{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_M80A1_EPR_IR 								{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range 			{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer 		{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR 			{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic 						{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer 					{ quality = 1; price = 50; };
	class SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR						{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_M855A1										{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_M855A1_Tracer 								{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_M855A1_IR 									{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk318  										{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk318_Tracer 								{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk318_IR 									{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk262 										{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk262_Tracer 								{ quality = 1; price = 50; };
	class SMA_30Rnd_556x45_Mk262_IR 									{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_SPC_FMJ 										{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_SPC_FMJ_Tracer								{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_SPC_FMJ_IR									{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_BT 											{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_BT_Tracer 									{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_BT_IR  										{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_sub 											{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_sub_Tracer 									{ quality = 1; price = 50; };
	class SMA_30Rnd_68x43_sub_IR 										{ quality = 1; price = 50; };
	class SMA_150Rnd_762_M80A1 											{ quality = 1; price = 250; };
	class SMA_150Rnd_762_M80A1_Tracer 									{ quality = 1; price = 250; };
	class SMA_150Rnd_762_M80A1_Mixed  									{ quality = 1; price = 250; };
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};

	class Malden: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 25;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 20;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
};
class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 20;
	
	// Percentage chance the hacking will fail
	failChance = 50;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 5;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 3;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 1;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 5;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class HackLock: ExileAbstractAction
			{
				title = "Hack Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && !ExilePlayerInSafezone";
				action = "['HackLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	
	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgGrinding' >> 'enableGrinding') isEqualTo 1) && ('Exile_Item_Grinder' in (magazines player)) && ('Exile_Magazine_Battery' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && ((ExileClientInteractionObject animationPhase 'DoorRotation') < 0.5)";
				action = "['GrindLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
	
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 10000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};
/*
	This config will allow you to override the default poptab storage for vehicles and containers. 
	The current system takes the maxLoad of a vehicle * 10, and that gives you the max poptabs that can be stored.
	This will allow you to override that max with your own value.
	
	To override, just add the vehicle/containers classname to this class, and define its max. Look at Exile_Container_Safe_Small as an example.
*/
class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 25000; };	
};
class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 1;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};




class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;

	// Amount of minutes building is disabled after a charge has been planted
	// in a territory. This basically prevents people from placing tons of walls
	// or removing walls while their territory is under attack.
	constructionBlockDuration = 5;
};
class CfgTraderCategories
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			/*"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",*/
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			//Apex
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			//"U_B_T_Sniper_F",
			//"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			//"U_O_T_Sniper_F",
			//"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			//Apex
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F",
			// Jets
			"V_DeckCrew_yellow_F",
			"V_DeckCrew_blue_F",
			"V_DeckCrew_green_F",
			"V_DeckCrew_red_F",
			"V_DeckCrew_white_F",
			"V_DeckCrew_brown_F",
			"V_DeckCrew_violet_F"
		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",

			//Apex
			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			//"H_HelmetO_ViperSP_hex_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F"
		};
	};

	class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};

	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris",
			//Apex
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{

			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock",
			"Exile_Item_MetalScrews"

			/*
			--Not for Sale--
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			--Unused--
			"Exile_Item_SprayCan_Black",
			"Exile_Item_SprayCan_Red",
			"Exile_Item_SprayCan_Green",
			"Exile_Item_SprayCan_White",
			"Exile_Item_SprayCan_Blue",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		*/
		};
	};

	class Food
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
			
			// Hunted Animals
			// Note: Adding these to the trader will defeat the purpose of hunting!
			/*
			"Exile_Item_SheepSteak_Cooked",
			"Exile_Item_AlsatianSteak_Cooked",
			"Exile_Item_CatSharkFilet_Cooked",
			"Exile_Item_FinSteak_Cooked",
			"Exile_Item_GoatSteak_Cooked",
			"Exile_Item_TurtleFilet_Cooked",
			"Exile_Item_TunaFilet_Cooked",
			"Exile_Item_RabbitSteak_Cooked",
			"Exile_Item_ChickenFilet_Cooked",
			"Exile_Item_RoosterFilet_Cooked",
			"Exile_Item_MulletFilet_Cooked",
			"Exile_Item_SalemaFilet_Cooked",
			"Exile_Item_MackerelFilet_Cooked",
			"Exile_Item_OrnateFilet_Cooked",
			"Exile_Item_SnakeFilet_Cooked",
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
			*/
		};
	};
	
	class NonVeganFood
	{
		name = "Non-Vegan Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
		};
	};
	

	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",

			/*
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",
			"Exile_Item_ToiletPaper",
			"Exile_Item_ZipTie",
			"Exile_Item_BurlapSack",
			"Exile_Item_Bullets_556",
			"Exile_Item_Bullets_762",
			"Exile_Item_WeaponParts",
			*/

			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"			
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F"
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			//Apex
			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			//"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_765x17_SA61",
			"Exile_Magazine_20Rnd_765x17_SA61",
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK"
		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			//Apex
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F",
			"Exile_Weapon_SA61"
		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F",
			"Exile_Weapon_M4",
			"Exile_Weapon_M16A4",
			"Exile_Weapon_M16A2"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F",
			"Exile_Weapon_m107",
			"Exile_Weapon_ksvk"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB",
				//BMK
			"rhs_bmk_t",
			//WasserladePanzer
			"rhs_pts_vmf",
			"rhsusf_mkvsoc"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};

	class Diving
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
	class CupBluefor
	{
		name = "Cup Bluefor";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
		/////////////////////////////////////////BLUEFOR////////////////////////////////////////////////////////////////////
		"CUP_B_T810_Armed_CZ_WDL",//			Tatra T810 (MG/Covered)
		"CUP_B_T810_Unarmed_CZ_WDL",//			Tatra T810 (Covered)
		"CUP_B_T810_Refuel_CZ_WDL",//			Tatra T810 (Fuel)
		"CUP_B_T810_Reammo_CZ_WDL",//			Tatra T810 (Ammo)
		"CUP_B_T810_Repair_CZ_WDL",//			Tatra T810 (Repair)
		"CUP_B_T810_Armed_CZ_DES",//			Tatra T810 (MG/Covered)
		"CUP_B_T810_Unarmed_CZ_DES",//			Tatra T810 (Covered)
		"CUP_B_T810_Refuel_CZ_DES",//			Tatra T810 (Fuel)
		"CUP_B_T810_Reammo_CZ_DES",//			Tatra T810 (Ammo)
		"CUP_B_T810_Repair_CZ_DES",//			Tatra T810 (Repair)

		"CUP_B_S1203_Ambulance_CDF",//			Å koda S1203 (Ambulance)

		"CUP_B_MTLB_pk_CDF",//			MT-LB LV
		"CUP_B_MTLB_pk_Winter_CDF",//			MT-LB LV (Winter)
		"CUP_B_MTLB_pk_FIA",//			MT-LB LV

		"CUP_B_FV510_GB_D_SLAT",//			FV510 Warrior (SLAT - Desert)
		"CUP_B_FV510_GB_W_SLAT",//			FV510 Warrior (SLAT - Woodland)
		"CUP_B_FV510_GB_D",//			FV510 Warrior (Desert)
		"CUP_B_FV510_GB_W",//			FV510 Warrior (Woodland)

		"CUP_B_MCV80_GB_D_SLAT",//			MCV-80 Warrior (SLAT - Desert)
		"CUP_B_MCV80_GB_W_SLAT",//			MCV-80 Warrior (SLAT - Woodland)
		"CUP_B_MCV80_GB_D",//			MCV-80 Warrior (Desert)
		"CUP_B_MCV80_GB_W",//			MCV-80 Warrior (Woodland)

		"CUP_B_BAF_Coyote_L2A1_D",//			Coyote L2A1 (Desert)
		//"CUP_B_BAF_Coyote_GMG_D",//			Coyote GMG (Desert)
		//"CUP_B_BAF_Coyote_GMG_W",//			Coyote GMG (Woodland)
		"CUP_B_BAF_Coyote_L2A1_W",//			Coyote L2A1 (Woodland)

		//"CUP_B_Jackal2_GMG_GB_D",//			Jackal2 L2A1 Desert
		//"CUP_B_Jackal2_GMG_GB_W",//			Jackal2 GMG Woodland
		"CUP_B_Jackal2_L2A1_GB_D",//			Jackal2 L2A1 Desert
		"CUP_B_Jackal2_L2A1_GB_W",//			Jackal2 L2A1 Woodland

		"CUP_B_Mastiff_HMG_GB_D",//			Mastiff PPV HMG Desert
		"CUP_B_Mastiff_HMG_GB_W",//			Mastiff PPV HMG Woodland
		//"CUP_B_Mastiff_GMG_GB_D",//			Mastiff PPV GMG Desert
		//"CUP_B_Mastiff_GMG_GB_W",//			Mastiff PPV GMG Woodland
		"CUP_B_Mastiff_LMG_GB_D",//			Mastiff PPV LMG Desert
		"CUP_B_Mastiff_LMG_GB_W",//			Mastiff PPV LMG Woodland

		"CUP_B_Ridgback_HMG_GB_D",//			Ridgeback PPV HMG Desert
		"CUP_B_Ridgback_HMG_GB_W",//		    Ridgeback PPV HMG Woodland
		//"CUP_B_Ridgback_GMG_GB_D",//			Ridgeback PPV GMG Desert
		//"CUP_B_Ridgback_GMG_GB_W",//			Ridgeback PPV GMG Woodland
		"CUP_B_Ridgback_LMG_GB_D",//			Ridgeback PPV LMG Desert
		"CUP_B_Ridgback_LMG_GB_W",//			Ridgeback PPV LMG Woodland

		"CUP_B_FENNEK_GER_Wdl",//			Fennek (Woodland)
		"CUP_B_FENNEK_GER_Des",//			Fennek (Desert)

		"CUP_B_Wolfhound_HMG_GB_D",//			Wolfhound TSV HMG Desert
		"CUP_B_Wolfhound_HMG_GB_W",//			Wolfhound TSV HMG Woodland
		//"CUP_B_Wolfhound_GMG_GB_D",//			Wolfhound TSV GMG Desert
		//"CUP_B_Wolfhound_GMG_GB_W",//			Wolfhound TSV GMG Woodland
		"CUP_B_Wolfhound_LMG_GB_D",//			Wolfhound TSV LMG Desert
		"CUP_B_Wolfhound_LMG_GB_W",//			Wolfhound TSV LMG Woodland

		//PanzerSchwerSchwimm
		"CUP_B_AAV_USMC",//			AAVP7/A1	BLUFOR	United States Marine Corps	APCs
		"CUP_B_AAV_Unarmed_USMC",//			AAVC7/A1 (Command)	BLUFOR	United States Marine Corps	APCs

		"CUP_B_M2Bradley_USA_D",//			M2A2 Bradley IFV (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M2Bradley_USA_W",//			M2A2 Bradley IFV (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M6LineBacker_USA_D",//			M6 Linebacker (Desert)	BLUFOR	United States Army	Anti-Air
		"CUP_B_M6LineBacker_USA_W",//			M6 Linebacker (Woodland)	BLUFOR	United States Army	Anti-Air

		"CUP_B_M2A3Bradley_USA_D",//			M2A3 ERA Bradley IFV (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M2A3Bradley_USA_W",//			M2A3 ERA Bradley IFV (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M7Bradley_USA_D",//			M7 Bradley (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M7Bradley_USA_W",//			M7 Bradley (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M2Bradley_NATO_T",//			M2A2 Bradley IFV	BLUFOR	NATO (Pacific)	APCs

		"CUP_B_M6LineBacker_NATO_T",//			M6 Linebacker	BLUFOR	NATO (Pacific)	Anti-Air
		"CUP_B_M2A3Bradley_NATO_T",//			M2A3 ERA Bradley IFV	BLUFOR	NATO (Pacific)	APCs

		"CUP_B_Challenger2_Woodland_BAF",//			FV4034 Challenger 2 (Woodland)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_2CW_BAF",//			FV4034 Challenger 2 (Two Color Woodland)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_Desert_BAF",//			FV4034 Challenger 2 (Desert)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_2CD_BAF",//			FV4034 Challenger 2 (Two-Color Desert)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_Snow_BAF",//			FV4034 Challenger 2 (Snow)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_2CS_BAF",//			FV4034 Challenger 2 (Two Color Snow)	BLUFOR	British Armed Forces	Tanks
		"CUP_B_Challenger2_Green_CTRG",//			FV4034 Challenger 2 (Green)	BLUFOR	CTRG	Tanks
		"CUP_B_Challenger2_Sand_CTRG",//			FV4034 Challenger 2 (Green)	BLUFOR	CTRG	Tanks
		"CUP_B_Challenger2_NATO",//			FV4034 Challenger 2	BLUFOR	NATO	Tanks

		"CUP_B_Leopard2A6_GER",//			Leopard 2A6	BLUFOR	Bundeswehr	Tanks
		"CUP_B_Leopard2A6DST_GER",//			Leopard 2A6 (Desert)	BLUFOR	Bundeswehr	Tanks

		"CUP_B_M113_USA",//			M113	BLUFOR	United States Army	APCs
		"CUP_B_M113_desert_USA",//		_USA	M113A3 (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M113_Med_USA",//			M113A3 Ambulance	BLUFOR	United States Army	APCs

		"CUP_B_M163_USA",//			M163A1 VADS	BLUFOR	United States Army	Anti-Air

		"CUP_B_M1A1_Woodland_US_Army",//		M1A1 Abrams (Woodland)	BLUFOR	United States Army	Tanks
		"CUP_B_M1A1_DES_US_Army",//			M1A1 Abrams (Desert)	BLUFOR	United States Army	Tanks
		"CUP_B_M1A2_TUSK_MG_US_Army",//			M1A2 Abrams TUSK (Woodland)	BLUFOR	United States Army	Tanks
		"CUP_B_M1A2_TUSK_MG_DES_US_Army",//			M1A2 Abrams TUSK (Desert)	BLUFOR	United States Army	Tanks
		"CUP_B_M1A1_Woodland_USMC",//			M1A1 Abrams (Woodland)	BLUFOR	United States Marine Corps	Tanks
		"CUP_B_M1A1_DES_USMC",//			M1A1 Abrams (Desert)	BLUFOR	United States Marine Corps	Tanks
		"CUP_B_M1A2_TUSK_MG_USMC",//			M1A2 Abrams TUSK (Woodland)	BLUFOR	United States Marine Corps	Tanks
		"CUP_B_M1A2_TUSK_MG_DES_USMC",//			M1A2 Abrams TUSK (Desert)	BLUFOR	United States Marine Corps	Tanks
		"CUP_B_M1A1_NATO_T",//			M1A1 Abrams	BLUFOR	NATO (Pacific)	Tanks
		"CUP_B_M1A_TUSK_NATO_T",//			M1A2 Abrams TUSK	BLUFOR	NATO (Pacific)	Tanks

		"CUP_B_M60A3_USMC",//			M60A3	BLUFOR	United States Marine Corps	Tanks
		"CUP_B_M60A3_TTS_USMC",//			M60A3 TTS	BLUFOR	United States Marine Corps	Tanks


		//BDRM
		"CUP_B_BRDM2_CDF",//			BRDM-2	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BRDM2_ATGM_CDF",//			BRDM-2 (ATGM)	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BRDM2_HQ_CDF",//			BRDM-2 (HQ)	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BRDM2_CZ",//			BRDM-2	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BRDM2_CZ_Des",//			BRDM-2 (desert)	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BRDM2_HQ_CZ",//			BRDM-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BRDM2_HQ_CZ_Des",//			BRDM-2 (HQ)(desert)	BLUFOR	Army of the Czech Republic	APCs

		"CUP_B_BTR60_CDF",//			BTR-60PB	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BTR60_FIA",//			BTR-60PB	BLUFOR	FIA	APCs

		"CUP_B_Dingo_CZ_Wdl",//			Dingo 2 (MG) (Woodland)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_Dingo_CZ_Des",//			Dingo 2 (MG) (Desert)	BLUFOR	Army of the Czech Republic	Cars
		//"CUP_B_Dingo_GL_CZ_Wdl",//			Dingo 2 (GL) (Woodland)	BLUFOR	Army of the Czech Republic	Cars
		//"CUP_B_Dingo_GL_CZ_Des",//			Dingo 2 (GL) (Desert)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_Dingo_GER_Wdl",//			Dingo 2 (MG) (Woodland)	BLUFOR	Bundeswehr	Cars
		"CUP_B_Dingo_GER_Des",//			Dingo 2 (MG) (Desert)	BLUFOR	Bundeswehr	Cars
		//"CUP_B_Dingo_GL_GER_Wdl",//			Dingo 2 (GL) (Woodland)	BLUFOR	Bundeswehr	Cars
		//"CUP_B_Dingo_GL_GER_Des",//			Dingo 2 (GL) (Desert)	BLUFOR	Bundeswehr	Cars
		//HUMMWV
		"CUP_B_HMMWV_Unarmed_USMC",//			HMMWV (Unarmed)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_HMMWV_M2_USMC",//			HMMWV M2	BLUFOR	United States Marine Corps	Cars
		//"CUP_B_HMMWV_MK19_USMC",//			HMMWV (MK19)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_HMMWV_TOW_USMC",//			HMMWV (TOW)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_HMMWV_M1114_USMC",//			HMMWV (M240)	BLUFOR	United States Marine Corps	Cars
		//"CUP_B_HMMWV_Avenger_USMC",//			HMMWV Avenger	BLUFOR	United States Marine Corps	Anti-Air
		"CUP_B_HMMWV_Ambulance_USMC",//			HMMWV (Ambulance)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_HMMWV_Unarmed_USA",//			HMMWV (Unarmed)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_M2_USA",//			HMMWV M2	BLUFOR	United States Army	Cars
		//"CUP_B_HMMWV_MK19_USA",//			HMMWV (MK19)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_TOW_USA",//			HMMWV (TOW)	BLUFOR	United States Army	Cars
		//"CUP_B_HMMWV_Avenger_USA",//			HMMWV Avenger	BLUFOR	United States Army	Anti-Air
		"CUP_B_HMMWV_Ambulance_USA",//			HMMWV (Ambulance)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_Transport_USA",//			HMMWV (Transport)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_M2_GPK_USA",//			HMMWV M1151 M2	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_Terminal_USA",//			HMMWV UAV Terminal	BLUFOR	United States Army	Cars
		//"CUP_B_HMMWV_SOV_USA",//			HMMWV SOV (Mk19)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_SOV_M2_USA",//			HMMWV SOV (M2)	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_Crows_M2_USA",//			HMMWV CROWS M2	BLUFOR	United States Army	Cars
		//"CUP_B_HMMWV_Crows_MK19_USA",//			HMMWV CROWS MK19	BLUFOR	United States Army	Cars
		"CUP_B_HMMWV_Unarmed_NATO_T",//			HMMWV (Unarmed)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_M2_NATO_T",//			HMMWV M2	BLUFOR	NATO (Pacific)	Cars
		//"CUP_B_HMMWV_MK19_NATO_T",//			HMMWV (MK19)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_TOW_NATO_T",//			HMMWV (TOW)	BLUFOR	NATO (Pacific)	Cars
		//"CUP_B_HMMWV_Avenger_NATO_T",//			HMMWV Avenger	BLUFOR	NATO (Pacific)	Anti-Air
		"CUP_B_HMMWV_Ambulance_NATO_T",//			HMMWV (Ambulance)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_Transport_NATO_T",//			HMMWV (Transport)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_M2_GPK_NATO_T",//			HMMWV M1151 M2	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_Terminal_NATO_T",//			HMMWV UAV Terminal	BLUFOR	NATO (Pacific)	Cars
		//"CUP_B_HMMWV_SOV_NATO_T",//			HMMWV SOV (Mk19)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_SOV_M2_NATO_T",//			HMMWV SOV (M2)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_Crows_M2_NATO_T",//			HMMWV CROWS M2	BLUFOR	NATO (Pacific)	Cars
		//"CUP_B_HMMWV_Crows_MK19_NATO_T",//			HMMWV CROWS MK19	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_HMMWV_M2_GPK_ACR",//			HMMWV M1151 M2	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_HMMWV_DSHKM_GPK_ACR",//			HMMWV M1114 DSHKM	BLUFOR	Army of the Czech Republic	Cars
		//"CUP_B_HMMWV_AGS_GPK_ACR",//			HMMWV M1114 AGS	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_HMMWV_Ambulance_ACR",//			HMMWV (Ambulance)	BLUFOR	Army of the Czech Republic	Cars
		//TRUCK
		"CUP_B_Kamaz_CDF",//			Kamaz 5350	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Kamaz_Open_CDF",//			Kamaz 5350 (Open)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Kamaz_Refuel_CDF",//			Kamaz 5350 (Fuel)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Kamaz_Repair_CDF",//			Kamaz 5350 (Repair)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Kamaz_Reammo_CDF",//			Kamaz 5350 (Ammo)	BLUFOR	Chernarus Defense Forces	Cars
		//RADPANZER
		"CUP_B_LAV25_USMC",//			LAV-25A1	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25_desert_USMC",//			LAV-25A1 (Desert)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25_green",//			LAV-25A1 (Olive)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25M240_USMC",//			LAV-25A1 (M240)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25M240_desert_USMC",//			LAV-25A1 (M240) (Desert)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25M240_green",//			LAV-25A1 (M240) (Olive)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25_HQ_USMC",//			LAV-C2	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25_HQ_desert_USMC",//			LAV-C2 (Desert)	BLUFOR	United States Marine Corps	APCs
		"CUP_B_LAV25_HQ_green",//			LAV-C2 (Olive)	BLUFOR	United States Marine Corps	APCs
		//LANDROVER
		"CUP_B_LR_Transport_CZ_W",//			Land Rover 110 (Transport) Woodland	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Transport_CZ_D",//			Land Rover 110 (Transport) Desert	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_MG_CZ_W",//			Land Rover 110 (M2) Woodland	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Ambulance_CZ_W",//			Land Rover 110 (Ambulance) Woodland	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Ambulance_CZ_D",//			Land Rover 110 (Ambulance) Desert	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Special_CZ_W",//			Land Rover 110 (Special) Woodland	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Special_Des_CZ_D",//			Land Rover 110 (Special) Desert	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_LR_Transport_GB_W",//			Land Rover 110 (Transport) Woodland	BLUFOR	British Armed Forces	Cars
		"CUP_B_LR_Transport_GB_D",//			Land Rover 110 (Transport) Desert	BLUFOR	British Armed Forces	Cars
		"CUP_B_LR_MG_GB_W",//			Land Rover 110 (M2) Woodland	BLUFOR	British Armed Forces	Cars
		"CUP_B_LR_MG_GB_D",//			Land Rover 110 (M2) Desert	BLUFOR	British Armed Forces	Cars
		"CUP_B_LR_Ambulance_GB_W",//			Land Rover 110 (Ambulance) Woodland	BLUFOR	British Armed Forces	Cars
		"CUP_B_LR_Ambulance_GB_D",//			Land Rover 110 (Ambulance) Desert	BLUFOR	British Armed Forces	Cars
		//"CUP_B_LR_Special_M2_GB_W",//			Land Rover 110 (M2 Special) Woodland	BLUFOR	British Armed Forces	Cars
		//"CUP_B_LR_Special_M2_GB_D",//			Land Rover 110 (M2 Special) Desert	BLUFOR	British Armed Forces	Cars
		//"CUP_B_LR_Special_GMG_GB_W",//			Land Rover 110 (GMG Special) Woodland	BLUFOR	British Armed Forces	Cars
		//"CUP_B_LR_Special_GMG_GB_D",//			Land Rover 110 (GMG Special) Desert	BLUFOR	British Armed Forces	Cars
		"CUP_B_M1030_USMC",//			M1030	BLUFOR	United States Marine Corps	Bikes
		//URAL
		"CUP_B_MTVR_USA",//			MTVR	BLUFOR	United States Army	Cars
		"CUP_B_MTVR_Ammo_USA",//			MTVR (Ammo)	BLUFOR	United States Army	Cars	
		"CUP_B_MTVR_Refuel_USA",//			MTVR (Refuel)	BLUFOR	United States Army	Cars
		"CUP_B_MTVR_Repair_USA",//			MTVR (Repair)	BLUFOR	United States Army	Cars
		"CUP_B_MTVR_USMC",//			MTVR	BLUFOR	United States Marine Corps	Cars
		"CUP_B_MTVR_Ammo_USMC",//			MTVR (Ammo)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_MTVR_Refuel_USMC",//			MTVR (Refuel)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_MTVR_Repair_USMC",//			MTVR (Repair)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_RG31_M2_USMC",//			RG-31 Nyala M2	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_RG31_M2_OD_USMC",//			RG-31 Nyala M2	BLUFOR	United States Marine Corps	Cars
		"CUP_B_RG31_M2_GC_USMC",//			RG-31 Nyala M2 GC	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_RG31_M2_OD_GC_USMC",//			RG-31 Nyala M2 GC	BLUFOR	United States Marine Corps	Cars
		//"CUP_B_RG31_Mk19_USMC",//			RG-31 Mk.19	BLUFOR	United States Marine Corps	Cars (Desert)
		//"CUP_B_RG31_Mk19_OD_USMC",//			RG-31 Mk.19	BLUFOR	United States Marine Corps	Cars
		"CUP_B_RG31E_M2_USMC",//			RG-31 Mk5E M2	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_RG31E_M2_OD_USMC",//			RG-31 Mk5E M2	BLUFOR	United States Marine Corps	Cars
		"CUP_B_RG31_M2_USA",//			RG-31 Nyala M2	BLUFOR	United States Army	Cars
		"CUP_B_RG31_M2_OD_USA",//			RG-31 Nyala M2	BLUFOR	United States Army	Cars (Woodland)
		"CUP_B_RG31_M2_GC_USA",//			RG-31 Nyala M2 GC	BLUFOR	United States Army	Cars
		"CUP_B_RG31_M2_OD_GC_USA",//			RG-31 Nyala M2 GC	BLUFOR	United States Army	Cars (Woodland)	
		//"CUP_B_RG31_Mk19_USA",//			RG-31 Mk.19	BLUFOR	United States Army	Cars
		//"CUP_B_RG31_Mk19_OD_USA",//			RG-31 Mk.19	BLUFOR	United States Army	Cars (Woodland)
		//"CUP_B_RG31E_M2_USA",//			RG-31 Mk5E M2	BLUFOR	United States Army	Cars
		//"CUP_B_RG31E_M2_OD_USA",//			RG-31 Mk5E M2	BLUFOR	United States Army	Cars (Woodland)
		"CUP_B_M1126_ICV_M2_Desert",//			M1126 ICV M2 CROWS (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_M2_Desert_Slat",//			M1126 ICV M2 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_M2_Woodland",//		 ICV M2 CROWS (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_M2_Woodland_Slat",//			M1126 ICV M2 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_MK19_Desert",//			M1126 ICV MK19 CROWS (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_MK19_Desert_Slat",//		_Slat	M1126 ICV MK19 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_MK19_Woodland",//			M1126 ICV MK19 CROWS (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1126_ICV_MK19_Woodland_Slat",//			M1126 ICV MK19 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1130_CV_M2_Desert",//			M1130 CV M2 CROWS (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1130_CV_M2_Desert_Slat",//			M1130 CV M2 CROWS (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1130_CV_M2_Woodland",//			M1130 CV M2 CROWS (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1130_CV_M2_Woodland_Slat",//			M1130 CV M2 CROWS (Woodland - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1129_MC_MK19_Desert",//			M1129 MC MK19 CROWS (Desert)	BLUFOR	United States Army	Artillery
		"CUP_B_M1129_MC_MK19_Desert_Slat",//			M1129 MC MK19 CROWS (Desert - Slat)	BLUFOR	United States Army	Artillery
		"CUP_B_M1129_MC_MK19_Woodland",//			M1129 MC MK19 CROWS (Woodland)	BLUFOR	United States Army	Artillery
		"CUP_B_M1129_MC_MK19_Woodland_Slat",//			M1129 MC MK19 CROWS (Woodland - Slat)	BLUFOR	United States Army	Artillery
		"CUP_B_M1135_ATGMV_Desert",//			M1135 ATGMV (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1135_ATGMV_Desert_Slat",//			M1135 ATGMV (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1135_ATGMV_Woodland",//			M1135 ATGMV (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1135_ATGMV_Woodland_Slat",//			M1135 ATGMV (Woodland - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1128_MGS_Desert",//			M1128 MGS (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1128_MGS_Desert_Slat",//			M1128 MGS (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1128_MGS_Woodland",//			M1128 MGS (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1128_MGS_Woodland_Slat",//			M1128 MGS (Woodland - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1133_MEV_Desert",//			M1133 MEV (Desert)	BLUFOR	United States Army	APCs
		"CUP_B_M1133_MEV_Desert_Slat",//			M1133 MEV (Desert - Slat)	BLUFOR	United States Army	APCs
		"CUP_B_M1133_MEV_Woodland",//			M1133 MEV (Woodland)	BLUFOR	United States Army	APCs
		"CUP_B_M1133_MEV_Woodland_Slat",//			M1133 MEV (Woodland - Slat)	BLUFOR	United States Army	APCs

		"CUP_B_M1165_GMV_USA",//			M1165 GMV (M134)	BLUFOR	United States Army	Cars
		"CUP_B_M1151_M2_USA",//			M1151 (M2)	BLUFOR	United States Army	Cars
		"CUP_B_M1151_Deploy_USA",//			M1151 (M2) Deployment	BLUFOR	United States Army	Cars
		//"CUP_B_M1151_Mk19_USA",//			M1151 (Mk. 19)	BLUFOR	United States Army	
		"CUP_B_M1151_USA",//			M1151 (Unarmed)	BLUFOR	United States Army	Cars
		"CUP_B_M1152_USA",//			M1152 ECV	BLUFOR	United States Army	Cars
		"CUP_B_M1167_USA",//			M1167 (TOW-2)	BLUFOR	United States Army	Cars
		"CUP_B_M1165_GMV_WDL_USA",//			M1165 GMV (M134)	BLUFOR	United States Army	Cars (Woodland)
		"CUP_B_M1151_M2_WDL_USA",//			M1151 (M2)	BLUFOR	United States Army	Cars (Woodland)	Public
		"CUP_B_M1151_Deploy_WDL_USA",//			M1151 (M2) Deployment	BLUFOR	United States Army	Cars (Woodland)	Public
		//"CUP_B_M1151_Mk19_WDL_USA",//			M1151 (Mk. 19)	BLUFOR	United States Army	Cars (Woodland)	Public
		"CUP_B_M1151_WDL_USA",//			M1151 (Unarmed)	BLUFOR	United States Army	Cars (Woodland)	
		"CUP_B_M1152_WDL_USA",//			M1152 ECV	BLUFOR	United States Army	Cars (Woodland)	
		"CUP_B_M1167_WDL_USA",//			M1167 (TOW-2)	BLUFOR	United States Army	Cars (Woodland)
		"CUP_B_M1165_GMV_USMC",//			M1165 GMV (M134)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1151_M2_USMC",//			M1151 (M2)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1151_Deploy_USMC",//			M1151 (M2) Deployment	BLUFOR	United States Marine Corps	Cars
		//"CUP_B_M1151_Mk19_USMC",//			M1151 (Mk. 19)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1151_USMC",//			M1151 (Unarmed)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1152_USMC",//			M1152 ECV	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1167_USMC",//			M1167 (TOW-2)	BLUFOR	United States Marine Corps	Cars
		"CUP_B_M1165_GMV_DSRT_USMC",//			M1165 GMV (M134)	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1151_M2_DSRT_USMC",//			M1151 (M2)	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1151_Deploy_DSRT_USMC",//			M1151 (M2) Deployment	BLUFOR	United States Marine Corps	Cars (Desert)
		//"CUP_B_M1151_Mk19_DSRT_USMC",//			M1151 (Mk. 19)	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1151_DSRT_USMC",//			M1151 (Unarmed)	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1152_DSRT_USMC",//			M1152 ECV	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1167_DSRT_USMC",//			M1167 (TOW-2)	BLUFOR	United States Marine Corps	Cars (Desert)
		"CUP_B_M1165_GMV_NATO_T",//			M1165 GMV (M134)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_M1151_M2_NATO_T",//			M1151 (M2)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_M1151_Deploy_NATO_T",//			M1151 (M2) Deployment	BLUFOR	NATO (Pacific)	Cars
		//"CUP_B_M1151_Mk19_NATO_T",//			M1151 (Mk. 19)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_M1151_NATO_T",//			M1151 (Unarmed)	BLUFOR	NATO (Pacific)	Cars
		"CUP_B_M1152_NATO_T",//			M1152 ECV	"CUP_B_M1167_NATO_T	M1167 (TOW-2)	BLUFOR	NATO (Pacific)	Cars

		//BMP
		"CUP_B_BMP2_CDF",//			BMP-2	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BMP_HQ_CDF",//			BMP-2K	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BMP2_AMB_CDF",//			BMP-2 Ambulance	BLUFOR	Chernarus Defense Forces	APCs
		"CUP_B_BMP2_CZ",//			BVP-2	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BMP2_CZ_Des",//			BVP-2	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BMP_HQ_CZ",//			BVP-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BMP_HQ_CZ",//		_Des	BVP-2 (HQ)	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BMP2_AMB_CZ",//			BVP-2 Ambulance	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_BMP2_AMB_CZ_Des",//			BVP-2 Ambulance	BLUFOR	Army of the Czech Republic	APCs
		"CUP_B_FV432_Bulldog_GB_D",//			FV432 Bulldog M240 [Desert]	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_Bulldog_GB_W",//			FV432 Bulldog M240 [Woodland]	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_Bulldog_GB_D_RWS",//			FV432 Bulldog M2 RWS [Desert]	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_Bulldog_GB_W_RWS",//			FV432 Bulldog M2 RWS [Woodland]	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_GB_GPMG",//			FV432 GPMG	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_GB_Ambulance",//			FV432 Ambulance	BLUFOR	British Armed Forces	APCs
		"CUP_B_FV432_Mortar",//			FV432 Mortar	BLUFOR	British Armed Forces	APCs
		//"CUP_B_M270_HE_USMC",//			M270 MLRS (HE)	BLUFOR	United States Marine Corps	Artillery
		//"CUP_B_M270_DPICM_USMC",//			M270 MLRS (DPICM)	BLUFOR	United States Marine Corps	Artillery
		//"CUP_B_M270_HE_USA",//			M270 MLRS (HE)	BLUFOR	United States Army	Artillery
		//"CUP_B_M270_DPICM_USA",//			M270 MLRS (DPICM)	BLUFOR	United States Army	Artillery
		"CUP_B_T72_CDF",//			T-72	BLUFOR	Chernarus Defense Forces	Tanks
		"CUP_B_T72_CZ",//			T-72M4CZ	BLUFOR	Army of the Czech Republic	Tanks
		//"CUP_B_ZSU23_CDF",//			ZSU-23-4	BLUFOR	Chernarus Defense Forces	Anti-Air OP!!!
		//"CUP_B_ZSU23_Afghan_CDF",//			ZSU-23-4 Afghanski	BLUFOR	Chernarus Defense Forces	Anti-Air

		"CUP_B_UAZ_Unarmed_CDF",//			UAZ	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_UAZ_Open_CDF",//			UAZ (Open)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_UAZ_MG_CDF",//			UAZ (DShKM)	BLUFOR	Chernarus Defense Forces	Cars
		//"CUP_B_UAZ_AGS30_CDF",//			UAZ (AGS-30)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_UAZ_SPG9_CDF",//			UAZ (SPG-9)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_UAZ_METIS_CDF",//			UAZ (Metis-M)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_UAZ_Unarmed_ACR",//			UAZ	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_UAZ_Open_ACR",//			UAZ (Open)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_UAZ_MG_ACR",//			UAZ (DShKM)	BLUFOR	Army of the Czech Republic	Cars
		//"CUP_B_UAZ_AGS30_ACR",//			UAZ (AGS-30)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_UAZ_SPG9_ACR",//			UAZ (SPG-9)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_UAZ_METIS_ACR",//			UAZ (Metis-M)	BLUFOR	Army of the Czech Republic	Cars
		"CUP_B_Ural_CDF",//			Ural	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Ural_Open_CDF",//			Ural (Open)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Ural_Refuel_CDF",//			Ural (Refuel)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Ural_Repair_CDF",//			Ural (Repair)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Ural_Reammo_CDF",//			Ural (Ammo)	BLUFOR	Chernarus Defense Forces	Cars
		"CUP_B_Ural_Empty_CDF"//			Ural (Empty)	BLUFOR	Chernarus Defense Forces	Cars
		//"CUP_B_Ural_ZU23_CDF"//			Ural (ZU-23)	BLUFOR	Chernarus Defense Forces	Anti-Air
		//"CUP_B_BM21_CDF"//			BM-21	BLUFOR	Chernarus Defense Forces	Artillery //OP!!		
		};
	};
	class CupBlueforAir
	{
		name = "Cup Bluefor Air";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/////////////////////////////////////////BLUFOR////////////////////////////////////////////////////////////////////
		//HELI_PLANE
		//Heli
		"CUP_B_MH47E_USA",//			MH-47E
		"CUP_B_MH47E_GB",//			Chinook HC-6
		"CUP_B_CH47F_USA",//			CH-47F	BLUFOR	United States Army	Helicopters
		"CUP_B_CH47F_VIV_USA",//			CH-47F (VIV)	BLUFOR	United States Army	Helicopters
		"CUP_B_CH47F_GB",//			Chinook HC-4	BLUFOR	British Armed Forces	Helicopters
		"CUP_B_CH47F_VIV_GB",//			Chinook HC-4 (VIV)	BLUFOR	British Armed Forces	Helicopters
		"CUP_B_CH53E_USMC",//			CH-53E Super Stallion	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_CH53E_VIV_USMC",//			CH-53E Super Stallion (VIV)	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_CH53E_GER",//			CH-53G Super Stallion	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_CH53E_VIV_GER",//			CH-53G Super Stallion (VIV)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_MH60S_USMC",//			MH-60S Seahawk	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_MH60S_FFV_USMC",//			MH-60S Seahawk (FFV)	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_SA330_Puma_HC1_BAF",//			SA-330 Puma HC1	BLUFOR	British Armed Forces	Helicopters
		"CUP_B_SA330_Puma_HC2_BAF",//			SA-330 Puma HC2	BLUFOR	British Armed Forces	Helicopters
		"CUP_B_UH1D_GER_KSK",//			UH-1D	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_slick_GER_KSK",//			UH-1D Slick	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_armed_GER_KSK",//			UH-1D (Armed)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_gunship_GER_KSK",//			UH-1D (Gunship)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_GER_KSK_Des",//			UH-1D (Desert)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_slick_GER_KSK_Des",//			UH-1D Slick (Desert)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_armed_GER_KSK_Des",//			UH-1D Armed (Desert)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1D_gunship_GER_KSK_Des",//			UH-1D Gunship (Desert)	BLUFOR	Bundeswehr	Helicopters
		"CUP_B_UH1Y_UNA_USMC",//			UH-1Y Venom Transport	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_UH1Y_MEV_USMC",//			UH-1Y Venom MEV	BLUFOR	United States Marine Corps	Helicopters
		//"CUP_B_UH1Y_Gunship_Dynamic_USMC",//			UH-1Y Venom (Gunship)	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_UH60M_US",//			UH-60M	BLUFOR	United States Army	Helicopters
		"CUP_B_MH60L_DAP_4x_US",//			MH-60L DAP (4 Stores)	BLUFOR	United States Army	Helicopters
		"CUP_B_MH60L_DAP_2x_US",//			MH-60L DAP (2 Stores)	BLUFOR	United States Army	Helicopters
		"CUP_B_UH60M_FFV_US",//			UH-60M (FFV)	BLUFOR	United States Army	Helicopters
		"CUP_B_UH60M_Unarmed_US",//			UH-60M (Unarmed)	BLUFOR	United States Army	Helicopters
		"CUP_B_UH60M_Unarmed_FFV_US",//			UH-60M (Unarmed/FFV)	BLUFOR	United States Army	Helicopters
		"CUP_B_UH60M_Unarmed_FFV_MEV_US",//			UH-60M MEV (Unarmed/FFV)	BLUFOR	United States Army	Helicopters
		"CUP_B_MH60L_DAP_4x_USN",//			MH-60S Knighthawk (ESSS x4)	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_MH60L_DAP_2x_USN",//			MH-60S Knighthawk (ESSS x2)	BLUFOR	United States Marine Corps	Helicopters
		"CUP_B_UH60S_USN",//			MH-60S Seahawk (M3M)	BLUFOR	United States Marine Corps	Helicopters

		"CUP_B_Merlin_HC3_GB",//		 HC3
		"CUP_B_Merlin_HC3_VIV_GB",//		 HC3 (VIV)
		"CUP_B_Merlin_HC3A_GB",//		 HC3A
		"CUP_B_Merlin_HC3_Armed_GB",//			Merlin HC3 (Armed)
		"CUP_B_Merlin_HC3A_Armed_GB",//			Merlin HC3A (Armed)
		"CUP_B_Merlin_HC4_GB",//			Merlin HM2
		"CUP_B_AW159_Unarmed_GB",//			AW159 Wildcat (Green, Unarmed)
		"CUP_B_AW159_Unarmed_RN_Grey",//			AW159 Wildcat (Grey, Unarmed
		"CUP_B_AW159_Unarmed_RN_Blackcat",//			AW159 Wildcat (Black Cat, Unarmed)
		"CUP_B_AW159_GB",//			AW159 Wildcat (Green)
		"CUP_B_AW159_RN_Grey",//			AW159 Wildcat (Grey)
		"CUP_B_AW159_RN_Blackcat",//			AW159 Wildcat (Black Cat)


		"CUP_B_MI6A_CDF",//			Mi-6A Hook (VIV)	BLUFOR	Chernarus Defense Forces	Helicopters
		"CUP_B_MI6T_CDF",//			Mi-6T Hook	BLUFOR	Chernarus Defense Forces	Helicopters
		"CUP_B_Mi17_CDF",//			Mi-8MT	BLUFOR	Chernarus Defense Forces	Helicopters
		"CUP_B_Mi17_medevac_CDF",//			Mi-8MT Medevac	BLUFOR	Chernarus Defense Forces	Helicopters
		"CUP_B_Mi17_VIV_CDF",//			Mi-8MT (VIV)	BLUFOR	Chernarus Defense Forces	Helicopters
		"CUP_B_Mi171Sh_ACR",//			Mi-171Sh (Rockets)	BLUFOR	Army of the Czech Republic	Helicopters
		"CUP_B_Mi171Sh_Unarmed_ACR",//			Mi-171Sh	BLUFOR	Army of the Czech Republic	Helicopters

		//KAMPFHELI
		"CUP_B_AH64D_DL_USA",//			AH-64D	BLUFOR	United States Army	Helicopters
		"CUP_B_AH64_DL_USA",//			AH-64	BLUFOR	United States Army	Helicopters
		"CUP_B_AH1_DL_BAF",//			AH1	BLUFOR	British Armed Forces	Helicopters
		"CUP_B_MH6M_USA",//			MH-6M MELB	BLUFOR	United States Army	Helicopters
		"CUP_B_MH6J_USA",//			MH-6J Little Bird	BLUFOR	United States Army	Helicopters
		"CUP_B_MH6M_OBS_USA",//			MH-6M Recon	BLUFOR	United States Army	Helicopters
		"CUP_B_MH6J_OBS_USA",//			MH-6J Recon	BLUFOR	United States Army	Helicopters
		//"CUP_B_AH6X_USA",//			AH-6X Littlebird ULB	BLUFOR	United States Army	Drones
		"CUP_B_AH6M_USA",//			AH-6M	BLUFOR	United States Army	Helicopters
		"CUP_B_AH6J_USA",//			AH-6J	BLUFOR	United States Army	Helicopters

		//JET
		"CUP_B_AV8B_DYN_USMC",//			AV-8B Harrier II	BLUFOR	United States Marine Corps	Planes
		"CUP_B_GR9_DYN_GB",//			Harrier GR.9	BLUFOR	British Armed Forces	Planes
		"CUP_B_C130J_USMC",//			C-130J	BLUFOR	United States Marine Corps	Planes
		"CUP_B_C130J_Cargo_USMC",//			C-130J (VIV)	BLUFOR	United States Marine Corps	Planes
		"CUP_B_C130J_GB",//			C-130J	BLUFOR	British Armed Forces	Planes
		"CUP_B_C130J_Cargo_GB",//			C-130J (VIV)	BLUFOR	British Armed Forces	Planes
		"CUP_B_C47_USA",//			C-47 Skytrain	BLUFOR	United States Army	Planes
		"CUP_B_AC47_Spooky_USA",//			AC-47D Spooky	BLUFOR	United States Army	Planes
		"CUP_B_F35B_USMC",//			F-35B Lightning II	BLUFOR	United States Marine Corps	Planes
		"CUP_B_F35B_Stealth_USMC",//			F-35B Lightning II (Stealth)	BLUFOR	United States Marine Corps	Planes
		"CUP_B_F35B_BAF",//			F-35B Lightning II	BLUFOR	British Armed Forces	Planes
		"CUP_B_F35B_Stealth_BAF",//			F-35B Lightning II (Stealth)	BLUFOR	British Armed Forces	Planes
		"CUP_B_MV22_USMC",//			MV-22B Osprey	BLUFOR	United States Marine Corps	Planes
		"CUP_B_MV22_VIV_USMC",//			MV-22B Osprey (VIV)	BLUFOR	United States Marine Corps	Planes
		"CUP_B_MV22_USMC_RAMPGUN",//			MV-22B Osprey (Ramp Gun)	BLUFOR	United States Marine Corps	Planes
		"CUP_B_Su25_Dyn_CDF",//			Su-25 Frogfoot	BLUFOR	Chernarus Defense Forces	Planes
		"CUP_B_SU34_CDF",//			Su-34	BLUFOR	Chernarus Defense Forces	Planes
		"CUP_B_L39_CZ",//			L-39ZA (Green)	BLUFOR	Army of the Czech Republic	Planes
		"CUP_B_L39_CZ_GREY"//			L-39ZA (Grey)	BLUFOR	Army of the Czech Republic	Planes
	
		};
	};	
	class CupBlueforBoat
	{
		name = "Cup Bluefor Boat";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/////////////////////////////////////////BLUFOR////////////////////////////////////////////////////////////////////
		//Boote
		"CUP_B_RHIB_USMC",//			RHIB	BLUFOR	United States Marine Corps	Boats
		"CUP_B_RHIB2Turret_USMC",//			RHIB (Mk19)	BLUFOR	United States Marine Corps	Boats
		"CUP_B_Zodiac_USMC",//			Zodiac	BLUFOR	United States Marine Corps	Boats
		"CUP_B_LCU1600_USMC",//			LCU-1610
		"CUP_B_MK10_GB"//			LCU Mk.10
		//"CUP_B_Frigate_ANZAC"//			ANZAC Class Frigate	BLUFOR	Royal New Zealand Navy	Boats	
		};
	};
	class CupOpfor
	{
		name = "Cup Opfor";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/////////////////////////////////////////OPFOR////////////////////////////////////////////////////////////////////
	
		"CUP_O_Volha_SLA",//		Volha (Militia)	OPFOR	Sahrani Liberation Army	Cars	Public		
		//"CUP_O_Pchela1T_RU",//		Pchela-1T	OPFOR	Armed Forces of the Russian Federation	Drones	Public		
		"CUP_O_MTLB_pk_TKA",//		MT-LB LV	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_MTLB_pk_TK_MILITIA",//		MT-LB LV	OPFOR	Takistani Militia	APCs	Public		
		///"CUP_O_MTLB_pk_ChDKZ",//		MT-LB LV	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		///"CUP_O_MTLB_pk_SLA",//		MT-LB LV	OPFOR	Sahrani Liberation Army	APCs	Public		
		///"CUP_O_MTLB_pk_Green",//	_RU	MT-LB LV (Green)	OPFOR	Armed Forces of the Russian Federation	APCs	Public	
        //"CUP_O_MTLB_pk_Green_RU",		
		///"CUP_O_MTLB_pk_WDL_RU",//		MT-LB LV (Camo)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		///"CUP_O_MTLB_pk_Winter_RU",//		MT-LB LV (Winter)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		//"CUP_O_2S6_RU",//		2S6 Tunguska	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
		//"CUP_O_2S6M_RU",//		2S6M Tunguska-M	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
		"CUP_O_BMP3_RU",//		BMP-3	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BMP3_CSAT_T",//		BMP-3	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_M113_TKA",//		OPFOR	Takistani Army	APCs	Public		
		"CUP_O_M113_Med_TKA",//		M113A3 Ambulance	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_T90_RU",//		T-90A	OPFOR	Armed Forces of the Russian Federation	Tanks	Public		
		"CUP_O_BRDM2_CHDKZ",//		BRDM-2	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		//"CUP_O_BRDM2_ATGM_CHDKZ",//		BRDM-2 (ATGM)	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		"CUP_O_BRDM2_HQ_CHDKZ",//		BRDM-2 (HQ)	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		"CUP_O_BRDM2_SLA",//		BRDM-2	OPFOR	Sahrani Liberation Army	APCs	Public		
		//"CUP_O_BRDM2_ATGM_SLA",//		BRDM-2 (ATGM)	OPFOR	Sahrani Liberation Army	APCs	Public		
		"CUP_O_BRDM2_HQ_SLA",//		BRDM-2 (HQ)	OPFOR	Sahrani Liberation Army	APCs	Public		
		"CUP_O_BRDM2_CSAT",//		BRDM-2	OPFOR	CSAT	APCs	Public		
		//"CUP_O_BRDM2_ATGM_CSAT",//		BRDM-2 (ATGM)	OPFOR	CSAT	APCs	Public		
		"CUP_O_BRDM2_HQ_CSAT",//		BRDM-2 (HQ)	OPFOR	CSAT	APCs	Public		
		"CUP_O_BRDM2_CSAT_T",//		BRDM-2	OPFOR	CSAT (Pacific)	APCs	Public		
		//"CUP_O_BRDM2_ATGM_CSAT_T",//		BRDM-2 (ATGM)	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BRDM2_HQ_CSAT_T",//		BRDM-2 (HQ)	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BRDM2_RUS",//		BRDM-2	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		//"CUP_O_BRDM2_ATGM_RUS",//		BRDM-2 (ATGM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BRDM2_HQ_RUS",//		BRDM-2 (HQ)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BRDM2_TKA",//		BRDM-2	OPFOR	Takistani Army	APCs	Public		
		//"CUP_O_BRDM2_ATGM_TKA",//		BRDM-2 (ATGM)	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BRDM2_HQ_TKA",//		BRDM-2 (HQ)	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BTR40_MG_TKM",//		BTR-40 (DSHKM)	OPFOR	Takistani Militia	APCs	Public		
		"CUP_O_BTR40_TKM",//		BTR-40 (Unarmed)	OPFOR	Takistani Militia	APCs	Public		
		"CUP_O_BTR40_MG_TKA",//		BTR-40 (DSHKM)	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BTR40_TKA",//		BTR-40 (Unarmed)	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BTR60_TK",//		BTR-60PB	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BTR60_SLA",//		BTR-60PB	OPFOR	Sahrani Liberation Army	APCs	Public		
		"CUP_O_BTR60_CSAT",//		BTR-60PB	OPFOR	CSAT	APCs	Public		
		"CUP_O_BTR60_RU",//		BTR-60PB (Woodland)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BTR60_Green_RU",//		BTR-60PB (Green)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BTR60_Winter_RU",//		BTR-60PB (Winter)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BTR60_CHDKZ",//		BTR-60PB	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		"CUP_O_BTR90_RU",//		BTR-90	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BTR90_HQ_RU",//		BTR-90 (HQ)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_Kamaz_RU",//		Kamaz 5350	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Kamaz_Open_RU",//		Kamaz 5350 (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Kamaz_Repair_RU",//		Kamaz 5350 (Repair)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Kamaz_Reammo_RU",//		Kamaz 5350 (Ammo)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Kamaz_Refuel_RU",//		Kamaz 5350 (Fuel)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_LR_Transport_TKA",//		Land Rover 110 (Transport)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_LR_MG_TKA",//		Land Rover 110 (M2)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_LR_Ambulance_TKA",//		Land Rover 110 (Ambulance)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_LR_SPG9_TKA",//		Land Rover 110 (SPG-9)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_LR_Transport_TKM",//		Land Rover 110 (Transport)	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_LR_MG_TKM",//		Land Rover 110 (M2)	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_LR_SPG9_TKM",//		Land Rover 110 (SPG-9)	OPFOR	Takistani Militia	Cars	Public		
		//"CUP_O_TowingTractor_RU",//		Towing Tractor	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		//"CUP_O_TowingTractor_CSAT",//		Towing Tractor	OPFOR	CSAT	Cars	Public		
		"CUP_O_GAZ_Vodnik_PK_RU",//		GAZ Vodnik (2x PKM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_GAZ_Vodnik_BPPU_RU",//		GAZ Vodnik (BPPU)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_GAZ_Vodnik_MedEvac_RU",//		GAZ Vodnik (Medical)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		//"CUP_O_GAZ_Vodnik_AGS_RU",//		GAZ Vodnik (AGS-30/PKM)	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		
		"CUP_O_BMP1_TKA",//		BMP-1	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BMP1P_TKA",//		BMP-1P	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BMP2_TKA",//		BMP-2	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BMP_HQ_TKA",//		BMP-2K	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BMP2_AMB_TKA",//		BMP-2 Ambulance	OPFOR	Takistani Army	APCs	Public					
		//"CUP_O_BMP2_ZU_TKA",//		BMP-2 ZU-23	OPFOR	Takistani Army	APCs	Public		
		"CUP_O_BMP2_RU",//		BMP-2	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BMP_HQ_RU",//		BMP-2K	OPFOR	Armed Forces of the Russian Federation	APCs	Public		
		"CUP_O_BMP2_AMB_RU",//		BMP-2 Ambulance	OPFOR	Armed Forces of the Russian Federation	APCs	Public					
		"CUP_O_BMP2_CHDKZ",//		BMP-2	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		"CUP_O_BMP_HQ_CHDKZ",//		BMP-2K	OPFOR	Chernarussian Movement of the Red Star	APCs	Public		
		"CUP_O_BMP2_AMB_CHDKZ",//		BMP-2 Ambulance	OPFOR	Chernarussian Movement of the Red Star	APCs	Public					
		"CUP_O_BMP2_SLA",//		BMP-2	OPFOR	Sahrani Liberation Army	APCs	Public		
		"CUP_O_BMP_HQ_sla",//		BMP-2K	OPFOR	Sahrani Liberation Army	APCs	Public		
		"CUP_O_BMP2_AMB_sla",//		BMP-2 Ambulance	OPFOR	Sahrani Liberation Army	APCs	Public					
		"CUP_O_BMP1_CSAT",//		BMP-1	OPFOR	CSAT	APCs	Public		
		"CUP_O_BMP1P_CSAT",//		BMP-1P	OPFOR	CSAT	APCs	Public		
		"CUP_O_BMP2_CSAT",//		BMP-2	OPFOR	CSAT	APCs	Public		
		"CUP_O_BMP_HQ_CSAT",//		BMP-2K	OPFOR	CSAT	APCs	Public		
		"CUP_O_BMP2_AMB_CSAT",//		BMP-2 Ambulance	OPFOR	CSAT	APCs	Public					
		//"CUP_O_BMP2_ZU_CSAT",//		BMP-2 ZU-23	OPFOR	CSAT	APCs	Public		
		"CUP_O_BMP1_CSAT_T",//		BMP-1	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BMP1P_CSAT_T",//		BMP-1P	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BMP2_CSAT_T",//		BMP-2	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BMP_HQ_CSAT_T",//		BMP-2K	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_BMP2_AMB_CSAT_T",//		BMP-2 Ambulance	OPFOR	CSAT (Pacific)	APCs	Public					
		//"CUP_O_BMP2_ZU_CSAT_T",//		BMP-2 ZU-23	OPFOR	CSAT (Pacific)	APCs	Public		
		"CUP_O_T72_SLA",//		T-72	OPFOR	Sahrani Liberation Army	Tanks	Public		
		"CUP_O_T72_CSAT",//		T-72	OPFOR	CSAT	Tanks	Public		
		"CUP_O_T72_CSAT_T",//		T-72	OPFOR	CSAT (Pacific)	Tanks	Public		
		"CUP_O_T72_TKA",//		T-72	OPFOR	Takistani Army	Tanks	Public		
		"CUP_O_T72_RU",//		T-72	OPFOR	Armed Forces of the Russian Federation	Tanks	Public		
		"CUP_O_T72_CHDKZ",//		T-72	OPFOR	Chernarussian Movement of the Red Star	Tanks	Public		
		//"CUP_O_ZSU23_ChDKZ",//		ZSU-23-4	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
		//"CUP_O_ZSU23_TK",//		ZSU-23-4	OPFOR	Takistani Army	Anti-Air	Public		
		//"CUP_O_ZSU23_SLA",//		ZSU-23-4	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
		//"CUP_O_ZSU23_CSAT",//		ZSU-23-4	OPFOR	CSAT	Anti-Air	Public		
		//"CUP_O_ZSU23_Afghan_ChDKZ",//		ZSU-23-4 Afghanski	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
		//"CUP_O_ZSU23_Afghan_TK",//		ZSU-23-4 Afghanski	OPFOR	Takistani Army	Anti-Air	Public		
		//"CUP_O_ZSU23_Afghan_SLA",//		ZSU-23-4 Afghanski	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
		//"CUP_O_ZSU23_Afghan_CSAT",//		ZSU-23-4 Afghanski	OPFOR	CSAT	Anti-Air	Public		
					
		"CUP_O_Datsun_PK",//		Datsun 620 Pickup (PK)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		//"CUP_O_Datsun_PK_Random",//		Datsun 620 Pickup (PK) Woodland	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Datsun_4seat",//		Datsun 620 Pickup Woodland	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_SUV_TKA",//		SUV	OPFOR	Takistani Army	Cars	Public		
		//"CUP_O_Tractor_Old_CHDKZ",//		Towing Tractor	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		//"CUP_O_Tractor_SLA",//		Towing Tractor	OPFOR	Sahrani Liberation Army	Cars	Public		
		//"CUP_O_Tractor_Old_TKA",//		Towing Tractor	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_TT650_CHDKZ",//	TT650	OPFOR	Chernarussian Movement of the Red Star	Bikes	Public		
		"CUP_O_TT650_TKA",//		TT650	OPFOR	Takistani Army	Bikes	Public		
		"CUP_O_UAZ_Unarmed_CHDKZ",//		UAZ	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_UAZ_Open_CHDKZ",//		UAZ (Open)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_UAZ_MG_CHDKZ",//		UAZ (DShKM)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		//"CUP_O_UAZ_AGS30_CHDKZ",//		UAZ (AGS-30)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_UAZ_SPG9_CHDKZ",//		UAZ (SPG-9)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_UAZ_METIS_CHDKZ",//		UAZ (Metis-M)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_UAZ_Unarmed_SLA",//		UAZ	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_Militia_SLA",//		UAZ (Militia)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_Open_SLA",//	 (Open)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_MG_SLA",//	 (DShKM)	OPFOR	Sahrani Liberation Army	Cars	Public		
		//"CUP_O_UAZ_AGS30_SLA",//		UAZ (AGS-30)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_SPG9_SLA",//		UAZ (SPG-9)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_METIS_SLA",//		UAZ (Metis-M)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_UAZ_Unarmed_CSAT",//		UAZ	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_Militia_CSAT",//		UAZ (Militia)	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_Open_CSAT",//		UAZ (Open)	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_MG_CSAT",//		UAZ (DShKM)	OPFOR	CSAT	Cars	Public		
		//"CUP_O_UAZ_AGS30_CSAT",//		UAZ (AGS-30)	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_SPG9_CSAT",//		UAZ (SPG-9)	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_METIS_CSAT",//		UAZ (Metis-M)	OPFOR	CSAT	Cars	Public		
		"CUP_O_UAZ_Unarmed_RU",//		UAZ	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_Open_RU",//		UAZ (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_MG_RU",//		UAZ (DShKM)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		//"CUP_O_UAZ_AGS30_RU",//		UAZ (AGS-30)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_SPG9_RU",//		UAZ (SPG-9)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_METIS_RU",//		UAZ (Metis-M)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_AMB_RU",//		UAZ (Medevac)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_UAZ_Unarmed_TKA",//		UAZ	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_UAZ_Open_TKA",//		UAZ (Open)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_UAZ_MG_TKA",//		UAZ (DShKM)	OPFOR	Takistani Army	Cars	Public		
		//"CUP_O_UAZ_AGS30_TKA",//		UAZ (AGS-30)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_UAZ_SPG9_TKA",//		UAZ (SPG-9)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_UAZ_METIS_TKA",//		UAZ (Metis-M)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_RU",//		Ural	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Ural_Open_RU",//		Ural (Open)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Ural_Refuel_RU",//		Ural (Refuel)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Ural_Repair_RU",//		Ural (Repair)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Ural_Reammo_RU",//		Ural (Ammo)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		"CUP_O_Ural_Empty_RU",//		Ural (Empty)	OPFOR	Armed Forces of the Russian Federation	Cars	Public		
		//"CUP_O_Ural_ZU23_RU",//		Ural (ZU-23)	OPFOR	Armed Forces of the Russian Federation	Anti-Air	Public		
		//"CUP_O_BM21_RU",//		BM-21	OPFOR	Armed Forces of the Russian Federation	Artillery	Public		
		"CUP_O_Ural_CHDKZ",//		Ural	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Ural_Open_CHDKZ",//		Ural (Open)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Ural_Refuel_CHDKZ",//		Ural (Refuel)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Ural_Repair_CHDKZ",//		Ural (Repair)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Ural_Reammo_CHDKZ",//		Ural (Ammo)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		"CUP_O_Ural_Empty_CHDKZ",//	Ural (Empty)	OPFOR	Chernarussian Movement of the Red Star	Cars	Public		
		//"CUP_O_Ural_ZU23_CHDKZ",//		Ural (ZU-23)	OPFOR	Chernarussian Movement of the Red Star	Anti-Air	Public		
		//"CUP_O_BM21_CHDKZ",//		BM-21	OPFOR	Chernarussian Movement of the Red Star	Artillery	Public		
		"CUP_O_Ural_TKA",//		OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_Open_TKA",//		Ural (Open)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_Refuel_TKA",//		Ural (Refuel)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_Repair_TKA",//		Ural (Repair)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_Reammo_TKA",//		Ural (Ammo)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_Ural_Empty_TKA",//		Ural (Empty)	OPFOR	Takistani Army	Cars	Public		
		//"CUP_O_Ural_ZU23_TKA",//		Ural (ZU-23)	OPFOR	Takistani Army	Anti-Air	Public		
		//"CUP_O_BM21_TKA",//		BM-21		OPFOR	Takistani Army	Artillery	Public		
		//"CUP_O_Ural_ZU23_TKM",//		Ural (ZU-23)	OPFOR	Takistani Militia	Anti-Air	Public		
		"CUP_O_Ural_SLA",//		OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_Ural_Open_SLA",//		Ural (Open)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_Ural_Refuel_SLA",//		Ural (Refuel)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_Ural_Repair_SLA",//		Ural (Repair)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_Ural_Reammo_SLA",//		Ural (Ammo)	OPFOR	Sahrani Liberation Army	Cars	Public		
		"CUP_O_Ural_Empty_SLA",//		Ural (Empty)	OPFOR	Sahrani Liberation Army	Cars	Public		
		//"CUP_O_Ural_ZU23_SLA",//		Ural (ZU-23)	OPFOR	Sahrani Liberation Army	Anti-Air	Public		
		//"CUP_O_BM21_SLA",//		BM-21	OPFOR	Sahrani Liberation Army	Artillery	Public		
		"CUP_O_V3S_Open_TKA",//		Praga V3S	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_V3S_Covered_TKA",//		Praga V3S (Covered)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_V3S_Refuel_TKA",//		Praga V3S (Refuel)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_V3S_Repair_TKA",//		Praga V3S (Repair)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_V3S_Rearm_TKA",//		Praga V3S (Rearm)	OPFOR	Takistani Army	Cars	Public		
		"CUP_O_V3S_Open_TKM",//		Praga V3S	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_V3S_Covered_TKM",//		Praga V3S (Covered)	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_V3S_Refuel_TKM",//		Praga V3S (Refuel)	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_V3S_Repair_TKM",//		Praga V3S (Repair)	OPFOR	Takistani Militia	Cars	Public		
		"CUP_O_V3S_Rearm_TKM",//		Praga V3S (Rearm)	OPFOR	Takistani Militia	Cars	Public		
		
		"CUP_O_T34_TKA",//		T-34-85M	OPFOR	Takistani Army	Tanks	Public		
		"CUP_O_T55_TK",//		T-55	OPFOR	Takistani Army	Tanks	Public		
		"CUP_O_T55_CHDKZ",//		T-55	OPFOR	Chernarussian Movement of the Red Star	Tanks	Public		
		"CUP_O_T55_SLA",//		T-55	OPFOR	Sahrani Liberation Army	Tanks	Public		
		"CUP_O_T55_CSAT",//		T-55	OPFOR	CSAT	Tanks	Public		
		"CUP_O_T55_CSAT_T"//		T-55	OPFOR	CSAT (Pacific)	Tanks	Public			
		};
	};
	class CupOpforAir
	{
		name = "Cup Opfor Air";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/////////////////////////////////////////OPFOR////////////////////////////////////////////////////////////////////
		//HELI_PLANE
		"CUP_O_C130J_TKA",//		C-130J	OPFOR	Takistani Army	Planes	Public		
		"CUP_O_C130J_Cargo_TKA",//		C-130J (VIV)	OPFOR	Takistani Army	Planes	Public		
		"CUP_O_C47_SLA",//		Li-2	OPFOR	Sahrani Liberation Army	Planes	Public					
		"CUP_O_Ka50_DL_SLA",//		Ka-50 Black Shark	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_Ka50_DL_RU",//		Ka-50 Black Shark	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Ka52_RU",//		Ka-52	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Su25_Dyn_TKA",//		Su-25 Frogfoot	OPFOR	Takistani Army	Planes	Public		
		"CUP_O_Su25_Dyn_SLA",//	Su-25 Frogfoot	OPFOR	Sahrani Liberation Army	Planes	Public		
		"CUP_O_Su25_Dyn_CSAT_T",//		Su-25 Frogfoot	OPFOR	CSAT (Pacific)	Planes	Public		
		"CUP_O_Su25_Dyn_RU",//		Su-25T Frogfoot	OPFOR	Armed Forces of the Russian Federation	Planes	Public		
		"CUP_O_SU34_CSAT",//		Su-34	OPFOR	CSAT	Planes	Public		
		"CUP_O_SU34_RU",//		Su-34	OPFOR	Armed Forces of the Russian Federation	Planes	Public		
		"CUP_O_SU34_SLA",//		Su-34	OPFOR	Sahrani Liberation Army	Planes	Public		
		"CUP_O_UH1H_TKA",//		UH-1H	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_UH1H_slick_TKA",//		UH-1H (Slick)	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_UH1H_armed_TKA",//		UH-1H (Armed)	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_UH1H_gunship_TKA",//		UH-1H (Gunship)	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_UH1H_SLA",//		UH-1H	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_UH1H_slick_SLA",//		UH-1H (Slick)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_UH1H_armed_SLA",//		UH-1H (Armed)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_UH1H_gunship_SLA",//		UH-1H (Gunship)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_AN2_TK",//		Antonov An-2	OPFOR	Takistani Army	Planes	Public					
		"CUP_O_Ka60_GL_Hex_CSAT",//		Ka-60 Kasatka Hex (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
		"CUP_O_Ka60_Hex_CSAT",//		Ka-60 Kasatka Hex (Rockets)	OPFOR	CSAT	Helicopters	Public					
		"CUP_O_Ka60_GL_Blk_CSAT",//		Ka-60 Kasatka Black (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
		"CUP_O_Ka60_Blk_CSAT",//		Ka-60 Kasatka Black (Rockets)	OPFOR	CSAT	Helicopters	Public					
		"CUP_O_Ka60_GL_Whale_CSAT",//		Ka-60 Kasatka Whale (Rockets - M32)	OPFOR	CSAT	Helicopters	Public		
		"CUP_O_Ka60_Whale_CSAT",//		Ka-60 Kasatka Whale (Rockets)	OPFOR	CSAT	Helicopters	Public					
		"CUP_O_Ka60_Grey_RU",//		Ka-60 Kasatka Grey (Rockets)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
		"CUP_O_L39_TK",//		L-39ZA	OPFOR	Takistani Army	Planes	Public		
		//"CUP_O_Mi24_P_Dynamic_RU",//		Mi-24P	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		//"CUP_O_Mi24_V_Dynamic_RU",//		Mi-24V	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		//"CUP_O_Mi24_D_Dynamic_CSAT_T",//		Mi-24D	OPFOR	CSAT (Pacific)	Helicopters	Public		
		//"CUP_O_Mi24_P_Dynamic_CSAT_T",//		Mi-24P	OPFOR	CSAT (Pacific)	Helicopters	Public		
		//"CUP_O_Mi24_V_Dynamic_CSAT_T",//		Mi-24V	OPFOR	CSAT (Pacific)	Helicopters	Public		
		//"CUP_O_Mi24_D_Dynamic_TK",//		Mi-24D	OPFOR	Takistani Army	Helicopters	Public		
		//"CUP_O_Mi24_D_Dynamic_SLA",//		Mi-24D	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_Mi24_Mk3_CSAT_T",//		Mi-24 Superhind Mk.III	OPFOR	CSAT (Pacific)	Helicopters	Public		
		"CUP_O_Mi24_Mk4_CSAT_T",//		Mi-24 Superhind Mk.IV (S8)	OPFOR	CSAT (Pacific)	Helicopters	Public		
		"CUP_O_MI6A_CHDKZ",//		Mi-6A Hook (VIV)	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public					
		"CUP_O_MI6T_CHDKZ",//		Mi-6T Hook	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public					
		"CUP_O_MI6A_TKA",//		Mi-6A Hook (VIV)	OPFOR	Takistani Army	Helicopters	Public					
		"CUP_O_MI6T_TKA",//		Mi-6T Hook	OPFOR	Takistani Army	Helicopters	Public					
		"CUP_O_MI6T_SLA",//		Mi-6T Hook	OPFOR	Sahrani Liberation Army	Helicopters	Public					
		"CUP_O_MI6A_SLA",//		Mi-6A Hook (VIV)	OPFOR	Sahrani Liberation Army	Helicopters	Public					
		"CUP_O_MI6A_RU",//		Mi-6A Hook (VIV)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
		"CUP_O_MI6T_RU",//		Mi-6T Hook	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public					
		"CUP_O_MI6A_CSAT_T",//		Mi-6A Hook (VIV)	OPFOR	CSAT (Pacific)	Helicopters	Public					
		"CUP_O_MI6T_CSAT_T",//		Mi-6T Hook	OPFOR	CSAT (Pacific)	Helicopters	Public					
		"CUP_O_Mi8_CHDKZ",//		Mi-8MT	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
		"CUP_O_Mi8_medevac_CHDKZ",//		Mi-8MT Medevac	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
		"CUP_O_Mi8_VIV_CHDKZ",//		Mi-8MT (VIV)	OPFOR	Chernarussian Movement of the Red Star	Helicopters	Public		
		"CUP_O_Mi17_TK",//		Mi-8MT	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_Mi17_VIV_TK",//		Mi-8MT (VIV)	OPFOR	Takistani Army	Helicopters	Public		
		"CUP_O_Mi8_medevac_RU",//		Mi-8AMT Medevac	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Mi8_VIV_RU",//		Mi-8AMT (VIV)	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Mi8_RU",//		Mi-8MTV3	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Mi8AMT_RU",//		Mi-8AMT	OPFOR	Armed Forces of the Russian Federation	Helicopters	Public		
		"CUP_O_Mi8_SLA_1",//		Mi-8MT	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_Mi8_SLA_2",//		Mi-8MTV3	OPFOR	Sahrani Liberation Army	Helicopters	Public		
		"CUP_O_Mi8_VIV_SLA"//		Mi-8AMT (VIV)	OPFOR	Sahrani Liberation Army	Helicopters	Public		
	
		};
	};	
	class CupOpforBoat
	{
		name = "Cup Opfor Boat";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/////////////////////////////////////////BLUFOR////////////////////////////////////////////////////////////////////
		//Boote
		"CUP_O_LCVP_SLA",//	LCVP	OPFOR	Sahrani Liberation Army	Boats	Public		
		"CUP_O_LCVP_VIV_SLA",//		LCVP (VIV)	OPFOR	Sahrani Liberation Army	Boats	Public	
		"CUP_O_PBX_RU",//		PBX	OPFOR	Armed Forces of the Russian Federation	Boats	Public					
		"CUP_O_PBX_SLA"//		PBX	OPFOR	Sahrani Liberation Army	Boats	Public	
		};
	};
	class CUPMuzzleAttachments 
	{
		name = "CUP Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
            "CUP_muzzle_PBS4",
            "CUP_muzzle_PB6P9",
            "CUP_muzzle_Bizon",
            "CUP_muzzle_snds_M110",
            "CUP_muzzle_snds_M14",
            "CUP_muzzle_snds_M9",
            "CUP_muzzle_snds_MicroUzi",
            "CUP_muzzle_snds_AWM",
            "CUP_muzzle_snds_G36_black",
            "CUP_muzzle_snds_G36_desert",
            "CUP_muzzle_snds_L85",
            "CUP_muzzle_snds_M16_camo",
            "CUP_muzzle_snds_M16",
            "CUP_muzzle_snds_SCAR_L",
            "CUP_muzzle_mfsup_SCAR_L",
            "CUP_muzzle_snds_SCAR_H",
            "CUP_muzzle_mfsup_SCAR_H",
            "CUP_muzzle_snds_XM8",
            "CUP_acc_sffh",
            "CUP_acc_bfa",
            "CUP_muzzle_snds_SR3M",
            "CUP_muzzle_TGPA",
            "CUP_muzzle_snds_Mk12"
		};
	};
	class CUPOpticAttachments 
	{
		name = "CUP Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
            "CUP_optic_PSO_1",
            "CUP_optic_PSO_3",
            "CUP_optic_Kobra",
            "CUP_optic_NSPU",
            "CUP_optic_PechenegScope",
            "CUP_optic_LeupoldMk4",
            "CUP_optic_HoloBlack",
            "CUP_optic_HoloWdl",
            "CUP_optic_HoloDesert",
            "CUP_optic_Eotech533",
            "CUP_optic_CompM4",
            "CUP_optic_SUSAT",
            "CUP_optic_ACOG",
            "CUP_optic_Leupold_VX3",
            "CUP_optic_AN_PVS_10",
            "CUP_optic_CompM2_Black",
            "CUP_optic_CompM2_Woodland",
            "CUP_optic_CompM2_Woodland2",
            "CUP_optic_CompM2_Desert",
            "CUP_optic_RCO",
            "CUP_optic_RCO_desert",
            "CUP_optic_LeupoldM3LR",
            "CUP_optic_LeupoldMk4_10x40_LRT_Desert",
            "CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
            "CUP_optic_ElcanM145",
            "CUP_optic_LeupoldMk4_CQ_T",
            "CUP_optic_ELCAN_SpecterDR",
            "CUP_optic_LeupoldMk4_MRT_tan",
            "CUP_optic_SB_11_4x20_PM",
            "CUP_optic_ZDDot",
            "CUP_optic_MRad",
            "CUP_optic_TrijiconRx01_desert",
            "CUP_optic_TrijiconRx01_black",
            "CUP_optic_AN_PVS_4",
            "CUP_optic_ACOG_Reflex_Wood",
            "CUP_optic_ACOG_Reflex_Desert",
            "CUP_optic_ACOG2"
		};
	};
	class CUPAmmunition
	{
		name = "CUP Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_20Rnd_B_AA12_Pellets",
            "CUP_20Rnd_B_AA12_74Slug", 
            "CUP_20Rnd_B_AA12_HE",
            "CUP_8Rnd_B_Beneli_74Slug",
            "CUP_8Rnd_B_Saiga12_74Slug_M",
            "CUP_8Rnd_9x18_MakarovSD_M",
            "CUP_15Rnd_9x19_M9",
            "CUP_18Rnd_9x19_Phantom",
            "CUP_6Rnd_45ACP_M",
            "CUP_17Rnd_9x19_glock17",
            "CUP_10Rnd_9x19_Compact",
            "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
            "CUP_64Rnd_9x19_Bizon_M",
            "CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_White_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M",
            "CUP_30Rnd_9x19_EVO",
            "CUP_30Rnd_9x19_UZI",
            "CUP_30Rnd_9x19_MP5",
            "CUP_20Rnd_B_765x17_Ball_M",
            "CUP_5Rnd_127x99_as50_M",
            "CUP_5Rnd_86x70_L115A1",
            "CUP_5Rnd_762x67_G22",
            "CUP_5Rnd_762x51_M24",
            "CUP_20Rnd_762x51_B_M110",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_White_Tracer_762x51_M110",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_556x45_Stanag",
            "CUP_30Rnd_556x45_G36",
            "CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
            "CUP_100Rnd_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
            "CUP_20Rnd_556x45_Stanag",
            "CUP_20Rnd_762x51_CZ805B",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
            "CUP_20Rnd_762x51_DMR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_30Rnd_Sa58_M_TracerG",
            "CUP_30Rnd_Sa58_M_TracerR",
            "CUP_30Rnd_Sa58_M_TracerY",
            "CUP_30Rnd_Sa58_M",
            "CUP_20Rnd_762x51_B_SCAR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR",
            "CUP_10Rnd_762x51_CZ750",
            "CUP_10Rnd_762x51_CZ750_Tracer",
            "CUP_20Rnd_762x51_L129_M",
            "CUP_10x_303_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
            "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
            "CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",
            "CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",
            "CUP_12Rnd_9x18_PMM_M",
            "CUP_30Rnd_9x39_SP5_VIKHR_M",
            "CUP_30Rnd_9x19_Vityaz"
		};
	};
	class CUPPistols 
	{
		name = "CUP Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
            "CUP_hgun_Compact",
            "CUP_hgun_Glock17",
            "CUP_hgun_M9",
            "CUP_hgun_PB6P9",
            "CUP_hgun_MicroUzi",
            "CUP_hgun_TaurusTracker455",
            "CUP_hgun_TaurusTracker455_gold",
            "CUP_hgun_SA61",
            "CUP_hgun_Duty",
            "CUP_hgun_Phantom",
            "CUP_hgun_BallisticShield_Armed",
            "CUP_hgun_PMM"
		};
	};
	class CUPSubMachineGuns 
	{
		name = "CUP Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_smg_bizon",
            "CUP_smg_EVO",
            "CUP_smg_MP5SD6",
            "CUP_smg_MP5A5",
            "CUP_MP5SD",
            "CUP_smg_vityaz"
		};
	};
	class CUPLightMachineGuns 
	{
		name = "CUP Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_lmg_L7A2",
            "CUP_lmg_L110A1",
            "CUP_lmg_M240",
            "CUP_lmg_M249",
            "CUP_lmg_PKM",
            "CUP_lmg_Pecheneg",
            "CUP_lmg_Mk48_des",
            "CUP_lmg_Mk48_wdl",
            "CUP_lmg_minimi_railed",
            "CUP_lmg_M60E4",
            "CUP_BAF_L7A2_GPMG",
            "CUP_lmg_MG3_rail",
            "CUP_arifle_RPK74_top_rail",
            "CUP_lmg_FNMAG_RIS"
		};
	};
	class CUPAssaultRifles
	{
		name = "CUP Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_arifle_AKS74",
            "CUP_arifle_AKS74U",
            "CUP_arifle_CZ805_A2",
            "CUP_arifle_FNFAL_railed",
            "CUP_arifle_G36A",
            "CUP_arifle_G36A_camo",
            "CUP_arifle_G36K",
            "CUP_arifle_G36K_camo",
            "CUP_arifle_G36C",
            "CUP_arifle_G36C_camo",
            "CUP_arifle_MG36",
            "CUP_arifle_MG36_camo",
            "CUP_arifle_L85A2",
            "CUP_arifle_L85A2_GL",
            "CUP_arifle_L86A2",
            "CUP_arifle_M16A2_GL",
            "CUP_arifle_M16A4_GL",
            "CUP_arifle_M4A1",
            "CUP_arifle_M4A1_camo",
            "CUP_arifle_M4A1_BUIS_GL",
            "CUP_arifle_M4A1_BUIS_camo_GL",
            "CUP_arifle_M4A1_BUIS_desert_GL",
            "CUP_arifle_M4A1_black",
            "CUP_arifle_M4A1_desert",
            "CUP_arifle_Sa58P",
            "CUP_arifle_Sa58RIS1",
            "CUP_arifle_Sa58V",
            "CUP_arifle_Mk16_CQC",
            "CUP_arifle_XM8_Compact_Rail",
            "CUP_arifle_XM8_Railed",
            "CUP_arifle_XM8_Carbine",
            "CUP_arifle_XM8_Carbine_FG",
            "CUP_arifle_XM8_Carbine_GL",
            "CUP_arifle_XM8_Compact",
            "CUP_arifle_xm8_SAW",
            "CUP_arifle_xm8_sharpshooter",
            "CUP_arifle_CZ805_A1",
            "CUP_arifle_CZ805_GL",
            "CUP_arifle_CZ805_B_GL",
            "CUP_arifle_CZ805_B",
            "CUP_arifle_Sa58P_des",
            "CUP_arifle_Sa58V_camo",
            "CUP_arifle_Mk16_CQC_FG",
            "CUP_arifle_Mk16_CQC_SFG",
            "CUP_arifle_Mk16_CQC_EGLM",
            "CUP_arifle_Mk16_STD",
            "CUP_arifle_Mk16_STD_FG",
            "CUP_arifle_Mk16_STD_SFG",
            "CUP_arifle_Mk16_STD_EGLM",
            "CUP_arifle_Mk16_SV",
            "CUP_arifle_Mk17_CQC",
            "CUP_arifle_Mk17_CQC_FG",
            "CUP_arifle_Mk17_CQC_SFG",
            "CUP_arifle_Mk17_CQC_EGLM",
            "CUP_arifle_Mk17_STD",
            "CUP_arifle_Mk17_STD_FG",
            "CUP_arifle_Mk17_STD_SFG",
            "CUP_arifle_Mk17_STD_EGLM",
            "CUP_arifle_Mk16_CQC_woodland",
			"CUP_arifle_Mk16_CQC_FG_woodland",
			"CUP_arifle_Mk16_CQC_SFG_woodland",
			"CUP_arifle_Mk16_CQC_EGLM_woodland",
			"CUP_arifle_Mk16_STD_woodland",
			"CUP_arifle_Mk16_STD_FG_woodland",
			"CUP_arifle_Mk16_STD_SFG_woodland",
			"CUP_arifle_Mk16_STD_EGLM_woodland",
			"CUP_arifle_Mk16_SV_woodland",
			"CUP_arifle_Mk17_CQC_woodland",
			"CUP_arifle_Mk17_CQC_FG_woodland",
			"CUP_arifle_Mk17_CQC_SFG_woodland",
			"CUP_arifle_Mk17_CQC_EGLM_woodland",
			"CUP_arifle_Mk17_STD_woodland",
			"CUP_arifle_Mk17_STD_FG_woodland",
			"CUP_arifle_Mk17_STD_SFG_woodland",
			"CUP_arifle_Mk17_STD_EGLM_woodland",
			"CUP_arifle_Mk16_CQC_black",
			"CUP_arifle_Mk16_CQC_FG_black",
			"CUP_arifle_Mk16_CQC_SFG_black",
			"CUP_arifle_Mk16_CQC_EGLM_black",
			"CUP_arifle_Mk16_STD_black",
			"CUP_arifle_Mk16_STD_FG_black",
			"CUP_arifle_Mk16_STD_SFG_black",
			"CUP_arifle_Mk16_STD_EGLM_black",
			"CUP_arifle_Mk16_SV_black",
			"CUP_arifle_Mk17_CQC_black",
			"CUP_arifle_Mk17_CQC_FG_black",
			"CUP_arifle_Mk17_CQC_SFG_black",
			"CUP_arifle_Mk17_CQC_EGLM_black",
			"CUP_arifle_Mk17_STD_black",
			"CUP_arifle_Mk17_STD_FG_black",
			"CUP_arifle_Mk17_STD_SFG_black",
			"CUP_arifle_Mk17_STD_EGLM_black",
            "CUP_arifle_Mk20",
            "CUP_sgun_AA12",
            "CUP_sgun_Saiga12K",
            "CUP_srifle_LeeEnfield_rail",
            "CUP_arifle_M4A3_desert",
            "CUP_arifle_SAIGA_MK03_top_rail",
            "CUP_arifle_TYPE_56_2_top_rail",
            "CUP_arifle_AS_VAL",
            "CUP_arifle_SR3M_Vikhr",
            "CUP_arifle_M16A1",
            "CUP_arifle_XM16E1",
            "CUP_arifle_mk18_black",
            "CUP_arifle_mk18_m203_black",
            "CUP_arifle_SBR_black",
            "CUP_arifle_SBR_od",
            "CUP_arifle_Mk20_black",
            "CUP_arifle_AS_VAL_top_rail",
            "CUP_arifle_AS_VAL_VFG",
            "CUP_arifle_AS_VAL_VFG_top_rail",
            "CUP_arifle_SR3M_Vikhr_top_rail",
            "CUP_arifle_SR3M_Vikhr_VFG",
            "CUP_arifle_SR3M_Vikhr_VFG_top_rail",
            "CUP_arifle_AKMS_top_rail",
            "CUP_arifle_AK47_top_rail",
            "CUP_arifle_AKS_top_rail",
            "CUP_arifle_AK74_top_rail",
            "CUP_arifle_AKS74_top_rail",
            "CUP_arifle_AK74M_camo",
            "CUP_arifle_AK74M_top_rail",
            "CUP_arifle_AK74M_railed",
            "CUP_arifle_AK101_railed",
            "CUP_arifle_AK103_top_rail",
            "CUP_arifle_AK107_top_rail",
            "CUP_arifle_AK107_railed",
            "CUP_arifle_AK108_top_rail",
            "CUP_arifle_AK109_top_rail",
            "CUP_arifle_AK109_railed",
            "CUP_arifle_AK102_top_rail",
            "CUP_arifle_AK102_railed",
            "CUP_arifle_AK104_top_rail",
            "CUP_arifle_AK104_railed",
            "CUP_arifle_AK105_top_rail",
            "CUP_arifle_AK105_railed",
            "CUP_arifle_Colt727",
            "CUP_arifle_M4A1_desert_carryhandle",
            "CUP_arifle_M4A1_camo_carryhandle"
		};
	};
	class CUPSniperRifles
	{
		name = "CUP Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_srifle_AWM_des",
            "CUP_srifle_AWM_wdl",
            "CUP_srifle_CZ750",
            "CUP_srifle_M14",
            "CUP_srifle_Mk12SPR",
            "CUP_srifle_M24_des",
            "CUP_srifle_M24_wdl",
            "CUP_srifle_M24_blk",
            "CUP_srifle_M40A3",
            "CUP_srifle_M110",
            "CUP_srifle_AS50",
            "CUP_srifle_CZ550_rail",
            "CUP_srifle_L129A1",
            "CUP_srifle_G22_des",
            "CUP_srifle_G22_wdl"
		};
	};
    class CUPWraps
    {
        name = "CUP Wraps";
        icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
        items[] = 
        {                 
            "CUP_Mxx_camo",
            "CUP_Mxx_camo_half",
            "CUP_SVD_camo_g",
            "CUP_SVD_camo_g_half",
            "CUP_SVD_camo_d",
            "CUP_SVD_camo_d_half"
        };
    };
	class CUPUniforms
	{
		name = "CUP Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_O_TKI_Khet_Partug_01",
			"CUP_O_TKI_Khet_Partug_02",
			"CUP_O_TKI_Khet_Partug_03",
			"CUP_O_TKI_Khet_Partug_04",
			"CUP_O_TKI_Khet_Partug_05",
			"CUP_O_TKI_Khet_Partug_06",
			"CUP_O_TKI_Khet_Partug_07",
			"CUP_O_TKI_Khet_Partug_08",
			"CUP_O_TKI_Khet_Jeans_01",
			"CUP_O_TKI_Khet_Jeans_02",
			"CUP_O_TKI_Khet_Jeans_03",
			"CUP_O_TKI_Khet_Jeans_04",
			"CUP_U_C_Pilot_01",
			"CUP_U_C_Citizen_01",
			"CUP_U_C_Citizen_02",
			"CUP_U_C_Citizen_03",
			"CUP_U_C_Citizen_04",
			"CUP_U_C_Worker_01",
			"CUP_U_C_Worker_02",
			"CUP_U_C_Worker_03",
			"CUP_U_C_Worker_04",
			"CUP_U_C_Profiteer_01",
			"CUP_U_C_Profiteer_02",
			"CUP_U_C_Profiteer_03",
			"CUP_U_C_Profiteer_04",
			"CUP_U_C_Woodlander_01",
			"CUP_U_C_Woodlander_02",
			"CUP_U_C_Woodlander_03",
			"CUP_U_C_Woodlander_04",
			"CUP_U_C_Villager_01",
			"CUP_U_C_Villager_02",
			"CUP_U_C_Villager_03",
			"CUP_U_C_Villager_04",
			"CUP_U_B_CZ_WDL_TShirt",
			"CUP_U_B_GER_Tropentarn_1",
			"CUP_U_B_GER_Tropentarn_2",
			"CUP_U_B_GER_Ghillie",
			"CUP_U_B_GER_Flecktarn_1",
			"CUP_U_B_GER_Flecktarn_2",
			"CUP_U_B_GER_Fleck_Ghillie",
			"CUP_U_B_USMC_Officer",
			"CUP_U_B_USMC_PilotOverall",
			"CUP_U_B_USMC_Ghillie_WDL",
			"CUP_U_B_USMC_MARPAT_WDL_Sleeves",
			"CUP_U_B_USMC_MARPAT_WDL_RolledUp",
			"CUP_U_B_USMC_MARPAT_WDL_Kneepad",
			"CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
			"CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
			"CUP_U_B_FR_SpecOps",
			"CUP_U_B_FR_Scout",
			"CUP_U_B_FR_Scout1",
			"CUP_U_B_FR_Scout2",
			"CUP_U_B_FR_Scout3",
			"CUP_U_B_FR_Officer",
			"CUP_U_B_FR_Corpsman",
			"CUP_U_B_FR_DirAction",
			"CUP_U_B_FR_DirAction2",
			"CUP_U_B_FR_Light",
			"CUP_U_I_GUE_Flecktarn",
			"CUP_U_I_GUE_Flecktarn2",
			"CUP_U_I_GUE_Flecktarn3",
			"CUP_U_I_GUE_Woodland1",
			"CUP_U_I_Ghillie_Top",
			"CUP_U_I_RACS_PilotOverall",
			"CUP_U_I_RACS_Desert_1",
			"CUP_U_I_RACS_Desert_2",
			"CUP_U_I_RACS_Urban_1",
			"CUP_U_I_RACS_Urban_2",
			"CUP_U_O_SLA_Officer_Suit",
			"CUP_U_O_SLA_MixedCamo",
			"CUP_U_O_SLA_Green",
			"CUP_U_O_SLA_Urban",
			"CUP_U_O_SLA_Desert",
			"CUP_U_O_SLA_Overalls_Pilot",
			"CUP_U_O_SLA_Overalls_Tank",
			"CUP_U_O_Partisan_TTsKO",
			"CUP_U_O_Partisan_TTsKO_Mixed",
			"CUP_U_O_Partisan_VSR_Mixed1",
			"CUP_U_O_Partisan_VSR_Mixed2",
			"CUP_U_O_TK_Officer",
			"CUP_U_O_TK_MixedCamo",
			"CUP_U_O_TK_Green",
			"CUP_U_O_TK_Ghillie",
			"CUP_U_O_TK_Ghillie_Top",
			"CUP_U_B_BAF_DDPM_S1_RolledUp",
			"CUP_U_B_BAF_DDPM_Tshirt",
			"CUP_U_B_BAF_DPM_S1_RolledUp",
			"CUP_U_B_BAF_DPM_S2_UnRolled",
			"CUP_U_B_BAF_DPM_Tshirt",
			"CUP_U_B_BAF_MTP_S1_RolledUp",
			"CUP_U_B_BAF_MTP_S2_UnRolled",
			"CUP_U_B_BAF_MTP_Tshirt",
			"CUP_U_B_BAF_MTP_S3_RolledUp",
			"CUP_U_B_BAF_MTP_S4_UnRolled",
			"CUP_U_B_BAF_MTP_S5_UnRolled",
			"CUP_U_B_BAF_MTP_S6_UnRolled",
			"CUP_I_B_PMC_Unit_18",
			"CUP_I_B_PMC_Unit_25",
			"CUP_I_B_PMC_Unit_26",
			"CUP_I_B_PMC_Unit_27",
			"CUP_U_B_CZ_WDL_TShirt",
			"CUP_U_B_CZ_DST_TShirt",
			"CUP_U_B_CZ_WDL_NoKneepads",
			"CUP_U_B_CZ_DST_NoKneepads",
			"CUP_U_B_CZ_WDL_Kneepads",
			"CUP_U_B_CZ_DST_Kneepads",
			"CUP_U_B_CZ_DST_Kneepads_Sleeve",
			"CUP_U_B_CZ_Pilot_DST",
			"CUP_U_B_CZ_Pilot_WDL",
			"CUP_U_B_CZ_DST_Kneepads_Gloves",
			"CUP_U_B_CZ_WDL_Kneepads_Gloves",
			"CUP_U_B_CZ_WDL_Ghillie",
			"CUP_U_B_CZ_DST_Ghillie",
			"CUP_U_B_BAF_MTP_GHILLIE",
			"CUP_U_B_BAF_DPM_GHILLIE",
			"CUP_U_B_BAF_DDPM_GHILLIE",
			"CUP_U_B_USArmy_UBACS",
			"CUP_U_O_CHDKZ_Bardak",
			"CUP_U_O_CHDKZ_Commander",
			"CUP_U_O_CHDKZ_Kam_01",
			"CUP_U_O_CHDKZ_Kam_02",
			"CUP_U_O_CHDKZ_Kam_03",
			"CUP_U_O_CHDKZ_Kam_04",
			"CUP_U_O_CHDKZ_Kam_05",
			"CUP_U_O_CHDKZ_Kam_06",
			"CUP_U_O_CHDKZ_Kam_07",
			"CUP_U_O_CHDKZ_Kam_08",
			"CUP_U_O_Pilot_01",
			"CUP_U_C_Suit_01",
			"CUP_U_C_Rocker_01",
			"CUP_I_B_PMC_Unit_2",
			"CUP_I_B_PMC_Unit_3",
			"CUP_I_B_PMC_Unit_6",
			"CUP_I_B_PMC_Unit_7",
			"CUP_I_B_PMC_Unit_10",
			"CUP_I_B_PMC_Unit_11",
			"CUP_I_B_PMC_Unit_13",
			"CUP_I_B_PMC_Unit_14",
			"CUP_I_B_PMC_Unit_17",
			"CUP_I_B_PMC_Unit_20",
			"CUP_I_B_PMC_Unit_24",
			"CUP_U_I_Leader_01",
			"CUP_U_O_RUS_EMR_1",
			"CUP_U_O_RUS_EMR_2",
			"CUP_U_O_RUS_EMR_1_VDV",
			"CUP_U_O_RUS_EMR_2_VDV",
			"CUP_U_O_RUS_M88_MSV",
			"CUP_U_O_RUS_M88_VDV",
			"CUP_U_O_RUS_M88_MSV_rolled_up",
			"CUP_U_O_RUS_M88_VDV_rolled_up",
			"CUP_U_O_RUS_Flora_1",
			"CUP_U_O_RUS_Flora_2",
			"CUP_U_O_RUS_Flora_1_VDV",
			"CUP_U_O_RUS_Flora_2_VDV",
			"CUP_U_O_RUS_Flora_3",
			"CUP_U_O_RUS_VSR93_MSV",
			"CUP_U_O_RUS_VSR93_worn_MSV",
			"CUP_U_O_RUS_VSR93_VDV",
			"CUP_U_O_RUS_VSR93_worn_VDV",
			"CUP_U_O_RUS_VSR93_MSV_rolled_up",
			"CUP_U_O_RUS_VSR93_worn_MSV_rolled_up",
			"CUP_U_O_RUS_VSR93_VDV_rolled_up",
			"CUP_U_O_RUS_VSR93_worn_VDV_rolled_up",
			"CUP_U_O_RUS_VSR93_worn_gloves_MSV",
			"CUP_U_O_RUS_VSR93_worn_gloves_VDV",
			"CUP_U_O_RUS_VSR98_MSV",
			"CUP_U_O_RUS_VSR98_worn_MSV",
			"CUP_U_O_RUS_VSR98_VDV",
			"CUP_U_O_RUS_VSR98_worn_VDV",
			"CUP_U_O_RUS_VSR98_MSV_rolled_up",
			"CUP_U_O_RUS_VSR98_worn_MSV_rolled_up",
			"CUP_U_O_RUS_VSR98_VDV_rolled_up",
			"CUP_U_O_RUS_VSR98_worn_VDV_rolled_up",
			"CUP_U_O_RUS_VSR98_worn_gloves_MSV",
			"CUP_U_O_RUS_VSR98_worn_gloves_VDV",
			"CUP_U_O_RUS_Commander",
			"CUP_U_O_RUS_Gorka_Partizan",
			"CUP_U_O_RUS_Gorka_Partizan_A",
			"CUP_U_O_RUS_Gorka_Green",
			"CUP_U_O_RUS_Ghillie",
			"CUP_U_B_US_BDU",
			"CUP_U_B_US_BDU_OD",
			"CUP_U_B_US_BDU_desert",
			"CUP_U_B_US_BDU_ERDL",
			"CUP_U_B_US_BDU_ERDL_highland",
			"CUP_U_B_US_BDU_tigerstripe",
			"CUP_U_B_US_BDU_Tpattern",
			"CUP_U_B_US_BDU_urban",
			"CUP_U_B_US_BDU_winter",
			"CUP_U_B_US_BDU_winter_WoodlandBottom",
			"CUP_U_B_US_BDU_winter_WoodlandTop",
			"CUP_U_B_USMC_FROG1_WMARPAT",
			"CUP_U_B_USMC_FROG1_DMARPAT",
			"CUP_U_B_USMC_FROG2_WMARPAT",
			"CUP_U_B_USMC_FROG2_DMARPAT",
			"CUP_U_B_USMC_FROG3_WMARPAT",
			"CUP_U_B_USMC_FROG3_DMARPAT",
			"CUP_U_B_USMC_FROG4_WMARPAT",
			"CUP_U_B_USMC_FROG4_DMARPAT"
		};
	};
	class CUPHeadgear
	{
		name = "CUP Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_H_C_Ushanka_01",
			"CUP_H_C_Ushanka_02",
			"CUP_H_C_Ushanka_03",
			"CUP_H_C_Ushanka_04",
			"CUP_H_C_Beanie_01",
			"CUP_H_C_Beanie_02",
			"CUP_H_C_Beanie_03",
			"CUP_H_C_Beanie_04",
			"CUP_H_C_Beret_01",
			"CUP_H_C_Beret_02",
			"CUP_H_C_Beret_03",
			"CUP_H_C_Beret_04",
			"CUP_H_GER_Boonie_desert",
			"CUP_H_GER_Boonie_Flecktarn",
			"CUP_H_NAPA_Fedora",
			"CUP_H_PMC_PRR_Headset",
			"CUP_H_PMC_EP_Headset",
			"CUP_H_PMC_Cap_Tan",
			"CUP_H_PMC_Cap_Grey",
			"CUP_H_PMC_Cap_PRR_Tan",
			"CUP_H_PMC_Cap_PRR_Grey",
			"CUP_H_RACS_Beret_Blue",
			"CUP_H_RACS_Helmet_Des",
			"CUP_H_RACS_Helmet_Goggles_Des",
			"CUP_H_RACS_Helmet_Headset_Des",
			"CUP_H_RUS_6B46",
			"CUP_H_RUS_6B47",
			"CUP_H_RUS_6B47_SF",
			"CUP_H_SLA_TankerHelmet",
			"CUP_H_SLA_Helmet",
			"CUP_H_SLA_Pilot_Helmet",
			"CUP_H_SLA_OfficerCap",
			"CUP_H_SLA_SLCap",
			"CUP_H_SLA_Boonie",
			"CUP_H_SLA_Beret",
			"CUP_H_TK_TankerHelmet",
			"CUP_H_TK_PilotHelmet",
			"CUP_H_TK_Helmet",
			"CUP_H_TK_Lungee",
			"CUP_H_TK_Beret",
			"CUP_H_TKI_SkullCap_01",
			"CUP_H_TKI_SkullCap_02",
			"CUP_H_TKI_SkullCap_03",
			"CUP_H_TKI_SkullCap_04",
			"CUP_H_TKI_SkullCap_05",
			"CUP_H_TKI_SkullCap_06",
			"CUP_H_TKI_Lungee_01",
			"CUP_H_TKI_Lungee_02",
			"CUP_H_TKI_Lungee_03",
			"CUP_H_TKI_Lungee_04",
			"CUP_H_TKI_Lungee_05",
			"CUP_H_TKI_Lungee_06",
			"CUP_H_TKI_Lungee_Open_01",
			"CUP_H_TKI_Lungee_Open_02",
			"CUP_H_TKI_Lungee_Open_03",
			"CUP_H_TKI_Lungee_Open_04",
			"CUP_H_TKI_Lungee_Open_05",
			"CUP_H_TKI_Lungee_Open_06",
			"CUP_H_TKI_Pakol_1_01",
			"CUP_H_TKI_Pakol_1_02",
			"CUP_H_TKI_Pakol_1_03",
			"CUP_H_TKI_Pakol_1_04",
			"CUP_H_TKI_Pakol_1_05",
			"CUP_H_TKI_Pakol_1_06",
			"CUP_H_TKI_Pakol_2_01",
			"CUP_H_TKI_Pakol_2_02",
			"CUP_H_TKI_Pakol_2_03",
			"CUP_H_TKI_Pakol_2_04",
			"CUP_H_TKI_Pakol_2_05",
			"CUP_H_TKI_Pakol_2_06",
			"CUP_H_USMC_Officer_Cap",
			"CUP_H_USMC_HelmetWDL",
			"CUP_H_USMC_HeadSet_HelmetWDL",
			"CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
			"CUP_H_USMC_Crew_Helmet",
			"CUP_H_USMC_Goggles_HelmetWDL",
			"CUP_H_USMC_Helmet_Pilot",
			"CUP_H_FR_Headset",
			"CUP_H_FR_Cap_Headset_Green",
			"CUP_H_FR_Cap_Officer_Headset",
			"CUP_H_FR_BandanaGreen",
			"CUP_H_FR_BandanaWdl",
			"CUP_H_FR_Bandana_Headset",
			"CUP_H_FR_Headband_Headset",
			"CUP_H_FR_ECH",
			"CUP_H_FR_BoonieMARPAT",
			"CUP_H_FR_BoonieWDL",
			"CUP_H_FR_BeanieGreen",
			"CUP_H_FR_PRR_BoonieWDL",
			"CUP_H_Navy_CrewHelmet_Blue",
			"CUP_H_Navy_CrewHelmet_Brown",
			"CUP_H_Navy_CrewHelmet_Green",
			"CUP_H_Navy_CrewHelmet_Red",
			"CUP_H_Navy_CrewHelmet_Violet",
			"CUP_H_Navy_CrewHelmet_White",
			"CUP_H_Navy_CrewHelmet_Yellow",
			"CUP_H_BAF_Officer_Beret_PRR_O",
			"CUP_H_BAF_Helmet_1_DDPM",
			"CUP_H_BAF_Helmet_2_DDPM",
			"CUP_H_BAF_Helmet_3_DDPM",
			"CUP_H_BAF_Helmet_4_DDPM",
			"CUP_H_BAF_Helmet_1_DPM",
			"CUP_H_BAF_Helmet_2_DPM",
			"CUP_H_BAF_Helmet_3_DPM",
			"CUP_H_BAF_Helmet_4_DPM",
			"CUP_H_BAF_Helmet_1_MTP",
			"CUP_H_BAF_Helmet_2_MTP",
			"CUP_H_BAF_Helmet_3_MTP",
			"CUP_H_BAF_Helmet_4_MTP",
			"CUP_H_CZ_Helmet01",
			"CUP_H_CZ_Helmet02",
			"CUP_H_CZ_Helmet03",
			"CUP_H_CZ_Helmet04",
			"CUP_H_CZ_Helmet05",
			"CUP_H_CZ_Helmet06",
			"CUP_H_CZ_Helmet07",
			"CUP_H_CZ_Helmet08",
			"CUP_H_CZ_Helmet09",
			"CUP_H_CZ_Helmet10",
			"CUP_H_CZ_Hat01",
			"CUP_H_CZ_Hat02",
			"CUP_H_CZ_Hat03",
			"CUP_H_CZ_Hat04",
			"CUP_H_US_H_PASGT_winter",
			"CUP_H_CDF_H_PASGT_SNW",
			"CUP_H_CDF_H_PASGT_FST",
			"CUP_H_BAF_MTP_Mk7"
		};
	};	
	class CUPBackpacks
	{
		name = "CUP Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"CUP_B_Bergen_BAF",
			"CUP_B_GER_Pack_Tropentarn",
			"CUP_B_GER_Pack_Flecktarn",
			"CUP_B_HikingPack_Civ",
			"CUP_B_RUS_Backpack",
			"CUP_B_CivPack_WDL",
			"CUP_B_USPack_Coyote",
			"CUP_B_AssaultPack_ACU",
			"CUP_B_AssaultPack_Coyote",
			"CUP_B_USMC_AssaultPack",
			"CUP_B_USMC_MOLLE",
			"CUP_B_USPack_Black",
			"CUP_B_ACRPara_m95",
			"CUP_B_AssaultPack_Black",
			"CUP_B_ACRScout_m95",
			"CUP_B_RPGPack_Khaki",
			"CUP_B_AlicePack_OD",
			"CUP_B_AlicePack_Khaki",
			"CUP_B_AlicePack_Bedroll",
			"CUP_B_USMC_MOLLE_WDL",
			"CUP_B_GER_Medic_Desert",
			"CUP_B_GER_Medic_Tropentarn",
			"CUP_B_GER_Medic_FLecktarn",
			"CUP_B_TK_Medic_Desert",
			"CUP_B_SLA_Medicbag",
			"CUP_B_Predator_MTP",
			"CUP_B_Motherlode_MTP",
			"CUP_B_Kombat_Olive",
			"CUP_US_Backpack_EP1",
			"CUP_CZ_Backpack_EP1",
			"CUP_CZ_VestPouch_EP1",
			"CUP_TK_Assault_Pack_EP1"
		};
	};
	class CUPVests
	{
		name = "CUP Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_V_B_GER_Carrier_Rig",
			"CUP_V_B_GER_Carrier_Rig_2",
			"CUP_V_B_GER_Carrier_Vest",
			"CUP_V_B_GER_Carrier_Vest_2",
			"CUP_V_B_GER_Carrier_Vest_3",
			"CUP_V_B_GER_Vest_1",
			"CUP_V_B_GER_Vest_2",
			"CUP_V_B_MTV",
			"CUP_V_B_MTV_Patrol",
			"CUP_V_B_MTV_Pouches",
			"CUP_V_B_MTV_noCB",
			"CUP_V_B_MTV_Marksman",
			"CUP_V_B_MTV_PistolBlack",
			"CUP_V_B_MTV_LegPouch",
			"CUP_V_B_MTV_MG",
			"CUP_V_B_MTV_Mine",
			"CUP_V_B_MTV_TL",
			"CUP_V_B_PilotVest",
			"CUP_V_B_RRV_TL",
			"CUP_V_B_RRV_Officer",
			"CUP_V_B_RRV_Medic",
			"CUP_V_B_RRV_DA1",
			"CUP_V_B_RRV_DA2",
			"CUP_V_B_RRV_MG",
			"CUP_V_B_RRV_Light",
			"CUP_V_B_RRV_Scout",
			"CUP_V_B_RRV_Scout2",
			"CUP_V_B_RRV_Scout3",
			"CUP_V_B_LHDVest_Blue",
			"CUP_V_B_LHDVest_Brown",
			"CUP_V_B_LHDVest_Green",
			"CUP_V_B_LHDVest_Red",
			"CUP_V_B_LHDVest_Violet",
			"CUP_V_B_LHDVest_White",
			"CUP_V_B_LHDVest_Yellow",
			"CUP_V_I_Carrier_Belt",
			"CUP_V_I_Guerilla_Jacket",
			"CUP_V_I_RACS_Carrier_Vest",
			"CUP_V_I_RACS_Carrier_Vest_2",
			"CUP_V_I_RACS_Carrier_Vest_3",
			"CUP_V_O_SLA_Carrier_Belt",
			"CUP_V_O_SLA_Carrier_Belt02",
			"CUP_V_O_SLA_Carrier_Belt03",
			"CUP_V_O_SLA_Flak_Vest01",
			"CUP_V_O_SLA_Flak_Vest02",
			"CUP_V_O_SLA_Flak_Vest03",
			"CUP_V_O_TK_CrewBelt",
			"CUP_V_O_TK_OfficerBelt",
			"CUP_V_O_TK_OfficerBelt2",
			"CUP_V_O_TK_Vest_1",
			"CUP_V_O_TK_Vest_2",
			"CUP_V_OI_TKI_Jacket1_01",
			"CUP_V_OI_TKI_Jacket1_02",
			"CUP_V_OI_TKI_Jacket1_03",
			"CUP_V_OI_TKI_Jacket1_04",
			"CUP_V_OI_TKI_Jacket1_05",
			"CUP_V_OI_TKI_Jacket1_06",
			"CUP_V_OI_TKI_Jacket2_01",
			"CUP_V_OI_TKI_Jacket2_02",
			"CUP_V_OI_TKI_Jacket2_03",
			"CUP_V_OI_TKI_Jacket2_04",
			"CUP_V_OI_TKI_Jacket2_05",
			"CUP_V_OI_TKI_Jacket2_06",
			"CUP_V_OI_TKI_Jacket3_01",
			"CUP_V_OI_TKI_Jacket3_02",
			"CUP_V_OI_TKI_Jacket3_03",
			"CUP_V_OI_TKI_Jacket3_04",
			"CUP_V_OI_TKI_Jacket3_05",
			"CUP_V_OI_TKI_Jacket3_06",
			"CUP_V_OI_TKI_Jacket4_01",
			"CUP_V_OI_TKI_Jacket4_02",
			"CUP_V_OI_TKI_Jacket4_03",
			"CUP_V_OI_TKI_Jacket4_04",
			"CUP_V_OI_TKI_Jacket4_05",
			"CUP_V_OI_TKI_Jacket4_06",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Scout",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Sapper",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Medic",
			"CUP_V_BAF_Osprey_Mk2_DDPM_Officer",
			"CUP_V_BAF_Osprey_Mk2_DPM_Scout",
			"CUP_V_BAF_Osprey_Mk2_DPM_Soldier1",
			"CUP_V_BAF_Osprey_Mk2_DPM_Soldier2",
			"CUP_V_BAF_Osprey_Mk2_DPM_Grenadier",
			"CUP_V_BAF_Osprey_Mk2_DPM_Sapper",
			"CUP_V_BAF_Osprey_Mk2_DPM_Medic",
			"CUP_V_BAF_Osprey_Mk2_DPM_Officer",
			"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",
			"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner",
			"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",
			"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",
			"CUP_V_PMC_CIRAS_Winter_Empty",
			"CUP_V_PMC_CIRAS_Winter_Patrol",
			"CUP_V_PMC_CIRAS_Winter_Grenadier",
			"CUP_V_PMC_CIRAS_Winter_TL",
			"CUP_V_PMC_CIRAS_Winter_Veh",
			"CUP_V_CZ_vest02",
			"CUP_V_CZ_vest03",
			"CUP_V_CZ_vest04",
			"CUP_V_CZ_vest01",
			"CUP_V_CZ_vest05",
			"CUP_V_CZ_vest06",
			"CUP_V_CZ_vest07",
			"CUP_V_CZ_vest08",
			"CUP_V_CZ_vest09",
			"CUP_V_CZ_vest10",
			"CUP_V_CZ_vest11",
			"CUP_V_CZ_vest16",
			"CUP_V_CZ_vest14",
			"CUP_V_CZ_vest12",
			"CUP_V_CZ_vest13",
			"CUP_V_CZ_vest15",
			"CUP_V_CZ_vest17",
			"CUP_V_CZ_vest18",
			"CUP_V_CZ_vest19",
			"CUP_V_CZ_vest20",
			"CUP_V_B_PASGT_winter",
			"CUP_V_B_PASGT_no_bags_winter",
			"CUP_V_B_PASGT_OD",
			"CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing",
			"CUP_V_O_SLA_M23_1_OD",
			"CUP_V_O_SLA_M23_1_BRN"
		};
	};
	class SMAAssaultRifles
	{
		name = "SMA Assault Rifles ";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SMA_HK416afgQCB",
			"SMA_HK416afg",
			"SMA_HK416vfg",
			"SMA_HK416GL",
			"SMA_HK416afgOD",
			"SMA_HK416MOEOD",
			"SMA_HK416CQBafgOD",
			"SMA_HK416CQBMOEOD",
			"SMA_HK416GLOD",
			"SMA_HK416CQBGLOD",
			"SMA_HK416_afg_ODPAINTED",
			"SMA_HK416_GL_ODPAINTED",
			"SMA_HK416_vfg_ODPAINTED",
			"SMA_HK416CQB_vfg_ODPAINTED",
			"SMA_HK416CUSTOMafg",
			"SMA_HK416CUSTOMCQBvfg",
			"SMA_HK416CUSTOMCQBvfgB",
			"SMA_HK416CUSTOMCQBvfgODP",
			"SMA_HK416CUSTOMvfg",
			"SMA_HK416CUSTOMvfgB",
			"SMA_HK416CUSTOMvfgODP",
			"SMA_HK416CUSTOMCQBafg",
			"SMA_HK416CUSTOMCQBafgB",
			"SMA_HK416CUSTOMCQBafgODP",
			"SMA_HK416CUSTOMafgB",
			"SMA_HK416CUSTOMafgODP",
			"SMA_HK416GLCQB",
			"SMA_HK416GLCQB_B",
			"SMA_HK416GLCQB_ODP",
			"SMA_HK417",
			"SMA_HK417vfg",
			"SMA_HK417_16in",
			"SMA_SAR21_F",
			"SMA_SAR21MMS_F",
			"SMA_SAR21_AFG_F",
			"SMA_SAR21MMS_AFG_F",
			"SMA_SKS_F",
			"SMA_SKS_TAN_F",
			"SMA_STG_E4_F",
			"SMA_STG_E4_BLACK_F",
			"SMA_STG_E4_OD_F",
			"SMA_AUG_EGLM",
			"SMA_AUG_A3_F",
			"SMA_AUG_A3_MCAM_F",
			"SMA_AUG_A3_KRYPT_F",
			"SMA_AUG_EGLM_Olive",
			"SMA_AUG_EGLM_tan",
			"SMA_MK16",
			"SMA_Mk17",
			"SMA_Mk16_EGLM",
			"SMA_Mk17_EGLM",
			"SMA_Mk16_black",
			"SMA_Mk16_Green",
			"SMA_Mk16_blackQCB",
			"SMA_Mk16_GreenQCB",
			"SMA_Mk16QCB",
			"SMA_Mk17_black",
			"SMA_Mk17_Green",
			"SMA_MK16_EGLM_black",
			"SMA_MK16_EGLM_Green",
			"SMA_MK17_EGLM_black",
			"SMA_MK17_EGLM_Green",
			"SMA_Mk17_16_black",
			"SMA_Mk17_16_Green",
			"SMA_Mk17_16",
			"SMA_ACR",
			"SMA_ACRblk",
			"SMA_ACRGL",
			"SMA_ACRGL_B",
			"SMA_ACRMOE",
			"SMA_ACRMOE_Blk",
			"SMA_ACRREM",
			"SMA_ACRREMblk",
			"SMA_ACRREMGL",
			"SMA_ACRREMGL_B",
			"SMA_ACRREMCQBGL",
			"SMA_ACRREMCQBGL_B",
			"SMA_ACRREMMOE",
			"SMA_ACRREMMOEblk",
			"SMA_ACRREMMOECQB",
			"SMA_ACRREMMOECQBblk",
			"SMA_ACRREMAFG",
			"SMA_ACRREMAFGblk",
			"SMA_ACRREMAFGCQB",
			"SMA_ACRREMAFGCQBblk",
			"SMA_ACRREM_N",
			"SMA_ACRREMblk_N",
			"SMA_ACRREMMOE_N",
			"SMA_ACRREMMOEblk_N",
			"SMA_ACRREMMOECQB_N",
			"SMA_ACRREMMOECQBblk_N",
			"SMA_ACRREMAFG_N",
			"SMA_ACRREMAFGblk_N",
			"SMA_ACRREMAFGCQB_N",
			"SMA_ACRREMAFGCQBblk_N",
			"SMA_ACRREMCQBGL_B_N",
			"SMA_ACRREMCQBGL_N",
			"SMA_ACRREMGL_B_N",
			"SMA_ACRREMGL_N",
			"SMA_L85RIS",
			"SMA_L85RISNR",
			"SMA_L85RISafg",
			"SMA_L85RISafgNR",
			"SMA_Steyr_AUG_F",
			"SMA_Steyr_AUG_BLACK_F",
			"SMA_AAC_MPW_9_Black",
			"SMA_AAC_MPW_9_Woodland",
			"SMA_AAC_MPW_9_OD",
			"SMA_AAC_MPW_9_Desert",
			"SMA_AAC_MPW_9_Tan",
			"SMA_AAC_MPW_12_Black",
			"SMA_AAC_MPW_12_Woodland",
			"SMA_AAC_MPW_12_OD",
			"SMA_AAC_MPW_12_Desert",
			"SMA_AAC_MPW_12_Tan",
			"SMA_AAC_MPW_16_Black",
			"SMA_AAC_MPW_16_Woodland",
			"SMA_AAC_MPW_16_OD",
			"SMA_AAC_MPW_16_Desert",
			"SMA_AAC_MPW_16_Tan",
			"SMA_Tavor_F",
			"SMA_TavorOD_F",
			"SMA_TavorBLK_F",
			"SMA_CTAR_F",
			"SMA_CTAROD_F",
			"SMA_CTARBLK_F",
			"SMA_MK18afg",
			"SMA_MK18afg_SM",
			"SMA_MK18afgBLK",
			"SMA_MK18afgODBLK",
			"SMA_MK18afgBLK_SM",
			"SMA_MK18afgODBLK_SM",
			"SMA_MK18afgOD",
			"SMA_MK18afgOD_SM",
			"SMA_MK18afgTAN",
			"SMA_MK18afgTAN_SM",
			"SMA_MK18afgTANBLK",
			"SMA_MK18afgTANBLK_SM",
			"SMA_MK18MOE",
			"SMA_MK18MOE_SM",
			"SMA_MK18MOETAN",
			"SMA_MK18MOETAN_SM",
			"SMA_MK18MOEBLK",
			"SMA_MK18MOEBLK_SM",
			"SMA_MK18MOEODBLK",
			"SMA_MK18MOEODBLK_SM",
			"SMA_MK18MOEOD",
			"SMA_MK18MOEOD_SM",
			"SMA_MK18MOEBLKTAN",
			"SMA_MK18MOEBLKTAN_SM",
			"SMA_MK18_GL",
			"SMA_MK18_GL_SM",
			"SMA_MK18TANBLK_GL",
			"SMA_MK18TANBLK_GL_SM",
			"SMA_MK18TAN_GL",
			"SMA_MK18TAN_GL_SM",
			"SMA_MK18BLK_GL",
			"SMA_MK18BLK_GL_SM",
			"SMA_MK18ODBLK_GL",
			"SMA_MK18ODBLK_GL_SM",
			"SMA_MK18OD_GL",
			"SMA_MK18OD_GL_SM",
			"SMA_M4_GL",
			"SMA_M4_GL_SM",
			"SMA_M4afg",
			"SMA_M4afg_SM",
			"SMA_M4afg_Tan",
			"SMA_M4afg_Tan_SM",
			"SMA_M4afg_OD",
			"SMA_M4afg_OD_SM",
			"SMA_M4afg_BLK1",
			"SMA_M4afg_BLK1_SM",
			"SMA_M4MOE",
			"SMA_M4MOE_SM",
			"SMA_M4MOE_Tan",
			"SMA_M4MOE_Tan_SM",
			"SMA_M4MOE_OD",
			"SMA_M4MOE_OD_SM",
			"SMA_M4MOE_BLK1",
			"SMA_M4MOE_BLK1_SM",
			"SMA_M4afgSTOCK",
			"SMA_M4CQBR",
			"SMA_M4CQBRMOE"

		};
	};

	class SMALightMachineGuns
	{
		name = "SMA Light Machine Gun";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"sma_minimi_mk3_762tlb",
			"sma_minimi_mk3_762tlb_des",
			"sma_minimi_mk3_762tlb_wdl",
			"sma_minimi_mk3_762tsb",
			"sma_minimi_mk3_762tsb_des",
			"sma_minimi_mk3_762tsb_wdl"
		};
	};

	class SMAPointerAttachments
	{
		name = "SMA Pointer Attachments Rail Guards";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SMA_RAILGUARD_OD_HK",
			"SMA_RAILGUARD_TAN_HK",
			"SMA_RAILGUARD_BLK_HK",
			"SMA_ANPEQ15_TAN",
			"SMA_ANPEQ15_TOP_TAN",
			"SMA_ANPEQ15_TOP_417TAN",
			"SMA_ANPEQ15_BLK",
			"SMA_ANPEQ15_TOP_BLK",
			"SMA_ANPEQ15_TOP_417BLK",
			"SMA_ANPEQ15_TOP_TAN_MK18",
			"SMA_ANPEQ15_TOP_BLK_MK18",
			"SMA_ANPEQ15_TOP_TAN_M4",
			"SMA_ANPEQ15_TOP_BLK_M4",
			"SMA_ANPEQ15_TOP_TAN_SCAR",
			"SMA_ANPEQ15_TOP_BLK_SCAR",
			"SMA_ANPEQ15_TOP_TAN_ACR",
			"SMA_ANPEQ15_TOP_BLK_ACR",
			"SMA_SFFL_TAN",
			"SMA_SFFL_BLK",
			"SMA_SFPEQ_M4TOP_TAN",
			"SMA_SFPEQ_M4TOP_BLK",
			"SMA_SFPEQ_MK18TOP_TAN",
			"SMA_SFPEQ_MK18TOP_BLK",
			"SMA_SFPEQ_HKTOP_TAN",
			"SMA_SFPEQ_HKTOP_BLK",
			"SMA_SFPEQ_HK417TOP_TAN",
			"SMA_SFPEQ_HK417TOP_BLK",
			"SMA_SFPEQ_SCARTOP_TAN",
			"SMA_SFPEQ_SCARTOP_BLK",
			"SMA_SFPEQ_ACRTOP_BLK",
			"SMA_SFPEQ_ACRTOP_BLK_LIGHT",
			"SMA_SFPEQ_ACRTOP_TAN",
			"SMA_SFPEQ_ACRTOP_TAN_LIGHT",
			"SMA_SFPEQ_AUGCQC_TAN",
			"SMA_SFPEQ_AUGCQC_BLK"
		};
	};

	class SMABipodAttachments
	{
		name = "SMA Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"SMA_Gripod_01"
		};
	};

		class SMAOpticAttachments
	{
		name = "SMA Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"SMA_ELCAN_SPECTER",
			"SMA_ELCAN_SPECTER_TAN",
			"SMA_ELCAN_SPECTER_GREEN",
			"SMA_ELCAN_SPECTER_ARDRDS",
			"SMA_ELCAN_SPECTER_TAN_ARDRDS",
			"SMA_ELCAN_SPECTER_GREEN_ARDRDS",
			"SMA_ELCAN_SPECTER_RDS",
			"SMA_ELCAN_SPECTER_TAN_RDS",
			"SMA_ELCAN_SPECTER_GREEN_RDS",
			"SMA_MICRO_T2",
			"SMA_MICRO_T2_LM",
			"SMA_MICRO_T2_3XDOWN",
			"SMA_eotech",
			"SMA_eotech_T",
			"SMA_eotech_G",
			"SMA_eotechG33_3XDOWN",
			"SMA_eotechG33_tan_3XDOWN",
			"SMA_eotechG33_grn_3XDOWN",
			"SMA_eotech552",
			"SMA_eotech552_kf",
			"SMA_eotech552_kf_des",
			"SMA_eotech552_kf_wdl",
			"SMA_eotech552_3XDOWN",
			"SMA_eotech552_3XDOWN_wdl",
			"SMA_eotech552_3XDOWN_des",
			"sma_spitfire_01_sc_black",
			"sma_spitfire_01_black",
			"sma_spitfire_03_sc_black",
			"sma_spitfire_03_black",
			"sma_spitfire_03_rds_black",
			"sma_spitfire_03_rds_low_black",
			"sma_spitfire_03_rds_low_ard_black",
			"SMA_AIMPOINT",
			"SMA_AIMPOINT_GLARE",
			"SMA_BARSKA",
			"SMA_CMORE",
			"SMA_CMOREGRN",
			"SMA_ELCAN_SPECTER_4z",
			"SMA_ELCAN_SPECTER_TAN_4z",
			"SMA_ELCAN_SPECTER_GREEN_4z",
			"SMA_ELCAN_SPECTER_ARDRDS_4z",
			"SMA_ELCAN_SPECTER_TAN_ARDRDS_4z",
			"SMA_ELCAN_SPECTER_GREEN_ARDRDS_4z",
			"SMA_ELCAN_SPECTER_RDS_4z",
			"SMA_ELCAN_SPECTER_TAN_RDS_4z",
			"SMA_ELCAN_SPECTER_GREEN_RDS_4z"

		};
	};

	class SMAMuzzleAttachments
	{
		name = "SMA Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"SMA_FLASHHIDER1",
			"SMA_FLASHHIDER2",
			"sma_gemtech_one_blk",
			"sma_gemtech_one_des",
			"sma_gemtech_one_wdl",
			"SMA_Silencer_556",
			"SMA_Silencer_556_Bronze",
			"SMA_Silencer_556_Silver",
			"SMA_supp1b_556",
			"SMA_supp1tan_556",
			"SMA_supp2b_556",
			"SMA_supp2btan_556",
			"SMA_supp_762",
			"SMA_supptan_762",
			"SMA_supp1BB_556",
			"SMA_supp1BOD_556",
			"SMA_supp1BT_556",
			"SMA_supp1Bwht_556",
			"SMA_supp1TB_556",
			"SMA_supp1TOD_556",
			"SMA_supp1TT_556",
			"SMA_supp1TW_556",
			"SMA_supp2BOD_556",
			"SMA_supp2BT_556",
			"SMA_supp2BW_556",
			"SMA_supp2T_556",
			"SMA_supp2TB_556",
			"SMA_supp2TOD_556",
			"SMA_supp2TWH_556",
			"SMA_supp2smaB_556",
			"SMA_supp2smaT_556",
			"SMA_rotex_blk",
			"SMA_rotex_tan",
			"SMA_rotex_gry",
			"SMA_AAC_762_sdn6",
			"SMA_AAC_762_sdn6_w",
			"SMA_AAC_762_sdn6_d",
			"SMA_AAC_762_sdn6_T",
			"SMA_AAC_762_sdn6_G"
		};
	};

	class SMAAmmunition
	{
		name = "SMA Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SMA_30Rnd_762x35_BLK_EPR",
			"SMA_30Rnd_762x35_SS",
			"SMA_30Rnd_762x39_SKS_FMJ",
			"SMA_30Rnd_762x39_SKS_FMJ_Red",
			"SMA_30Rnd_762x39_SKS_7n23_AP",
			"SMA_30Rnd_762x39_7n23_AP_Red",
			"SMA_20Rnd_762x51mm_M80A1_EPR",
			"SMA_20Rnd_762x51mm_M80A1_EPR_Tracer",
			"SMA_20Rnd_762x51mm_M80A1_EPR_IR",
			"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range",
			"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer",
			"SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR",
			"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic",
			"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer",
			"SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR",
			"SMA_30Rnd_556x45_M855A1",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_IR",
			"SMA_30Rnd_556x45_Mk318",
			"SMA_30Rnd_556x45_Mk318_Tracer",
			"SMA_30Rnd_556x45_Mk318_IR",
			"SMA_30Rnd_556x45_Mk262",
			"SMA_30Rnd_556x45_Mk262_Tracer",
			"SMA_30Rnd_556x45_Mk262_IR",
			"SMA_30Rnd_68x43_SPC_FMJ",
			"SMA_30Rnd_68x43_SPC_FMJ_Tracer",
			"SMA_30Rnd_68x43_SPC_FMJ_IR",
			"SMA_30Rnd_68x43_BT",
			"SMA_30Rnd_68x43_BT_Tracer",
			"SMA_30Rnd_68x43_BT_IR",
			"SMA_30Rnd_68x43_sub",
			"SMA_30Rnd_68x43_sub_Tracer",
			"SMA_30Rnd_68x43_sub_IR",
			"SMA_150Rnd_762_M80A1",
			"SMA_150Rnd_762_M80A1_Tracer",
			"SMA_150Rnd_762_M80A1_Mixed"
		};
	};
	

	class RHSUSAF
	{
		name = "RHSUSAF";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			//HUMMWE SAND
			"rhsusf_m1025_d_m2",
			"rhsusf_m1025_d",
			"rhsusf_m1043_d_m2",
			"rhsusf_m1043_d",
			"rhsusf_m998_d_2dr_fulltop",
			"rhsusf_m998_d_2dr_halftop",
			"rhsusf_m998_d_2dr",
			"rhsusf_m998_d_4dr_fulltop",
			"rhsusf_m998_d_4dr_halftop",
			"rhsusf_m998_d_4dr",
			"rhsusf_m1151_usarmy_d",
			"rhsusf_m1151_m2_v1_usarmy_d",
			"rhsusf_m1151_m2_lras3_v1_usarmy_d",
			"rhsusf_m1151_m240_v1_usarmy_d",
			"rhsusf_m1151_m2_v2_usarmy_d",
			"rhsusf_m1151_m240_v2_usarmy_d",
			"rhsusf_m1152_usarmy_d",
			"rhsusf_m1152_rsv_usarmy_d",
			"rhsusf_m1152_sicps_usarmy_d",
			"rhsusf_m1165_usarmy_d",
			//HUMMWE GRÜN
			"rhsusf_m1025_w_m2",
			"rhsusf_m1025_w",
			"rhsusf_m1043_w_m2",
			"rhsusf_m1043_w",
			"rhsusf_m998_w_2dr_fulltop",
			"rhsusf_m998_w_2dr_halftop",
			"rhsusf_m998_w_2dr",
			"rhsusf_m998_w_4dr_fulltop",
			"rhsusf_m998_w_4dr_halftop",
			"rhsusf_m998_w_4dr",
			"rhsusf_m1151_usarmy_wd",
			"rhsusf_m1151_m2_v1_usarmy_wd",
			"rhsusf_m1151_m2_lras3_v1_usarmy_wd",
			"rhsusf_m1151_m240_v1_usarmy_wd",
			"rhsusf_m1151_m2_v2_usarmy_wd",
			"rhsusf_m1151_m240_v2_usarmy_wd",
			"rhsusf_m1152_usarmy_wd",
			"rhsusf_m1152_rsv_usarmy_wd",
			"rhsusf_m1152_sicps_usarmy_wd",
			"rhsusf_m1165_usarmy_wd",
			//HUMMWE SAND2
			"rhsusf_m1025_d_s_m2",
			"rhsusf_m1025_d_s",
			"rhsusf_m1043_d_s_m2",
			"rhsusf_m1043_d_s",
			"rhsusf_m998_d_s_2dr_halftop",
			"rhsusf_m998_d_s_2dr",
			"rhsusf_m998_d_s_2dr_fulltop",
			"rhsusf_m998_d_s_4dr_halftop",
			"rhsusf_m998_d_s_4dr_fulltop",
			"rhsusf_m1151_usmc_d",
			"rhsusf_m1151_m2crows_usmc_d",
			"rhsusf_m1151_m2_v3_usmc_d",
			"rhsusf_m1151_m240_v3_usmc_d",
			"rhsusf_m1152_usmc_d",
			"rhsusf_m1152_rsv_usmc_d",
			"rhsusf_m1165_usmc_d",
			//HUMMWE GRÜNTARN
			"rhsusf_CGRCAT1A2_usmc_d",
			"rhsusf_CGRCAT1A2_M2_usmc_d",
			"rhsusf_M1232_MC_M2_usmc_d",
			"rhsusf_m1240a1_usmc_d",
			"rhsusf_m1240a1_m2_usmc_d",
			"rhsusf_m1240a1_m240_usmc_d",
			"rhsusf_m1240a1_m2crows_usmc_d",
			"rhsusf_m1a1fep_d",
			"rhsusf_m1025_w_s_m2",
			"rhsusf_m1025_w_s",
			"rhsusf_m1043_w_s_m2",
			"rhsusf_m1043_w_s",
			"rhsusf_m998_w_s_2dr_halftop",
			"rhsusf_m998_w_s_2dr",
			"rhsusf_m998_w_s_2dr_fulltop",
			"rhsusf_m998_w_s_4dr_halftop",
			"rhsusf_m998_w_s_4dr",
			"rhsusf_m998_w_s_4dr_fulltop",
			"rhsusf_m1151_usmc_wd",
			"rhsusf_m1151_m2crows_usmc_wd",
			"rhsusf_m1151_m2_v3_usmc_wd",
			"rhsusf_m1151_m240_v3_usmc_wd",
			"rhsusf_m1152_usmc_wd",
			"rhsusf_m1152_rsv_usmc_wd",
			"rhsusf_m1165_usmc_wd",
			//LKW 2 ACHSER
			//SAND
			"rhsusf_M1078A1P2_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",
			//GRÜNTARN
			"rhsusf_M1078A1P2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy",
			//LKW 2 ACHSER OFFEN HMG
			"rhsusf_M1078A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",
			//LKW 3 ACHSER
			//SAND
			"rhsusf_M1083A1P2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy",
			//GRÜNTARN
			"rhsusf_M1083A1P2_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			//LKW 3 ACHSER
			//SAND
			"rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy",
			//LKW 3 ACHSER LANG
			//SAND
			"rhsusf_M1084A1P2_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy",
			//GRÜNTARN
			"rhsusf_M1084A1P2_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy",
			//LKW 4 ACHSER HEMMET
			//SAND
			"rhsusf_M977A4_usarmy_d",
			"rhsusf_M977A4_REPAIR_usarmy_d",
			"rhsusf_M977A4_BKIT_usarmy_d",
			//"rhsusf_M977A4_AMMO_BKIT_usarmy_d",
			"rhsusf_M977A4_BKIT_M2_usarmy_d",
			//"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_d",
			//"rhsusf_M978A4_usarmy_d",
			//GRÜNTARN
			"rhsusf_M977A4_usarmy_wd",
			//"rhsusf_M977A4_AMMO_usarmy_wd", //AMMO
			"rhsusf_M977A4_REPAIR_usarmy_wd",
			"rhsusf_M977A4_BKIT_usarmy_wd",
			//"rhsusf_M977A4_AMMO_BKIT_usarmy_wd",
			"rhsusf_M977A4_BKIT_M2_usarmy_wd",
			//"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_wd",
			//"rhsusf_M978A4_usarmy_wd", //TANKER
			//PANZERWAGEN 2 RAD
			//SAND
			"rhsusf_M1117_D",
			"rhsusf_M1117_O",
			//GRÜNTARN
			"rhsusf_M1117_W",
			//HUNTER 3 ACHSER
			"rhsusf_M1220_usarmy_d",
			"rhsusf_M1220_M153_M2_usarmy_d",
			"rhsusf_M1220_M2_usarmy_d",
			//GRÜNTARN
			"rhsusf_M1220_usarmy_wd",
			"rhsusf_M1220_M153_M2_usarmy_wd",
			"rhsusf_M1220_M2_usarmy_wd",
			//HUNTER 3 ACHSER GEPANZERT
			"rhsusf_M1230_M2_usarmy_d",
			"rhsusf_M1230a1_usarmy_d",
			//GRÜNTARN
			"rhsusf_M1230_M2_usarmy_wd",
			"rhsusf_M1230a1_usarmy_wd",
			//HUNTER 3 ACHSER LANG
			//SAND
			"rhsusf_M1232_usarmy_d",
			"rhsusf_M1232_M2_usarmy_d",
			//GRÜN
			"rhsusf_M1232_usarmy_wd",
			"rhsusf_M1232_M2_usarmy_wd",
			"rhsusf_M1232_MC_M2_usmc_wd",
			//HUNTER 3 ACHSER LANG GEPANZERT
			"rhsusf_M1237_M2_usarmy_d",
			"rhsusf_M1237_M2_usarmy_wd",
			//HUNTER
			//SAND
			"rhsusf_m1240a1_usarmy_d",
			"rhsusf_m1240a1_m2_usarmy_d",
			"rhsusf_m1240a1_m240_usarmy_d",
			"rhsusf_m1240a1_m2_uik_usarmy_d",
			"rhsusf_m1240a1_m240_uik_usarmy_d",
			"rhsusf_m1240a1_m2crows_usarmy_d",
			//GRÜNTARN
			"rhsusf_m1240a1_usarmy_wd",
			"rhsusf_m1240a1_m2_usarmy_wd",
			"rhsusf_m1240a1_m240_usarmy_wd",
			"rhsusf_m1240a1_m2_uik_usarmy_wd",
			"rhsusf_m1240a1_m240_uik_usarmy_wd",
			"rhsusf_m1240a1_m2crows_usarmy_wd",
			//PANZER GROSS
			//SAND
			"rhsusf_m1a1aimd_usarmy",
			"rhsusf_m1a1aim_tuski_d",
			"rhsusf_m1a2sep1d_usarmy",
			"rhsusf_m1a2sep1tuskid_usarmy",
			"rhsusf_m1a2sep1tuskiid_usarmy",
			"rhsusf_m1a2sep2d_usarmy",
			//GRÜN
			"rhsusf_m1a1aimwd_usarmy",
			"rhsusf_m1a1aim_tuski_wd",
			"rhsusf_m1a2sep1wd_usarmy",
			"rhsusf_m1a2sep1tuskiwd_usarmy",
			"rhsusf_m1a2sep1tuskiiwd_usarmy",
			"rhsusf_m1a2sep2wd_usarmy",
			//PANZER 4 RAD GORGONSTYLE
			"rhsusf_stryker_m1126_m2_d",
			"rhsusf_stryker_m1127_m2_d",
			"rhsusf_stryker_m1132_m2_np_d",
			"rhsusf_stryker_m1132_m2_d",
			//GRÜNTARN
			"rhsusf_stryker_m1126_m2_wd",
			"rhsusf_stryker_m1127_m2_wd",
			"rhsusf_stryker_m1132_m2_np_wd",
			"rhsusf_stryker_m1132_m2_wd",
			//PANZER KLEIN
			//SAND
			"rhsusf_m113d_usarmy_supply",
			"rhsusf_m113d_usarmy",
			"rhsusf_m113d_usarmy_M240",
			"rhsusf_m113d_usarmy_medical",
			"rhsusf_m113d_usarmy_unarmed",
			//GRÜNTARN
			"rhsusf_m113_usarmy_supply",
			"rhsusf_m113_usarmy",
			"rhsusf_m113_usarmy_M2_90",
			"rhsusf_m113_usarmy_M240",
			"rhsusf_m113_usarmy_medical",
			"rhsusf_m113_usarmy_unarmed",
			//PANZER MITTEL GRÜNTARN
			"RHS_M2A2_wd",
			"RHS_M2A2_BUSKI_WD",
			"RHS_M2A3_wd",
			//"RHS_M2A3_BUSKI_wd",
			//"RHS_M2A3_BUSKIII_wd",
			//"RHS_M6_wd",//AA
			//HUNTER SPEZIAL
			"rhsusf_m1165a1_gmv_m134d_m240_socom_d",
			"rhsusf_m1165a1_gmv_m2_m240_socom_d",
			//BUGGY
			"rhsusf_mrzr4_d",
			//HUNTER GEPANZERT
			"rhsusf_M1238A1_socom_d",
			"rhsusf_M1238A1_M2_socom_d",
			//HUNTER GEPANZERT PICKUP
			"rhsusf_M1239_socom_d",
			"rhsusf_M1239_M2_socom_d",
			"rhsusf_M1239_M2_Deploy_socom_d",
			//HUNTER GEPANZERT2
			"rhsusf_m1245_m2crows_socom_d",
			"rhsusf_m1245_m2crows_socom_deploy",
			//HUMMWE SHERIFF
			"rhsusf_m1165_asv_m240_usaf_d",
			//HUNTER GAS SICHER
			"rhsusf_CGRCAT1A2_usmc_wd",
			"rhsusf_CGRCAT1A2_M2_usmc_wd",
			//HUNTER HINTEN OFFEN
			"rhsusf_m1240a1_usmc_wd",
			"rhsusf_m1240a1_m2_usmc_wd",
			"rhsusf_m1240a1_m240_usmc_wd",
			//PANZER SCHWER
			"rhsusf_m1a1fep_wd",
			"rhsusf_m1a1fep_od",
			"rhsusf_m1a1hc_wd"
		};
	};
	class RHSAFRF
	{
		name = "RHSAFRF";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			//GAZ
			"rhs_gaz66_repair_msv",
			"rhs_gaz66_vdv",
			"rhs_gaz66_flat_vdv",
			//"rhs_gaz66_ammo_vdv",
			"rhs_gaz66o_vdv",
			"rhs_gaz66o_flat_vdv",
			"rhs_gaz66_r142_vdv",
			"rhs_gaz66_ap2_vdv",
			"rhs_gaz66_repair_vdv",
			"rhs_gaz66_vmf",
			"rhs_gaz66_flat_vmf",
			//"rhs_gaz66_ammo_vmf",
			"rhs_gaz66o_vmf",
			"rhs_gaz66o_flat_vmf",
			"rhs_gaz66_r142_vmf",
			"rhs_gaz66_ap2_vmf",
			"rhs_gaz66_repair_vmf",
			"rhs_gaz66_vv",
			"rhs_gaz66_flat_vv",
			//"rhs_gaz66_ammo_vv",
			"rhs_gaz66o_vv",
			"rhs_gaz66o_flat_vv",
			"rhs_gaz66_r142_vv",
			"rhs_gaz66_ap2_vv",
			"rhs_gaz66_repair_vv",
			"rhs_gaz66_msv",
			"rhs_gaz66_flat_msv",
			"rhs_gaz66o_msv",
			"rhs_gaz66o_flat_msv",
			"rhs_gaz66_r142_msv",
			"rhs_gaz66_ap2_msv",
			//KAMAZ
			"rhs_kamaz5350_msv",
			//"rhs_kamaz5350_ammo_msv",
			"rhs_kamaz5350_flatbed_cover_msv",
			"rhs_kamaz5350_open_msv",
			"rhs_kamaz5350_flatbed_msv",
			"rhs_kamaz5350_vdv",
			//"rhs_kamaz5350_ammo_vdv",
			"rhs_kamaz5350_flatbed_cover_vdv",
			"rhs_kamaz5350_open_vdv",
			"rhs_kamaz5350_flatbed_vdv",
			"rhs_kamaz5350_vmf",
			//"rhs_kamaz5350_ammo_vmf",
			"rhs_kamaz5350_flatbed_cover_vmf",
			"rhs_kamaz5350_open_vmf",
			"rhs_kamaz5350_flatbed_vmf",
			"rhs_kamaz5350_vv",
			//"rhs_kamaz5350_ammo_vv",
			"rhs_kamaz5350_flatbed_cover_vv",
			"rhs_kamaz5350_open_vv",
			"rhs_kamaz5350_flatbed_vv",
			//KRAZ
			"rhs_kraz255b1_flatbed_msv",
			"rhs_kraz255b1_cargo_open_msv",
			"rhs_kraz255b1_flatbed_vdv",
			"rhs_kraz255b1_cargo_open_vdv",
			"rhs_kraz255b1_flatbed_vmf",
			"rhs_kraz255b1_cargo_open_vmf",
			"rhs_kraz255b1_flatbed_vv",
			"rhs_kraz255b1_cargo_open_vv",
			//Ural
			"RHS_Ural_MSV_01",
			//"RHS_Ural_Ammo_MSV_01",
			"RHS_Ural_Flat_MSV_01",
			"RHS_Ural_Open_MSV_01",
			"RHS_Ural_Open_Flat_MSV_01",
			"RHS_Ural_Repair_MSV_01",
			"RHS_Ural_VDV_01",
			//"RHS_Ural_Ammo_VDV_01",
			"RHS_Ural_Flat_VDV_01",
			"RHS_Ural_Open_VDV_01",
			"RHS_Ural_Open_Flat_VDV_01",
			"RHS_Ural_Repair_VDV_01",
			"RHS_Ural_VV_01",
			//"RHS_Ural_Ammo_VV_01",
			"RHS_Ural_Flat_VV_01",
			"RHS_Ural_Open_VV_01",
			"RHS_Ural_Open_Flat_VV_01",
			"RHS_Ural_Repair_VV_01",
			"RHS_Ural_Civ_01",
			"RHS_Ural_Open_Civ_01",
			//UralAlt
			"rhs_zil131_msv",
			"rhs_zil131_flatbed_cover_msv",
			"rhs_zil131_open_msv",
			"rhs_zil131_flatbed_msv",
			"rhs_zil131_vdv",
			"rhs_zil131_flatbed_cover_vdv",
			"rhs_zil131_open_vdv",
			"rhs_zil131_flatbed_vdv",
			"rhs_zil131_vmf",
			"rhs_zil131_flatbed_cover_vmf",
			"rhs_zil131_open_vmf",
			"rhs_zil131_flatbed_vmf",
			"rhs_zil131_vv",
			"rhs_zil131_flatbed_cover_vv",
			"rhs_zil131_open_vv",
			"rhs_zil131_flatbed_vv",
			//BTR
			"rhs_btr60_msv",
			"rhs_btr70_msv",
			"rhs_btr80_msv",
			"rhs_btr80a_msv",
			"rhs_bmp1_tv",
			"rhs_bmp1d_tv",
			"rhs_bmp1k_tv",
			"rhs_bmp1p_tv",
			"rhs_bmp2e_tv",
			"rhs_bmp2_tv",
			"rhs_bmp2d_tv",
			"rhs_bmp2k_tv",
			"rhs_btr60_vdv",
			"rhs_btr70_vdv",
			"rhs_btr80_vdv",
			"rhs_btr80a_vdv",
			"rhs_btr60_vmf",
			"rhs_btr70_vmf",
			"rhs_btr80_vmf",
			"rhs_btr80a_vmf",
			"rhs_btr60_vv",
			"rhs_btr70_vv",
			"rhs_btr80_vv",
			"rhs_btr80a_vv",
			//Bmp
			"rhs_bmp1_msv",
			"rhs_bmp1d_msv",
			"rhs_bmp1k_msv",
			"rhs_bmp1p_msv",
			"rhs_bmp2e_msv",
			"rhs_bmp2_msv",
			"rhs_bmp2d_msv",
			"rhs_bmp2k_msv",
			"rhs_bmp3_msv",
			"rhs_bmp3_late_msv",
			"rhs_bmp3m_msv",
			"rhs_bmp3mera_msv",
			"rhs_bmd1",
			"rhs_bmd1k",
			"rhs_bmd1p",
			"rhs_bmd1pk",
			"rhs_bmd2",
			"rhs_bmd2k",
			"rhs_bmd4_vdv",
			"rhs_bmd4m_vdv",
			"rhs_bmd4ma_vdv",
			"rhs_bmp1_vdv",
			"rhs_bmp1d_vdv",
			"rhs_bmp1k_vdv",
			"rhs_bmp1p_vdv",
			"rhs_bmp2e_vdv",
			"rhs_bmp2_vdv",
			"rhs_bmp2d_vdv",
			"rhs_bmp2k_vdv",
			"rhs_bmp1_vmf",
			"rhs_bmp1d_vmf",
			"rhs_bmp1k_vmf",
			"rhs_bmp1p_vmf",
			"rhs_bmp2e_vmf",
			"rhs_bmp2_vmf",
			"rhs_bmp2d_vmf",
			"rhs_bmp2k_vmf",
			"rhs_bmp1_vv",
			"rhs_bmp1d_vv",
			"rhs_bmp1k_vv",
			"rhs_bmp1p_vv",
			"rhs_bmp2e_vv",
			"rhs_bmp2_vv",
			"rhs_bmp2d_vv",
			"rhs_bmp2k_vv",
			//BRM
			"rhs_brm1k_msv",
			"rhs_brm1k_tv",
			"rhs_brm1k_vdv",
			"rhs_brm1k_vmf",
			"rhs_brm1k_vv",
			//OB?
			"rhs_Ob_681_2",
			//PRP?
			//"rhs_prp3_msv",
			//"rhs_prp3_tv",
			//"rhs_prp3_vdv",
			//"rhs_prp3_vmf",
			//"rhs_prp3_vv",
			//GAZ-233011
			"rhs_tigr_vdv",
			"rhs_tigr_3camo_vdv",
			"rhs_tigr_sts_3camo_vdv",
			"rhs_tigr_m_vdv",
			"rhs_tigr_m_3camo_vdv",
			"rhs_tigr_vmf",
			"rhs_tigr_3camo_vmf",
			"rhs_tigr_sts_vmf",
			"rhs_tigr_sts_3camo_vmf",
			"rhs_tigr_m_vmf",
			"rhs_tigr_m_3camo_vmf",
			"rhs_tigr_msv",
			"rhs_tigr_3camo_msv",
			"rhs_tigr_sts_msv",
			"rhs_tigr_sts_3camo_msv",
			"rhs_tigr_m_msv",
			"rhs_tigr_m_3camo_msv",
			"rhs_tigr_sts_vdv",
			"rhs_tigr_vv",
			"rhs_tigr_3camo_vv",
			"rhs_tigr_sts_vv",
			"rhs_tigr_sts_3camo_vv",
			"rhs_tigr_m_vv",
			"rhs_tigr_m_3camo_vv",

			//Panzer
			"rhs_t14_tv",
			"rhs_t15_tv",
			"rhs_t72ba_tv",
			"rhs_t72bb_tv",
			"rhs_t72bc_tv",
			"rhs_t72bd_tv",
			"rhs_t72be_tv",
			"rhs_t80",
			"rhs_t80a",
			"rhs_t80b",
			"rhs_t80bk",
			"rhs_t80bv",
			"rhs_t80bvk",
			"rhs_t80u",
			"rhs_t80u45m",
			"rhs_t80ue1",
			"rhs_t80uk",
			"rhs_t80um",
			"rhs_t90_tv",
			"rhs_t90a_tv",
			"rhs_t90am_tv",
			"rhs_t90saa_tv",
			"rhs_t90sab_tv",
			"rhs_t90sm_tv",
			"rhs_typhoon_vdv", //Zamak
			"rhs_sprut_vdv"
		};
	};
	class RHSUSAF_AIR
	{
		name = "RHSUSAF HELI";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			//Heli
			"RHS_CH_47F_10",
			"RHS_CH_47F_10_cargo",
			"RHS_CH_47F_light",
			"RHS_UH60M_d",
			"RHS_UH60M_ESSS_d",
			"RHS_UH60M_ESSS2_d",
			"RHS_UH60M2_d",
			"RHS_UH60M_MEV2_d",
			"RHS_UH60M_MEV_d",
			//
			"RHS_CH_47F",
			"RHS_CH_47F_cargo",
			"RHS_UH60M",
			"RHS_UH60M_ESSS",
			"RHS_UH60M_ESSS2",
			"RHS_UH60M2",
			"RHS_UH60M_MEV2",
			"RHS_UH60M_MEV",
			//
			"RHS_MELB_MH6M",
			"RHS_MELB_H6M",
			//
			"rhsusf_CH53E_USMC_D",
			"rhsusf_CH53e_USMC_D_cargo",
			"rhsusf_CH53E_USMC_GAU21_D",
			"RHS_UH1Y_UNARMED_d",
			//
			"rhsusf_CH53E_USMC",
			"rhsusf_CH53e_USMC_cargo",
			"rhsusf_CH53E_USMC_GAU21",
			"RHS_UH1Y_UNARMED",
			//

			//JET
			"RHS_C130J",
			"RHS_C130J_Cargo"
			//"rhsusf_f22",
		};
	};
	class RHSAFRF_AIR
	{
		name = "RHSAFRF HELI";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			//Helis
			//Mi
			//"RHS_Mi24P_vdv",
			//"RHS_Mi24V_vdv",
			"RHS_Mi8AMT_vdv",
			"RHS_Mi8mt_vdv",
			"RHS_Mi8mt_Cargo_vdv",
			//"RHS_Mi8MTV3_vdv",
			//"RHS_Mi8MTV3_heavy_vdv",
			//"RHS_Mi8mtv3_Cargo_vdv",
			"RHS_Mi8T_vdv",
			"RHS_Mi8mt_vv",
			"RHS_Mi8mt_Cargo_vv",
			"RHS_Mi8t_vv",
			//"RHS_Mi24P_vvsc",
			//"RHS_Mi24V_vvsc",
			"RHS_Mi24Vt_vvsc",
			//"rhs_mi28n_vvsc",
			"RHS_Mi8AMT_vvsc",
			//"RHS_Mi8AMTSh_vvsc",
			"RHS_Mi8mt_vvsc",
			"RHS_Mi8mt_Cargo_vvsc",
			//"RHS_Mi8MTV3_vvsc",
			//"RHS_Mi8MTV3_heavy_vvsc",
			//"RHS_Mi8mtv3_Cargo_vvsc",
			"RHS_Mi8T_vvsc",
			//"RHS_Mi24P_vvs",
			//"RHS_Mi24V_vvs",
			"RHS_Mi24Vt_vvs",
			//"rhs_mi28n_vvs",
			"RHS_Mi8AMT_vvs",
			//"RHS_Mi8AMTSh_vvs",
			"RHS_Mi8mt_vvs",
			"RHS_Mi8mt_Cargo_vvs",
			//"RHS_Mi8MTV3_vvs",
			//"RHS_Mi8MTV3_heavy_vvs",
			//"RHS_Mi8mtv3_Cargo_vvs",
			"RHS_Mi8T_vvs",
			"RHS_Mi8amt_civilian",
			"RHS_Mi8t_civilian"
			//SchwerHeli
			//"RHS_Ka52_vvsc",
			//"rhs_ka60_c",
			//"RHS_Ka52_vvs",
			//"rhs_ka60_grey",
			//Jets
			//"rhs_mig29s_vmf",
			//"rhs_mig29sm_vmf",
			//"rhs_mig29s_vvsc",
			//"rhs_mig29sm_vvsc",
			//"RHS_Su25SM_vvsc",
			//"rhs_mig29s_vvs",
			//"rhs_mig29sm_vvs",
			//"RHS_Su25SM_vvs",
			//"RHS_T50_vvs_generic",
			//"RHS_T50_vvs_051",
			//"RHS_T50_vvs_052",
			//"RHS_T50_vvs_053",
			//"RHS_T50_vvs_054",
			//"RHS_T50_vvs_blueonblue",
			//?

		};
	};
	class RHSUniforms
	{
		name = "RHS Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"rhs_uniform_cu_ocp",
			"rhs_uniform_cu_ucp",
			"rhs_uniform_cu_ocp_101st",
			"rhs_uniform_df15",
			"rhs_uniform_m88_patchless",
			"rhs_uniform_emr_patchless",
			"rhs_uniform_flora_patchless",
			"rhs_uniform_flora_patchless_alt",
			"rhs_uniform_FROG01_m81",
			"rhs_uniform_FROG01_d",
			"rhs_uniform_FROG01_wd",
			"rhs_uniform_mflora_patchless",
			"rhs_uniform_vdv_mflora",
			"rhs_uniform_vdv_emr_des",
			"rhs_uniform_msv_emr",
			"rhs_uniform_flora",
			"rhs_uniform_vdv_flora",
			"rhs_uniform_gorka_r_g",
			"rhs_uniform_gorka_r_y",
			"rhs_chdkz_uniform_5",
			"rhs_chdkz_uniform_4",
			"rhs_chdkz_uniform_3",
			"rhs_chdkz_uniform_2",
			"rhs_chdkz_uniform_1",
			"rhs_uniform_mvd_izlom",
			"rhs_uniform_cu_ocp_10th",
			"rhs_uniform_cu_ocp_1stcav",
			"rhs_uniform_cu_ocp_82nd",
			"rhs_uniform_cu_ucp_101st",
			"rhs_uniform_cu_ucp_10th",
			"rhs_uniform_cu_ucp_1stcav",
			"rhs_uniform_cu_ucp_82nd",
			// Added by ElShotte - 5 Items
			"rhs_uniform_g3_m81",
			"rhs_uniform_g3_blk",
			"rhs_uniform_g3_mc",
			"rhs_uniform_g3_rgr",
			"rhs_uniform_g3_tan"
		};
	};

	class RHSVests
	{
		name = "RHS Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"rhs_6sh92",
			"rhs_6sh92_radio",
			"rhs_6sh92_vog",
			"rhs_6sh92_vog_headset",
			"rhs_6sh92_headset",
			"rhs_6sh92_digi",
			"rhs_6sh92_digi_radio",
			"rhs_6sh92_digi_vog",
			"rhs_6sh92_digi_vog_headset",
			"rhs_6sh92_digi_headset",
			"rhs_6b23",
			"rhs_6b23_crew",
			"rhs_6b23_crewofficer",
			"rhs_6b23_engineer",
			"rhs_6b23_medic",
			"rhs_6b23_rifleman",
			"rhs_6b23_sniper",
			"rhs_6b23_6sh92",
			"rhs_6b23_6sh92_radio",
			"rhs_6b23_6sh92_vog",
			"rhs_6b23_6sh92_vog_headset",
			"rhs_6b23_6sh92_headset",
			"rhs_6b23_6sh92_headset_mapcase",
			"rhs_6b23_digi",
			"rhs_6b23_digi_crew",
			"rhs_6b23_digi_crewofficer",
			"rhs_6b23_digi_engineer",
			"rhs_6b23_digi_medic",
			"rhs_6b23_digi_rifleman",
			"rhs_6b23_digi_sniper",
			"rhs_6b23_digi_6sh92",
			"rhs_6b23_digi_6sh92_radio",
			"rhs_6b23_digi_6sh92_vog",
			"rhs_6b23_digi_6sh92_vog_headset",
			"rhs_6b23_digi_6sh92_headset",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"rhs_6b23_ML",
			"rhs_6b23_ML_crew",
			"rhs_6b23_ML_crewofficer",
			"rhs_6b23_ML_engineer",
			"rhs_6b23_ML_medic",
			"rhs_6b23_ML_rifleman",
			"rhs_6b23_ML_sniper",
			"rhs_6b23_ML_6sh92",
			"rhs_6b23_ML_6sh92_radio",
			"rhs_6b23_ML_6sh92_vog",
			"rhs_6b23_ML_6sh92_vog_headset",
			"rhs_6b23_ML_6sh92_headset",
			"rhs_6b23_ML_6sh92_headset_mapcase",
			"rhs_vest_commander",
			"rhs_vydra_3m",
			"rhsusf_iotv_ucp",
			"rhsusf_iotv_ucp_grenadier",
			"rhsusf_iotv_ucp_medic",
			"rhsusf_iotv_ucp_repair",
			"rhsusf_iotv_ucp_rifleman",
			"rhsusf_iotv_ucp_SAW",
			"rhsusf_iotv_ucp_squadleader",
			"rhsusf_iotv_ucp_teamleader",
			"rhsusf_iotv_ocp",
			"rhsusf_iotv_ocp_grenadier",
			"rhsusf_iotv_ocp_medic",
			"rhsusf_iotv_ocp_repair",
			"rhsusf_iotv_ocp_rifleman",
			"rhsusf_iotv_ocp_SAW",
			"rhsusf_iotv_ocp_squadleader",
			"rhsusf_iotv_ocp_teamleader",
			"rhsusf_spc",
			// Added by ElShotte - 12 Items
			"rhsusf_spc_corpsman",
			"rhsusf_spc_patchless",
			"rhsusf_spc_squadleader",
			"rhsusf_spc_teamleader",
			"rhsusf_spc_light",
			"rhsusf_spc_rifleman",
			"rhsusf_spc_iar",
			"rhsusf_spcs_ocp_rifleman",
			"rhsusf_spcs_ocp",
			"rhsusf_spcs_ucp_rifleman",
			"rhsusf_spcs_ucp",
			"rhs_6b43"
		};
	};

	class RHSHeadgear
	{
		name = "RHS Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
            "rhs_6b27m_digi",
	        "rhs_6b27m_digi_ess",
	        "rhs_6b27m_digi_bala",
	        "rhs_6b27m_digi_ess_bala",
	        "rhs_6b27m",
	        "rhs_6b27m_bala",
	        "rhs_6b27m_ess",
	        "rhs_6b27m_ess_bala",
	        "rhs_6b27m_ml",
	        "rhs_6b27m_ml_ess",
	        "rhs_6b27m_ml_bala",
	        "rhs_6b27m_ML_ess_bala",
	        "rhs_6b27m_green",
	        "rhs_6b27m_green_ess",
	        "rhs_6b27m_green_ess_bala",
			"rhs_6b26_green",
			"rhs_6b26_bala_green",
			"rhs_6b26_ess_green",
			"rhs_6b26_ess_bala_green",
			"rhs_6b26",
			"rhs_6b26_bala",
			"rhs_6b26_ess",
			"rhs_6b26_ess_bala",
			"rhs_6b28_green",
			"rhs_6b28_green_bala",
			"rhs_6b28_green_ess",
			"rhs_6b28_green_ess_bala",
			"rhs_6b28",
			"rhs_6b28_bala",
			"rhs_6b28_ess",
			"rhs_6b28_ess_bala",
			"rhs_6b28_flora",
			"rhs_6b28_flora_bala",
			"rhs_6b28_flora_ess",
			"rhs_6b28_flora_ess_bala",
			"rhs_Booniehat_digi",
			"rhs_Booniehat_flora",
			"rhs_ssh68",
			"rhs_Booniehat_m81",
			"rhs_Booniehat_marpatd",
			"rhs_Booniehat_marpatwd",
			"rhs_Booniehat_ocp",
			"rhs_Booniehat_ucp",
			"rhsusf_Bowman",
			"rhsusf_ach_bare",
			"rhsusf_ach_bare_des",
			"rhsusf_ach_bare_des_ess",
			"rhsusf_ach_bare_des_headset",
			"rhsusf_ach_bare_des_headset_ess",
			"rhsusf_ach_bare_ess",
			"rhsusf_ach_bare_headset",
			"rhsusf_ach_bare_headset_ess",
			"rhsusf_ach_bare_semi",
			"rhsusf_ach_bare_semi_ess",
			"rhsusf_ach_bare_semi_headset",
			"rhsusf_ach_bare_semi_headset_ess",
			"rhsusf_ach_bare_tan",
			"rhsusf_ach_bare_tan_ess",
			"rhsusf_ach_bare_tan_headset",
			"rhsusf_ach_bare_tan_headset_ess",
			"rhsusf_ach_bare_wood",
			"rhsusf_ach_bare_wood_ess",
			"rhsusf_ach_bare_wood_headset",
			"rhsusf_ach_bare_wood_headset_ess",
			"rhsusf_ach_helmet_ESS_ocp",
			"rhsusf_ach_helmet_ESS_ucp",
			"rhsusf_ach_helmet_M81",
			"rhsusf_ach_helmet_camo_ocp",
			"rhsusf_ach_helmet_headset_ess_ocp",
			"rhsusf_ach_helmet_headset_ess_ucp",
			"rhsusf_ach_helmet_headset_ocp",
			"rhsusf_ach_helmet_headset_ucp",
			"rhsusf_ach_helmet_ocp",
			"rhsusf_ach_helmet_ocp_norotos",
			"rhsusf_ach_helmet_ucp",
			"rhsusf_ach_helmet_ucp_norotos",
			"rhsusf_bowman_cap",
			"rhsusf_lwh_helmet_M1942",
			"rhsusf_lwh_helmet_marpatd",
			"rhsusf_lwh_helmet_marpatd_ess",
			"rhsusf_lwh_helmet_marpatd_headset",
			"rhsusf_lwh_helmet_marpatwd",
			"rhsusf_lwh_helmet_marpatwd_ess",
			"rhsusf_lwh_helmet_marpatwd_headset",
			"rhsusf_mich_bare",
			"rhsusf_mich_bare_alt",
			"rhsusf_mich_bare_alt_semi",
			"rhsusf_mich_bare_alt_tan",
			"rhsusf_mich_bare_headset",
			"rhsusf_mich_bare_norotos",
			"rhsusf_mich_bare_norotos_alt",
			"rhsusf_mich_bare_norotos_alt_headset",
			"rhsusf_mich_bare_norotos_alt_semi",
			"rhsusf_mich_bare_norotos_alt_semi_headset",
			"rhsusf_mich_bare_norotos_alt_tan",
			"rhsusf_mich_bare_norotos_alt_tan_headset",
			"rhsusf_mich_bare_norotos_arc",
			"rhsusf_mich_bare_norotos_arc_alt",
			"rhsusf_mich_bare_norotos_arc_alt_headset",
			"rhsusf_mich_bare_norotos_arc_alt_semi",
			"rhsusf_mich_bare_norotos_arc_alt_semi_headset",
			"rhsusf_mich_bare_norotos_arc_alt_tan",
			"rhsusf_mich_bare_norotos_arc_alt_tan_headset",
			"rhsusf_mich_bare_norotos_arc_headset",
			"rhsusf_mich_bare_norotos_arc_semi",
			"rhsusf_mich_bare_norotos_arc_semi_headset",
			"rhsusf_mich_bare_norotos_arc_tan",
			"rhsusf_mich_bare_norotos_headset",
			"rhsusf_mich_bare_norotos_semi",
			"rhsusf_mich_bare_norotos_semi_headset",
			"rhsusf_mich_bare_norotos_tan",
			"rhsusf_mich_bare_norotos_tan_headset",
			"rhsusf_mich_bare_semi",
			"rhsusf_mich_bare_semi_headset",
			"rhsusf_mich_bare_tan",
			"rhsusf_mich_bare_tan_headset",
			"rhsusf_mich_helmet_marpatd_alt_headset",
			"rhsusf_mich_helmet_marpatd_headset",
			"rhsusf_mich_helmet_marpatd_norotos",
			"rhsusf_mich_helmet_marpatd_norotos_arc",
			"rhsusf_mich_helmet_marpatd_norotos_arc_headset",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"rhsusf_mich_helmet_marpatwd",
			"rhsusf_mich_helmet_marpatwd_alt",
			"rhsusf_mich_helmet_marpatwd_alt_headset",
			"rhsusf_mich_helmet_marpatwd_headset",
			"rhsusf_mich_helmet_marpatwd_norotos",
			"rhsusf_mich_helmet_marpatwd_norotos_arc",
			"rhsusf_mich_helmet_marpatwd_norotos_arc_headset",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			// Added by ElShotte - 41 Items
			"rhs_altyn_novisor",
			"rhs_altyn_novisor_bala",
			"rhs_altyn_novisor_ess",
			"rhs_altyn_novisor_ess_bala",
			"rhs_altyn_visordown",
			"rhs_altyn",
			"rhs_altyn_bala",
			"rhsusf_opscore_bk_pelt",
			"rhsusf_opscore_bk",
			"rhsusf_opscore_coy_cover",
			"rhsusf_opscore_coy_cover_pelt",
			"rhsusf_opscore_fg",
			"rhsusf_opscore_fg_pelt",
			"rhsusf_opscore_fg_pelt_cam",
			"rhsusf_opscore_fg_pelt_nsw",
			"rhsusf_opscore_mc",
			"rhsusf_opscore_mc_pelt",
			"rhsusf_opscore_mc_pelt_nsw",
			"rhsusf_opscore_mc_cover",
			"rhsusf_opscore_mc_cover_pelt",
			"rhsusf_opscore_mc_cover_pelt_nsw",
			"rhsusf_opscore_mc_cover_pelt_cam",
			"rhsusf_opscore_paint",
			"rhsusf_opscore_paint_pelt",
			"rhsusf_opscore_paint_pelt_nsw",
			"rhsusf_opscore_paint_pelt_nsw_cam",
			"rhsusf_opscore_rg_cover",
			"rhsusf_opscore_rg_cover_pelt",
			"rhsusf_opscore_ut",
			"rhsusf_opscore_ut_pelt",
			"rhsusf_opscore_ut_pelt_cam",
			"rhsusf_opscore_ut_pelt_nsw",
			"rhsusf_opscore_ut_pelt_nsw_cam",
			"rhsusf_opscore_mar_ut_pelt",
			"rhsusf_opscore_mar_ut",
			"rhsusf_opscore_mar_fg_pelt",
			"rhsusf_opscore_mar_fg",
			"rhsusf_protech_helmet",
			"rhsusf_protech_helmet_ess",
			"rhsusf_protech_helmet_rhino",
			"rhsusf_protech_helmet_rhino_ess"
		};
	};

	// Added by ElShotte - 11 Items
	class RHSBackpacks
	{
		name = "RHS Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"rhsusf_assault_eagleaiii_coy",
			"rhsusf_assault_eagleaiii_ocp",
			"rhsusf_assault_eagleaiii_ucp",
			"rhsusf_falconii_coy",
			"rhsusf_falconii_mc",
			"rhsusf_falconii",
			"rhs_assault_umbts",
			"rhs_assault_umbts_engineer_empty",
			"rhs_medic_bag",
			"rhs_sidor",
			"rhs_rpg_empty"
		};
	};

	// Added by ElShotte - 11 Items
	class RHSAccessories
	{
		name = "RHS Accessories";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhs_ess_black",
			"rhs_googles_black",
			"rhs_googles_clear",
			"rhs_googles_yellow",
			"rhs_googles_orange",
			"rhs_scarf",
			"rhs_balaclava",
			"rhs_balaclava1_olive",
			"rhsusf_ANPVS_15",
			"rhsusf_ANPVS_14",
			"rhs_1PN138"
		};
	};

	class RHSPointerAttachments
	{
		name = "RHS Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhsusf_acc_anpeq15side",
			"rhsusf_acc_anpeq15",
			"rhsusf_acc_anpeq15A",
			"rhsusf_acc_anpeq15_light",
			// Added by ElShotte - 11 Items
			"rhsusf_acc_M952V",
			"rhs_acc_perst3",
			"rhs_acc_perst3_top",
			"rhs_acc_perst3_2dp_h",
			"rhs_acc_perst3_2dp_light_h",
			"rhs_acc_2dpZenit",
			"rhs_acc_2dpZenit_ris",
			"rhs_acc_perst1ik",
			"rhs_acc_perst1ik_ris",
			"rhsusf_acc_anpeq15_bk",
			"rhsusf_acc_anpeq15_bk_light"
		};
	};

	class RHSBipodAttachments
	{
		name = "RHS Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"rhsusf_acc_harris_bipod",
			"rhsusf_acc_harris_swivel",
			"rhs_bipod",
			"rhs_acc_harris_swivel"
		};
	};

	// Added by ElShotte - 8 Items
	class RHSForegripAttachments
	{
		name = "RHS Foregrip Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"rhsusf_acc_grip1",
			"rhsusf_acc_grip2",
			"rhsusf_acc_grip2_tan",
			"rhsusf_acc_grip3",
			"rhsusf_acc_grip3_tan",
			"rhs_acc_grip_rk2",
			"rhs_acc_grip_rk6",
			"rhs_acc_grip_ffg2"
		};
	};

	class RHSMuzzleAttachments
	{
		name = "RHS Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"rhsusf_acc_rotex5_grey",
			"rhsusf_acc_rotex5_tan",
			"rhsusf_acc_nt4_black",
			"rhsusf_acc_nt4_tan",
			"rhsusf_acc_SF3P556",
			"rhsusf_acc_SFMB556",
			"rhsusf_acc_SR25S",
			"rhsusf_acc_M2010S",
			"rhs_acc_dtk4short",
			"rhs_acc_dtk4long",
			"rhs_acc_dtk4screws",
			"rhs_acc_tgpa",
			"rhs_acc_pbs1",
			"rhs_acc_dtk3",
			"rhs_acc_dtk1",
			"rhs_acc_dtk",
			"rhs_acc_dtk1l",
			"rhs_acc_ak5",
			// Added by ElShotte - 6 Items
			"rhsusf_acc_omega9k",
			"rhs_acc_uuk",
			"rhsusf_acc_rotex_mp7",
			"rhsusf_acc_rotex_mp7_desert",
			"rhsusf_acc_rotex_mp7_winter",
			"rhsusf_acc_rotex_mp7_aor1"
		};
	};

	class RHSOpticAttachments
	{
		name = "RHS Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"rhs_acc_1p29",
			"rhs_acc_1p63",
			"rhs_acc_1p78",
			"rhs_acc_1pn93_1",
			"rhs_acc_1pn93_2",
			"rhs_acc_dh520x56",
			"rhs_acc_ekp1",
			"rhs_acc_pgo7v",
			"rhs_acc_pkas",
			"rhs_acc_pso1m2",
			"rhs_acc_rakursPM",
			"rhs_weap_optic_smaw",
			"rhsusf_acc_ACOG",
			"rhsusf_acc_ACOG2",
			"rhsusf_acc_ACOG2_USMC",
			"rhsusf_acc_ACOG3",
			"rhsusf_acc_ACOG3_USMC",
			"rhsusf_acc_ACOG_MDO",
			"rhsusf_acc_ACOG_RMR",
			"rhsusf_acc_ACOG_USMC",
			"rhsusf_acc_ACOG_d",
			"rhsusf_acc_ACOG_pip",
			"rhsusf_acc_ACOG_wd",
			"rhsusf_acc_ELCAN",
			"rhsusf_acc_ELCAN_pip",
			"rhsusf_acc_EOTECH",
			"rhsusf_acc_LEUPOLDMK4",
			"rhsusf_acc_LEUPOLDMK4_2",
			"rhsusf_acc_M8541",
			"rhsusf_acc_M8541_low",
			"rhsusf_acc_M8541_low_d",
			"rhsusf_acc_M8541_low_wd",
			"rhsusf_acc_SpecterDR",
			"rhsusf_acc_SpecterDR_A_3d",
			"rhsusf_acc_SpecterDR_D",
			"rhsusf_acc_SpecterDR_OD",
			//"rhsusf_acc_anpas13gv1",
			"rhsusf_acc_eotech_552",
			"rhsusf_acc_premier",
			//"rhsusf_acc_premier_anpvs27",
			"rhsusf_acc_premier_low"
		};
	};

	class RHSPistols
	{
		name = "RHS Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"rhs_weap_pya",
			"rhs_weap_makarov_pm",
			// Added by ElShotte - 4 Items
			"rhs_weap_pp2000_folded",
			"rhsusf_weap_glock17g4",
			"rhsusf_weap_m9",
			"rhsusf_weap_m1911a1"
		};
	};

	class RHSLightMachineGuns
	{
		name = "RHS Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"rhs_weap_m249_pip_L",
			"rhs_weap_m249_pip_L_para",
			"rhs_weap_m249_pip_L_vfg",
			"rhs_weap_m249_pip_S",
			"rhs_weap_m249_pip_S_para",
			"rhs_weap_m249_pip_S_vfg",
			"rhs_weap_m240B",
			"rhs_weap_m240B_CAP",
			"rhs_weap_m240G",
			"rhs_weap_pkm",
			"rhs_weap_pkp",
			// Added by ElShotte - 1 Item
			"rhs_weap_m27iar"
		};
	};

	// Added by ElShotte - 4 Items
	class RHSSubMachineGuns
	{
		name = "RHS Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhsusf_weap_MP7A2",
			"rhsusf_weap_MP7A2_desert",
			"rhsusf_weap_MP7A2_aor1",
			"rhsusf_weap_MP7A2_winter"
		};
	};

	class RHSAssaultRifles
	{
		name = "RHS Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"rhs_weap_M590_5RD",
			"rhs_weap_M590_8RD",
			"rhs_weap_hk416d10",
			"rhs_weap_hk416d10_LMT",
			"rhs_weap_hk416d10_m320",
			"rhs_weap_hk416d145",
			"rhs_weap_hk416d145_m320",
			"rhs_weap_m16a4",
			"rhs_weap_m16a4_carryhandle",
			"rhs_weap_m16a4_carryhandle_M203",
			"rhs_weap_m16a4_carryhandle_pmag",
			"rhs_weap_m32",
			"rhs_weap_m4_carryhandle",
			"rhs_weap_m4_carryhandle_pmag",
			"rhs_weap_m4_m203",
			"rhs_weap_m4_m320",
			"rhs_weap_m4a1",
			"rhs_weap_m4a1_blockII",
			"rhs_weap_m4a1_blockII_KAC",
			"rhs_weap_m4a1_blockII_KAC_bk",
			"rhs_weap_m4a1_blockII_KAC_d",
			"rhs_weap_m4a1_blockII_KAC_wd",
			"rhs_weap_m4a1_blockII_M203",
			"rhs_weap_m4a1_blockII_M203_bk",
			"rhs_weap_m4a1_blockII_M203_d",
			"rhs_weap_m4a1_blockII_M203_wd",
			"rhs_weap_m4a1_blockII_bk",
			"rhs_weap_m4a1_blockII_d",
			"rhs_weap_m4a1_blockII_wd",
			"rhs_weap_m4a1_carryhandle",
			"rhs_weap_m4a1_carryhandle_m203",
			"rhs_weap_m4a1_carryhandle_pmag",
			"rhs_weap_m4a1_m203",
			"rhs_weap_m4a1_m320",
			"rhs_weap_mk18",
			"rhs_weap_mk18_KAC",
			"rhs_weap_mk18_KAC_bk",
			"rhs_weap_mk18_KAC_d",
			"rhs_weap_mk18_KAC_wd",
			"rhs_weap_mk18_bk",
			"rhs_weap_mk18_d",
			"rhs_weap_mk18_m320",
			"rhs_weap_mk18_wd"
		/*	// Exile Dupe issue items un comment at your own risk
			"rhs_weap_ak103",
			"rhs_weap_ak103_1",
			"rhs_weap_ak103_npz",
			"rhs_weap_ak103_zenitco01",
			"rhs_weap_ak103_zenitco01_b33",
			"rhs_weap_ak104_zenitco01",
			"rhs_weap_ak104_zenitco01_b33",
			"rhs_weap_ak105_zenitco01",
			"rhs_weap_ak105_zenitco01_b33",
			"rhs_weap_ak74m",
			"rhs_weap_ak74m_2mag",
			"rhs_weap_ak74m_2mag_camo",
			"rhs_weap_ak74m_2mag_npz",
			"rhs_weap_ak74m_camo",
			"rhs_weap_ak74m_camo_folded",
			"rhs_weap_ak74m_desert",
			"rhs_weap_ak74m_desert_folded",
			"rhs_weap_ak74m_desert_npz",
			"rhs_weap_ak74m_folded",
			"rhs_weap_ak74m_gp25",
			"rhs_weap_ak74m_gp25_npz",
			"rhs_weap_ak74m_npz",
			"rhs_weap_ak74m_plummag",
			"rhs_weap_ak74m_plummag_folded",
			"rhs_weap_ak74m_plummag_npz",
			"rhs_weap_ak74m_zenitco01",
			"rhs_weap_ak74m_zenitco01_b33",
			"rhs_weap_ak74mr",
			"rhs_weap_ak74mr_gp25",
			"rhs_weap_akm",
			"rhs_weap_akm_gp25",
			"rhs_weap_akms",
			"rhs_weap_akms_gp25",
			"rhs_weap_aks74",
			"rhs_weap_aks74_gp25",
			"rhs_weap_aks74n",
			"rhs_weap_aks74n_gp25",
			"rhs_weap_m16a4_carryhandle_grip",
			"rhs_weap_m16a4_carryhandle_grip_pmag",
			"rhs_weap_m16a4_grip",
			"rhs_weap_m4",
			"rhs_weap_m4_grip",
			"rhs_weap_m4_grip2",
			"rhs_weap_m4a1_blockII_grip2",
			"rhs_weap_m4a1_blockII_grip2_KAC",
			"rhs_weap_m4a1_carryhandle_grip2",
			"rhs_weap_m4a1_grip",
			"rhs_weap_m4a1_grip2",
			"rhs_weap_mk18_grip2",
			"rhs_weap_mk18_grip2_KAC"
		*/
		};
	};

	class RHSSniperRifles
	{
		name = "RHS Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"rhs_weap_sr25",
			"rhs_weap_sr25_ec",
			"rhs_weap_m14ebrri",
			"rhs_weap_XM2010",
			"rhs_weap_XM2010_wd",
			"rhs_weap_XM2010_d",
			"rhs_weap_XM2010_sa",
			"rhs_weap_svd",
			"rhs_weap_svdp_wd",
			"rhs_weap_svdp_wd_npz",
			"rhs_weap_svdp_npz",
			"rhs_weap_svds",
			"rhs_weap_svds_npz",
			// Addd by ElShotte - 14 Items
			"rhs_weap_M107",
			"rhs_weap_M107_lc",
			"rhs_weap_M107_d",
			"rhs_weap_M107_w",
			"rhs_weap_t5000",
			"rhs_weap_m24sws",
			"rhs_weap_m24sws_blk",
			"rhs_weap_m24sws_ghillie",
			"rhs_weap_m40a5",
			"rhs_weap_m40a5_d",
			"rhs_weap_m40a5_w",
			"rhs_weap_sr25_d",
			"rhs_weap_sr25_wd",
			"rhs_weap_sr25_ec_d",
			"rhs_weap_sr25_ec_wd"
		};
	};

	class RHSAmmunition
	{
		name = "RHS Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"rhsusf_mag_7x45acp_MHP",
			"rhs_mag_9x18_12_57N181S",
			"rhs_mag_9x19_17",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_200rnd_556x45_M_SAW",
			"rhs_200rnd_556x45_B_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51_m993",
			"rhsusf_50Rnd_762x51_m80a1epr",
			"rhsusf_100Rnd_762x51",
			"rhsusf_100Rnd_762x51_m993",
			"rhsusf_100Rnd_762x51_m80a1epr",
			"rhsusf_8Rnd_00Buck",
			"rhsusf_8Rnd_Slug",
			"rhsusf_20Rnd_762x51_m993_Mag",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_45Rnd_545X39_AK",
			"rhs_45Rnd_545X39_7N10_AK",
			"rhs_45Rnd_545X39_7N22_AK",
			"rhs_45Rnd_545X39_AK_Green",
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_10Rnd_762x54mmR_7N1",

			// Added by ElShotte - 26 Items
			//M-107 and M82A1
			"rhsusf_mag_10Rnd_STD_50BMG_M33",
			//"rhsusf_mag_10Rnd_STD_50BMG_mk211", <- Exploding 50 Cal rounds (WAY too powerful)

			//HK MP7A2
			"rhsusf_mag_40Rnd_46x30_AP",
			"rhsusf_mag_40Rnd_46x30_FMJ",
			"rhsusf_mag_40Rnd_46x30_JHP",

			// Orsis T-5000
			"rhs_5Rnd_338lapua_t5000",

			// M590
			"rhsusf_5Rnd_00Buck",
			"rhsusf_5Rnd_FRAG",
			"rhsusf_5Rnd_HE",
			"rhsusf_5Rnd_Slug",
			"rhsusf_8Rnd_doomsday_Buck",

			// M24 SWS
			"rhsusf_5Rnd_762x51_m118_special_Mag",
			"rhsusf_5Rnd_762x51_m993_Mag",
			"rhsusf_5Rnd_762x51_m62_Mag",

			// M40A5
			"rhsusf_10Rnd_762x51_m62_Mag",
			"rhsusf_10Rnd_762x51_m993_Mag",
			"rhsusf_10Rnd_762x51_m118_special_Mag",

			// Pistols
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x19mm_7n31_44",
			"rhs_mag_9x19mm_7n21_44",
			"rhs_mag_9x19mm_7n31_20",
			"rhs_mag_9x19mm_7n21_20",
			//M32MGL 6Schuss Grande
			"rhsusf_mag_6Rnd_M441_HE",
			"rhsusf_mag_6Rnd_M433_HEDP",
			"rhsusf_mag_6Rnd_M397_HET",
			"rhsusf_mag_6Rnd_M576_Buckshot",
			"rhsusf_mag_6Rnd_m4009",
			"rhsusf_mag_6Rnd_M583A1_white",
			"rhsusf_mag_6Rnd_m661_green",
			"rhsusf_mag_6Rnd_m662_red",
			"rhsusf_mag_6Rnd_M713_red",
			"rhsusf_mag_6Rnd_M714_white",
			"rhsusf_mag_6Rnd_M715_green",
			"rhsusf_mag_6Rnd_M716_yellow",
			"rhsusf_mag_6Rnd_M781_Practice"			
		};
	};

	class RHSLaunchers
	{
		name = "RHS Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"rhs_weap_rpg26",
			"rhs_weap_rpg7",
			"rhs_weap_rshg2",
			// Added by ElShotte - 9 Items
			"rhs_weap_igla",
			"rhs_weap_fgm148",
			"rhs_weap_fim92",
			"rhs_weap_M136",
			"rhs_weap_M136_hedp",
			"rhs_weap_M136_hp",
			"rhs_weap_m72a7",
			"rhs_weap_smaw",
			"rhs_weap_smaw_green"
		};
	};

	class RHSLauncherAmmo
	{
		name = "RHS Launcher Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhs_rpg26_mag",
			"rhs_rshg2_mag",
			"rhs_rpg18_mag",
			"rhs_rpg7_PG7VL_mag",
			"rhs_rpg7_PG7VR_mag",
			"rhs_rpg7_TBG7V_mag",
			"rhs_rpg7_OG7V_mag",
			"rhs_mag_9k32_rocket",
			"rhs_mag_9k38_rocket",
			// Added by ElShotte - 11 Items
			"rhs_rpg7_type69_airburst_mag",
			"rhs_fgm148_magazine_AT",
			"rhs_fim92_mag",
			"rhs_m136_mag",
			"rhs_m136_hedp_mag",
			"rhs_M136_hp_mag",
			"rhs_m72a7_mag",
			"rhs_mag_smaw_HEAA",
			"rhs_mag_smaw_HEDP",
			"rhs_mag_smaw_SR"
		};
	};

	class RHSExplosives
	{
		name = "RHS Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[]=
		{
			"rhs_mine_pmn2_mag",
			"rhs_mine_tm62m_mag",
			"rhsusf_m112_mag",
			"rhsusf_m112x4_mag",
			// Added by ElShotte - 26 Items
			"rhs_mine_m19_mag",
			"rhsusf_mine_m14_mag",
			"rhs_mag_f1",
			"rhs_mag_fakel",
			"rhs_mag_fakels",
			"rhs_mag_m18_green",
			"rhs_mag_m18_purple",
			"rhs_mag_m18_red",
			"rhs_mag_m18_yellow",
			"rhs_mag_m67",
			"rhs_mag_m7a3_cs",
			"rhs_mag_mk84",
			"rhs_mag_mk3a2",
			"rhs_mag_nspd",
			"rhs_mag_nspn_green",
			"rhs_mag_nspn_red",
			"rhs_mag_nspn_yellow",
			"rhs_mag_plamyam",
			"rhs_mag_rdg2_black",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgd5",
			"rhs_mag_rgn",
			"rhs_mag_rgo",
			"rhs_mag_zarya2",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m14_th3"
			//"rhsgref_mag_rkg3em" //RHS:GREF AT Grenade - Added here for keeping things tidy - UNCOMMENT ONLY IF YOU ARE RUNNING RHS:GREF TOO!
		};
	};

	// Added by ElShotte - 25 Items
	class RHSUGLAmmo
	{
		name = "RHS UGL Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			"rhs_mag_M433_HEDP",
			"rhs_mag_M397_HET",
			"rhs_mag_m4009",
			"rhs_mag_m576",
			"rhs_mag_M585_white",
			"rhs_mag_m661_green",
			"rhs_mag_m662_red",
			"rhs_mag_m713_Red",
			"rhs_mag_m714_White",
			"rhs_mag_m715_Green",
			"rhs_mag_m716_yellow",
			"rhs_VOG25",
			"rhs_VOG25p",
			"rhs_vg40tb",
			"rhs_vg40sz",
			"rhs_vg40op_white",
			"rhs_vg40op_green",
			"rhs_vg40op_red",
			"rhs_GRD40_white",
			"rhs_GRD40_green",
			"rhs_GRD40_red",
			"rhs_VG40MD_White",
			"rhs_VG40MD_Green",
			"rhs_VG40MD_Red",
			"rhs_GDM40"
		};
	};
	class RHSStaticMG				// way too powerful
	{
		name = "RHS Static Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"RHS_AGS30_TriPod_INS",
			"RHS_AGS30_TriPod_MSV",
			"RHS_AGS30_TriPod_VDV",
			"RHS_AGS30_TriPod_VMF",
			"RHS_NSV_TriPod_INS",
			"RHS_NSV_TriPod_MSV",
			"RHS_NSV_TriPod_VDV",
			"RHS_NSV_TriPod_VMF",
			"RHS_ZU23_MSV",
			"RHS_ZU23_VDV",
			"RHS_ZU23_VMF",
			"rhs_2b14_82mm_ins",
			"rhs_2b14_82mm_msv",
			"rhs_2b14_82mm_vdv",
			"rhs_2b14_82mm_vmf",
			"rhs_D30_at_ins",
			"rhs_D30_at_msv",
			"rhs_D30_at_vdv",
			"rhs_D30_at_vmf",
			"rhs_D30_ins",
			"rhs_D30_msv",
			"rhs_D30_vdv",
			"rhs_D30_vmf",
			"rhs_DSHKM_Mini_TriPod_ins",
			"rhs_DSHKM_ins",
			"rhs_Igla_AA_pod_ins",
			"rhs_Igla_AA_pod_msv",
			"rhs_Igla_AA_pod_vdv",
			"rhs_Igla_AA_pod_vmf",
			"rhs_KORD_INS",
			"rhs_KORD_MSV",
			"rhs_KORD_VDV",
			"rhs_KORD_VMF",
			"rhs_KORD_high_INS",
			"rhs_KORD_high_MSV",
			"rhs_KORD_high_VDV",
			"rhs_KORD_high_VMF",
			"rhs_Kornet_9M133_1_ins",
			"rhs_Kornet_9M133_2_ins",
			"rhs_Kornet_9M133_2_msv",
			"rhs_Kornet_9M133_2_vdv",
			"rhs_Kornet_9M133_2_vmf",
			"rhs_Metis_9k115_1_ins",
			"rhs_Metis_9k115_2_ins",
			"rhs_Metis_9k115_2_msv",
			"rhs_Metis_9k115_2_vdv",
			"rhs_Metis_9k115_2_vmf",
			"rhs_SPG9M_MSV",
			"rhs_SPG9M_VDV",
			"rhs_SPG9M_VMF",
			"rhs_SPG9_INS"
		};
	};	
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"CUPMuzzleAttachments",
			"CUPOpticAttachments",
			"CUPAmmunition",
			"CUPPistols",
			"CUPSubMachineGuns",
			"CUPLightMachineGuns",
			"CUPAssaultRifles",
			"CUPSniperRifles",
			"CUPWraps",
			"SMAAssaultRifles",
			"SMALightMachineGuns",
			"SMAPointerAttachments",
			"SMABipodAttachments",
			"SMAOpticAttachments",
			"SMAMuzzleAttachments",
			"SMAAmmunition",		
            "RHSAmmunition",
            "RHSSniperRifles",
 		    "RHSAssaultRifles",
			"RHSSubMachineGuns",
			"RHSLightMachineGuns",
			"RHSPistols",
			"RHSOpticAttachments",
			"RHSMuzzleAttachments",
			"RHSForegripAttachments",
			"RHSBipodAttachments",
			"RHSPointerAttachments"				
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"RHSUGLAmmo"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid",
			"CUPUniforms",
			"CUPHeadgear",
			"CUPBackpacks",
			"CUPVests",
			"RHSAccessories",
			"RHSBackpacks",
			"RHSHeadgear",
			"RHSVests",
			"RHSUniforms"			
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"CupBluefor",
			"CupOpfor",
			"RHSAFRF",
			"RHSUSAF"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes",
			"CupOpforAir",
			"CupBlueforAir",
			"RHSAFRF_AIR",
			"RHSUSAF_AIR"			
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"CupBlueforBoat",
			"CupOpforBoat"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{

			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"}},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"}},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"}},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"}},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"}},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"}},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"}},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"}},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"}},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"}},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"}},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"}},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"}},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"}},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"}},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"}},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"}},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"}},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"}},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"}},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"}},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
    {
        skins[] = 
        {
            {"Exile_Car_SUVXL_Black", 100, "Black", {"\Exile_psycho_SUV_a3\Data\suv_body_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Blue White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Charcoal", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Orange", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"}},
            {"Exile_Car_SUVXL_Black", 200, "Hello Kitty", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Red", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Silver", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"}},
            {"Exile_Car_SUVXL_Black", 100, "White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Yellow", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}}
        };
    };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"}},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"}},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"}},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"}},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}}
		};
	};

	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"}},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}}
		};
	};

	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}}
		};
	};
};

class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;	
	
	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 1;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	*/
	numberOfVehicles[] = 
	{
		-1,			// Level 1
		5, 			// Level 2 
		8, 			// Level 3
		11, 		// Level 4
		13, 		// Level 5
		15, 		// Level 6
		18, 		// Level 7
		21, 		// Level 8
		25, 		// Level 9
		28 			// Level 10
	};
	
	/*
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};
class CfgXM8 
{
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	
	class slothMachine
	{
		controlID = 4140;
		appID = "App03";
		title = "Sloth Machine";
	};
};
/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
    text = "Sloth Machine";
    onButtonClick = "['slothMachine', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSlothMachine";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};