// Function: FUN_00623170
// Address: 00623170
// Size: 1032 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00623170(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *local_98;
  char local_90;
  int64_t *local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  int64_t lVar7;
  
  plVar1 = local_70;
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_006231d0;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_006231d0:
    FUN_006f4810();
    FUN_002eacb0();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)local_70 + 0xc) == 0) {
LAB_00623244:
      uVar8 = 0;
LAB_00623246:
      FUN_00d50b20();
    }
    else {
      FUN_006f3f00();
      cVar2 = FUN_00788fb0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') goto LAB_00623244;
      FUN_0063f230();
      if (local_70 != (int64_t *)0x0) {
        FUN_0063f230();
        uVar3 = FUN_00212c70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        uVar8 = (uint64_t)uVar3 ^ 1;
        if ((char)uVar3 == '\0') goto LAB_0062330d;
        goto LAB_00623246;
      }
      uVar8 = 1;
LAB_0062330d:
      if (param_2 == '\0') goto LAB_00623246;
      local_70 = (int64_t *)0x0;
      local_58 = -1;
      while( true ) {
        lVar4 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)((int64_t)plVar1 + 0xc) <= local_58) break;
        lVar7 = *(int64_t *)((int64_t)plVar1 + 0x10);
        local_70 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
        FUN_006f3f00();
        pVar6 = (void*)lVar7;
        (**(code **)(*local_98 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a64d0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_006f3f00();
      FUN_0074a910();
      FUN_006f4810();
      FUN_006f4810();
      FUN_01beea30();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*local_70 + 0x9d0))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      if (plVar1 != (int64_t *)0x0) goto LAB_00623246;
    }
    FUN_00d50b20();
    goto LAB_0062325b;
  }
  uVar8 = 0;
LAB_0062325b:
  return uVar8 & 0xffffffff;
}

