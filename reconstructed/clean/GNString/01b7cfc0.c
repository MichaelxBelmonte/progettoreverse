// Function: FUN_01b7cfc0
// Address: 01b7cfc0
// Size: 593 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01b7cfc0(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  void *pvVar6;
  uint64_t uVar7;
  void* pVar8;
  char *pcVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t local_78 [8];
  uint8_t local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar2 == '\0') {
    (**(code **)(*this_ptr + 0x370))();
    local_68 = *arg1;
    local_60 = '\0';
    uVar3 = (**(code **)(*local_48 + 0x3b8))();
    uVar5 = (uint64_t)uVar3;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = (**(code **)(*this_ptr + 0x9d0))();
    if ((cVar2 != '\0') && (uVar5 = (**(code **)(*this_ptr + 0x9d8))(), uVar5 >> 0x20 != 0)) {
      lVar1 = this_ptr[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = (**(code **)(*this_ptr + 0x9d8))();
      FUN_012521f0(uVar7,0,local_70,local_78);
      pVar8 = (void*)CONCAT71((int7)((uint64_t)uVar7 >> 8),local_40[0]);
      pcVar9 = local_38;
      if (local_40[0] != '\0') {
        pcVar9 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar9 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_58 = local_48;
      local_50 = '\x01';
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012535e0(local_70,&local_58,local_78,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((char)uVar4 != '\0') {
        if (param_2 != '\0') {
          (**(code **)(*this_ptr + 0x9f8))();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

