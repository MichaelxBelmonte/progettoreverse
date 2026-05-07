// Function: FUN_01b7c320
// Address: 01b7c320
// Size: 692 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01b7c320(void* param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  void *pvVar6;
  uint64_t uVar7;
  char *pcVar8;
  undefined7 uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_88;
  uint8_t local_80;
  uint64_t local_78;
  uint8_t local_70;
  uint8_t local_68 [8];
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar3 == '\0') {
    (**(code **)(*this_ptr + 0x370))();
    local_58 = *arg1;
    local_50 = '\0';
    uVar4 = (**(code **)(*local_48 + 0x3b8))();
    uVar5 = (uint64_t)uVar4;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*this_ptr + 0x9d0))();
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*this_ptr + 0x9d8))();
      uVar9 = (undefined7)((uint64_t)arg1 >> 8);
      if (uVar5 >> 0x20 == 0) {
        lVar1 = this_ptr[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01252670(&local_60,0,local_68,0);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (int64_t *)0x0) {
          local_48 = (int64_t *)0x0;
          uVar7 = 0;
          bVar2 = false;
        }
        else {
          uVar7 = CONCAT71(uVar9,1);
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = this_ptr[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = (**(code **)(*this_ptr + 0x9d8))();
        FUN_012521f0(uVar7,0,&local_60,local_68);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (int64_t *)0x0) {
          local_48 = (int64_t *)0x0;
          uVar7 = 0;
          bVar2 = false;
        }
        else {
          uVar7 = CONCAT71(uVar9,1);
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        if (param_2 != '\0') {
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_88 = local_48;
          FUN_01b755e0(local_60,&local_88,&local_78);
        }
        if (bVar2) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        goto LAB_01b7c5c3;
      }
    }
    uVar5 = 0;
  }
LAB_01b7c5c3:
  return uVar5 & 0xffffffff;
}

