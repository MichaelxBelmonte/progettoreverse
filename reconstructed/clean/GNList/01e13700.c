// Function: FUN_01e13700
// Address: 01e13700
// Size: 1688 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e13700(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t *this_ptr;
  undefined7 uVar5;
  uint64_t uVar4;
  bool bVar6;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_027f32e8;
  if (g_027f32e8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = (undefined7)((uint64_t)local_40 >> 8);
  if (cVar2 != '\0') {
    uVar4 = CONCAT71(uVar5,1);
    if (param_2 != 0) {
      FUN_01caeae0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        FUN_01caeb00();
        FUN_00d8ede0();
        FUN_01e125e0();
      }
      else {
        FUN_01caeae0();
        (**(code **)(*local_50 + 400))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e125e0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    goto LAB_01e13d83;
  }
  FUN_01cae990();
  lVar1 = g_027e7ca0;
  if (g_027e7ca0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01cae990();
    lVar1 = g_02725a10;
    if (g_02725a10 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01cae990();
      lVar1 = g_027f2a20;
      if (g_027f2a20 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_01cae990();
        lVar1 = g_026de8c8;
        if (g_026de8c8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_01cae990();
          lVar1 = g_026de900;
          if (g_026de900 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*local_40 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            uVar3 = FUN_01e47f50(param_1,param_2);
            uVar4 = (uint64_t)uVar3;
            goto LAB_01e13d83;
          }
          if (*(char *)((int64_t)this_ptr + 0x161) == '\0') {
            FUN_01f27fe0();
            uVar3 = (**(code **)(*local_40 + 0x6c0))();
            uVar4 = (uint64_t)uVar3;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            param_2 = (byte)uVar3 & param_2;
          }
          else {
            uVar4 = CONCAT71(uVar5,1);
          }
          if (param_2 == 0) goto LAB_01e13d83;
          (**(code **)(*this_ptr + 0x938))();
        }
        else {
          bVar6 = (char)this_ptr[0x2a] == '\0';
          uVar4 = CONCAT71(uVar5,!bVar6);
          if ((bVar6) || (param_2 == 0)) goto LAB_01e13d83;
          (**(code **)(*this_ptr + 0x928))();
        }
      }
      else {
        uVar4 = CONCAT71(uVar5,0 < (int)this_ptr[0x2d]);
        if (((int)this_ptr[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    else {
      if ((char)this_ptr[0x2a] == '\0') goto LAB_01e13970;
      uVar4 = CONCAT71(uVar5,0 < (int)this_ptr[0x2d]);
      if (((int)this_ptr[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
      (**(code **)(*this_ptr + 0x930))();
    }
  }
  else {
    if ((char)this_ptr[0x2a] == '\0') {
LAB_01e13970:
      uVar4 = 0;
      goto LAB_01e13d83;
    }
    uVar4 = CONCAT71(uVar5,0 < (int)this_ptr[0x2d]);
    if (((int)this_ptr[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
    (**(code **)(*this_ptr + 0x920))();
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_01e13d83:
  return uVar4 & 0xffffffff;
}

