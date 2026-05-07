// Function: FUN_01701ac0
// Address: 01701ac0
// Size: 1666 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01701d29) */
/* WARNING: Removing unreachable block (ram,0x0170209f) */
/* WARNING: Removing unreachable block (ram,0x017020ab) */
/* WARNING: Removing unreachable block (ram,0x01701f69) */
/* WARNING: Removing unreachable block (ram,0x01701f75) */
/* WARNING: Removing unreachable block (ram,0x01701c98) */
/* WARNING: Removing unreachable block (ram,0x01701ca4) */
/* WARNING: Removing unreachable block (ram,0x01701d35) */
/* WARNING: Removing unreachable block (ram,0x01701c19) */
/* WARNING: Removing unreachable block (ram,0x01701c22) */
/* WARNING: Removing unreachable block (ram,0x0170201a) */
/* WARNING: Removing unreachable block (ram,0x01702023) */

void FUN_01701ac0(ulonglong param_1,ulonglong param_2,ulonglong *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int extraout_var;
  pthread_key_t pVar8;
  ulonglong *unaff_RDI;
  byte local_res8;
  int iStack_7c;
  int iStack_4c;
  ulonglong local_48;
  char local_40;
  byte local_31;
  
  if ((*param_3 == 0) || (param_2 >> 0x20 == 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_00e7bdb0();
    FUN_0165b1b0(param_1,uVar7,0);
LAB_01701d3a:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  uVar6 = param_1;
  if (param_1 >> 0x20 == 0) {
LAB_01701efb:
    pVar8 = (pthread_key_t)uVar6;
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
      pVar8 = (pthread_key_t)uVar6;
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
        *unaff_RDI = uVar6;
        goto LAB_01701fac;
      }
    }
    FUN_0123fff0();
    FUN_00e7b970();
    FUN_00e7c8b0();
    cVar2 = FUN_00e7c7f0();
    pVar8 = (pthread_key_t)uVar6;
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
    pVar8 = (pthread_key_t)uVar6;
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
        *(undefined1 *)(param_3 + 1) = 1;
        goto LAB_017020fa;
      }
      if (((char)uVar4 != '\0') || (local_48 == 0)) goto LAB_017020fa;
      FUN_00d50b00();
      *(undefined1 *)(param_3 + 1) = 1;
LAB_01702107:
      FUN_00d50b20();
    }
    else {
LAB_017020fa:
      if (local_48 != 0) goto LAB_01702107;
    }
    if (!bVar1) goto LAB_01701eff;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  uVar6 = *param_3;
  if ((char)param_3[1] != '\0') {
    *unaff_RDI = uVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_3 + 1) = 0;
    return;
  }
  if (uVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = uVar6;
LAB_01701fac:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


