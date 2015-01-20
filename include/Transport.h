/* 
 * File:   Transport.h
 * Author: dev
 *
 * Created on 20 January, 2015, 8:51 PM
 */

#ifndef TRANSPORT_H
#define	TRANSPORT_H

#include <boost/noncopyable.hpp>
#include <memory>

namespace transportapi {
    
    class Transport : private boost::noncopyable {
        
    public:
        
        typedef std::shared_ptr<Transport> Ptr ;
        
        
        
        
        
    };
    
}


#endif	/* TRANSPORT_H */

