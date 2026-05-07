// Function: FUN_01e2a9a0
// Address: 01e2a9a0
// Size: 504 bytes
// Class: GNUIDesignerDoc
// === GNUIDesignerDoc properties ===
//                   _localizer
//                   _connections
//                   _objectNames
//                   _objectCustomClassNames
//                   _objectsToRename
//                   _objectCustomAttributes


int64_t * FUN_01e2a9a0(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (g_028b95a0 == 0) {
    bVar2 = false;
LAB_01e2aa92:
    local_88 = *arg1;
    local_80 = 0;
    FUN_01f27fe0();
    (**(code **)(*local_58 + 0x610))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = 1;
    FUN_01e2a220(param_1,local_78);
    if (local_68 == 0) {
      lVar1 = 0;
    }
    else {
      bVar2 = true;
      lVar1 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar2) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    uVar3 = (uint64_t)*(uint *)(g_028b95a0 + 0xc);
    bVar2 = false;
    do {
      if ((int)uVar3 < 1) goto LAB_01e2aa92;
      lVar1 = *(int64_t *)(*(int64_t *)(g_028b95a0 + 0x10) + -8 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_90 = 1;
      local_98 = lVar1;
      FUN_01e2a220(param_1,&local_98);
      lVar4 = local_68;
      if (local_68 == 0) {
        lVar4 = 0;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = uVar3 - 1;
    } while (lVar4 == 0);
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

