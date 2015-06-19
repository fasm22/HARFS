/*
 * HARFS_Disk.h
 *
 *  Created on: Jun 18, 2015
 *      Author: tvlenin
 */

#ifndef SRC_COM_HARFS_LOGIC_HARFS_DISK_H_
#define SRC_COM_HARFS_LOGIC_HARFS_DISK_H_
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include "../com.HARFS.DataStructures/LinkedList.h"
#include "../com.HARFS.DataAccess/DiskConstants.h"
#include "../com.HARFS.MemoryManager/StorageBlock.h"
using namespace std;
class HARFS_Disk{

public:
	HARFS_Disk();
	void createStorageBlock(string pData);
	void listStorageBlock();
	void deleteStorageBlock();
	void defineStorageBlock();
	void saveRecord();
	void deleteRecord();
	void SearchRecord();
	void getRecord();
	void newUser();
	void linkUserToStorageBlock();
	string createUID(string pData);
private:
	LinkedList <StorageBlock*> *listStorageBlocks = new LinkedList <StorageBlock*>();


};



#endif /* SRC_COM_HARFS_LOGIC_HARFS_DISK_H_ */