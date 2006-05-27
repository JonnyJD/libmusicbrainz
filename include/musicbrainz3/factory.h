/*
 * MusicBrainz -- The Internet music metadatabase
 *
 * Copyright (C) 2006 Lukas Lalinsky
 *  
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
 
#ifndef __MUSICBRAINZ3_FACTORY_H__
#define __MUSICBRAINZ3_FACTORY_H__

#include <musicbrainz3/model.h>

namespace MusicBrainz
{

    /**
     * A factory to instantiate classes from the domain model. 
     */
    class MB_API IFactory 
    {
    public:
    	virtual Artist *newArtist() = 0;
    	virtual ArtistAlias *newArtistAlias() = 0;
    	virtual Disc *newDisc() = 0;
    	virtual Track *newTrack() = 0;
    	virtual Relation *newRelation() = 0;
    	virtual Release *newRelease() = 0;
    	virtual ReleaseEvent *newReleaseEvent() = 0;
    	virtual User *newUser() = 0;
    };
    
    /**
     * A factory to instantiate classes from the domain model.
	 *
	 * This factory may be used to create objects from musicbrainz3/model.h 
     */
    class MB_API DefaultFactory : public IFactory 
    {
    public:
		virtual Artist *newArtist() { return new Artist(); };
    	virtual ArtistAlias *newArtistAlias() { return new ArtistAlias(); };
    	virtual Disc *newDisc() { return new Disc(); };
    	virtual Track *newTrack() { return new Track(); };
    	virtual Relation *newRelation() { return new Relation(); };
    	virtual Release *newRelease() { return new Release(); };
    	virtual ReleaseEvent *newReleaseEvent() { return new ReleaseEvent(); };
    	virtual User *newUser() { return new User(); };
    };
    
}

#endif