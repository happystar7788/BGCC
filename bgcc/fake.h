/***************************************************************************
 * 
 * Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 
 
/**
 * @file binary_protocol_fake.h
 * @author chenyuzhen(chenyuzhen)
 * @date 2013/04/17 12:02:30
 * @version 1.0.0 
 * @brief 
 *  
 **/


#ifndef  __BINARY_PROTOCOL_FAKE_H_
#define  __BINARY_PROTOCOL_FAKE_H_

#define REG_PROCESSOR	"bgcc::BaseProcessor_enroll"
#define REG_FUNC		"__enroll"

#define DEF_SERVICE		"._baseservice_2012"
#define DEF_PROCESSOR	"xx"
#define DEF_FUNC		"__service_not_found"
#define TICKET_FUNC		"__get_ticket_id"
#define TICKET_PROC		"xxx"
 
#include <string>

#include "bgcc_common.h"
namespace bgcc{
	class Fake{
		public:
			static bool fake_default_body(char *pbody, int32_t &body_len);
			static bool is_reg_proc(const std::string& funcname);
	};
}
















#endif  //__BINARY_PROTOCOL_FAKE_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
