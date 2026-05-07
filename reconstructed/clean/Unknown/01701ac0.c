// Function: FUN_01701ac0
// Address: 01701ac0
// Size: 1666 bytes
// Class: Unknown

void FUN_01701ac0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int extraout_var;
  void* pVar8;
  uint64_t *this_ptr;
  byte local_res8;
  int iStack_7c;
  int iStack_4c;
  uint64_t local_48;
  char local_40;
  byte local_31;
  
  if ((*param_3 == 0) || (param_2 >> 0x20 == 0)) {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_00e7bdb0();
    FUN_0165b1b0(param_1,uVar7,0);
LAB_01701d3a:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  uVar6 = param_1;
  if (param_1 >> 0x20 == 0) {
LAB_01701efb:
    pVar8 = (void*)uVar6;
LAB_01701eff:
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165b1b0(param_1,param_2,0);
  }
  else {
    FUN_00e7b970();
    if ((param_1 >> 0x20 != 0) && (cVar2 = FUN_00e7c650(), cVar2 == '\0')) goto LAB_01701d3a;
    uVar4 = FUN_0123fff0();
    iStack_7c = (int)(param_1 >> 0x20);
    iStack_4c = (int)(param_2 >> 0x20);
    if ((iStack_7c != 0) && (uVar4 >> 0x20 != 0)) {
      cVar2 = FUN_00e7c020();
      pVar8 = (void*)uVar6;
      if (cVar2 != '\0') {
        local_31 = local_res8;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_0165be20();
        if ((iStack_4c != 0) && (uVar6 >> 0x20 != 0)) {
          local_31 = FUN_00e7c020();
          local_31 = local_res8 & local_31;
        }
        FUN_0123ff00();
        FUN_0123fc50();
        if ((local_40 == '\0') && (uVar6 != 0)) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165b1b0(param_1,param_2,local_31);
        *this_ptr = uVar6;
        goto LAB_01701fac;
      }
    }
    FUN_0123fff0();
    FUN_00e7b970();
    FUN_00e7c8b0();
    cVar2 = FUN_00e7c7f0();
    pVar8 = (void*)uVar6;
    if (cVar2 == '\0') goto LAB_01701efb;
    FUN_00e7b970();
    local_48 = FUN_0123ffd0();
    if (((((extraout_var != 0) && (local_48 >> 0x20 != 0)) &&
         (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
        (FUN_00e7b970(), local_48 = param_1, iStack_4c != 0)) &&
       (((iVar3 = 1, param_1 >> 0x20 != 0 &&
         (cVar2 = FUN_00e7c020(), iVar3 = iStack_4c, cVar2 != '\0')) ||
        (((param_4 == '\0' && ((iVar3 != 0 && (iStack_7c != 0)))) &&
         (cVar2 = FUN_00e7c000(), cVar2 != '\0')))))) {
      FUN_00e7b820();
    }
    if (iStack_7c == 0) {
      bVar1 = false;
      local_31 = 1;
    }
    else if ((iStack_4c == 0) || (cVar2 = FUN_00e7c000(), cVar2 == '\0')) {
      bVar1 = false;
      local_31 = 1;
    }
    else {
      local_31 = local_res8;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_0165be20();
      if ((iStack_4c != 0) && (local_48 >> 0x20 != 0)) {
        local_31 = FUN_00e7c020();
        local_31 = local_res8 & local_31;
      }
      bVar1 = true;
    }
    FUN_0123ff00();
    FUN_0123fc50();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = param_1;
    FUN_0165b1b0(param_1,param_1,local_31);
    pVar8 = (void*)uVar6;
    if (bVar1) {
      uVar6 = *param_3;
      uVar4 = param_3[1];
      if (uVar6 != local_48) {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_48;
        if (((char)uVar4 != '\0') && (uVar6 != 0)) {
          FUN_00d50b20();
        }
        *(void*)(param_3 + 1) = 1;
        goto LAB_017020fa;
      }
      if (((char)uVar4 != '\0') || (local_48 == 0)) goto LAB_017020fa;
      FUN_00d50b00();
      *(void*)(param_3 + 1) = 1;
LAB_01702107:
      FUN_00d50b20();
    }
    else {
LAB_017020fa:
      if (local_48 != 0) goto LAB_01702107;
    }
    if (!bVar1) goto LAB_01701eff;
  }
  *(void*)(this_ptr + 1) = 0;
  uVar6 = *param_3;
  if ((char)param_3[1] != '\0') {
    *this_ptr = uVar6;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_3 + 1) = 0;
    return;
  }
  if (uVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = uVar6;
LAB_01701fac:
  *(void*)(this_ptr + 1) = 1;
  return;
}

