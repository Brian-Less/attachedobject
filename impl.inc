
#include <YSI_Coding\y_hooks>

// 0,18947, 2,0.148998, -0.014000,-0.001001,0.000000,179.400024,-154.400009,1.000000,1.000000,1.070000

YCMD:test(playerid, params[], help)
{
    SetPlayerAttachedObject(playerid, 1,3528,2,0.040998,0.094000,-0.032000,-274.799987,-280.500061,4.999971,0.087999,0.084999,0.075000); // ËÑÇÁÑ§¡Ã
    SetPlayerAttachedObject(playerid, 0, 18680, 1, -0.374498, -0.010300, -1.513474, 0.000000, 0.000000, 0.000000, 1.000000, 1.000000, 1.000000 );
    SetPlayerAttachedObject(playerid, 2 , 3528, 3, 0.015999, 0.019000, 0.047999, -34.300006, -68.300010, -7.800005, 0.088000, 0.068000, 0.075000);//äËÅèÁÑ§¡Ã
    SetPlayerAttachedObject(playerid, 3 , 3528, 4, 0.0049, 0.0789, -0.0440, -155.6999, -69.1000, 5.6000, 0.0879, 0.0680, 0.0750, 0, 0); // "kasatt" by Super_WHITE. (Skin:45)
    SetPlayerAttachedObject(playerid, 4 , 3026, 1, -0.157000, 0.038999, 0.000000, 178.800003, 0.000000, -0.899998, 1.000000, 1.000000, 1.000000);//à¡ÃÒÐË¹éÒ
    SetPlayerAttachedObject(playerid, 5 , 3026, 1, -0.149000, -0.059999, -0.003999, 0.000000, 0.000000, 0.000000, 1.000000, 1.000000, 1.000000);//à¡ÃÒÐËÅÑ§
    SetPlayerAttachedObject(playerid, 6, 18656, 1, 0.2560, -0.0630, -0.0020, -92.0000, -32.7999, 86.2999, 0.1640, 0.0289, 0.0010, 0, 0); // "zuzzzz" by  (Skin:45)
    return 1;
}

YCMD:setao(playerid, params[], help)
{
    // 0-9, id, boneId
    new index, modelID, boneID, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ;
	if (sscanf(params, "p<,>iiiF(0.0)F(0.0)F(0.0)F(0.0)F(0.0)F(0.0)F(1.0)F(1.0)F(1.0)", index, modelID, boneID, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ))
	{
        RemovePlayerAttachedObject(playerid, index);
		return SendSyntaxMsg(playerid, "/setao index, modelid, boneid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ");
	}

    printf("CMD:setao -> SetPlayerAttachedObject(playerid,%i,%i,%i,%f,%f,%f,%f,%f,%f,%f,%f,%f);", index, modelID, boneID, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ);
    SetPlayerAttachedObject(playerid, index, modelID, boneID, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ);
    EditAttachedObject(playerid, index);
    return 1;
}

YCMD:editao(playerid, params[], help)
{
    new index;
	if (sscanf(params, "i", index))
	{
		return SendSyntaxMsg(playerid, "/editao [index]");
	}
    EditAttachedObject(playerid, index);
    return 1;
}

public OnPlayerEditAttachedObject(playerid, response, index, modelid, boneid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ)
{
    printf("OnPlayerEditAttachedObject -> SetPlayerAttachedObject(playerid,%i,%i,%i,%f,%f,%f,%f,%f,%f,%f,%f,%f);", index, modelid, boneid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ);
    return 1;
}
