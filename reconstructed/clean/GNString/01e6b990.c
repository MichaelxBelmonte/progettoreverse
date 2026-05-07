// Function: FUN_01e6b990
// Address: 01e6b990
// Size: 892 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01e6b990(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  uint64_t local_40;
  uint8_t local_38;
  
  FUN_01cae990();
  lVar1 = g_027f4218;
  if (g_027f4218 != 0) {
    FUN_00d50b00();
  }
  uVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar2 == '\0') {
    FUN_01cae990();
    lVar1 = g_027f4220;
    if (g_027f4220 != 0) {
      FUN_00d50b00();
    }
    uVar2 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_01cae990();
      lVar1 = g_027f4228;
      if (g_027f4228 != 0) {
        FUN_00d50b00();
      }
      uVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar2 == '\0') {
        FUN_01cae990();
        lVar1 = g_027f4230;
        if (g_027f4230 != 0) {
          FUN_00d50b00();
        }
        uVar2 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar2 == '\0') {
          FUN_01cae990();
          lVar1 = g_027f4238;
          if (g_027f4238 != 0) {
            FUN_00d50b00();
          }
          uVar2 = (**(code **)(*local_40 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar2 == '\0') {
            uVar4 = FUN_01e47f50();
            uVar5 = (uint64_t)uVar4;
          }
          else {
            uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
            if (param_2 != '\0') {
              FUN_01e6c250();
            }
          }
        }
        else {
          uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          if (param_2 != '\0') {
            lVar1 = *(int64_t *)(this_ptr + 0x150);
            FUN_01caeae0();
            iVar3 = FUN_01d654a0();
            lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (int64_t)iVar3 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01e6c090();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        if (param_2 != '\0') {
          FUN_01e6bf70();
        }
      }
    }
    else {
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (param_2 != '\0') {
        FUN_01e6bf70();
      }
    }
  }
  else {
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    if (param_2 != '\0') {
      FUN_01e6bf70();
    }
  }
  return uVar5;
}

