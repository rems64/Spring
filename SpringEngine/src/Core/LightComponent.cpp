#include <SpringEngine/Core/LightComponent.hpp>
#include <SpringEngine/Core/Actor.hpp>
#include <SpringEngine/Core/Scene.hpp>

namespace SE
{
	LightComponent::LightComponent(SceneComponent* owner) : SceneComponent(owner), m_color(1.0f, 1.0f, 1.0f)
	{
		setName("Default light");
		addEditorProperty({ SE_EDITOR_PROPERTY_TYPE::ColorInput, "Color", (void*)&m_color });
	}

	LightComponent::~LightComponent()
	{
	}

	void LightComponent::postDestroy()
	{
		getActorOwner()->getScene()->unregisterLight(this);
	}
}