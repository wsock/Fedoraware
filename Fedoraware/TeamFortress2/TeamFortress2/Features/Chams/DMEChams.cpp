#include "DMEChams.h"

#include "../Vars.h"
#include "../../Hooks/ModelRenderHook/ModelRenderHook.h"
#include "Chams.h"
#include "../Glow/Glow.h"
#include "../Backtrack/Backtrack.h"





// I can't believe i'm doing this

// TODO: add an option to import custom ones from a file path

namespace ProxySkins
{
	static IMaterial* spectrumSplattered = nullptr;
	static IMaterial* electroSkullsBlue = nullptr;
	static IMaterial* frozenAurora = nullptr;
	static IMaterial* jazzy = nullptr;
	static IMaterial* hana = nullptr;
	static IMaterial* wtf = nullptr;
	static IMaterial* ghost = nullptr;
	static IMaterial* flames = nullptr;
	static IMaterial* spookwood = nullptr;
	static IMaterial* edgy = nullptr;
	static IMaterial* serenity = nullptr;
	static IMaterial* fade = nullptr;

	void Init()
	{
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2020/2203845847/2203845847_spectrum");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			spectrumSplattered = g_Interfaces.MatSystem->Create("spectrumskinrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2018/1326382486/1326382486_electro_skulls_blu");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			electroSkullsBlue = g_Interfaces.MatSystem->Create("elecrtoskullsrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/smissmas_2017/1193300219/1193300219_cow");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			frozenAurora = g_Interfaces.MatSystem->Create("frozenaurorarargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/smissmas_2020/1558054217/1558054217_a");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			jazzy = g_Interfaces.MatSystem->Create("jazzyrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/smissmas_2017/1183962036/1183962036_aes_blue");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			hana = g_Interfaces.MatSystem->Create("hanarargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2021/2596228713/2596228713_main_blu");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			wtf = g_Interfaces.MatSystem->Create("wtfrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2021/2594850983/2594850983_pattern_red");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			ghost = g_Interfaces.MatSystem->Create("ghostrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2020/2223065529/2223065529_helldriver_flames");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			flames = g_Interfaces.MatSystem->Create("flamesrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/screamfortress_2018/1180839618/1180839618_spooky_wood");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			spookwood = g_Interfaces.MatSystem->Create("spookwoodrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/500642896/500642896");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			edgy = g_Interfaces.MatSystem->Create("edgyrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/smissmas_2020/2265040710/2265040710_starlight2");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			serenity = g_Interfaces.MatSystem->Create("serenityrargh", kv);
		}
		{
			auto kv = new KeyValues("VertexLitGeneric");
			kv->SetString("$basetexture", "patterns/workshop/smissmas_2020/2265040710/2265040710_serenity");
			kv->SetString("$additive", "1");
			kv->SetString("$scrollanglevar", "0");
			kv->SetString("$wireframe", "0");
			KeyValues* Proxies = new KeyValues("Proxies");
			{
				g_KeyValUtils.Initialize(Proxies, (char*)"proxies");
				{
					KeyValues* Sine = new KeyValues("Sine");
					g_KeyValUtils.Initialize(Sine, (char*)"sine");
					Sine->SetString("resultvar", "$scrollanglevar");
					Sine->SetString("sineperiod", "50000");
					Sine->SetString("sinemin", "0");
					Sine->SetString("sinemax", "360");
					Proxies->AddSubkey(Sine);
				}
				{
					KeyValues* TextureScroll = new KeyValues("TextureScroll");
					g_KeyValUtils.Initialize(TextureScroll, (char*)"texturescroll");
					TextureScroll->SetString("texturescrollvar", "$BasetextureTransform");
					TextureScroll->SetString("texturescrollrate", "0.1");
					TextureScroll->SetString("texturescrollangle", "$scrollanglevar");
					Proxies->AddSubkey(TextureScroll);
				}
				kv->AddSubkey(Proxies);

			}
			fade = g_Interfaces.MatSystem->Create("faderargh", kv);
		}
	}
}

bool CDMEChams::ShouldRun()
{
	if (!Vars::Chams::DME::Active.m_Var || g_Interfaces.EngineVGui->IsGameUIVisible() || !Vars::Chams::Main::Active.
		m_Var)
		return false;

	return true;
}

void CDMEChams::Init()
{
	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "vgui/white_additive");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[-0.25 1 1]");
		m_pMatShaded = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatShaded", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "vgui/white_additive");
		kv->SetString("$envmap", "cubemaps/cubemap_sheen001");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[-0.25 1 1]");
		m_pMatShiny = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatShiny", kv);
	}

	{
		auto kv = new KeyValues("UnlitGeneric");
		kv->SetString("$basetexture", "vgui/white_additive");
		m_pMatFlat = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatFlat", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "models/player/shared/shared_normal");
		kv->SetString("$envmap", "skybox/sky_dustbowl_01");
		kv->SetString("$envmapfresnel", "1");
		kv->SetString("$phong", "1");
		kv->SetString("$phongfresnelranges", "[0 0.05 0.1]");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[0.5 0.5 0]");
		kv->SetString("$selfillumtint", "[0 0 0]");
		kv->SetString("$envmaptint", "[1 1 1]");
		m_pMatFresnel = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatFresnel", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "models/player/shared/shared_normal");
		kv->SetString("$envmap", "skybox/sky_dustbowl_01");
		kv->SetString("$envmapfresnel", "1");
		kv->SetString("$phong", "1");
		kv->SetString("$phongfresnelranges", "[0 0.05 0.1]");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[0.5 0.5 0]");
		kv->SetString("$selfillumtint", "[0 0 0]");
		kv->SetString("$envmaptint", "[1 1 1]");
		m_pMatFresnel2 = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatFresnel2", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "brick/brickwall031b");
		kv->SetString("$bumpmap", "vgui/white_additive");
		kv->SetString("$color2", "[10 10 10]");
		kv->SetString("$additive", "1");
		kv->SetString("$envmap", "cubemaps/cubemap_sheen001");
		kv->SetString("$envmapfresnel", "1");
		kv->SetString("$envmaptint", "[4 4 0]");
		kv->SetString("$selfillum", "1");
		kv->SetString("$rimlight", "1");
		kv->SetString("$rimlightboost", "10");
		m_pMatBrick = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatBrick", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$basetexture", "models/player/shared/ice_player");
		kv->SetString("$bumpmap", "models/player/shared/shared_normal");
		kv->SetString("$translucent", "1");
		kv->SetString("$additive", "1");
		kv->SetString("$phong", "1");
		kv->SetString("$phongfresnelranges", "[0 0.5 10]");
		kv->SetString("$phongtint", "[0 0 0]");
		kv->SetString("$envmap", "skybox/sky_dustbowl_01");
		kv->SetString("$envmapfresnel", "1");
		kv->SetString("$envmaptint", "[0 0 0]");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumtint", "[0 0 0]");
		kv->SetString("$rimlight", "1");
		kv->SetString("$rimlightboost", "-5");
		kv->SetString("$wireframe", "0");
		m_pMatScuffed = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatScuffed", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$wireframe", "1");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "vgui/white_additive");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[-0.25 1 1]");
		m_pMatWFShaded = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatWFShaded", kv);
	}

	{
		auto kv = new KeyValues("VertexLitGeneric");
		kv->SetString("$wireframe", "1");
		kv->SetString("$basetexture", "vgui/white_additive");
		kv->SetString("$bumpmap", "vgui/white_additive");
		kv->SetString("$envmap", "cubemaps/cubemap_sheen001");
		kv->SetString("$selfillum", "1");
		kv->SetString("$selfillumfresnel", "1");
		kv->SetString("$selfillumfresnelminmaxexp", "[-0.25 1 1]");
		m_pMatWFShiny = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatWFShiny", kv);
	}

	{
		auto kv = new KeyValues("UnlitGeneric");
		kv->SetString("$wireframe", "1");
		kv->SetString("$basetexture", "vgui/white_additive");
		m_pMatWFFlat = g_Interfaces.MatSystem->Create("DME_MAT_m_pMatWFFlat", kv);
	}

	ProxySkins::Init();
}

bool CDMEChams::Render(const DrawModelState_t& pState, const ModelRenderInfo_t& pInfo, matrix3x4* pBoneToWorld)
{
	m_bRendering = false;
	bool foundselfillumtint = false;
	if (ShouldRun())
	{
		m_bRendering = true;

		CBaseEntity* pEntity = g_Interfaces.EntityList->GetClientEntity(pInfo.m_nEntIndex);

		if (pEntity && pEntity->GetClassID() == ETFClassID::CTFViewModel)
		{
			bool bMatWasForced = false;

			if (Vars::Chams::DME::Hands.m_Var)
			{
				g_Interfaces.ModelRender->ForcedMaterialOverride([&]() -> IMaterial*
					{
						switch (Vars::Chams::DME::Hands.m_Var)
						{
						case 1:
						{
							bMatWasForced = true;
							return m_pMatShaded;
						}
						case 2:
						{
							bMatWasForced = true;
							return m_pMatShiny;
						}
						case 3:
						{
							bMatWasForced = true;
							return m_pMatFlat;
						}
						case 4:
						{
							bMatWasForced = true;
							return m_pMatWFShaded;
						}
						case 5:
						{
							bMatWasForced = true;
							return m_pMatWFShiny;
						}
						case 6:
						{
							bMatWasForced = true;
							return m_pMatWFFlat;
						}
						case 7:
						{
							bMatWasForced = true;
							return m_pMatFresnel;
						}
						case 8:
						{
							bMatWasForced = true;
							return m_pMatBrick;
						}
						default: return nullptr;
						}
					}());
			}

			if (bMatWasForced && (Vars::Chams::DME::Hands.m_Var != 7))
			{
				if (Vars::Chams::DME::HandsRainbow.m_Var)
				{
					g_Interfaces.RenderView->SetColorModulation(Color::TOFLOAT(Utils::Rainbow().r),
						Color::TOFLOAT(Utils::Rainbow().g),
						Color::TOFLOAT(Utils::Rainbow().b));
				}
				else
				{
					g_Interfaces.RenderView->SetColorModulation(Color::TOFLOAT(Colors::Hands.r),
						Color::TOFLOAT(Colors::Hands.g),
						Color::TOFLOAT(Colors::Hands.b));
				}
			}

			g_Interfaces.RenderView->SetBlend(Color::TOFLOAT(Colors::Hands.a));

			ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
				ModelRenderHook::DrawModelExecute::index)
				(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
			bMatWasForced = true;
			foundselfillumtint = false;
			if (Vars::Chams::DME::Hands.m_Var == 7)
			{
				IMaterial* mat = m_pMatFresnel;
				IMaterialVar* fresnelSelfillumtint = mat->FindVar(_("$selfillumtint"), &foundselfillumtint);
				if (foundselfillumtint)
				{
					fresnelSelfillumtint->SetVecValue(Color::TOFLOAT(Colors::FresnelBaseHands.r) * 4,
						Color::TOFLOAT(Colors::FresnelBaseHands.g) * 4,
						Color::TOFLOAT(Colors::FresnelBaseHands.b) * 4);
				}
				bool found = false;
				IMaterialVar* envmap = mat->FindVar(_("$envmaptint"), &found);
				if (found)
				{
					envmap->SetVecValue(Color::TOFLOAT(Colors::Hands.r) * 4, Color::TOFLOAT(Colors::Hands.g) * 4,
						Color::TOFLOAT(Colors::Hands.b) * 4);
				}
			}

			if (Vars::Chams::DME::HandsProxySkin.m_Var && bMatWasForced)
			{

				IMaterial* pMaterial = nullptr;
				{
					using namespace ProxySkins;
					switch (Vars::Chams::DME::HandsProxySkin.m_Var) {
					case 1:
						pMaterial = spectrumSplattered;
						break;
					case 2:
						pMaterial = electroSkullsBlue;
						break;
					case 3:
						pMaterial = frozenAurora;
						break;
					case 4:
						pMaterial = jazzy;
						break;
					case 5:
						pMaterial = hana;
						break;
					case 6:
						pMaterial = wtf;
						break;
					case 7:
						pMaterial = ghost;
						break;
					case 8:
						pMaterial = flames;
						break;
					case 9:
						pMaterial = spookwood;
						break;
					case 10:
						pMaterial = edgy;
						break;
					case 11:
						pMaterial = serenity;
						break;
					case 12:
						pMaterial = fade;
						break;
					default: break;
					}
				}
				bool found = false;
				auto pVar = pMaterial->FindVar("$wireframe", &found);
				if (pVar) {
					pVar->SetIntValue(Vars::Chams::DME::HandsProxyWF.m_Var);
				}
				g_Interfaces.RenderView->SetColorModulation(1.0f, 1.0f, 1.0f);
				g_Interfaces.ModelRender->ForcedMaterialOverride(pMaterial);

				ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
					ModelRenderHook::DrawModelExecute::index)
					(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
			}

			if (Vars::Chams::DME::HandsGlowOverlay.m_Var && bMatWasForced)
			{
				// Overlay
				IMaterial* pMaterial = m_pMatScuffed;
				bool found = false;
				bool found2 = false;
				bool found3 = false;
				IMaterialVar* pVar = pMaterial->FindVar(_("$phongtint"), &found);
				if (found)
				{
					if (Vars::Chams::DME::HandsOverlayRainbow.m_Var)
					{
						pVar->SetVecValue(Color::TOFLOAT(Utils::Rainbow().r) * 4,
							Color::TOFLOAT(Utils::Rainbow().g) * 4,
							Color::TOFLOAT(Utils::Rainbow().b) * 4);
					}
					else
					{
						pVar->SetVecValue(Color::TOFLOAT(Colors::HandsOverlay.r),
							Color::TOFLOAT(Colors::HandsOverlay.g),
							Color::TOFLOAT(Colors::HandsOverlay.b));
					}
				}
				IMaterialVar* pVar2 = pMaterial->FindVar(_("$envmaptint"), &found2);
				if (found2)
				{
					if (Vars::Chams::DME::HandsOverlayRainbow.m_Var)
					{
						pVar2->SetVecValue(Color::TOFLOAT(Utils::Rainbow().r) * 4,
							Color::TOFLOAT(Utils::Rainbow().g) * 4,
							Color::TOFLOAT(Utils::Rainbow().b) * 4);
					}
					else
					{
						pVar2->SetVecValue(Color::TOFLOAT(Colors::HandsOverlay.r),
							Color::TOFLOAT(Colors::HandsOverlay.g),
							Color::TOFLOAT(Colors::HandsOverlay.b));
					}
				}
				bool foundfresnelranges = false;
				IMaterialVar* phongfresnelranges = pMaterial->FindVar("$phongfresnelranges", &foundfresnelranges);
				if (foundfresnelranges)
				{
					phongfresnelranges->SetVecValue(0, 0.5 / Vars::Chams::DME::HandsGlowAmount.m_Var, 10 / Vars::Chams::DME::HandsGlowAmount.m_Var);
				}
				pMaterial->SetMaterialVarFlag(MATERIAL_VAR_WIREFRAME, Vars::Chams::DME::HandsGlowOverlay.m_Var == 2);

				g_Interfaces.ModelRender->ForcedMaterialOverride(pMaterial);

				ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
					ModelRenderHook::DrawModelExecute::index)
					(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
			}


			if (bMatWasForced)
			{
				g_Interfaces.ModelRender->ForcedMaterialOverride(nullptr);
				g_Interfaces.RenderView->SetColorModulation(1.0f, 1.0f, 1.0f);
			}

			g_Interfaces.RenderView->SetBlend(1.0f);

			return true;
		}

		if (!pEntity && pInfo.m_pModel)
		{
			std::string_view szModelName(g_Interfaces.ModelInfo->GetModelName(pInfo.m_pModel));

			if (szModelName.find(_("weapon")) != std::string_view::npos
				&& szModelName.find(_("arrow")) == std::string_view::npos
				&& szModelName.find(_("w_syringe")) == std::string_view::npos
				&& szModelName.find(_("nail")) == std::string_view::npos
				&& szModelName.find(_("shell")) == std::string_view::npos
				&& szModelName.find(_("parachute")) == std::string_view::npos
				&& szModelName.find(_("buffbanner")) == std::string_view::npos
				&& szModelName.find(_("shogun_warbanner")) == std::string_view::npos
				&& szModelName.find(_("targe")) == std::string_view::npos //same as world model, can't filter
				&& szModelName.find(_("shield")) == std::string_view::npos //same as world model, can't filter
				&& szModelName.find(_("repair_claw")) == std::string_view::npos)
			{
				//g_Interfaces.DebugOverlay->AddTextOverlay(pInfo.m_vOrigin, 0.003f, "%hs", szModelName);

				bool bMatWasForced = false;

				int _case = 0;

				if (Vars::Chams::DME::Weapon.m_Var)
				{
					g_Interfaces.ModelRender->ForcedMaterialOverride([&]() -> IMaterial*
						{
							switch (Vars::Chams::DME::Weapon.m_Var)
							{
							case 1:
							{
								bMatWasForced = true;
								return m_pMatShaded;
							}
							case 2:
							{
								bMatWasForced = true;
								return m_pMatShiny;
							}
							case 3:
							{
								bMatWasForced = true;
								return m_pMatFlat;
							}
							case 4:
							{
								bMatWasForced = true;
								return m_pMatWFShaded;
							}
							case 5:
							{
								bMatWasForced = true;
								return m_pMatWFShiny;
							}
							case 6:
							{
								bMatWasForced = true;
								return m_pMatWFFlat;
							}
							case 7:
							{
								bMatWasForced = true;
								return m_pMatFresnel2;
							}
							case 8:
							{
								bMatWasForced = true;
								return m_pMatBrick;
							}
							default: return nullptr;
							}
						}());
				}

				if (bMatWasForced && (Vars::Chams::DME::Weapon.m_Var != 7))
				{
					if (Vars::Chams::DME::WeaponRainbow.m_Var)
					{
						g_Interfaces.RenderView->SetColorModulation(Color::TOFLOAT(Utils::Rainbow().r),
							Color::TOFLOAT(Utils::Rainbow().g),
							Color::TOFLOAT(Utils::Rainbow().b));
					}
					else
					{
						g_Interfaces.RenderView->SetColorModulation(Color::TOFLOAT(Colors::Weapon.r),
							Color::TOFLOAT(Colors::Weapon.g),
							Color::TOFLOAT(Colors::Weapon.b));
					}
				}

				g_Interfaces.RenderView->SetBlend(Color::TOFLOAT(Colors::Weapon.a));

				ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
					ModelRenderHook::DrawModelExecute::index) // base
					(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
				bMatWasForced = true;
				foundselfillumtint = false;
				if (Vars::Chams::DME::Weapon.m_Var == 7)
				{
					IMaterial* mat = m_pMatFresnel2;
					IMaterialVar* fresnelSelfillumtint = mat->FindVar(_("$selfillumtint"), &foundselfillumtint);
					if (foundselfillumtint)
					{
						fresnelSelfillumtint->SetVecValue(Color::TOFLOAT(Colors::FresnelBaseWeps.r) * 4,
							Color::TOFLOAT(Colors::FresnelBaseWeps.g) * 4,
							Color::TOFLOAT(Colors::FresnelBaseWeps.b) * 4);
					}
					bool found = false;
					IMaterialVar* envmap = mat->FindVar(_("$envmaptint"), &found);
					if (found)
					{
						envmap->SetVecValue(Color::TOFLOAT(Colors::Weapon.r) * 4, Color::TOFLOAT(Colors::Weapon.g) * 4,
							Color::TOFLOAT(Colors::Weapon.b) * 4);
					}
				}

				if (Vars::Chams::DME::WeaponsProxySkin.m_Var && bMatWasForced)
				{

					IMaterial* pMaterial = nullptr;
					{
						using namespace ProxySkins;
						switch (Vars::Chams::DME::WeaponsProxySkin.m_Var) {
						case 1:
							pMaterial = spectrumSplattered;
							break;
						case 2:
							pMaterial = electroSkullsBlue;
							break;
						case 3:
							pMaterial = frozenAurora;
							break;
						case 4:
							pMaterial = jazzy;
							break;
						case 5:
							pMaterial = hana;
							break;
						case 6:
							pMaterial = wtf;
							break;
						case 7:
							pMaterial = ghost;
							break;
						case 8:
							pMaterial = flames;
							break;
						case 9:
							pMaterial = spookwood;
							break;
						case 10:
							pMaterial = edgy;
							break;
						case 11:
							pMaterial = serenity;
							break;
						case 12:
							pMaterial = fade;
							break;
						default: break;
						}
					}
					bool found = false;
					auto pVar = pMaterial->FindVar("$wireframe", &found);
					if (pVar) {
						pVar->SetIntValue(Vars::Chams::DME::WeaponsProxyWF.m_Var);
					}
					g_Interfaces.RenderView->SetColorModulation(1.0f, 1.0f, 1.0f);
					g_Interfaces.ModelRender->ForcedMaterialOverride(pMaterial);

					ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
						ModelRenderHook::DrawModelExecute::index)
						(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
				}

				if (Vars::Chams::DME::WeaponGlowOverlay.m_Var && bMatWasForced)
				{
					IMaterial* pMaterial = m_pMatScuffed;
					bool found = false;
					bool found2 = false;
					bool found3 = false;
					IMaterialVar* pVar = pMaterial->FindVar(_("$phongtint"), &found);
					if (found)
					{
						if (Vars::Chams::DME::WeaponOverlayRainbow.m_Var)
						{
							pVar->SetVecValue(Color::TOFLOAT(Utils::Rainbow().r) * 4,
								Color::TOFLOAT(Utils::Rainbow().g) * 4,
								Color::TOFLOAT(Utils::Rainbow().b) * 4);
						}
						else
						{
							pVar->SetVecValue(Color::TOFLOAT(Colors::WeaponOverlay.r),
								Color::TOFLOAT(Colors::WeaponOverlay.g),
								Color::TOFLOAT(Colors::WeaponOverlay.b));
						}
					}
					IMaterialVar* pVar2 = pMaterial->FindVar(_("$envmaptint"), &found2);
					if (found2)
					{
						if (Vars::Chams::DME::WeaponOverlayRainbow.m_Var)
						{
							pVar2->SetVecValue(Color::TOFLOAT(Utils::Rainbow().r) * 4,
								Color::TOFLOAT(Utils::Rainbow().g) * 4,
								Color::TOFLOAT(Utils::Rainbow().b) * 4);
						}
						else
						{
							pVar2->SetVecValue(Color::TOFLOAT(Colors::WeaponOverlay.r),
								Color::TOFLOAT(Colors::WeaponOverlay.g),
								Color::TOFLOAT(Colors::WeaponOverlay.b));
						}
					}
					bool foundfresnelranges = false;
					IMaterialVar* phongfresnelranges = pMaterial->FindVar("$phongfresnelranges", &foundfresnelranges);
					if (foundfresnelranges)
					{
						phongfresnelranges->SetVecValue(0, 0.5 / Vars::Chams::DME::WeaponGlowAmount.m_Var, 10 / Vars::Chams::DME::WeaponGlowAmount.m_Var);
					}
					pMaterial->SetMaterialVarFlag(MATERIAL_VAR_WIREFRAME, Vars::Chams::DME::WeaponGlowOverlay.m_Var == 2);

					g_Interfaces.ModelRender->ForcedMaterialOverride(pMaterial);

					ModelRenderHook::Table.Original<ModelRenderHook::DrawModelExecute::fn>(
						ModelRenderHook::DrawModelExecute::index) //overlay
						(g_Interfaces.ModelRender, pState, pInfo, pBoneToWorld);
				}

				if (bMatWasForced)
				{
					g_Interfaces.ModelRender->ForcedMaterialOverride(nullptr);
					g_Interfaces.RenderView->SetColorModulation(1.0f, 1.0f, 1.0f);
				}

				g_Interfaces.RenderView->SetBlend(1.0f);

				return true;
			}
		}

		m_bRendering = false;
	}

	return false;
}
