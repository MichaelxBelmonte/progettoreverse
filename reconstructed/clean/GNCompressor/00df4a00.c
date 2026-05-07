// Function: FUN_00df4a00
// Address: 00df4a00
// Size: 525 bytes
// Class: GNCompressor
// String references:
//   "BZh"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df4a00(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  void*puVar7;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  iVar5 = *(int *)(*param_2 + 0x18);
  iVar3 = FUN_00e7dde0();
  uVar4 = extraout_XMM0_Da;
  if (iVar3 <= iVar5) {
    uVar4 = FUN_00e7dde0();
    iVar5 = FUN_00e7de00(extraout_XMM0_Da_00,uVar4);
    uVar4 = extraout_XMM0_Da_01;
    if (iVar5 == 0) {
      FUN_00e9eb80(0,0);
      (*0x0)(*(void*)(*param_2 + 0x10),*(void*)(*param_2 + 0x18));
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      local_38 = puVar7;
      do {
        uVar6 = FUN_00e9ecb0();
        if ((uVar6 & 0xfffffffb) == 0) {
          FUN_00c92190(extraout_XMM0_Da_02,0);
        }
      } while (uVar6 == 0);
      FUN_00e9fd30();
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  lVar1 = g_02784840;
  if (g_02784840 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar2 = g_02784848;
  if (g_02784848 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00df3740(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

