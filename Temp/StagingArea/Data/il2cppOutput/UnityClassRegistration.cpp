template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; 
class AudioClip; 
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 70 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. Renderer
	RegisterClass<Renderer>();
	//6. GUIElement
	RegisterClass<GUIElement>();
	//7. GUILayer
	RegisterClass<GUILayer>();
	//8. Mesh
	RegisterClass<Mesh>();
	//9. NamedObject
	RegisterClass<NamedObject>();
	//10. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//11. Shader
	RegisterClass<Shader>();
	//12. Material
	RegisterClass<Material>();
	//13. Sprite
	RegisterClass<Sprite>();
	//14. Texture
	RegisterClass<Texture>();
	//15. Texture2D
	RegisterClass<Texture2D>();
	//16. RenderTexture
	RegisterClass<RenderTexture>();
	//17. Transform
	RegisterClass<Transform>();
	//18. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//19. Rigidbody
	RegisterClass<Rigidbody>();
	//20. Animator
	RegisterClass<Animator>();
	//21. Collider
	RegisterClass<Collider>();
	//22. PreloadData
	RegisterClass<PreloadData>();
	//23. Cubemap
	RegisterClass<Cubemap>();
	//24. Texture3D
	RegisterClass<Texture3D>();
	//25. Texture2DArray
	RegisterClass<Texture2DArray>();
	//26. MeshFilter
	RegisterClass<MeshFilter>();
	//27. MeshRenderer
	RegisterClass<MeshRenderer>();
	//28. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//29. MonoScript
	RegisterClass<MonoScript>();
	//30. TextAsset
	RegisterClass<TextAsset>();
	//31. GameManager
	RegisterClass<GameManager>();
	//32. BuildSettings
	RegisterClass<BuildSettings>();
	//33. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//34. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//35. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//36. InputManager
	RegisterClass<InputManager>();
	//37. PlayerSettings
	RegisterClass<PlayerSettings>();
	//38. ResourceManager
	RegisterClass<ResourceManager>();
	//39. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//40. ScriptMapper
	RegisterClass<ScriptMapper>();
	//41. TagManager
	RegisterClass<TagManager>();
	//42. TimeManager
	RegisterClass<TimeManager>();
	//43. QualitySettings
	RegisterClass<QualitySettings>();
	//44. MonoManager
	RegisterClass<MonoManager>();
	//45. AudioManager
	RegisterClass<AudioManager>();
	//46. PhysicsManager
	RegisterClass<PhysicsManager>();
	//47. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//48. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//49. BoxCollider
	RegisterClass<BoxCollider>();
	//50. FlareLayer
	RegisterClass<FlareLayer>();
	//51. LevelGameManager
	RegisterClass<LevelGameManager>();
	//52. Light
	RegisterClass<Light>();
	//53. LightProbes
	RegisterClass<LightProbes>();
	//54. LightmapSettings
	RegisterClass<LightmapSettings>();
	//55. RenderSettings
	RegisterClass<RenderSettings>();
	//56. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//57. UI::Canvas
	RegisterClass<UI::Canvas>();
	//58. SphereCollider
	RegisterClass<SphereCollider>();
	//59. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//60. MeshCollider
	RegisterClass<MeshCollider>();
	//61. AudioListener
	RegisterClass<AudioListener>();
	//62. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//63. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//64. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//65. AnimationClip
	RegisterClass<AnimationClip>();
	//66. Motion
	RegisterClass<Motion>();
	//67. AnimatorController
	RegisterClass<AnimatorController>();
	//68. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//69. Avatar
	RegisterClass<Avatar>();

}
