// Function: FUN_00abe77b
// Address: 00abe77b
// Size: 1030 bytes
// Class: OsSignatureMac
// String references:
//   "What? We got a zero MAC address!"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/platform/mac/G...
//   "vector<uint8_t> pace::GetPrimaryMACAddress()"
//   "IOEthernetInterface"
//   "Couldn't find a service matching kIOEthernetInterfaceClass."
//   "void pace::FindEthernetInterfaces(io_iterator_t *)"
//   "CFDictionaryCreateMutable returned a NULL dictionary."
//   "IOServiceGetMatchingServices returned 0x%08x."
//   "Specified buffer size of %d is not big enough to hold an Ethernet address."
//   "void pace::GetMACAddress(io_iterator_t, UInt8 *, UInt8)"
//   "IOService"
//   "IORegistryEntryGetParentEntry returned 0x%08x."

int64_t * FUN_00abe77b(uint64_t param_1)

{
  uint64_t uVar1;
  size_t sVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t *this_ptr;
  int64_t local_88;
  int64_t local_80;
  byte *local_70;
  code *local_68;
  code *local_60;
  char *local_58;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  byte local_31;
  
  local_70 = (byte *)((uint64_t)local_70 & 0xffffffffffffff00);
  FUN_0094fbb0(param_1,&local_70);
  local_70 = (byte *)((uint64_t)local_70 & 0xffffffffffffff00);
  FUN_0094fbb0();
  lVar4 = _IOServiceMatching();
  if (lVar4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0x8b);
    FUN_009cbbdb();
  }
  uVar1 = *(void*)PTR__kCFAllocatorDefault_024a98d8;
  lVar4 = _CFDictionaryCreateMutable
                    (PTR__kCFTypeDictionaryValueCallBacks_024a9908,
                     PTR__kCFTypeDictionaryKeyCallBacks_024a9900);
  if (lVar4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0xa6);
    FUN_009cbbdb();
  }
  _CFDictionarySetValue();
  _CFDictionarySetValue();
  _CFRelease();
  sVar2 = (size_t)&local_4c;
  local_3c = _IOServiceGetMatchingServices();
  if (local_3c != 0) {
    FUN_00925fd0();
    sVar2 = FUN_00926010();
    local_70 = (byte *)&local_3c;
    local_68 = FUN_009cac80;
    local_60 = FUN_009cefa0;
    FUN_00983230();
    FUN_00928ab0("void pace::FindEthernetInterfaces(io_iterator_t *)",0xb7);
    FUN_009cbbdb();
  }
  local_38 = local_4c;
  pcVar5 = (char *)*this_ptr;
  local_31 = (char)(int)this_ptr[1] - (char)pcVar5;
  local_40 = 5;
  local_58 = pcVar5;
  if (local_31 < 6) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = &local_31;
    local_68 = FUN_0094fb68;
    local_60 = FUN_0094fb6e;
    FUN_00983230();
    pcVar5 = "void pace::GetMACAddress(io_iterator_t, UInt8 *, UInt8)";
    sVar2 = 199;
    FUN_00928ab0();
    FUN_009cd338();
  }
  _bzero(pcVar5,sVar2);
  while( true ) {
    iVar3 = _IOIteratorNext();
    if (iVar3 == 0) break;
    local_40 = _IORegistryEntryGetParentEntry();
    if (local_40 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = (byte *)&local_40;
      local_68 = FUN_009cac80;
      local_60 = FUN_009cefa0;
      FUN_00983230();
      FUN_00928ab0("void pace::GetMACAddress(io_iterator_t, UInt8 *, UInt8)",0xe7);
      FUN_009cbbdb();
    }
    iVar3 = local_3c;
    lVar4 = _IORegistryEntryCreateCFProperty(0,uVar1);
    if (lVar4 != 0) {
      _CFDataGetBytes(local_58,6);
      _CFRelease();
    }
    if (iVar3 != 0) {
      _IOObjectRelease();
    }
    _IOObjectRelease();
  }
  pcVar5 = (char *)(local_80 - local_88);
  if (pcVar5 == (char *)(this_ptr[1] - *this_ptr)) {
    if (local_88 != local_80) {
      pcVar6 = (char *)0x0;
      do {
        if (pcVar6[local_88] != pcVar6[*this_ptr]) goto LAB_00abeb50;
        pcVar6 = pcVar6 + 1;
      } while (pcVar5 != pcVar6);
    }
    FUN_00925fd0();
    FUN_00926010();
    pcVar5 = "vector<uint8_t> pace::GetPrimaryMACAddress()";
    FUN_00928ab0("vector<uint8_t> pace::GetPrimaryMACAddress()",0x139);
    FUN_009cbbdb();
  }
LAB_00abeb50:
  if (local_38 != 0) {
    _IOObjectRelease();
  }
  if (local_88 != 0) {
    operator_delete(pcVar5);
  }
  return this_ptr;
}

