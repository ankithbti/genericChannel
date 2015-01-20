/* 
 * File:   HtmlMessage.h
 * Author: dev
 *
 * Created on 17 January, 2015, 2:54 PM
 */

#ifndef HTMLMESSAGE_H
#define	HTMLMESSAGE_H

#include "Message.h"
#include <vector>

namespace messageapi {
    
    class HtmlMessage : public Message {
        
    public:
        
        typedef boost::shared_ptr<HtmlMessage> Ptr ;
        typedef boost::shared_ptr<const HtmlMessage> ConstPtr ;
        
    protected:
        
        std::vector<std::string> cssFiles_ ;
        std::vector<std::string> jsFiles_ ;
        std::string title_ ;
        
    public:
        
        void addFooter(const std::string& footer);
        void addHeader(const std::string& header);
        void addBody(const std::string& body);
        void addCssFile(const std::string& cssFile);
        void assJsFile(const std::string& jsFile);
        void addTitle(const std::string& title);
        
    };
    
}

#endif	/* HTMLMESSAGE_H */

