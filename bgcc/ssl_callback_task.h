/***************************************************************************
 * 
 * Copyright (c) 2013 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 
 
/**
 * @file callback_thread.h
 * @author chenyuzhen(chenyuzhen)
 * @date 2013/04/25 17:23:44
 * @version 1.0.0 
 * @brief 
 *  
 **/


#ifndef  __CALLBACK_TASK_H_
#define  __CALLBACK_TASK_H_

#include <string>

#include "runnable.h"
#include "selector.h"
#include "ssl_client_socket.h"
#include "service_manager.h"
#include "binary_protocol.h"

namespace bgcc{

	class SSLCallBackTask : public Runnable{
		public:
			SSLCallBackTask(const std::string server, int32_t port,
				   const std::string proxy, ServiceManager *sm,
				   Selector *selector);

			~SSLCallBackTask();

			int32_t operator()(const bool *isstopped, void *param=NULL);

		private:
			bool Register();

		private:
			const static int32_t DEFAULT_WAIT_TIMEOUT;
			
			std::string _server;
			int32_t _port;
			std::string _prx;
			ServiceManager *_sm;

			Selector *_pselector;
			
			char _buf_head[HEAD_SIZE];
			char _buf_body[MAX_DEFAULT_LEN];
	
			SharedPointer<SSLClientSocket> _connect;
			SharedPointer<BinaryProtocol> _proto;
			SharedPointer<IProcessor> _processor;
	};
}


#endif  //__CALLBACK_THREAD_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
