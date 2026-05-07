// Function: FUN_01c88790
// Address: 01c88790
// Size: 959 bytes
// Class: Unknown

void FUN_01c88790(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_c8;
  char local_c0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint64_t local_60;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_01d3a5a0();
  if (iVar3 == 5) {
    FUN_01d3abf0();
    uVar6 = FUN_01e466c0();
    FUN_01d3b590();
    local_68 = 0xffffffff;
    FUN_01c88ce0(uVar6,&local_60,&local_68);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01c8881e;
      }
    }
    else if (local_40 != 0) {
LAB_01c8881e:
      FUN_00d50b20();
      FUN_01e4ac90();
      goto LAB_01c888d5;
    }
    FUN_01c4ba20();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01e4ac90();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01c888d5:
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), iVar3 == 1)) {
    FUN_01d3abf0();
    uVar6 = FUN_01e466c0();
    FUN_01c886d0();
    iVar3 = FUN_01d3b620();
    if (iVar3 == 2) {
      local_54 = 0xffffffff;
      pVar5 = (void*)&local_68;
      FUN_01c88ce0(uVar6,&local_60,&local_54);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01c889a1;
        }
      }
      else if (local_40 != 0) {
LAB_01c889a1:
        lVar1 = *(int64_t *)(this_ptr + 0x158);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_016cb720();
        uVar6 = extraout_XMM0_Da;
        if (lVar1 != 0) {
          uVar6 = FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_01c89130(uVar6,local_60);
        }
        else {
          lVar1 = *(int64_t *)(this_ptr + 0x158);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_88 = local_40;
          local_80 = '\0';
          FUN_01701ac0(CONCAT44(uStack_64,local_68),local_60,&local_88,1);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        return;
      }
      FUN_01d3b590();
      cVar2 = FUN_01c898c0(uVar6);
      if (cVar2 != '\0') {
        return;
      }
    }
    else {
      iVar3 = FUN_01d3b620();
      if (iVar3 == 1) {
        FUN_01d3b590();
        FUN_01c89c70(uVar6);
        return;
      }
    }
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_01e459c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

