/* 
 * File:   Message.h
 * Author: dev
 *
 * Created on 9 January, 2015, 12:21 AM
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>

namespace genericChannel {
    
    class Message : private boost::noncopyable {
        
    public:
        typedef boost::shared_ptr<Message> ShrdPtr ;
        typedef boost::shared_ptr<const Message> ConstShrdPtr ; 
        
        virtual void convertToString(std::string& str) = 0 ;
        virtual ~Message() { }
    };
}

#endif	/* MESSAGE_H */

