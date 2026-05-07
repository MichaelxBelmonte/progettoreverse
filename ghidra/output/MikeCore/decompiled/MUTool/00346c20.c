// Function: FUN_00346c20
// Address: 00346c20
// Size: 1230 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x00346e6a) */
/* WARNING: Removing unreachable block (ram,0x003470b9) */
/* WARNING: Removing unreachable block (ram,0x003470c5) */

uint FUN_00346c20(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  (**(code **)(*unaff_RDI + 0xe10))();
  plVar8 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return 0;
  }
  if (*(int *)((longlong)plVar8 + 0xc) < 1) {
LAB_00346d02:
    uVar4 = 0;
    goto LAB_003470ed;
  }
  (**(code **)(&UNK_00001668 + *unaff_RDI))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_00346d02;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_00346d02;
  local_68 = plVar1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01326de0();
  if (iVar3 == 4) {
LAB_00346d9b:
    local_60 = plVar8;
    pplVar9 = &local_58;
    (**(code **)(*unaff_RDI + 0xd48))();
    plVar8 = local_58;
    FUN_00083c20();
    if (plVar8 == (longlong *)0x0) {
LAB_00346dde:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00346dde;
    }
    plVar8 = local_60;
    local_70 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (longlong *)0x0) goto LAB_00346e6f;
    local_58 = (longlong *)FUN_01a90540();
    local_80 = CONCAT44(local_80._4_4_,4);
    FUN_00e7c2a0();
    plVar1 = local_58;
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((ulonglong)plVar1 >> 0x20 == 0) {
      uVar4 = 0;
LAB_00346e97:
      if (param_2 != '\0') {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar8;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar3 = -local_40._4_4_;
            }
            else {
              iVar3 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar3);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar3 = 0;
            }
            local_40 = CONCAT44(iVar3,(int)local_40);
          }
          lVar7 = (longlong)(int)local_40;
          iVar3 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar3) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar7 = local_90;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_80 = lVar7;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        plVar8 = local_48;
        FUN_001159b0();
        pvVar5 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a0 = 0;
        local_98 = '\0';
        FUN_01385600(&local_a0,plVar1);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar4 = FUN_00e7c650();
      uVar4 = uVar4 ^ 1;
      if ((char)uVar4 == '\0') goto LAB_00346e97;
    }
    FUN_00d50b20();
    uVar4 = uVar4 ^ 1;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 2) goto LAB_00346d9b;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 1) goto LAB_00346d9b;
LAB_00346e6f:
    uVar4 = 0;
  }
  FUN_00d50b20();
LAB_003470ed:
  FUN_00d50b20();
  return uVar4;
}


