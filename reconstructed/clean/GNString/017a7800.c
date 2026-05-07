// Function: FUN_017a7800
// Address: 017a7800
// Size: 659 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017a7800(uint64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar4 = *(int64_t *)(arg1 + 0x38);
  if (lVar4 == 0) {
    iVar1 = FUN_017a74e0();
    lVar4 = g_027d2050;
    if (0xd < iVar1) {
LAB_017a79ca:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    if (*(int64_t *)(arg1 + 0x30) != 0) {
      if (g_027d2050 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar4;
      local_88 = '\x01';
      FUN_000175c0(param_1,&local_90);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) goto LAB_017a79ca;
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_0002cb50();
      (**(code **)(*plVar2 + 0x18))();
      local_48 = 0;
      (**(code **)(*(int64_t *)(arg1 + 0x10) + 0x10))();
      FUN_00d50b00();
      local_48 = '\x01';
      local_50 = (int64_t *)(arg1 + 0x10);
      FUN_00e5b0b0();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
      local_80 = *(int64_t **)(arg1 + 0x20);
      local_78 = '\0';
      FUN_00e5b0c0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      local_70 = *(int64_t **)(arg1 + 0x28);
      local_68 = '\0';
      FUN_00e5b0d0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        (**(code **)(*local_70 + 0x10))();
        FUN_00d50b20();
      }
      local_60 = lVar4;
      local_58 = '\0';
      FUN_00e549d0(param_1,&local_60);
      lVar4 = *(int64_t *)(arg1 + 0x38);
      if (lVar4 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = *(int64_t *)(arg1 + 0x38);
            lVar3 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar3 = local_40;
        }
        *(int64_t *)(arg1 + 0x38) = lVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *(int64_t *)(arg1 + 0x38);
    if (lVar4 == 0) goto LAB_017a782a;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_017a782a:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

