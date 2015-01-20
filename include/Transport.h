/* 
 * File:   Transport.h
 * Author: dev
 *
 * Created on 20 January, 2015, 8:51 PM
 */

#ifndef TRANSPORT_H
#define	TRANSPORT_H

#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>
#include <memory>
#include <CommonTypeDefs.h>

namespace genericChannel {
    
    class Transport : private boost::noncopyable {
        
    public:
        
        typedef boost::shared_ptr<Transport> Ptr ;
        
        virtual void start() = 0 ;
        virtual void stop() = 0 ;
        virtual void send(const CommonTypeDefs::Buffer& buffer) = 0 ;
        virtual ~Transport() {
            
        }
    };
    
}


#endif	/* TRANSPORT_H */

