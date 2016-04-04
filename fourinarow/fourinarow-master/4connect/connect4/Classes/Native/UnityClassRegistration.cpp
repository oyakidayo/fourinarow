struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

}

void RegisterAllClasses()
{
	//Total: 56 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//15. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//20. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//21. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//22. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//23. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//24. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//25. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//26. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//27. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//28. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//29. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//30. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//31. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//32. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//33. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//34. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//35. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//38. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//39. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//42. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//43. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//48. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//49. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//50. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//51. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//52. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//53. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//54. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
