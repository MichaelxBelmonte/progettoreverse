// Function: FUN_01b7daf0
// Address: 01b7daf0
// Size: 1108 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01b7daf0(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  void*puVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint32_t uVar10;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_9c;
  uint64_t local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  void*local_70;
  uint64_t local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0xad0))();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b7db53;
    }
  }
  else if (local_40 != 0) {
LAB_01b7db53:
    local_90 = lVar1;
    uVar4 = (**(code **)(*this_ptr + 0x9d0))();
    uVar9 = (uint64_t)uVar4;
    if ((param_2 & (byte)uVar4) == 1) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      puVar8 = &g_0258cea8;
      *plVar5 = (int64_t)&g_0258cea8;
      *(void*)(plVar5 + 5) = 0;
      *(void*)((int64_t)plVar5 + 0x2c) = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      plVar5[8] = 0;
      plVar5[9] = 0;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x1a] = 0;
      (*g_0258cec0)();
      local_60 = plVar5;
      local_78 = (**(code **)(*this_ptr + 0x9d8))();
      local_70 = (void*)(**(code **)(*this_ptr + 0x9e0))();
      plVar5 = (int64_t *)FUN_010eca10();
      (**(code **)(*plVar5 + 0x18))();
      local_9c = 0xffffffff;
      local_80 = '\0';
      local_88 = 0;
      local_48 = plVar5;
      while( true ) {
        pVar7 = (void*)puVar8;
        lVar1 = this_ptr[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar8 = local_70;
        cVar3 = FUN_01252960(local_70,local_78,&local_88,&local_98);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        pVar7 = (void*)puVar8;
        if (cVar3 == '\0') break;
        if (local_88 != 0) {
          if (((local_98._4_4_ != 0) && (local_78 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            local_98 = local_78;
          }
          if (((local_68._4_4_ != 0) && ((uint64_t)local_70 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            local_68 = local_70;
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = local_88;
          local_38 = '\0';
          puVar8 = local_68;
          FUN_012502a0(local_68,local_98,(char)this_ptr[0x36]);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01ca6970();
      lVar2 = local_40;
      lVar1 = local_90;
      if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = FUN_01ca5d90();
      local_c0 = local_48;
      local_b8 = '\0';
      uVar10 = (**(code **)(*local_60 + 0x5f0))(uVar10,&local_c0);
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      local_b0 = lVar1;
      local_a8 = '\0';
      FUN_01ca79b0(uVar10,&local_b0);
      plVar5 = local_48;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01b7df3a;
  }
  uVar9 = 0;
LAB_01b7df3a:
  return uVar9 & 0xffffffff;
}

