// getDerivedEntity.hpp - Declares template for retrieving derived entities

#ifndef __DERIVEDENTITY_HPP__
#define __DERIVEDENTITY_HPP__

	template <class Type>
	Type EntityManager::getDerivedEntity(std::string id) {

	return static_cast<Type>(getEntity(id));

	}

#endif
