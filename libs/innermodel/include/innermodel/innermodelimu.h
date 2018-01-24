/*
 * Copyright 2016 <copyright holder> <email>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#ifndef INNERMODELIMU_H
#define INNERMODELIMU_H

#include <innermodel/innermodelnode.h>

class InnerModelIMU : public InnerModelNode
{
	public:
			InnerModelIMU(QString id_, uint32_t _port, InnerModelNode *parent_=NULL);
		void save(QTextStream &out, int tabs);
		void print(bool verbose);
		void update();
		virtual InnerModelNode *copyNode(THash hash, InnerModelNode *parent);
		uint32_t getPort() const	{ Lock lock(mutex); return port; }
	
	private:
		uint32_t port;
};


#endif // INNERMODELIMU_H
