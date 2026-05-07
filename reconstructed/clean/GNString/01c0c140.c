// Function: FUN_01c0c140
// Address: 01c0c140
// Size: 1717 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01c0c140(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  uint64_t uVar5;
  void*puVar6;
  int64_t *arg1;
  void*this_ptr;
  int iVar7;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    lVar1 = arg1[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_01c0e4f0();
    if (local_78 == (int64_t *)0x0) {
      local_78 = (int64_t *)0x0;
      local_50 = 0;
    }
    else if (local_70[0] == '\0') {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
      local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01c19440();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != arg1) goto LAB_01c0c7cc;
    FUN_01c0a900();
    local_38[0] = local_70[0];
    pcVar4 = local_70;
    if (local_70[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*local_78 + 0x4c0))();
    if (cVar3 != '\0') {
      (**(code **)(*local_78 + 0x4c8))();
      if (((local_38[0] == '\0') && (local_78 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        local_70[0] = '\0';
      }
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 == (int64_t *)0x0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return this_ptr;
      }
    }
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    if (cVar3 == '\0') {
      FUN_01c0e5e0();
      plVar2 = local_48;
      (**(code **)(*local_78 + 0x370))();
      if (local_a0 == '\0') {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_70[0] = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_70[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_50 = 0;
        local_78 = (int64_t *)0x0;
      }
      else {
        FUN_01c0e870();
        if (local_70[0] == '\0') {
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01c0c4dc;
          }
        }
        else if (local_a8 != (int64_t *)0x0) {
LAB_01c0c4dc:
          FUN_00cd0de0();
          uVar5 = (**(code **)(*local_48 + 1000))();
          if (local_a8 == (int64_t *)0x0) {
            local_78 = (int64_t *)0x0;
            local_50 = 0;
          }
          else {
            local_78 = local_a8;
            if (local_70[0] == '\0') {
              uVar5 = FUN_00d50b00();
              local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              if ((local_70[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_70[0] = '\0';
              local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            }
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_01c0c568;
        }
        local_50 = 0;
        local_78 = (int64_t *)0x0;
      }
    }
    else {
      uVar5 = (**(code **)(*local_78 + 1000))();
      if (local_78 == (int64_t *)0x0) {
        local_78 = (int64_t *)0x0;
        local_50 = 0;
      }
      else {
        local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_01c0c568:
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_78 != (int64_t *)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    local_70[0] = '\0';
    local_58 = 0;
    local_60 = 0;
    local_68 = local_78;
    if (0 < *(int *)((int64_t)local_78 + 0xc)) {
      iVar7 = 0;
      do {
        FUN_01c1a2d0();
        plVar2 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar3 = (**(code **)(*arg1 + 0x388))();
        if (cVar3 == '\0') {
          lVar1 = *param_2;
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) goto LAB_01c0c73b;
        }
        else {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01c0c73b:
          FUN_01c0ec80();
          if (local_a0 == '\0') {
            if (local_a8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_48 = local_a8;
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar7);
      } while (iVar7 < *(int *)((int64_t)local_78 + 0xc));
    }
    FUN_00115910();
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    if ((char)local_50 == '\0') {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_01c0c7cc:
  *this_ptr = 0;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

